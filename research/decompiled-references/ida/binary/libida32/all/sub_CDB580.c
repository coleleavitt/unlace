__int64 __fastcall sub_CDB580(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r12
  __int64 v5; // rax
  size_t v6; // rdx
  void (__fastcall *v7)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  char v8; // al
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  int v12; // ecx
  void **v13; // rsi
  void **v14; // r12
  void *v15; // rax
  void *v16; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  void **v22; // r13
  void **v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __m128i v27; // xmm0
  unsigned __int64 v28; // rsi
  __int64 *v29; // rcx
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  void **v32; // r12
  int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-68h]
  char v38; // [rsp+Fh] [rbp-59h]
  int v39; // [rsp+10h] [rbp-58h]
  void *v40; // [rsp+20h] [rbp-48h] BYREF
  __int64 v41[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(unsigned int *)(a2 + 28) + 40LL;
  v4 = (_DWORD *)operator new[](v3);
  memset(v4, 0, v3);
  v5 = *(_QWORD *)(a1 + 368);
  v6 = *(unsigned int *)(a2 + 28);
  v40 = v4;
  LODWORD(v5) = *(_DWORD *)(v5 + 32);
  *((_BYTE *)v4 + 20) = 1;
  *((_QWORD *)v4 + 1) = 0;
  *v4 = v5;
  v4[4] = -1;
  v4[6] = 0;
  *((_WORD *)v4 + 14) = 0;
  *((_QWORD *)v4 + 4) = a2;
  memset(v4 + 10, 0, v6);
  v7 = *(void (__fastcall **)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))(a2 + 64);
  if ( v7 )
    v7(
      v4,
      (char *)v4 + *(unsigned int *)(a2 + 24) + 40,
      *(unsigned __int8 *)(a2 + 56),
      *(unsigned __int8 *)(a2 + 57),
      *(unsigned __int8 *)(a2 + 59),
      1,
      0,
      a2);
  v8 = *((_BYTE *)v4 + 44);
  v9 = *(unsigned int *)(a1 + 1176);
  *((_BYTE *)v4 + 27) = 1;
  v10 = *(_QWORD *)(a1 + 1168);
  v11 = *(unsigned int *)(a1 + 1180);
  *((_QWORD *)v4 + 6) = a2;
  v12 = v9;
  v4[10] = 16;
  v13 = (void **)(v10 + 8 * v9);
  *((_BYTE *)v4 + 44) = v8 & 0xA8 | 0x10;
  v14 = &v40;
  if ( v9 + 1 > v11 )
  {
    v37 = -1;
    v38 = 0;
    if ( v10 <= (unsigned __int64)&v40 && v13 > &v40 )
    {
      v38 = 1;
      v37 = (__int64)((__int64)&v41[-1] - v10) >> 3;
    }
    v18 = sub_22136C0(a1 + 1168, a1 + 1184, v9 + 1, 8, v41);
    v19 = *(_QWORD *)(a1 + 1168);
    v20 = v18;
    v21 = 8LL * *(unsigned int *)(a1 + 1176);
    v22 = (void **)(v19 + v21);
    if ( v19 != v19 + v21 )
    {
      v23 = *(void ***)(a1 + 1168);
      v24 = (unsigned __int64)(v21 - 8) >> 3;
      if ( (v19 >= v20 + 16 || v20 >= v19 + 16) && (unsigned __int64)(v21 - 8) > 0x10 )
      {
        v25 = v24 + 1;
        v26 = 0;
        do
        {
          v27 = _mm_loadu_si128((const __m128i *)(v19 + v26));
          *(_OWORD *)(v19 + v26) = 0;
          *(__m128i *)(v20 + v26) = v27;
          v26 += 16;
        }
        while ( 16 * ((v24 + 1) >> 1) != v26 );
        v28 = 8 * (v25 & 0xFFFFFFFFFFFFFFFELL);
        v29 = (__int64 *)(v28 + v19);
        v30 = (_QWORD *)(v20 + v28);
        if ( v25 != (v25 & 0xFFFFFFFFFFFFFFFELL) )
        {
          v31 = *v29;
          *v29 = 0;
          *v30 = v31;
        }
      }
      else
      {
        v35 = v20;
        do
        {
          v36 = *v23;
          *v23++ = nullptr;
          v35 += 8LL;
          *(_QWORD *)(v35 - 8) = v36;
        }
        while ( v22 != v23 );
      }
      v32 = *(void ***)(a1 + 1168);
      v22 = &v32[(unsigned __int64)v21 / 8];
      if ( v32 != &v32[(unsigned __int64)v21 / 8] )
      {
        do
        {
          while ( *--v22 )
          {
            operator delete[](*v22);
            if ( v32 == v22 )
              goto LABEL_20;
          }
        }
        while ( v32 != v22 );
LABEL_20:
        v22 = *(void ***)(a1 + 1168);
      }
    }
    v33 = v41[0];
    if ( (void **)(a1 + 1184) != v22 )
    {
      v39 = v41[0];
      free(v22);
      v33 = v39;
    }
    v14 = &v40;
    *(_DWORD *)(a1 + 1180) = v33;
    v34 = *(unsigned int *)(a1 + 1176);
    *(_QWORD *)(a1 + 1168) = v20;
    v12 = v34;
    v13 = (void **)(v20 + 8 * v34);
    if ( v38 )
      v14 = (void **)(v20 + 8 * v37);
  }
  v15 = *v14;
  *v14 = nullptr;
  v16 = v40;
  *v13 = v15;
  *(_DWORD *)(a1 + 1176) = v12 + 1;
  if ( v16 )
    operator delete[](v16);
  return (unsigned int)v9;
}

