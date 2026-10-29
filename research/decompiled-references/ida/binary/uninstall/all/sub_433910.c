__int64 __fastcall sub_433910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edx
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rsi
  bool v30; // zf
  _BYTE *v31; // rcx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ebp
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  int v38; // edx
  int v39; // eax
  int v41; // ebp
  _BYTE *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // ebp
  _BYTE *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // edx
  int v51; // eax
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  _BYTE *v59; // rcx
  _BYTE *v60; // rcx
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  _BYTE *v65; // rcx
  _BYTE *v66; // rcx
  _BYTE *v67; // rcx
  _BYTE *v68; // rcx
  _BYTE *v69; // rcx
  __int64 v70; // [rsp+8h] [rbp-50h]
  __int64 v71; // [rsp+10h] [rbp-48h]
  int v72; // [rsp+1Ch] [rbp-3Ch]

  v71 = *(_QWORD *)(a4 + 3264);
  v72 = *(_DWORD *)(a2 + 28);
  v5 = 1;
  if ( v72 <= 1 || !*(_QWORD *)(a4 + 24) )
    return v5;
  v6 = 1;
  v7 = *(_QWORD *)(a2 + 32);
  v70 = 24LL * (*(_DWORD *)(v71 + 28) - 1);
  while ( 1 )
  {
    v8 = v7 + 24LL * *(int *)(v7 + 20);
    v7 = v8 + 24 + 24LL * *(int *)(v8 + 44) + 24;
    v9 = sub_432100(a1, v8 + 24, a4);
    if ( v9 < 0 )
      return 1;
    if ( *(_DWORD *)(v8 + 24) != 2 )
    {
      v10 = *(_QWORD *)(v71 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v70 + v10 + 8) + 4LL * v6);
      v11 = *(_QWORD *)(v70 + v10 + 16);
      v12 = *(unsigned int *)(v8 + 44);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v11 + 8LL * v6);
      sub_4399D0(a1, v8 + 48, v12, a4);
      v13 = *(_BYTE **)(a4 + 120);
      goto LABEL_7;
    }
    v41 = sub_471010(a4, *(_QWORD *)(v8 + 56), *(unsigned int *)(v8 + 64), 0);
    if ( v41 > 255 )
    {
      v52 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v52 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v52 = *(_BYTE **)(a4 + 120);
      }
      *v52 = 2;
      v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v53;
      *v53 = HIBYTE(v41);
      v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v54;
      *v54 = BYTE2(v41);
      v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v55;
      *v55 = BYTE1(v41);
      v56 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v56 + 1;
      *(_BYTE *)(v56 + 1) = v41;
      v57 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v45 = dword_65444C;
      v13 = (_BYTE *)(v57 + 1);
      *(_QWORD *)(a4 + 120) = v13;
    }
    else
    {
      v42 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v42 = *(_BYTE **)(a4 + 120);
      }
      *v42 = 1;
      v43 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v43 + 1;
      *(_BYTE *)(v43 + 1) = v41;
      v44 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v45 = dword_65442C;
      v13 = (_BYTE *)(v44 + 1);
      *(_QWORD *)(a4 + 120) = v13;
    }
    if ( v45 )
    {
      if ( v45 == 0x80000000 )
        v45 = 1 - v41;
      if ( v45 >= 0 )
      {
        v58 = *(_DWORD *)(a4 + 48);
LABEL_68:
        *(_DWORD *)(a4 + 48) = v45 + v58;
        goto LABEL_7;
      }
      v58 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v58 )
        goto LABEL_68;
      *(_DWORD *)(a4 + 44) = v58;
      *(_DWORD *)(a4 + 48) = v45 + v58;
    }
