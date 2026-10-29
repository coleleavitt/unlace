__int64 __fastcall sub_A92C20(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 **v10; // rsi
  __int64 *v11; // rdi
  unsigned __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 *v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 **v30; // rsi
  __int64 *v31; // r8
  unsigned __int64 v32; // rax
  int v33; // esi
  int v34; // r9d
  __int64 *v35; // rdi
  __int64 v36; // rsi
  unsigned int v37; // edi
  __int64 *v38; // rax
  __int64 *v39; // r15
  __int64 *v40; // rcx
  __int64 v41; // r15
  __int64 v42; // r14
  int v43; // esi
  int v44; // r9d
  __int64 v45; // r10
  int v46; // esi
  int v47; // r10d
  __int64 *v48; // r8
  int v49; // eax
  __int64 v50; // rcx
  int v51; // edx
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  bool v57; // zf
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  int v61; // edi
  __int64 v62; // rdx
  unsigned int v63; // edi
  int v64; // esi
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 *v67; // r14
  unsigned __int64 v68; // [rsp+8h] [rbp-70h]
  __int64 *v69; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v70; // [rsp+28h] [rbp-50h] BYREF
  __m128 v71[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a2 )
    return 0;
  v5 = sub_A57B30(a2);
  v6 = *(_QWORD *)(a1 + 18472);
  v7 = (__int64 *)v5;
  v8 = *(unsigned int *)(a1 + 18488);
  if ( (_DWORD)v8 )
  {
    v9 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v10 = (__int64 **)(v6 + 16LL * v9);
    v11 = *v10;
    if ( v7 == *v10 )
    {
LABEL_4:
      sub_A83EC0(v71, v10, (_QWORD *)(16 * v8 + v6), a1 + 18472, 1);
      v12 = v71[0].m128_u64[0];
      goto LABEL_5;
    }
    v33 = 1;
    if ( v11 != (__int64 *)-4096LL )
    {
      do
      {
        v34 = v33 + 1;
        v9 = (v8 - 1) & (v33 + v9);
        v10 = (__int64 **)(v6 + 16LL * v9);
        v35 = *v10;
        if ( v7 == *v10 )
          goto LABEL_4;
        v33 = v34;
      }
      while ( v35 != (__int64 *)-4096LL );
    }
  }
  sub_A83EC0(v71, (_QWORD *)(v6 + 16LL * (unsigned int)v8), (_QWORD *)(v6 + 16LL * (unsigned int)v8), a1 + 18472, 1);
  v12 = v71[0].m128_u64[0];
LABEL_5:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 18472) + 16LL * *(unsigned int *)(a1 + 18488));
  sub_A83EC0(v71, v13, v13, a1 + 18472, 1);
  if ( v12 != v71[0].m128_u64[0] )
  {
    if ( a3 )
      *a3 = v7;
    return *(_QWORD *)(v12 + 8);
  }
  v16 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 32))(v7);
  v69 = (__int64 *)v16;
  if ( !v16 )
    return 0;
  v17 = *(unsigned int *)(a1 + 18512);
  v18 = *(_QWORD *)(a1 + 18496);
  if ( (_DWORD)v17 )
  {
    v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
    v20 = (__int64 *)(v18 + 16LL * v19);
    v21 = *v20;
    if ( v16 == *v20 )
    {
LABEL_13:
      sub_A83F30(v71, v20, (_QWORD *)(16 * v17 + v18), a1 + 18496, 1);
      v22 = v71[0].m128_u64[0];
      goto LABEL_14;
    }
    v43 = 1;
    if ( v21 != -4096 )
    {
      do
      {
        v44 = v43 + 1;
        v19 = (v17 - 1) & (v43 + v19);
        v20 = (__int64 *)(v18 + 16LL * v19);
        v45 = *v20;
        if ( v16 == *v20 )
          goto LABEL_13;
        v43 = v44;
      }
      while ( v45 != -4096 );
    }
  }
  sub_A83F30(v71, (_QWORD *)(v18 + 16LL * (unsigned int)v17), (_QWORD *)(v18 + 16LL * (unsigned int)v17), a1 + 18496, 1);
  v22 = v71[0].m128_u64[0];
