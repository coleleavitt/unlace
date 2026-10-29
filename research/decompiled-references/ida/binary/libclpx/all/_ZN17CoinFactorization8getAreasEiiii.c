__int64 __fastcall CoinFactorization::getAreas(CoinFactorization *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  double v7; // xmm2_8
  int v8; // ebp
  CoinArrayWithLength *v9; // rdi
  int v10; // r12d
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // esi
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // esi
  int v53; // eax
  int v54; // esi
  int v55; // eax
  int v56; // esi
  int v57; // eax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // eax
  int v62; // edx
  CoinArrayWithLength *v63; // rdi
  int v64; // ecx
  int v65; // eax
  int v66; // esi
  int v67; // eax
  int v68; // esi
  int v69; // eax
  int v70; // esi
  __int64 result; // rax
  int v72; // eax
  double v73; // xmm1_8
  double v74; // xmm0_8

  v6 = *((_DWORD *)this + 16);
  *((_DWORD *)this + 8) = a2;
  v7 = *((double *)this + 2);
  *((_DWORD *)this + 11) = a3;
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 148) = a5;
  *((_DWORD *)this + 10) = v6 + a2;
  *((_DWORD *)this + 13) = a3 + v6;
  *((_DWORD *)this + 177) = a4;
  if ( v7 == 0.0 )
  {
    v8 = a5 + 4;
    *((_QWORD *)this + 2) = 0x3FF0000000000000LL;
  }
  else if ( v7 == 1.0 )
  {
    v8 = a5 + 4;
  }
  else
  {
    if ( (*((_BYTE *)this + 496) & 0x10) != 0 )
    {
      printf("Increasing factorization areas by %g\n", v7);
      v7 = *((double *)this + 2);
      a5 = *((_DWORD *)this + 148);
      a4 = *((_DWORD *)this + 177);
    }
    v8 = -2147483645;
    v72 = 0x7FFFFFFF;
    v73 = (double)a5 * v7;
    if ( v73 < 2147483647.0 )
    {
      v72 = (int)v73;
      v8 = (int)v73 + 4;
    }
    *((_DWORD *)this + 148) = v72;
    v74 = (double)a4 * v7;
    if ( v74 >= 2147483647.0 )
      *((_DWORD *)this + 177) = 0x7FFFFFFF;
    else
      *((_DWORD *)this + 177) = (int)v74;
  }
  v9 = (CoinFactorization *)((char *)this + 600);
  if ( v8 < 0 )
  {
    v10 = -1;
    CoinArrayWithLength::conditionalNew(v9, -1);
  }
  else
  {
    v10 = 4 * v8;
    CoinArrayWithLength::conditionalNew(v9, 8 * v8);
  }
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 624), v10);
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 504), v10);
  v11 = *((_DWORD *)this + 177);
  v12 = 8 * v11;
  if ( v11 < 0 )
    v12 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 712), v12);
  v13 = *((_DWORD *)this + 177);
  v14 = 4 * v13;
  if ( v13 < 0 )
    v14 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 736), v14);
  if ( *((_DWORD *)this + 289) )
  {
    v15 = *((_DWORD *)this + 152);
    v16 = *((_DWORD *)this + 158);
    v17 = v15 + 7;
    if ( v15 >= 0 )
      v17 = *((_DWORD *)this + 152);
    v18 = v16 + 3;
    v19 = v17 >> 3;
    if ( v16 >= 0 )
      v18 = *((_DWORD *)this + 158);
    v20 = v18 >> 2;
    if ( v19 > v20 )
      v19 = v20;
    v21 = v19 - v8;
    if ( *((_DWORD *)this + 148) < v21 )
      *((_DWORD *)this + 148) = v21;
    v22 = *((_DWORD *)this + 180);
    v23 = *((_DWORD *)this + 186);
    v24 = v22 + 7;
    if ( v22 >= 0 )
      v24 = *((_DWORD *)this + 180);
    v25 = v23 + 3;
    v26 = v24 >> 3;
    if ( v23 >= 0 )
      v25 = *((_DWORD *)this + 186);
    v27 = v25 >> 2;
    if ( v26 > v27 )
      v26 = v27;
    if ( *((_DWORD *)this + 177) < v26 )
      *((_DWORD *)this + 177) = v26;
  }
  v28 = *((_DWORD *)this + 8) + 1;
  v29 = 4 * v28;
  if ( v28 < 0 )
    v29 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 760), v29);
  if ( *((int *)this + 192) < -1 )
  {
    dword_0 = 0;
    BUG();
  }
  **((_DWORD **)this + 95) = 0;
  v30 = *((_DWORD *)this + 10) + 1;
  v31 = 4 * v30;
  if ( v30 < 0 )
    v31 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 184), v31);
  v32 = *((_QWORD *)this + 23);
  if ( *((int *)this + 48) <= -2 )
    v32 = 0;
  *(_DWORD *)(v32 + 4LL * *((int *)this + 10)) = 0;
  v33 = *((_DWORD *)this + 10) + 1;
  v34 = 4 * v33;
  if ( v33 < 0 )
    v34 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 208), v34);
  v35 = *((_DWORD *)this + 8);
  v36 = 4 * v35;
  if ( v35 < 0 )
    v36 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 472), v36);
  v37 = *((_DWORD *)this + 8) + 1;
  v38 = 4 * v37;
  if ( v37 < 0 )
    v38 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 528), v38);
  v39 = *((_DWORD *)this + 10) + 1;
  v40 = 4 * v39;
  if ( v39 < 0 )
    v40 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 400), v40);
  v41 = *((_DWORD *)this + 10) + 1;
  v42 = 4 * v41;
  if ( v41 < 0 )
    v42 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 424), v42);
  v43 = *((_DWORD *)this + 10) + 1;
  v44 = 4 * v43;
  if ( v43 < 0 )
    v44 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 104), v44);
  v45 = *((_DWORD *)this + 10) + 1;
  v46 = 8 * v45;
  if ( v45 < 0 )
    v46 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 552), v46);
  v47 = *((_DWORD *)this + 13) + 1;
  v48 = 4 * v47;
  if ( v47 < 0 )
    v48 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 648), v48);
  v49 = *((_DWORD *)this + 13) + 1;
  v50 = 4 * v49;
  if ( v49 < 0 )
    v50 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 232), v50);
  v51 = *((_DWORD *)this + 13) + 1;
  v52 = 4 * v51;
  if ( v51 < 0 )
    v52 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 256), v52);
  v53 = *((_DWORD *)this + 13) + 1;
  v54 = 4 * v53;
  if ( v53 < 0 )
    v54 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 80), v54);
  v55 = *((_DWORD *)this + 13) + 1;
  v56 = 4 * v55;
  if ( v55 < 0 )
    v56 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 352), v56);
  v57 = *((_DWORD *)this + 13) + 1;
  v58 = 4 * v57;
  if ( v57 < 0 )
    v58 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 376), v58);
  v59 = *((_DWORD *)this + 11);
  v60 = 4 * v59;
  if ( v59 < 0 )
    v60 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 448), v60);
  v61 = *((_DWORD *)this + 8);
  v62 = *((_DWORD *)this + 11);
  v63 = (CoinFactorization *)((char *)this + 280);
  if ( v62 + v61 )
  {
    v64 = *((_DWORD *)this + 10);
    if ( v61 < v62 )
      v61 = *((_DWORD *)this + 11);
    *((_DWORD *)this + 125) = v61;
    v65 = v61 + 2;
    if ( v64 + 1 >= v65 )
      v65 = v64 + 1;
    v66 = 4 * v65;
    if ( v65 < 0 )
      v66 = -1;
    CoinArrayWithLength::conditionalNew(v63, v66);
    v67 = *((_DWORD *)this + 8) + *((_DWORD *)this + 11);
    v68 = 4 * v67;
    if ( v67 < 0 )
      v68 = -1;
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 304), v68);
    v69 = *((_DWORD *)this + 8) + *((_DWORD *)this + 11);
    v70 = 4 * v69;
    if ( v69 < 0 )
      v70 = -1;
    return CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 328), v70);
  }
  else
  {
    CoinArrayWithLength::conditionalNew(v63, 8);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 304), 0);
    result = CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 328), 0);
    *((_DWORD *)this + 125) = 0;
  }
  return result;
}