LABEL_7:
    if ( (unsigned __int64)(v13 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v13 = *(_BYTE **)(a4 + 120);
    }
    *v13 = 124;
    v14 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v14;
    *v14 = HIBYTE(v9);
    v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v15;
    *v15 = BYTE2(v9);
    v16 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v16;
    *v16 = BYTE1(v9);
    v17 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v17;
    *v17 = v9;
    *(_DWORD *)(a4 + 3276) = 0;
    v18 = dword_65538C;
    ++*(_QWORD *)(a4 + 120);
    if ( v18 )
    {
      if ( v18 == 0x80000000 )
        v18 = 1 - v9;
      if ( v18 < 0 )
      {
        v19 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v19 )
          *(_DWORD *)(a4 + 44) = v19;
      }
      else
      {
        v19 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v18 + v19;
    }
    if ( v72 - 1 == v6 )
      goto LABEL_33;
    if ( *(_DWORD *)v7 == 2 )
    {
      v46 = sub_471010(a4, *(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 0);
      if ( v46 > 255 )
      {
        v59 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v59 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v59 = *(_BYTE **)(a4 + 120);
        }
        *v59 = 2;
        v60 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v60;
        *v60 = HIBYTE(v46);
        v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v61;
        *v61 = BYTE2(v46);
        v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v62;
        *v62 = BYTE1(v46);
        v63 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v63 + 1;
        *(_BYTE *)(v63 + 1) = v46;
        v64 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v50 = dword_65444C;
        v23 = (_BYTE *)(v64 + 1);
        *(_QWORD *)(a4 + 120) = v23;
      }
      else
      {
        v47 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v47 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v47 = *(_BYTE **)(a4 + 120);
        }
        *v47 = 1;
        v48 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v48 + 1;
        *(_BYTE *)(v48 + 1) = v46;
        v49 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v50 = dword_65442C;
        v23 = (_BYTE *)(v49 + 1);
        *(_QWORD *)(a4 + 120) = v23;
      }
      if ( !v50 )
        goto LABEL_18;
      if ( v50 == 0x80000000 )
        v50 = 1 - v46;
      if ( v50 < 0 )
      {
        v51 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v51 )
        {
          *(_DWORD *)(a4 + 44) = v51;
          *(_DWORD *)(a4 + 48) = v50 + v51;
          goto LABEL_18;
        }
      }
      else
      {
        v51 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v50 + v51;
    }
    else
    {
      v20 = *(_QWORD *)(v71 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v70 + v20 + 8) + 4LL * v6 + 4);
      v21 = *(_QWORD *)(v70 + v20 + 16);
      v22 = *(unsigned int *)(v7 + 20);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v21 + 8LL * v6 + 8);
      sub_4399D0(a1, v7 + 24, v22, a4);
      v23 = *(_BYTE **)(a4 + 120);
    }
LABEL_18:
    if ( (unsigned __int64)(v23 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v23 = *(_BYTE **)(a4 + 120);
    }
    *v23 = 18;
    v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v24;
    *v24 = HIBYTE(v9);
    v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v25;
    *v25 = BYTE2(v9);
    v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v26;
    *v26 = BYTE1(v9);
    v27 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v27 + 1;
    *(_BYTE *)(v27 + 1) = v9;
    *(_DWORD *)(a4 + 3276) = 0;
    v28 = dword_65464C;
    v29 = *(_QWORD *)(a4 + 120) + 1LL;
    v30 = dword_65464C == 0;
    v31 = (_BYTE *)v29;
    *(_QWORD *)(a4 + 120) = v29;
    if ( !v30 )
    {
      if ( v28 == 0x80000000 )
        v28 = 1 - v9;
      if ( v28 < 0 )
      {
        v32 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v32 )
          *(_DWORD *)(a4 + 44) = v32;
      }
      else
      {
        v32 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v28 + v32;
    }
    if ( v29 == *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v31 = *(_BYTE **)(a4 + 120);
    }
    *v31 = 3;
    *(_DWORD *)(a4 + 3276) = 0;
    v33 = dword_65446C;
    ++*(_QWORD *)(a4 + 120);
    if ( v33 )
    {
      if ( v33 == 0x80000000 )
      {
        v34 = *(_DWORD *)(a4 + 48);
        v33 = 1;
      }
      else if ( v33 < 0 )
      {
        v34 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v34 )
          *(_DWORD *)(a4 + 44) = v34;
      }
      else
      {
        v34 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v33 + v34;
    }
LABEL_33:
    v6 += 2;
    if ( v6 >= v72 )
    {
      v35 = sub_471010(a4, "", 0, 0);
      if ( v35 > 255 )
      {
        v65 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v65 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v65 = *(_BYTE **)(a4 + 120);
        }
        *v65 = 2;
        v66 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v66;
        *v66 = HIBYTE(v35);
        v67 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v67;
        *v67 = BYTE2(v35);
        v68 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v68;
        *v68 = BYTE1(v35);
        v69 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v69;
        *v69 = v35;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v38 = dword_65444C;
      }
      else
      {
        v36 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v36 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v36 = *(_BYTE **)(a4 + 120);
        }
        *v36 = 1;
        v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v37;
        *v37 = v35;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v38 = dword_65442C;
      }
      if ( v38 )
      {
        if ( v38 == 0x80000000 )
          v38 = 1 - v35;
        if ( v38 >= 0 )
        {
          v39 = *(_DWORD *)(a4 + 48);
          goto LABEL_43;
        }
        v39 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v39 )
        {
LABEL_43:
          *(_DWORD *)(a4 + 48) = v38 + v39;
        }
        else
        {
          *(_DWORD *)(a4 + 44) = v39;
          *(_DWORD *)(a4 + 48) = v38 + v39;
        }
      }
      return 0;
    }
  }
}

