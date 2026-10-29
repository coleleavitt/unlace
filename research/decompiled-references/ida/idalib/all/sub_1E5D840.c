void __fastcall sub_1E5D840(__int64 a1, double a2, __m128 a3)
{
  unsigned __int64 v3; // r12
  char v4; // r14
  _BYTE *v5; // r13
  char v6; // al
  __int64 *v7; // rdi
  __int64 v8; // [rsp+8h] [rbp-C8h]
  __int64 v9; // [rsp+10h] [rbp-C0h]
  void *ptr[2]; // [rsp+28h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-98h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = **(_QWORD **)(a1 + 40) != 0;
  sub_1DBA4B0((__int64)ptr, v3, **(_QWORD **)(a1 + 16), nullptr, 0, 0, v8, v9, 0, 0, 0, 0, 0);
  v5 = *(_BYTE **)a1;
  v6 = sub_1DD54A0(
         v3,
         **(_DWORD **)(a1 + 8),
         **(__int64 ***)(a1 + 16),
         **(_QWORD **)(a1 + 24),
         (__int64)ptr,
         1,
         a2,
         a3,
         v4);
  v7 = (__int64 *)ptr[0];
  *v5 = v6;
  if ( v7 != &v11 )
    free(v7);
}
