__int64 __fastcall sub_A33DF0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  char *v4; // rbp
  char *v5; // r13
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void *v8; // r12
  void *v9; // r12
  void *v10; // rbp
  int v12; // [rsp+0h] [rbp-1E8h]
  unsigned int *v13; // [rsp+8h] [rbp-1E0h]
  _DWORD v14[4]; // [rsp+10h] [rbp-1D8h] BYREF
  int v15[4]; // [rsp+20h] [rbp-1C8h] BYREF
  char v16[16]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v18[24]; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-180h] BYREF
  _BYTE v20[40]; // [rsp+78h] [rbp-170h] BYREF
  void *ptr; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-140h]
  _BYTE v23[312]; // [rsp+B0h] [rbp-138h] BYREF

  v13 = (unsigned int *)a2;
  ptr = v23;
  v22 = 0x1000000000LL;
  sub_9ECB60((__int64)v14, a1, a2, (__int64)&ptr);
  sub_B28AA0(v16, a1 + 840, v14, 0, 0);
  v4 = (char *)ptr + 16 * (unsigned int)v22;
  if ( v4 != ptr )
  {
    v5 = (char *)ptr;
    do
    {
      sub_9F5780(
        a1,
        *(_QWORD *)v5,
        *((_DWORD *)v5 + 2),
        (unsigned int)v16,
        v2,
        v3,
        v12,
        (char)v13,
        v14[0],
        v14[2],
        v15[0],
        v15[2],
        v16[0]);
      v5 += 16;
    }
    while ( v4 != v5 );
  }
  v6 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v13), *(unsigned int *)(a1 + 8));
  v7 = sub_A33A00((_QWORD *)a1, v6, (__int64)v16);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v8, v20);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v9, v18);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v10, v15);
  if ( ptr && ptr != v23 )
    sub_186B220(ptr);
  return v7;
}

