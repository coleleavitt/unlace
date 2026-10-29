void *__fastcall clang_loadDiagnostics(char *s, _DWORD *a2, _QWORD *a3, double a4)
{
  __int64 v6; // rdx
  char *v7; // r12
  __m128i si128; // xmm0
  _QWORD *v9; // rbx
  char *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r12
  char *v13; // r13
  char *v14; // r12
  char *v15; // rdi
  size_t v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  void *v20; // r12
  _QWORD *v21; // rbp
  _QWORD *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  __m128i *v25; // rbx
  void (__fastcall *v26)(__m128i *); // rax
  _QWORD *v27; // rbx
  char *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rbp
  char *v31; // rbp
  char *v32; // r13
  char *v33; // rdi
  void **p_src; // rdi
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // rcx
  void **v39; // rax
  size_t v40; // rdx
  _QWORD *v41; // rbx
  void *src; // [rsp+10h] [rbp-C8h] BYREF
  size_t n; // [rsp+18h] [rbp-C0h]
  __int64 v44; // [rsp+20h] [rbp-B8h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+30h] [rbp-A8h] BYREF
  _DWORD *v46; // [rsp+38h] [rbp-A0h]
  _QWORD *v47; // [rsp+40h] [rbp-98h]
  void *v48; // [rsp+48h] [rbp-90h]
  _BYTE *v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+58h] [rbp-80h]
  _BYTE v51[120]; // [rsp+60h] [rbp-78h] BYREF

  v45 = &off_47D0230;
  v49 = v51;
  v46 = a2;
  v47 = a3;
  v48 = nullptr;
  v50 = 0x800000000LL;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    *a3 = sub_690460(a4);
    a3[1] = v6;
  }
  src = nullptr;
  v7 = (char *)operator new(0x430u);
  *(_OWORD *)(v7 + 40) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
  *((_QWORD *)v7 + 1) = 0;
  *((_QWORD *)v7 + 2) = 0;
  *((_QWORD *)v7 + 3) = 0;
  v7[32] = 1;
  *(_QWORD *)v7 = &off_47D01A0;
  *((_QWORD *)v7 + 7) = v7 + 72;
  *((_QWORD *)v7 + 14) = 0;
  *((_QWORD *)v7 + 8) = 0x400000000LL;
  *((_QWORD *)v7 + 13) = v7 + 120;
  *((_DWORD *)v7 + 38) = 0;
  *((_QWORD *)v7 + 17) = 0;
  *((_QWORD *)v7 + 18) = 0;
  *((_DWORD *)v7 + 44) = 0;
  *((_QWORD *)v7 + 20) = 0;
  *((_QWORD *)v7 + 21) = 0;
  *((_DWORD *)v7 + 50) = 0;
  *((_QWORD *)v7 + 23) = 0;
  *((_QWORD *)v7 + 24) = 0;
  *((_QWORD *)v7 + 26) = v7 + 224;
  *((_QWORD *)v7 + 27) = 0;
  v7[224] = 0;
  *(__m128i *)(v7 + 120) = si128;
  sub_C78820(v7 + 240, v7 + 208);
  if ( src && !_InterlockedSub((volatile signed __int32 *)src + 2, 1u) )
    (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
  v9 = v48;
  *((_DWORD *)v7 + 266) = 0;
  *((_QWORD *)v7 + 131) = 0;
  *((_QWORD *)v7 + 132) = 0;
  v48 = v7;
  if ( v9 )
  {
    *v9 = &off_47D01A0;
    operator delete();
    sub_C78B50(v9 + 30);
    v10 = (char *)v9[26];
    if ( v10 != (char *)(v9 + 28) )
      operator delete(v10, v9[28] + 1LL);
    operator delete();
    operator delete();
    operator delete();
    v11 = v9[7];
    v12 = v11 + 8LL * *((unsigned int *)v9 + 16);
    while ( v12 != v11 )
    {
      v11 += 8;
      operator delete();
    }
    v13 = (char *)v9[13];
    v14 = &v13[16 * *((unsigned int *)v9 + 28)];
    if ( v13 != v14 )
    {
      do
      {
        v13 += 16;
        operator delete();
      }
      while ( v14 != v13 );
      v14 = (char *)v9[13];
    }
    if ( v14 != (char *)(v9 + 15) )
      free(v14);
    v15 = (char *)v9[7];
    if ( v15 != (char *)(v9 + 9) )
      free(v15);
    sub_62FC10(v9);
    operator delete(v9, 0x430u);
  }
  v16 = 0;
  if ( s )
    v16 = strlen(s);
  v17 = sub_10E1410(&v45, s, v16);
  v19 = v18;
  if ( !v17 )
  {
    v20 = v48;
    v48 = nullptr;
    goto LABEL_25;
  }
  if ( v17 == 1 )
  {
    p_src = &src;
    (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v18 + 32LL))(&src, v18, 1);
    v38 = v46;
    v39 = (void **)src;
    v40 = n;
    if ( v46 )
      *v46 = 2;
    goto LABEL_57;
  }
  if ( v17 != 13 )
  {
    p_src = &src;
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v18 + 32LL))(&src, v18, v17);
    v38 = v46;
    v39 = (void **)src;
    v40 = n;
    if ( v46 )
      *v46 = 3;
