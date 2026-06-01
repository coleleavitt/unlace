__int64 __fastcall sub_18CCD00(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 result; // rax
  int v14; // esi
  int v15; // r9d
  __int64 v16; // rdi
  __m128 v17[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1 + 8;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( v6 == *v9 )
    {
LABEL_3:
      sub_AEAAD0(v17, v9, (_QWORD *)(16 * v5 + v7), v2, 1);
      v11 = v17[0].m128_u64[0];
      goto LABEL_4;
    }
    v14 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v8 = (v5 - 1) & (v14 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v16 = *v9;
        if ( v6 == *v9 )
          goto LABEL_3;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
  }
  sub_AEAAD0(v17, (_QWORD *)(v7 + 16LL * (unsigned int)v5), (_QWORD *)(v7 + 16LL * (unsigned int)v5), v2, 1);
  v11 = v17[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v17, v12, v12, v2, 1);
  if ( v17[0].m128_u64[0] != v11 )
    v6 = *(_QWORD *)(v11 + 8);
  result = 1;
  if ( v6 )
    return sub_1C36B30(*(_QWORD *)a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 16), v6);
  return result;
}
