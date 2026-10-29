__int64 __fastcall sub_1654E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx

  v2 = *a2;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 416LL);
  if ( v3 == sub_B81F0 )
  {
    v4 = *(_QWORD *)(v2 + 480);
    if ( !v4 )
    {
      sub_158B30(v2);
      return sub_165560();
    }
    v5 = sub_F5490(v2, v4);
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(v2, 0);
  }
  if ( v5 == -1
    || *(_DWORD *)(get_eah() + 24) != 8 && HIDWORD(v5)
    || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
  {
    return 7;
  }
  else
  {
    return 3;
  }
}

