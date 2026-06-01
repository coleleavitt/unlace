void __fastcall sub_1B28470(__int64 *a1, int a2, __int64 (__fastcall ***a3)(), double a4, __m128 a5)
{
  __int64 v7; // rax
  int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // r12d
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-238h]
  __int64 v47; // [rsp+0h] [rbp-238h]
  __int64 v48; // [rsp+10h] [rbp-228h]
  __int64 v49; // [rsp+10h] [rbp-228h]
  __int64 v50; // [rsp+10h] [rbp-228h]
  __int64 v51; // [rsp+10h] [rbp-228h]
  __int64 v52; // [rsp+10h] [rbp-228h]
  __int64 v53; // [rsp+10h] [rbp-228h]
  char *v54; // [rsp+18h] [rbp-220h]
  __int64 v55; // [rsp+18h] [rbp-220h]
  unsigned int v56; // [rsp+18h] [rbp-220h]
  int v57; // [rsp+2Ch] [rbp-20Ch]
  __int64 v58; // [rsp+30h] [rbp-208h]
  __int64 v59; // [rsp+38h] [rbp-200h]
  _QWORD v60[2]; // [rsp+40h] [rbp-1F8h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-1E8h] BYREF
  int v62; // [rsp+60h] [rbp-1D8h]
  char v63; // [rsp+64h] [rbp-1D4h]
  char v64; // [rsp+68h] [rbp-1D0h] BYREF
  __m128i v65; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v66; // [rsp+80h] [rbp-1B8h] BYREF
  __m128i v67; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-198h] BYREF
  unsigned int v69[4]; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-178h]
  __m128 v71[9]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v72; // [rsp+170h] [rbp-C8h] BYREF
  char v73; // [rsp+178h] [rbp-C0h]
  __int64 v74; // [rsp+180h] [rbp-B8h]
  int v75; // [rsp+188h] [rbp-B0h]
  int v76; // [rsp+18Ch] [rbp-ACh]
  void **v77; // [rsp+190h] [rbp-A8h]
  __int128 v78; // [rsp+198h] [rbp-A0h]
  __int64 v79; // [rsp+1A8h] [rbp-90h]
  __int128 v80; // [rsp+1B0h] [rbp-88h]
  __int128 v81; // [rsp+1C0h] [rbp-78h]
  __int64 v82; // [rsp+1D0h] [rbp-68h]
  char v83; // [rsp+1D9h] [rbp-5Fh]
  __int16 v84; // [rsp+1DAh] [rbp-5Eh]
  __int64 v85; // [rsp+1E0h] [rbp-58h]
  char v86; // [rsp+1ECh] [rbp-4Ch]
  char v87; // [rsp+1F4h] [rbp-44h]
  __int64 v88; // [rsp+1F8h] [rbp-40h]

  v7 = sub_1AE5FF0(a1[1]);
  if ( !v7 )
    return;
  v8 = *(_DWORD *)(v7 + 1084);
  if ( !v8 )
    return;
  v9 = *(_DWORD *)(v7 + 976);
  if ( !def_FFDDA1() )
    return;
  *(_BYTE *)(sub_1AE5FF0(a1[1]) + 1107) = 0;
  v10 = *a1;
  ptr[0] = &v64;
  v11 = a1[1];
  v72 = v10;
  v74 = v11;
  v78 = 0;
  ptr[1] = &dword_0 + 1;
  v62 = 0;
  v63 = 1;
  v73 = 1;
  v75 = a2;
  v76 = a2;
  v77 = ptr;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  if ( (unsigned __int8)sub_1B27EB0(&v72, a3, 0, 0.0) )
    goto LABEL_6;
  v15 = v80;
  if ( !(_QWORD)v80 )
    goto LABEL_6;
  v54 = (char *)v80;
  v58 = 0;
  if ( (*(_BYTE *)(v80 + 28) & 0x7Fu) - 40 > 6 )
  {
    v54 = sub_1B223D0((__int64)a1, v80, 0, 0, (__m128)0LL, a5);
    if ( !v54 )
    {
      v58 = sub_1B22DF0(*a1, v15, *((unsigned __int64 *)&v80 + 1), 0, (__m128)0LL, a5);
      v54 = *(char **)(v58 + 16);
    }
  }
  v16 = a1[1];
  v67.m128i_i64[0] = v15;
  v46 = v16;
  v67.m128i_i64[0] = sub_1AEE450(v15);
  v48 = sub_1AE5FF0(v46);
  v47 = v48 + 728;
  v57 = *(_DWORD *)(v48 + 728) >> 1;
  v17 = sub_1AF7600(v48 + 728, v67.m128i_i64, v69);
  v18 = v48 + 728;
  v19 = v48;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v48 + 728) & 1) != 0 )
    {
      v20 = v48 + 736;
      v21 = 192;
    }
    else
    {
      v20 = *(_QWORD *)(v48 + 736);
      v21 = 24LL * *(unsigned int *)(v48 + 744);
    }
    sub_1AF95E0(v71, *(_QWORD **)v69, (_QWORD *)(v21 + v20), v18, 1);
    goto LABEL_17;
  }
  v39 = *(_QWORD **)v69;
  v71[0].m128_u64[0] = *(_QWORD *)v69;
  v40 = (*(_DWORD *)(v48 + 728) >> 1) + 1;
  if ( (*(_BYTE *)(v48 + 728) & 1) != 0 )
  {
    v42 = 24;
    v41 = 8;
  }
  else
  {
    v41 = *(unsigned int *)(v48 + 744);
    v42 = (unsigned int)(3 * v41);
  }
  if ( 4 * v40 >= (unsigned int)v42 )
  {
    v59 = v48;
    v53 = v48 + 728;
    sub_1B01FD0(v47, 2 * v41, v41, v18, v19, v42);
LABEL_65:
    sub_1AF7600(v53, v67.m128i_i64, v71);
    v19 = v59;
    v18 = v53;
    v39 = (_QWORD *)v71[0].m128_u64[0];
    v40 = (*(_DWORD *)(v59 + 728) >> 1) + 1;
    goto LABEL_52;
  }
  v43 = (unsigned int)(v41 - (v40 + *(_DWORD *)(v48 + 732)));
  if ( (unsigned int)v43 <= (unsigned int)v41 >> 3 )
  {
    v59 = v48;
    v53 = v48 + 728;
    sub_1B01FD0(v18, v41, v41, v18, v19, v43);
    goto LABEL_65;
  }
