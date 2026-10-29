__int64 *__fastcall sub_1EC2820(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 *v10; // r13
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 *v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = sub_2244CB0(a1, a2, a3, a4);
  v9 = v5;
  v10 = (__int64 *)(*(_QWORD *)a1 + 8LL * v5);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_1EC27E0(v14, v10, 0);
      return v14[0];
    }
    --*(_DWORD *)(a1 + 16);
  }
  v12 = sub_22300B0(a3 + 33, 8, v5, v6, v7, v8);
  if ( a3 )
    memcpy((void *)(v12 + 32), a2, a3);
  *(_BYTE *)(v12 + a3 + 32) = 0;
  *(_QWORD *)v12 = a3;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_BYTE *)(v12 + 24) = 0;
  *v10 = v12;
  ++*(_DWORD *)(a1 + 12);
  v13 = sub_22450D0(a1, v9);
  sub_1EC27E0(v14, (__int64 *)(*(_QWORD *)a1 + 8LL * v13), 0);
  return v14[0];
}
