__int64 __fastcall sub_164B80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rsi
  int v5; // ebx
  __int64 flags; // rax
  unsigned int v7; // edx

  v2 = *a2;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 416LL);
  if ( v3 == sub_B7C80 )
  {
    v4 = *(_QWORD *)(v2 + 480);
    if ( !v4 )
    {
      sub_1582F0(v2);
      return sub_164BF0();
    }
    v5 = sub_F4670(v2, v4);
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(v2, 0);
  }
  if ( v5 == -1 )
    return 7;
  get_eah();
  flags = get_flags_ex();
  v7 = 3;
  if ( (~BYTE1(flags) & 6) != 0 )
    return 7;
  return v7;
}