LABEL_52:
  *(_DWORD *)(v19 + 728) = *(_DWORD *)(v19 + 728) & 1 | (2 * v40);
  if ( *v39 != -4096 )
    --*(_DWORD *)(v19 + 732);
  *v39 = v67.m128i_i64[0];
  *((_DWORD *)v39 + 2) = v57 + 1;
  v39[2] = v54;
  *(_QWORD *)v69 = v39;
  if ( (*(_BYTE *)(v19 + 728) & 1) != 0 )
  {
    v44 = v19 + 736;
    v45 = 192;
  }
  else
  {
    v44 = *(_QWORD *)(v19 + 736);
    v45 = 24LL * *(unsigned int *)(v19 + 744);
  }
  sub_1AF95E0(v71, v39, (_QWORD *)(v45 + v44), v18, 1);
LABEL_17:
  v49 = *(_QWORD *)(sub_1AE5FF0(a1[1]) + 1096);
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) != v49 )
  {
    v22 = sub_1AE5FF0(a1[1]);
    v23 = v49;
    *(_QWORD *)(v22 + 1096) = 0;
    if ( v49 )
    {
      if ( (*(_BYTE *)(v49 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v55 = v49;
        v50 = *a1;
        v71[0].m128_u64[0] = *(_QWORD *)(v23 + 48);
        v24 = sub_168B6C0((__int64)a1);
        v25 = sub_F67970(v71, v24);
        v26 = sub_1AE6AB0(*a1, v55, v25, a2, 1);
        sub_1912220(v50, v26, 0, nullptr, 0, (__m128)0LL, a5);
      }
    }
  }
  v27 = a1[1];
  v28 = 82;
  sub_1AFBE90((__int64)v69, v27, v15);
  v51 = *((_QWORD *)&v80 + 1);
  if ( (unsigned __int8)sub_FFEBC0(v9, v27) )
  {
    v28 = 53;
    v29 = sub_1AE5FF0(a1[1]);
    if ( v29 )
      v28 = (*(_BYTE *)(v29 + 1088) == 0) + 52;
  }
  if ( !(unsigned __int8)sub_FFEBC0(v9, v27) || v69[1] == 106 || v69[1] == v28 || !v70 )
    goto LABEL_39;
  if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x2Du )
  {
    if ( v69[1] != 52 && v69[1] != 82 )
    {
LABEL_31:
      v56 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
      v30 = sub_EEB7E0((unsigned __int64)a3, v27, 0.0);
      sub_168B9F0((__int64)v71, a1, v30, 0x11C3u, 0);
      sub_1AF81E0(&v65, v69[1]);
      v52 = sub_1682AF0((__int64)v71, (__int64)&v65);
      v31 = sub_20EAB70(v9, v56);
      v60[1] = v32;
      v60[0] = v31;
      v33 = sub_166BAF0(v52, (__int64)v60);
      sub_1AF81E0(&v67, v28);
      sub_1682AF0(v33, (__int64)&v67);
      if ( (__int64 *)v67.m128i_i64[0] != &v68 )
        operator delete((void *)v67.m128i_i64[0]);
      if ( (__int64 *)v65.m128i_i64[0] != &v66 )
        operator delete((void *)v65.m128i_i64[0]);
      sub_15F7200(v71);
      if ( !v70 )
        v69[1] = v28;
      sub_1B20830(*a1, a1[1], v15, v69, 1);
      goto LABEL_6;
    }
LABEL_39:
    if ( !sub_FFE580(v9)
      && (v34 = sub_20ED4F0(v9), *(_DWORD *)(v34 + 4 * v35 - 4) != 90)
      && !sub_FFED80(v9, v27, v35, v36)
      || (unsigned __int8)sub_FFEBC0(v9, v27)
      || (v37 = v69[1] - 52, (unsigned int)v37 <= 0x36) && (v38 = 0x40000040000001LL, _bittest64(&v38, v37)) )
    {
      v12 = a1[1];
      if ( v51 && v69[1] == 106 )
      {
        sub_1AEF810(v12, v15, v51, v28, v58, 0, 0);
        v12 = a1[1];
      }
      goto LABEL_7;
    }
    goto LABEL_31;
  }
  if ( v69[1] != 82 || v70 )
    goto LABEL_31;
LABEL_6:
  v12 = a1[1];
LABEL_7:
  v13 = v12;
  v14 = v8 - 1;
  *(_DWORD *)(sub_1AE5FF0(v12) + 1084) = v14;
  if ( v14 > 1 )
    *(_BYTE *)(sub_1AE5FF0(v13) + 1088) = 1;
  if ( !v63 )
    free(ptr[0]);
}
