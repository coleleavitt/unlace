unsigned __int64 __fastcall sub_1897570(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  int v6; // eax
  int v7; // r8d
  __int64 v8; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rsi
  int v12; // edx
  __m128 v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v3 )
  {
    v6 = sub_FDE780(*a2);
    v7 = v3 - 1;
    v8 = *a2;
    v3 = *(unsigned int *)(a1 + 16);
    v9 = v7 & v6;
    v10 = (_QWORD *)(v4 + 40LL * v9);
    if ( *a2 == *v10 )
    {
LABEL_3:
      sub_171EC50(v13, v10, (_QWORD *)(*(_QWORD *)a1 + 40 * v3), a1, 1);
      return v13[0].m128_u64[0];
    }
    if ( *v10 != -1 )
    {
      v12 = 1;
      do
      {
        v9 = v7 & (v12 + v9);
        v10 = (_QWORD *)(v4 + 40LL * v9);
        if ( v8 == *v10 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v10 != -1 );
    }
    v4 = *(_QWORD *)a1;
  }
  sub_171EC50(v13, (_QWORD *)(v4 + 40 * v3), (_QWORD *)(v4 + 40 * v3), a1, 1);
  return v13[0].m128_u64[0];
}
