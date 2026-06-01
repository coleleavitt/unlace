__int64 __fastcall isolated_constraint_action::presolve(
        isolated_constraint_action *this,
        CoinPresolveMatrix *a2,
        __int64 a3,
        const CoinPresolveAction *a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // ecx
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // r14
  double v16; // xmm1_8
  int *v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r11
  int v23; // ecx
  size_t v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rdi
  int *v29; // r15
  size_t v30; // r14
  void *v31; // r14
  __int64 v32; // xmm0_8
  double v33; // xmm1_8
  int *v34; // r10
  __int64 v35; // rax
  _DWORD *v36; // r9
  __int64 v37; // rsi
  int v38; // r8d
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rcx
  int *v45; // rdx
  int v46; // esi
  __int64 v47; // rax
  __int64 v48; // rsi
  int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-B8h]
  int v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+8h] [rbp-B0h]
  double *v55; // [rsp+10h] [rbp-A8h]
  __int64 *v56; // [rsp+18h] [rbp-A0h]
  int *v57; // [rsp+20h] [rbp-98h]
  __int64 v58; // [rsp+28h] [rbp-90h]
  char *src; // [rsp+30h] [rbp-88h]
  char *srca; // [rsp+30h] [rbp-88h]
  int srcb; // [rsp+30h] [rbp-88h]
  int v62; // [rsp+3Ch] [rbp-7Ch]
  __int64 v63; // [rsp+40h] [rbp-78h]
  size_t n; // [rsp+50h] [rbp-68h]
  size_t na; // [rsp+50h] [rbp-68h]
  void *v67; // [rsp+58h] [rbp-60h]
  __int64 v68; // [rsp+60h] [rbp-58h]
  __int64 v69; // [rsp+60h] [rbp-58h]
  __int64 v70; // [rsp+60h] [rbp-58h]
  __int64 v71; // [rsp+60h] [rbp-58h]
  __int64 v72; // [rsp+60h] [rbp-58h]
  int v73; // [rsp+68h] [rbp-50h]
  int v74; // [rsp+68h] [rbp-50h]
  int v75; // [rsp+68h] [rbp-50h]
  __int64 v76; // [rsp+68h] [rbp-50h]
  int v77; // [rsp+68h] [rbp-50h]
  __int64 v78; // [rsp+70h] [rbp-48h]
  size_t v79; // [rsp+70h] [rbp-48h]
  size_t v80; // [rsp+70h] [rbp-48h]
  __int64 v81; // [rsp+78h] [rbp-40h]
  __int64 v82; // [rsp+78h] [rbp-40h]
  __int64 v83; // [rsp+78h] [rbp-40h]

  v4 = *((_QWORD *)this + 7);
  v5 = *((_QWORD *)this + 8);
  v6 = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * (int)a2);
  v7 = *((_QWORD *)this + 38);
  v63 = *((_QWORD *)this + 6);
  v57 = (int *)(*((_QWORD *)this + 36) + 4LL * (int)a2);
  v52 = *((_QWORD *)this + 5);
  v53 = *v57;
  v8 = 8LL * (int)a2;
  src = *((char **)this + 37);
  v62 = *v57 + v6;
  v9 = *((_QWORD *)this + 14);
  v58 = v8;
  v55 = (double *)(v8 + *((_QWORD *)this + 13));
  if ( *v55 != 0.0 )
    return 0;
  v56 = (__int64 *)(v8 + v9);
  if ( *(double *)(v8 + v9) != 0.0 )
    return 0;
  v10 = (int)a2;
  if ( v6 >= *v57 + v6 )
  {
    if ( (unsigned __int64)v53 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v77 = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * (int)a2);
      v72 = *((_QWORD *)this + 38);
      n = 8LL * v53;
      v51 = operator new[](n);
      v27 = v77;
      v24 = v51;
      v25 = v53;
      v22 = v72;
      v23 = v77;
      goto LABEL_15;
    }
