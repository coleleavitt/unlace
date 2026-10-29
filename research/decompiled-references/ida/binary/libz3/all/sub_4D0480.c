__int64 __fastcall sub_4D0480(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, __int64 *a6)
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  int v11; // r8d
  __int64 *v12; // r9

  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL);
  if ( v6 == sub_4D0080 )
    return sub_4C5E90(a1 + 64, a2, (__int64)sub_4D0080, a4, a5, a6);
  v8 = ((__int64 (*)(void))v6)();
  return sub_4C5E90(v8, a2, v9, v10, v11, v12);
}

