unsigned __int64 __fastcall sub_1898230(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // r14
  int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  unsigned __int64 result; // rax
  _QWORD *v15; // rdx
  int v16; // edx
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 64;
  v4 = *(unsigned int *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (_DWORD)v4 )
  {
    v7 = sub_FDE780(a2);
    v8 = v4 - 1;
    v4 = *(unsigned int *)(a1 + 80);
    v9 = v8 & v7;
    v10 = (_QWORD *)(v5 + 40LL * v9);
    if ( a2 == *v10 )
    {
LABEL_3:
      sub_171EC50(v17, v10, (_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v4), v2, 1);
      v11 = v17[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v10 != -1 )
    {
      v16 = 1;
      do
      {
        v9 = v8 & (v16 + v9);
        v10 = (_QWORD *)(v5 + 40LL * v9);
        if ( a2 == *v10 )
          goto LABEL_3;
        ++v16;
      }
      while ( *v10 != -1 );
    }
    v5 = *(_QWORD *)(a1 + 64);
  }
  sub_171EC50(v17, (_QWORD *)(v5 + 40 * v4), (_QWORD *)(v5 + 40 * v4), v2, 1);
  v11 = v17[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(unsigned int *)(a1 + 80));
  sub_171EC50(v17, v12, v12, v2, 1);
  if ( v11 == v17[0].m128_u64[0] )
    return 0;
  v13 = (_QWORD *)(v11 + 8);
  if ( v11 == -8 )
  {
LABEL_10:
    v15 = (_QWORD *)(v11 + 24);
    if ( v11 != -24 )
    {
      while ( 1 )
      {
        result = *v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( result )
        {
          if ( (*(_QWORD *)(result + 56) & 0x200000LL) != 0 || ((*(_QWORD *)(result + 56) >> 16) & 8) != 0 )
            break;
        }
        v15 = (_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v15 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  while ( 1 )
  {
    result = *v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      if ( (*(_QWORD *)(result + 56) & 0x200000LL) != 0 || ((*(_QWORD *)(result + 56) >> 16) & 8) != 0 )
        return result;
    }
    v13 = (_QWORD *)(v13[1] & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v13 )
      goto LABEL_10;
  }
}
