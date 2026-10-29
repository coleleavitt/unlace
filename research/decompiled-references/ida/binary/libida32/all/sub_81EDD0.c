__int64 __fastcall sub_81EDD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  size_t v4; // r12
  const void *v5; // r15
  __int64 v6; // rbp
  size_t v7; // r13
  __int64 v8; // rsi
  __int64 v10; // rax

  v3 = *(__int64 **)(a1 + 8 * a2 + 32);
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(const void **)a3;
  v6 = v3[1];
  v7 = v4;
  if ( v6 )
  {
    --v6;
    v7 = v4 + v6;
  }
  v8 = *v3;
  if ( v3[2] < v7 + 1 )
  {
    v10 = qvector_reserve(v3, v8, v7 + 1, 1);
    *v3 = v10;
    v8 = v10;
  }
  v3[1] = v7 + 1;
  *(_BYTE *)(v8 + v7) = 0;
  memmove((void *)(v6 + *v3), v5, v4);
  return 1;
}

