__int64 __fastcall sub_20D03C0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rdx

  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
  else
    v3(a2, *(_QWORD *)(a1 + 16));
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4(a2, (__int64)v2);
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
  }
  if ( v4 == sub_20CEB60 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), a2);
  else
    return v4(a2, *(_QWORD *)(a1 + 24));
}
