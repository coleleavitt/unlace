unsigned __int64 __fastcall sub_1C7B660(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
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
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r9d
  __int64 v20; // rdi
  __m128 v21[4]; // [rsp+0h] [rbp-48h] BYREF

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
      sub_AEAAD0(v21, v9, (_QWORD *)(16 * v5 + v7), v2, 1);
      v11 = v21[0].m128_u64[0];
      goto LABEL_4;
    }
    v18 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v19 = v18 + 1;
        v8 = (v5 - 1) & (v18 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v20 = *v9;
        if ( v6 == *v9 )
          goto LABEL_3;
        v18 = v19;
      }
      while ( v20 != -4096 );
    }
  }
  sub_AEAAD0(v21, (_QWORD *)(v7 + 16LL * (unsigned int)v5), (_QWORD *)(v7 + 16LL * (unsigned int)v5), v2, 1);
  v11 = v21[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v21, v12, v12, v2, 1);
  if ( v21[0].m128_u64[0] != v11 )
    v6 = *(_QWORD *)(v11 + 8);
  result = 1;
  if ( v6 )
  {
    v17 = sub_C00A40(a2, (__int64)v12, v13, v14, v15);
    return sub_190FFF0(*(_QWORD *)a1, v17, v6);
  }
  return result;
}