LABEL_45:
    __cxa_throw_bad_array_new_length();
  }
  v12 = *((_QWORD *)this + 11);
  v13 = (unsigned int)(*v57 - 1);
  v14 = *((_QWORD *)this + 12);
  v15 = *((_QWORD *)this + 9);
  v16 = *((double *)this + 19);
  v17 = (int *)(v7 + 4LL * v6);
  do
  {
    v18 = *v17;
    if ( *(double *)(v12 + 8 * v18) == 0.0 )
    {
      if ( *(double *)(v15 + 8 * v18) * v16 < 0.0 && *(double *)(v14 + 8 * v18) != 0.0 )
        return 0;
    }
    else if ( *(double *)(v14 + 8 * v18) != 0.0 || *(double *)(v15 + 8 * v18) * v16 > 0.0 )
    {
      return 0;
    }
    ++v17;
  }
  while ( (int *)(v7 + 4 * (v13 + v6) + 4) != v17 );
  if ( (unsigned __int64)v53 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_45;
  v81 = v6;
  v78 = v7 + 4LL * v6;
  v73 = v6;
  v68 = v7;
  v20 = v13 + 1;
  n = 8LL * v53;
  v21 = operator new[](n);
  v22 = v68;
  v23 = v73;
  v24 = v21;
  v25 = v53;
  v26 = 0;
  v27 = v81;
  do
  {
    v28 = (_QWORD *)(v15 + 8LL * *(int *)(v78 + 4 * v26));
    *(_QWORD *)(v24 + 8 * v26++) = *v28;
    *v28 = 0;
  }
  while ( v20 != v26 );
LABEL_15:
  v29 = (int *)(v22 + 4 * v27);
  if ( v29 )
  {
    v30 = 4 * v25;
    v82 = v27;
    v79 = v24;
    v74 = v23;
    v69 = v22;
    v67 = (void *)operator new[](4 * v25);
    memcpy(v67, v29, v30);
    v22 = v69;
    v23 = v74;
    v24 = v79;
    v27 = v82;
  }
  else
  {
    v67 = nullptr;
  }
  srca = &src[8 * v27];
  if ( srca )
  {
    v83 = v27;
    v80 = v24;
    v75 = v23;
    v70 = v22;
    v31 = (void *)operator new[](n);
    memcpy(v31, srca, n);
    v22 = v70;
    v23 = v75;
    v24 = v80;
    v27 = v83;
  }
  else
  {
    v31 = nullptr;
  }
  na = v24;
  srcb = v23;
  v76 = v27;
  v71 = v22;
  result = operator new(0x40u);
  v32 = *v56;
  v33 = *v55;
  *(_QWORD *)(result + 40) = v67;
  *(_QWORD *)(result + 24) = v32;
  *(_QWORD *)result = &off_4D1F20;
  *(double *)(result + 16) = v33;
  *(_DWORD *)(result + 32) = (_DWORD)a2;
  *(_QWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 48) = v31;
  *(_QWORD *)(result + 56) = na;
  *(_DWORD *)(result + 36) = v53;
  if ( srcb < v62 )
  {
    v34 = v29;
    v54 = result;
    do
    {
      v35 = *v34;
      v36 = (_DWORD *)(v63 + 4 * v35);
      v37 = *(int *)(v52 + 4 * v35);
      v38 = v37 + *v36;
      v39 = (_DWORD *)(v4 + 4 * v37);
      if ( (int)v37 >= v38 || v10 == *v39 )
      {
        v40 = *(int *)(v52 + 4 * v35);
      }
      else
      {
        v40 = v37 + 1;
        v41 = v4 + 4 * v37 + 4;
        while ( 1 )
        {
          v39 = (_DWORD *)v41;
          if ( v41 == v4 + 4 + 4 * ((unsigned int)(*v36 - 1) + v37) )
            break;
          v41 += 4;
          if ( v10 == *v39 )
            break;
          ++v40;
        }
      }
      v42 = *(_QWORD *)(v5 + 8LL * v38 - 8);
      *v39 = *(_DWORD *)(v4 + 4LL * v38 - 4);
      *(_QWORD *)(v5 + 8 * v40) = v42;
      --*v36;
      v43 = *v34;
      if ( !*(_DWORD *)(v63 + 4 * v43) )
      {
        v44 = *((_QWORD *)this + 32);
        v45 = (int *)(v44 + 8 * v43);
        v46 = *v45;
        v47 = v45[1];
        if ( *v45 >= 0 )
          *(_DWORD *)(v44 + 8LL * v46 + 4) = v47;
        if ( (int)v47 >= 0 )
          *(_DWORD *)(v44 + 8 * v47) = v46;
        *(_QWORD *)v45 = 0xFC06BF56FC06BF56LL;
      }
      ++v34;
    }
    while ( (int *)(v71 + 4 * ((unsigned int)(v62 - srcb - 1) + v76) + 4) != v34 );
    result = v54;
  }
  *v57 = 0;
  v48 = *((_QWORD *)this + 33);
  v49 = *(_DWORD *)(v48 + v58);
  v50 = *(int *)(v48 + v58 + 4);
  if ( v49 >= 0 )
    *(_DWORD *)(v48 + 8LL * v49 + 4) = v50;
  if ( (int)v50 >= 0 )
    *(_DWORD *)(v48 + 8 * v50) = v49;
  *(_QWORD *)(v48 + v58) = 0xFC06BF56FC06BF56LL;
  *v55 = 0.0;
  *v56 = 0;
  return result;
}

