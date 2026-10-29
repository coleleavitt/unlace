_QWORD *__fastcall sub_20D2D20(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  sub_20D1ED0(a2, 2u, "\"<");
  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 64LL))(v2, a2);
  else
    v3((__int64)a2, (__int64)v2);
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4((__int64)a2, (__int64)v2);
  }
  return sub_20D1ED0(a2, 2u, ">\"");
}