LABEL_14:
  v68 = v22;
  v23 = (_QWORD *)(*(_QWORD *)(a1 + 18496) + 16LL * *(unsigned int *)(a1 + 18512));
  sub_A83F30(v71, v23, v23, a1 + 18496, 1);
  if ( v68 != v71[0].m128_u64[0] )
  {
    v26 = *(__int64 **)(v68 + 8);
    if ( a3 )
    {
      *a3 = v26;
      v26 = *(__int64 **)(v68 + 8);
    }
    v27 = *(unsigned int *)(a1 + 18488);
    v28 = *(_QWORD *)(a1 + 18472);
    if ( (_DWORD)v27 )
    {
      v29 = (v27 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
      v30 = (__int64 **)(v28 + 16LL * v29);
      v31 = *v30;
      if ( *v30 == v26 )
      {
LABEL_19:
        sub_A83EC0(v71, v30, (_QWORD *)(16 * v27 + v28), a1 + 18472, 1);
        v32 = v71[0].m128_u64[0];
        return *(_QWORD *)(v32 + 8);
      }
      v46 = 1;
      if ( v31 != (__int64 *)-4096LL )
      {
        do
        {
          v47 = v46 + 1;
          v29 = (v27 - 1) & (v46 + v29);
          v30 = (__int64 **)(v28 + 16LL * v29);
          v48 = *v30;
          if ( v26 == *v30 )
            goto LABEL_19;
          v46 = v47;
        }
        while ( v48 != (__int64 *)-4096LL );
      }
    }
    sub_A83EC0(
      v71,
      (_QWORD *)(v28 + 16LL * (unsigned int)v27),
      (_QWORD *)(v28 + 16LL * (unsigned int)v27),
      a1 + 18472,
      1);
    v32 = v71[0].m128_u64[0];
    return *(_QWORD *)(v32 + 8);
  }
  v49 = *(_DWORD *)(a1 + 18536);
  v50 = *(_QWORD *)(a1 + 18520);
  if ( !v49 )
    goto LABEL_29;
  v51 = v49 - 1;
  v37 = (v49 - 1) & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
  v38 = (__int64 *)(v50 + 16LL * v37);
  v36 = *v38;
  if ( (__int64 *)*v38 != v69 )
  {
    if ( v36 == -4096 )
      goto LABEL_29;
    v36 = 1;
    while ( 1 )
    {
      v25 = (unsigned int)(v36 + 1);
      v37 = v51 & (v36 + v37);
      v38 = (__int64 *)(v50 + 16LL * v37);
      v24 = *v38;
      if ( v69 == (__int64 *)*v38 )
        break;
      v36 = (unsigned int)v25;
      if ( v24 == -4096 )
        goto LABEL_29;
    }
  }
  v39 = (__int64 *)v38[1];
  if ( v39 && v69 )
  {
    if ( v7 == v69 )
      goto LABEL_30;
    if ( v69 != v39 )
    {
      v52 = v69;
      do
      {
        v52 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64))(*v52 + 40))(
                           v52,
                           v36,
                           *v52,
                           v50,
                           v24,
                           v25);
        if ( v69 == v52 || !v52 )
          break;
        if ( v7 == v52 )
          goto LABEL_30;
      }
      while ( v39 != v52 );
    }
  }
LABEL_29:
  v39 = nullptr;
LABEL_30:
  v40 = v39;
  v41 = (__int64)v7;
  v42 = (__int64)v40;
  while ( 1 )
  {
    if ( v42 )
    {
      if ( v42 == v41 )
        v42 = 0;
      goto LABEL_34;
    }
    v53 = sub_A81640(a1, v41);
    v42 = v53;
    if ( v53 )
      break;
    v57 = (unsigned __int8)sub_A6DEA0((__int64 *)(a1 + 18520), (__int64 *)&v69, &v70) == 0;
    v60 = (_QWORD *)v70;
    if ( v57 )
    {
      v61 = *(_DWORD *)(a1 + 18528);
      v71[0].m128_u64[0] = v70;
      v62 = (unsigned int)(v61 + 1);
      v63 = *(_DWORD *)(a1 + 18536);
      v64 = 2 * v63;
      v65 = 3 * v63;
      if ( 4 * (int)v62 < (unsigned int)v65 )
      {
        v65 = v63 >> 3;
        if ( v63 - *(_DWORD *)(a1 + 18532) - (unsigned int)v62 > (unsigned int)v65 )
        {
LABEL_62:
          v57 = *v60 == -4096;
          *(_DWORD *)(a1 + 18528) = v62;
          if ( !v57 )
            --*(_DWORD *)(a1 + 18532);
          v66 = (__int64)v69;
          v60[1] = 0;
          *v60 = v66;
          goto LABEL_65;
        }
        v64 = *(_DWORD *)(a1 + 18536);
      }
      sub_A923E0(a1 + 18520, v64, v62, v58, v59, v65);
      sub_A6DEA0((__int64 *)(a1 + 18520), (__int64 *)&v69, v71);
      LODWORD(v62) = *(_DWORD *)(a1 + 18528) + 1;
      v60 = (_QWORD *)v71[0].m128_u64[0];
      goto LABEL_62;
    }
LABEL_65:
    v60[1] = v41;
LABEL_34:
    v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 40LL))(v41);
    if ( v41 == 0 || v7 == (__int64 *)v41 )
    {
      if ( a3 )
        *a3 = nullptr;
      return 0;
    }
  }
  v67 = (__int64 *)v41;
  v14 = v53;
  sub_A92800(a1, v67, v53, v54, v55, v56);
  if ( a3 )
    *a3 = v67;
  return v14;
}
