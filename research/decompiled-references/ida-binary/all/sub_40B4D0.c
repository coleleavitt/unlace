__int64 __fastcall sub_40B4D0(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 tinfo_property; // rax
  char v4; // al
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0;
  v6[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a1, 2) & 0xF) == 0xA )
  {
    tinfo_property = get_tinfo_property(*a1, 9);
    v6[0] = tinfo_property;
    if ( (_BYTE)tinfo_property && (v4 = get_tinfo_property(tinfo_property, 2), (v4 & 0xF) == 2) )
    {
      v5 = 0x1000100010000LL;
      LOBYTE(v1) = _bittest64(&v5, v4 & 0x30);
    }
    else
    {
      v1 = 0;
    }
    clear_tinfo_t(v6);
  }
  return v1;
}
