unsigned __int64 __fastcall sub_1CB9810(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 result; // rax
  __int64 v17; // rbp
  unsigned int v18; // eax
  int v19; // esi
  int v20; // r9d
  __int64 v21; // rdi
  __m128 v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1 + 8;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( v6 == *v9 )
    {
LABEL_3:
      sub_AEAAD0(v22, v9, (_QWORD *)(16 * v5 + v7), v2, 1);
      v11 = v22[0].m128_u64[0];
      goto LABEL_4;
    }
    v19 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v8 = (v5 - 1) & (v19 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v21 = *v9;
        if ( v6 == *v9 )
          goto LABEL_3;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
  }
  sub_AEAAD0(v22, (_QWORD *)(v7 + 16LL * (unsigned int)v5), (_QWORD *)(v7 + 16LL * (unsigned int)v5), v2, 1);
  v11 = v22[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v22, v12, v12, v2, 1);
  if ( v22[0].m128_u64[0] != v11 )
    v6 = *(_QWORD *)(v11 + 8);
  result = 1;
  if ( v6 )
  {
    v17 = *(_QWORD *)a1;
    if ( *(_DWORD *)(v17 + 12632)
      || *(_QWORD *)(a2 + 16) != v6
      || (result = a2, *(_QWORD *)(v17 + 544) != *(_QWORD *)(a2 + 24)) )
    {
      v18 = sub_C00A40(a2, (__int64)v12, v13, v14, v15);
      return sub_190FFF0(v17, v18, v6);
    }
  }
  return result;
}