LABEL_57:
    v41 = v47;
    if ( v47 )
    {
      p_src = v39;
      v19 = v40;
      *v41 = sub_6905C0(v39, v40);
      v41[1] = v40;
    }
    sub_10DF5B0(p_src, v19, v40, v38, v36, v37);
    if ( src != &v44 )
    {
      v19 = v44 + 1;
      operator delete(src, v44 + 1);
    }
  }
  v20 = nullptr;
LABEL_25:
  v21 = v49;
  v45 = &off_47D0230;
  v22 = &v49[8 * (unsigned int)v50];
  if ( v49 == (_BYTE *)v22 )
    goto LABEL_37;
  do
  {
    while ( 1 )
    {
      v25 = (__m128i *)*--v22;
      if ( v25 )
        break;
LABEL_32:
      *v22 = 0;
      if ( v21 == v22 )
        goto LABEL_36;
    }
    v26 = *(void (__fastcall **)(__m128i *))(v25->m128i_i64[0] + 8);
    if ( v26 == sub_689960 )
    {
      v23 = (void *)v25[6].m128i_i64[1];
      v25->m128i_i64[0] = (__int64)&off_47D01C0;
      if ( v23 )
        operator delete(v23, v25[7].m128i_i64[1] - (_QWORD)v23);
      v24 = (void *)v25[5].m128i_i64[0];
      if ( v24 )
        operator delete(v24, v25[6].m128i_i64[0] - (_QWORD)v24);
      sub_62FED0(v25);
      v19 = 176;
      operator delete(v25, 0xB0u);
      goto LABEL_32;
    }
    ((void (__fastcall *)(__m128i *, __int64))v26)(v25, v19);
    *v22 = 0;
  }
  while ( v21 != v22 );
LABEL_36:
  v22 = v49;
LABEL_37:
  if ( v22 != (_QWORD *)v51 )
    free(v22);
  v27 = v48;
  if ( v48 )
  {
    *(_QWORD *)v48 = &off_47D01A0;
    operator delete();
    sub_C78B50(v27 + 30);
    v28 = (char *)v27[26];
    if ( v28 != (char *)(v27 + 28) )
      operator delete(v28, v27[28] + 1LL);
    operator delete();
    operator delete();
    operator delete();
    v29 = v27[7];
    v30 = v29 + 8LL * *((unsigned int *)v27 + 16);
    while ( v30 != v29 )
    {
      v29 += 8;
      operator delete();
    }
    v31 = (char *)v27[13];
    v32 = &v31[16 * *((unsigned int *)v27 + 28)];
    if ( v31 != v32 )
    {
      do
      {
        v31 += 16;
        operator delete();
      }
      while ( v32 != v31 );
      v32 = (char *)v27[13];
    }
    if ( v32 != (char *)(v27 + 15) )
      free(v32);
    v33 = (char *)v27[7];
    if ( v33 != (char *)(v27 + 9) )
      free(v33);
    sub_62FC10(v27);
    operator delete(v27, 0x430u);
  }
  return v20;
}

