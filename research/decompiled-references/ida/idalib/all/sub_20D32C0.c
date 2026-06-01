__int64 __fastcall sub_20D32C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  size_t v8; // rax
  size_t v9; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v9 = j__strlen("::");
    sub_20D1ED0(a2, v9, "::");
  }
  sub_20D1ED0(a2, 6u, "delete");
  if ( *(_BYTE *)(a1 + 25) )
  {
    v8 = j__strlen("[]");
    sub_20D1ED0(a2, v8, "[]");
  }
  sub_20CFD70((__int64)a2);
  v2 = a2[2];
  v3 = a2[1];
  a2[2] = v2 + 1;
  *(_BYTE *)(v3 + v2) = 32;
  v4 = *(_BYTE **)(a1 + 16);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, a2);
  else
    v5((__int64)a2, (__int64)v4);
  result = v4[9] & 0xC0;
  if ( (v4[9] & 0xC0) != 0x40 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v7 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 72LL))(v4, a2);
    else
      return v7((__int64)a2, (__int64)v4);
  }
  return result;
}
