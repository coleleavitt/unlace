int __fastcall sub_20D4720(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  char v4; // al
  char v5; // al
  _BYTE *v6; // rdi
  char v7; // al
  char v8; // al
  size_t v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  int result; // eax
  __int64 v12; // r13
  size_t v13; // rax
  __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v3 + 8) != 11
    || (v12 = *(_QWORD *)(v3 + 16), *(_BYTE *)(v12 + 8) != 8)
    || (v13 = j__strlen("objc_object"),
        v14 = *(_QWORD *)(v12 + 24),
        v15[0] = *(_QWORD *)(v12 + 16),
        v15[1] = v14,
        v13 != v15[0])
    || (result = sub_FD4B10((__int64)v15, v13, "objc_object")) != 0 )
  {
    v4 = *(_BYTE *)(v3 + 10) & 3;
    if ( v4 == 2 )
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 8LL))(v3, a2);
    else
      v5 = v4 == 0;
    if ( v5
      || ((v6 = *(_BYTE **)(a1 + 16), v7 = v6[10] & 0xC, v7 == 8)
        ? (v8 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 16LL))(v6, a2))
        : (v8 = v7 == 0),
          v8) )
    {
      v9 = j__strlen(")");
      sub_20D1ED0(a2, v9, ")");
    }
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v10 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16), a2);
    else
      return v10((__int64)a2, *(_QWORD *)(a1 + 16));
  }
  return result;
}
