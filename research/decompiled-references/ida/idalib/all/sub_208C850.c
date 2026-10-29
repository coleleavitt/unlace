void __fastcall sub_208C850(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, void **); // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  void (__fastcall *v5)(__int64, void **); // r15
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+10h] [rbp-68h] BYREF
  void *v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 56LL);
  sub_208C0A0((__int64)v8, a1);
  v3 = v2(a2, v8);
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, ": ");
  v5 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 56LL);
  sub_208C770((__int64)v10, a1);
  v5(v4, v10);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 48LL))(a2, " (hotness: ");
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, *(_QWORD *)(a1 + 64));
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, ")");
  }
}
