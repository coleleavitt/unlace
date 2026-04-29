unsigned __int64 __fastcall sub_38E8D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdx
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v8 = nullptr;
  get_ea_name(&v8, v3, 0, 0);
  v4 = s1;
  if ( (_QWORD)v9 )
    v4 = v8;
  sub_67E30(a2, (__int64)"%s:%u", v4, *(_DWORD *)(a1 + 12) + 1);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL);
  if ( v5 == sub_37FEE0 )
    v6 = *(_QWORD *)(a1 + 24);
  else
    v6 = v5(a1);
  if ( v6 != -1 )
    sub_F7090(a2, (__int64)" (%a)", 0.0);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v10 - __readfsqword(0x28u);
}
