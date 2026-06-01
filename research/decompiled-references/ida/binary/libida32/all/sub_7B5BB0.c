__int64 __fastcall sub_7B5BB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  copy_tinfo_t(v4);
  if ( (int)replace_ordinal_typerefs(0, v4) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = serialize_tinfo(a1, a2, 0, v4, 272);
    if ( !(_BYTE)v2 )
    {
      if ( !under_debugger )
        interr(1572);
      BUG();
    }
  }
  clear_tinfo_t(v4);
  return v2;
}

