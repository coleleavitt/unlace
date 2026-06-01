__int64 __fastcall sub_5F4860(__int64 a1, __int64 a2, char a3)
{
  unsigned int tinfo_size; // ebp
  unsigned __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( a3 && (*(_BYTE *)(a2 + 186) & 0xF) == 0xB )
    return sub_565A40(0, 0, 0, 0);
  v5[0] = 0;
  sub_5F2B00(a1, v5, a2, 0);
  tinfo_size = get_tinfo_size(0, v5[0], 0);
  if ( tinfo_size == -1 )
    set_qerrno(82);
  clear_tinfo_t(v5);
  return tinfo_size;
}
