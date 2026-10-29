unsigned __int64 __fastcall sub_1445160(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // esi
  int v17; // r9d
  __int64 v18; // rdi
  __m128 v19[2]; // [rsp+0h] [rbp-28h] BYREF

  result = 0;
  if ( (*(_BYTE *)(a2 + 3) & 4) == 0 )
    return result;
  v5 = *(_QWORD *)(a1 + 1704);
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(_QWORD *)v5;
  if ( !(_DWORD)v6 )
    goto LABEL_15;
  v8 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v9 = (__int64 *)(v7 + 16LL * v8);
  v10 = *v9;
  if ( a2 != *v9 )
  {
    v16 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v17 = v16 + 1;
        v8 = (v6 - 1) & (v16 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v18 = *v9;
        if ( a2 == *v9 )
          goto LABEL_4;
        v16 = v17;
      }
      while ( v18 != -4096 );
    }
LABEL_15:
    sub_13C4310(v19, (_QWORD *)(v7 + 16LL * (unsigned int)v6), (_QWORD *)(v7 + 16LL * (unsigned int)v6), v5, 1);
    v11 = v19[0].m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_13C4310(v19, v9, (_QWORD *)(16 * v6 + v7), v5, 1);
  v11 = v19[0].m128_u64[0];
LABEL_5:
  v12 = *(_QWORD *)(a1 + 1704);
  v13 = (_QWORD *)(*(_QWORD *)v12 + 16LL * *(unsigned int *)(v12 + 16));
  sub_13C4310(v19, v13, v13, v12, 1);
  result = 0;
  if ( v19[0].m128_u64[0] != v11 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    result = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14 )
    {
      if ( (v14 & 4) != 0 )
      {
        result = 0;
        if ( v15 )
          return *(_QWORD *)v15;
      }
    }
  }
  return result;
}
