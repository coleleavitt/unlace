void __fastcall sub_14A1970(__m128 *a1, char *a2)
{
  unsigned __int64 v3; // rax
  double v4; // rcx
  char *v5; // rax
  char *v6; // rdi
  _DWORD *v7; // rbp
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdi
  char *v19; // rdi
  double v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1[6].m128_u64[0];
  --*(_DWORD *)(v3 + 15680);
  v4 = *(double *)&a1[121].m128_u64[1];
  *(_QWORD *)(v3 + 512) = a2;
  v5 = (char *)a1[120].m128_u64[0];
  v6 = (char *)a1[120].m128_u64[1];
  if ( v6 != v5 )
  {
    v7 = *((_DWORD **)v5 - 1);
    v8 = (__int64)(v5 - 8);
    a1[120].m128_u64[0] = v8;
    v9 = v7[6];
    if ( (*(_BYTE *)v7 & 1) == 0 )
      goto LABEL_3;
LABEL_10:
    v14 = *((char **)v7 + 2);
    if ( v9 )
    {
      v15 = (unsigned int)(v9 - 1);
      v16 = 0;
      v17 = 8 * v15 + 8;
      do
      {
        v18 = *(_QWORD *)&v14[v16];
        if ( v18 )
        {
          (*(void (__fastcall **)(__int64, char *, __int64, double))(*(_QWORD *)v18 + 8LL))(
            v18,
            a2,
            v15,
            COERCE_DOUBLE(*(_QWORD *)&v4));
          v14 = *((char **)v7 + 2);
        }
        v16 += 8;
      }
      while ( v17 != v16 );
    }
    if ( v14 != (char *)(v7 + 8) )
      free(v14);
    goto LABEL_17;
  }
  v7 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)&v4 - 8LL) + 504LL);
  operator delete(v6);
  v13 = a1[121].m128_u64[1];
  v6 = *(char **)(v13 - 8);
  *(_QWORD *)&v4 = v13 - 8;
  v8 = (__int64)(v6 + 504);
  a2 = v6 + 512;
  *(_QWORD *)&v20[0] = v6;
  a1[120] = _mm_loadh_ps(v20);
  v20[0] = v4;
  a1[121] = _mm_loadh_ps(v20);
  v9 = v7[6];
  if ( (*(_BYTE *)v7 & 1) != 0 )
    goto LABEL_10;
LABEL_3:
  if ( !v9 )
  {
    v19 = *((char **)v7 + 2);
    if ( v19 != (char *)(v7 + 8) )
      free(v19);
LABEL_17:
    operator delete(v7, 0x30u);
    return;
  }
  if ( v6 == (char *)v8 )
    v8 = *(_QWORD *)(*(_QWORD *)&v4 - 8LL) + 512LL;
  v10 = *(_QWORD *)(v8 - 8);
  v11 = (_QWORD *)operator new(0x18u);
  sub_146B630(v11, (__int64)a1, (__int64)v7);
  v12 = *(unsigned int *)(v10 + 24);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 28) )
  {
    sub_2237220(v10 + 16, v10 + 32, v12 + 1, 8);
    v12 = *(unsigned int *)(v10 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v12) = v11;
  ++*(_DWORD *)(v10 + 24);
}
