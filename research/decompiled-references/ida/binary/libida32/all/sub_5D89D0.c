__int64 __fastcall sub_5D89D0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  unsigned int tinfo_size; // ebp
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( a3 && (*(_BYTE *)(a2 + 186) & 0xF) == 0xB )
    return sub_54C2E0(0, 0, 0, 0);
  v6[0] = 0;
  sub_5D6C80(a1, (const char *)v6, a2, 0);
  v3 = v6[0];
  tinfo_size = get_tinfo_size(0, v6[0], 0);
  if ( tinfo_size == -1 )
    set_qerrno(82, v3);
  clear_tinfo_t(v6);
  return tinfo_size;
}

