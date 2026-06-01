_QWORD *__fastcall sub_205ABB0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 *v4; // r14
  __int64 v5; // r13
  int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  _QWORD *v10; // rsi
  _QWORD *result; // rax
  int v12; // edx
  __m128 v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = **(__int64 ***)(a1 + 8);
  v2 = *v1;
  v3 = *(unsigned int *)(*v1 + 1696);
  v4 = (__int64 *)(*v1 + 1680);
  v5 = *v4;
  if ( !(_DWORD)v3 )
    goto LABEL_7;
  v7 = sub_205A9F0(a1);
  v8 = v3 - 1;
  v3 = *(unsigned int *)(v2 + 1696);
  v9 = v8 & v7;
  v10 = (_QWORD *)(v5 + 8LL * v9);
  if ( a1 != *v10 )
  {
    if ( *v10 != -4096 )
    {
      v12 = 1;
      do
      {
        v9 = v8 & (v12 + v9);
        v10 = (_QWORD *)(v5 + 8LL * v9);
        if ( a1 == *v10 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v10 != -4096 );
    }
    v5 = *(_QWORD *)(v2 + 1680);
LABEL_7:
    sub_2059BE0(v13, (_QWORD *)(v5 + 8 * v3), (_QWORD *)(v5 + 8 * v3), (__int64)v4, 1);
    result = (_QWORD *)v13[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_2059BE0(v13, v10, (_QWORD *)(*(_QWORD *)(v2 + 1680) + 8 * v3), (__int64)v4, 1);
  result = (_QWORD *)v13[0].m128_u64[0];
LABEL_4:
  *result = -8192;
  --*(_DWORD *)(v2 + 1688);
  ++*(_DWORD *)(v2 + 1692);
  return result;
}
