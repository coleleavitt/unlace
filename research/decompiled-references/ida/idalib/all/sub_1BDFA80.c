__int64 __fastcall sub_1BDFA80(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r15
  __int64 *v14; // rbp
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 *i; // rdx
  _DWORD *v30; // rdi
  __int64 *v31; // rax
  __int64 *v32; // r12
  unsigned int v33; // eax
  __m128i si128; // xmm0
  size_t v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r13
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  void *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r13
  void *v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // [rsp+8h] [rbp-240h]
  unsigned __int64 v62; // [rsp+8h] [rbp-240h]
  __int64 v63; // [rsp+10h] [rbp-238h]
  char v64; // [rsp+1Ch] [rbp-22Ch]
  void *v65[2]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v66; // [rsp+30h] [rbp-218h] BYREF
  void *ptr; // [rsp+B0h] [rbp-198h] BYREF
  __m128i v68; // [rsp+B8h] [rbp-190h]
  __int64 v69; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int8 *v70; // [rsp+D0h] [rbp-178h] BYREF
  char v71; // [rsp+128h] [rbp-120h]
  unsigned int v72; // [rsp+130h] [rbp-118h]
  char v73; // [rsp+134h] [rbp-114h]
  __int128 v74; // [rsp+150h] [rbp-F8h] BYREF
  void *v75; // [rsp+160h] [rbp-E8h]
  __int64 v76; // [rsp+168h] [rbp-E0h]
  unsigned __int8 *v77[11]; // [rsp+170h] [rbp-D8h] BYREF
  char v78; // [rsp+1C8h] [rbp-80h]
  unsigned int v79; // [rsp+1D0h] [rbp-78h]
  char v80; // [rsp+1D4h] [rbp-74h]
  void *v81; // [rsp+1D8h] [rbp-70h]
  __int64 v82; // [rsp+1E0h] [rbp-68h]
  _BYTE v83[96]; // [rsp+1E8h] [rbp-60h] BYREF

  v6 = a3;
  v8 = (unsigned __int64)a2;
  v9 = *(_QWORD *)(a1 + 248);
  v64 = a4;
  v61 = a5;
  if ( (*((_BYTE *)a2 + 29) & 1) != 0 )
  {
    v10 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
    a3 = *((unsigned int *)v10 + 2);
    v13 = *v10 + 8 * a3;
    if ( (*((_BYTE *)a2 + 29) & 1) != 0 )
      v14 = (__int64 *)*sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, v11, v12);
    else
      v14 = nullptr;
    v15 = v14 == (__int64 *)v13;
    if ( (unsigned __int64)v14 >= v13 )
      goto LABEL_18;
LABEL_5:
    v16 = v14;
    while ( 1 )
    {
      a3 = *v16;
      if ( *(_WORD *)(*v16 + 36) == 206 )
        break;
      if ( (__int64 *)v13 == ++v16 )
        goto LABEL_8;
    }
    do
    {
LABEL_12:
      v28 = *v14;
      for ( i = v14 + 1; *(_WORD *)(v28 + 36) != 206; ++i )
      {
        v28 = *i;
        v14 = i;
      }
      v30 = *(_DWORD **)(v28 + 40);
      if ( (*v30 & 0x20000) != 0
        || (a2 = &v74, !(unsigned __int8)sub_C3D850((__int64)v30, &v74, v9, 0, v11, v12))
        || !(_BYTE)v74 )
      {
        if ( !v6 )
          return 0;
        v32 = (__int64 *)(a1 + 8);
        if ( v64 )
        {
          v33 = sub_B73090(v8);
          sub_168B9F0((__int64)&v74, v32, v33, 0x1680u, 0);
          sub_15F7200(&v74);
          return 0;
        }
        else
        {
          sub_168B9F0((__int64)&v74, v32, v61, 0xB95u, 0);
          if ( v78 )
          {
            sub_AE9DF0(v77, v8, 0xAu);
          }
          else if ( v80 )
          {
            v44 = sub_168B9E0(&v74);
            v45 = v75;
            if ( v75 )
              v45 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v75 + 32LL))(v75);
            ptr = v45;
            v46 = sub_1587BC0(v44, (__int64 *)&ptr, v40, v41, v42, v43);
            sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v79 + 8), v8, 0xAu);
          }
          sub_15F7200(&v74);
          return 0;
        }
      }
      v15 = ++v14 == (__int64 *)v13;
      if ( (unsigned __int64)v14 < v13 )
        goto LABEL_5;
