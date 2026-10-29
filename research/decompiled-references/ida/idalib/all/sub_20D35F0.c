_QWORD *__fastcall sub_20D35F0(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
  else
    v3((__int64)a2, *(_QWORD *)(a1 + 16));
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4((__int64)a2, (__int64)v2);
  }
  return sub_20D1ED0(a2, 1u, " ");
}
