__int64 __fastcall sub_1D2F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 flags; // rax
  __int64 v5; // rbp
  __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  flags = get_flags_ex(v2, 4);
  if ( (flags & 0x1000) != 0 || (~BYTE1(flags) & 6) != 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = sub_32CB20(v5, v2);
  return sub_32E510(v5 + 8, v6);
}
