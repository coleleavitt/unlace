__int64 __fastcall sub_1E39900(__int64 a1, unsigned __int64 a2, __int64 a3, __m128 a4, __m128 a5, __m128i a6)
{
  unsigned int *v6; // rax
  __int64 *v7; // r14
  unsigned __int64 v8; // rdx
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 *v19; // [rsp+8h] [rbp-180h]
  unsigned int *v20; // [rsp+18h] [rbp-170h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v23; // [rsp+48h] [rbp-140h]
  _BYTE v24[312]; // [rsp+50h] [rbp-138h] BYREF

  v6 = (unsigned int *)sub_B74920(a3);
  v20 = v6;
  if ( !v6 )
    goto LABEL_14;
  v7 = (__int64 *)(v6 + 2);
  v23 = 0x2000000000LL;
  v8 = *v6;
  ptr = v24;
  if ( v8 > 0x20 )
  {
    sub_2237220(&ptr, v24, v8, 8);
    v8 = *v20;
  }
  v19 = &v7[v8];
  if ( v19 == v7 )
  {
LABEL_12:
    sub_B74910(a2, (__int64)v20);
    if ( ptr != v24 )
      free(ptr);
LABEL_14:
    sub_1890630(*(__int64 **)a1, a2, *(_DWORD *)(a3 + 24), a4, a5);
    return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    v11 = *v7;
    v12 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = sub_1E38470(*(_QWORD *)a1, *(_DWORD *)(a2 + 24), v12, *(_QWORD *)(a1 + 32), 0, a4, a5, a6);
    if ( !v13 )
      break;
    v16 = v13 | v11 & 3;
    v9 |= v13 != v12;
    v17 = (unsigned int)v23 + 1LL;
    if ( v17 > HIDWORD(v23) )
      sub_2237220(&ptr, v24, v17, 8);
    *((_QWORD *)ptr + (unsigned int)v23) = v16;
    ++v7;
    v10 = (unsigned int)(v23 + 1);
    LODWORD(v23) = v23 + 1;
    if ( v19 == v7 )
    {
      if ( v9 )
        v20 = (unsigned int *)sub_B7DFF0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), ptr, v10, 0, v14, v15);
      goto LABEL_12;
    }
  }
  if ( ptr != v24 )
    free(ptr);
  return 1;
}
