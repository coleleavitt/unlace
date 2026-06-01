__int64 __fastcall sub_13FA3B0(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 *v10; // r14
  __int64 *v11; // rax
  size_t *v12; // r12
  unsigned int v13; // eax
  __int64 *v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244CB0(a1, a2, a3, v4);
  v9 = v5;
  v10 = (__int64 *)(*(_QWORD *)a1 + 8LL * v5);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_13FA370(v15, v10, 0);
      v11 = v15[0];
      return *v11 + 8;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v12 = (size_t *)sub_22300B0(a3 + 17, 8, v5, v6, v7, v8);
  if ( a3 )
    memcpy(v12 + 2, a2, a3);
  *((_BYTE *)v12 + a3 + 16) = 0;
  *v12 = a3;
  v12[1] = 0;
  *v10 = (__int64)v12;
  ++*(_DWORD *)(a1 + 12);
  v13 = sub_22450D0(a1, v9);
  sub_13FA370(v15, (__int64 *)(*(_QWORD *)a1 + 8LL * v13), 0);
  v11 = v15[0];
  return *v11 + 8;
}
