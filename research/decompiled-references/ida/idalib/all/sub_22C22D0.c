void __fastcall sub_22C22D0(__int64 *a1, const char *a2)
{
  __int64 v3; // r15
  void **v4; // rax
  size_t v5; // rax
  void **v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rsi
  void **v9; // rax
  __int64 v10; // rax
  _BYTE *v11; // rsi
  void **v12; // rax
  const char **v13; // rax
  size_t v14; // rdx
  const char *v15; // rbx
  void **v16; // rax
  size_t v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  __int64 v20; // r9
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int16 *v24; // rbx
  char *v25; // rbx
  unsigned __int64 v26; // r14
  char *v27; // r14
  size_t v28; // r15
  char *v29; // [rsp+8h] [rbp-230h]
  char *v30; // [rsp+10h] [rbp-228h] BYREF
  __int64 v31; // [rsp+18h] [rbp-220h]
  unsigned int v32; // [rsp+20h] [rbp-218h]
  void *v33[4]; // [rsp+30h] [rbp-208h] BYREF
  __m128i v34; // [rsp+50h] [rbp-1E8h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-1D8h] BYREF
  __m128i v36; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE v37[16]; // [rsp+80h] [rbp-1B8h] BYREF
  void *v38; // [rsp+90h] [rbp-1A8h] BYREF
  char *v39; // [rsp+98h] [rbp-1A0h]
  __int64 v40; // [rsp+A0h] [rbp-198h]
  int v41; // [rsp+A8h] [rbp-190h]
  void **v42[3]; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-160h] BYREF
  void **v44; // [rsp+100h] [rbp-138h] BYREF
  __int64 v45; // [rsp+118h] [rbp-120h] BYREF
  void **v46; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+158h] [rbp-E0h] BYREF
  void **v48; // [rsp+180h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+198h] [rbp-A0h] BYREF
  void **v50; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+1D8h] [rbp-60h] BYREF
  char v52; // [rsp+200h] [rbp-38h] BYREF

  v3 = *a1;
  v4 = (void **)j__strlen("metadata");
  sub_E59960(v42, (void **)"metadata", v4);
  v5 = j__strlen("DILocation");
  sub_E59830((__int64)&v43, (__int64)"DILocation", v5);
  v6 = (void **)j__strlen("fn-name");
  sub_E59960(&v44, (void **)"fn-name", v6);
  v7 = a1[1];
  v8 = *(_BYTE **)v7;
  if ( *(_QWORD *)v7 )
  {
    v34.m128i_i64[0] = (__int64)v35;
    sub_22BFDF0(&v34, v8, (__int64)&v8[*(_QWORD *)(v7 + 8)]);
  }
  else
  {
    v35[0] = 0;
    v34.m128i_i64[0] = (__int64)v35;
    v34.m128i_i64[1] = 0;
  }
  sub_E59390((__int64)&v45, &v34);
  v9 = (void **)j__strlen("bb-name");
  sub_E59960(&v46, (void **)"bb-name", v9);
  v10 = a1[2];
  v11 = *(_BYTE **)v10;
  if ( *(_QWORD *)v10 )
  {
    v36.m128i_i64[0] = (__int64)v37;
    sub_22BFDF0(&v36, v11, (__int64)&v11[*(_QWORD *)(v10 + 8)]);
  }
  else
  {
    v37[0] = 0;
    v36.m128i_i64[0] = (__int64)v37;
    v36.m128i_i64[1] = 0;
  }
  sub_E59390((__int64)&v47, &v36);
  v12 = (void **)j__strlen("instr");
  sub_E59960(&v48, (void **)"instr", v12);
  v13 = (const char **)a1[3];
  v14 = 0;
  v15 = *v13;
  if ( *v13 )
    v14 = j__strlen(*v13);
  sub_E59830((__int64)&v49, (__int64)v15, v14);
  v16 = (void **)j__strlen("action");
  sub_E59960(&v50, (void **)"action", v16);
  v17 = j__strlen(a2);
  sub_E59830((__int64)&v51, (__int64)a2, v17);
  sub_100DB20((__int64)&v30, (__int64)v42, 5, v18, v19, v20);
  LOWORD(v38) = 7;
  v21 = v30;
  v30 = nullptr;
  v39 = v21;
  v22 = v31;
  v31 = 0;
  v40 = v22;
  LODWORD(v22) = v32;
  v32 = 0;
  v41 = v22;
  sub_E5E110(v3, (__int64)&v38);
  sub_222B2A0((__int16 *)&v38);
  v23 = v32;
  if ( v32 )
  {
    sub_E59960((void ***)v33, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    sub_E59960((void ***)&v38, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
    v25 = v30;
    v26 = (unsigned __int64)v32 << 6;
    v29 = &v30[v26];
    if ( v30 != &v30[v26] )
    {
      do
      {
        while ( 1 )
        {
          v27 = *((char **)v25 + 1);
          v28 = *((_QWORD *)v25 + 2);
          if ( !sub_E39ED0(v27, v28, v33[1], (__int64)v33[2]) && !sub_E39ED0(v27, v28, v39, v40) )
            sub_222B2A0((__int16 *)v25 + 12);
          if ( !*(_QWORD *)v25 )
            break;
          sub_22BF9F0(*(void ***)v25);
          v25 += 64;
          if ( v29 == v25 )
            goto LABEL_24;
        }
        v25 += 64;
      }
      while ( v29 != v25 );
    }
LABEL_24:
    if ( v38 )
      sub_22BF9F0((void **)v38);
    if ( v33[0] )
      sub_22BF9F0((void **)v33[0]);
    v23 = v32;
  }
  v24 = (__int16 *)&v52;
  operator delete(v30, v23 << 6, 8);
  do
  {
    while ( 1 )
    {
      v24 -= 32;
      sub_222B2A0(v24 + 12);
      if ( !*(_QWORD *)v24 )
        break;
      sub_22BF9F0(*(void ***)v24);
      if ( v24 == (__int16 *)v42 )
        goto LABEL_11;
    }
  }
  while ( v24 != (__int16 *)v42 );
LABEL_11:
  if ( (_BYTE *)v36.m128i_i64[0] != v37 )
    operator delete((void *)v36.m128i_i64[0]);
  if ( (_BYTE *)v34.m128i_i64[0] != v35 )
    operator delete((void *)v34.m128i_i64[0]);
}