LABEL_18:
      if ( v15 )
        goto LABEL_8;
      a3 = *(_QWORD *)v13;
      v31 = (__int64 *)v13;
    }
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 206 );
    while ( v14 != ++v31 )
    {
      a3 = *v31;
      if ( *(_WORD *)(*v31 + 36) == 206 )
        goto LABEL_12;
    }
    v17 = *(_QWORD *)(v8 + 56);
    if ( (v17 & 4) == 0 )
      goto LABEL_9;
  }
  else
  {
LABEL_8:
    v17 = *(_QWORD *)(v8 + 56);
    if ( (v17 & 4) == 0 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
  {
    a2 = (__int128 *)v8;
    si128.m128i_i64[0] = 0;
    LOWORD(v79) = 0;
    v75 = v77;
    v81 = v83;
    v74 = 0;
    v76 = 0x400000000LL;
    v82 = 0x400000000LL;
    if ( (unsigned __int8)sub_17516B0(a1, v8, (__int64)&v74, v61, 0, 0.0) )
    {
LABEL_42:
      if ( v81 != v83 )
        free(v81);
      if ( v75 != v77 )
        free(v75);
      return 0;
    }
    if ( !(_BYTE)v79 )
    {
      if ( v6 )
      {
        if ( v64 )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          ptr = &v69;
          v68 = si128;
          v62 = sub_B77AF0(v8);
          if ( v62 )
          {
            v35 = j__strlen(" ");
            sub_A1FE50(&ptr, " ", &asc_22D9D59[v35]);
            v36 = sub_B77B50(v8);
            sub_1CB6030(v65, a1, *(_QWORD *)(v62 + 56), v36);
            sub_A1FE50(&ptr, (_BYTE *)v65[0], (_BYTE *)v65[0] + (unsigned __int64)v65[1]);
            if ( v65[0] != &v66 )
              operator delete(v65[0]);
          }
          v37 = sub_B73090(v8);
          sub_168B9F0((__int64)v65, (__int64 *)(a1 + 8), v37, 0x186Cu, 0);
          sub_1BDB440((__int64)v65, (__int64)&ptr);
          sub_15F7200(v65);
          if ( ptr != &v69 )
            free(ptr);
        }
        else
        {
          sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v61, 0xB94u, 0);
          if ( v71 )
          {
            sub_AE9DF0(&v70, v8, 0xAu);
          }
          else if ( v73 )
          {
            v58 = sub_168B9E0(&ptr);
            v59 = (void *)v68.m128i_i64[1];
            if ( v68.m128i_i64[1] )
              v59 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68.m128i_i64[1] + 32LL))(v68.m128i_i64[1]);
            v65[0] = v59;
            v60 = sub_1587BC0(v58, (__int64 *)v65, v54, v55, v56, v57);
            sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v72 + 8), v8, 0xAu);
          }
          sub_15F7200(&ptr);
        }
        sub_174DC50(a1, (__int64)&v74, 1u, *(double *)si128.m128i_i64);
      }
      goto LABEL_42;
    }
    sub_1BCD1D0(&v74);
  }
LABEL_9:
  v18 = *(__int64 **)(v8 + 120);
  v19 = (__int64)&v18[(unsigned int)sub_B76070(v8, (__int64)a2, a3, a4)];
  v24 = sub_1BC9FF0(v18, v19, v20, v21, v22, v23);
  v63 = *(_QWORD *)(v8 + 120);
  if ( v24 != (__int64 *)(v63 + 8LL * (unsigned int)sub_B76070(v8, v19, v63, v25)) )
  {
    if ( v6 )
    {
      v38 = *(_QWORD *)(v8 + 120);
      sub_B76070(v8, v19, v63, v26);
      v39 = (__int64 *)(a1 + 8);
      LODWORD(v65[0]) = (((__int64)v24 - v38) >> 3) + 1;
      if ( v64 )
      {
        sub_168B9F0((__int64)&v74, v39, *(_DWORD *)(v8 + 24), 0x185Eu, 0);
        sub_1588370((__int64)&v74, (unsigned int *)v65);
        sub_15F7200(&v74);
      }
      else
      {
        sub_168B9F0((__int64)&v74, v39, v61, 0xB90u, 0);
        if ( v78 )
        {
          sub_AE9DF0(v77, v8, 0xAu);
        }
        else if ( v80 )
        {
          v49 = sub_168B9E0(&v74);
          v52 = v75;
          if ( v75 )
            v52 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v75 + 32LL))(v75);
          ptr = v52;
          v53 = sub_1587BC0(v49, (__int64 *)&ptr, v47, v48, v50, v51);
          sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v79 + 8), v8, 0xAu);
        }
        sub_1588370((__int64)&v74, (unsigned int *)v65);
        sub_15F7200(&v74);
      }
    }
    return 0;
  }
  return 1;
}
