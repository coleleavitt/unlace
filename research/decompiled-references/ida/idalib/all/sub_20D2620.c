__int64 __fastcall sub_20D2620(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  _BYTE *v6; // rbp
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16));
  else
    v3((__int64)a2, *(_QWORD *)(a1 + 16));
  result = v2[9] & 0xC0;
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v5 == sub_20CEB60 )
      result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      result = v5((__int64)a2, (__int64)v2);
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    sub_20D1ED0(a2, 0xAu, " requires ");
    v6 = *(_BYTE **)(a1 + 40);
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v7 == sub_20CEB40 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v6 + 64LL))(*(_QWORD *)(a1 + 40), a2);
    else
      v7((__int64)a2, *(_QWORD *)(a1 + 40));
    result = v6[9] & 0xC0;
    if ( (v6[9] & 0xC0) != 0x40 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
      if ( v8 == sub_20CEB60 )
        return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
      else
        return v8((__int64)a2, (__int64)v6);
    }
  }
  return result;
}
