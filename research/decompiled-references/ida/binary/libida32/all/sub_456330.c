__int64 __fastcall sub_456330(__int64 *a1, __int64 a2, unsigned int a3, unsigned int *a4, unsigned int a5)
{
  unsigned __int64 tinfo_size; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  if ( !a3 && (a2 & 0x600) == 0x400 && (a2 & 0xF0000000) == 0x60000000 )
  {
    v11 = *a1;
    v16[0] = 0;
    sub_6141A0(v11, 26, v16, 8);
    v12 = *a4;
    if ( (unsigned int)v12 < LODWORD(v16[0]) || (unsigned int)v12 >= HIDWORD(v16[0]) )
    {
      LODWORD(tinfo_size) = 0;
      return (unsigned int)tinfo_size;
    }
    v16[0] = 0;
    if ( (unsigned int)sub_69CC60(a1, v12, 0, v16) )
    {
      if ( (get_tinfo_property(v16[0], 2) & 0x2F) == 0xD )
      {
        tinfo_size = get_tinfo_size(0, v16[0], 0);
        if ( tinfo_size != -1 )
        {
          if ( get_tinfo_property(v16[0], 286) )
          {
            LOBYTE(tinfo_size) = a5 >= tinfo_size;
            goto LABEL_15;
          }
          if ( tinfo_size )
          {
            LOBYTE(tinfo_size) = a5 % tinfo_size == 0;
            goto LABEL_15;
          }
        }
      }
    }
    LODWORD(tinfo_size) = 0;
LABEL_15:
    clear_tinfo_t(v16);
    return (unsigned int)tinfo_size;
  }
  LODWORD(tinfo_size) = is_enum(a2, a3);
  if ( (_BYTE)tinfo_size )
  {
    v10 = *a1;
    LODWORD(tinfo_size) = 0;
    v16[0] = 0;
    sub_6141A0(v10, 26, v16, 8);
    if ( *a4 >= LODWORD(v16[0]) && *a4 < HIDWORD(v16[0]) )
      LODWORD(tinfo_size) = sub_699D00(a1, v16);
  }
  else if ( (unsigned __int8)is_stroff(a2, a3) )
  {
    v13 = *a1;
    v16[0] = 0;
    sub_6141A0(v13, 26, v16, 8);
    v14 = a4[1];
    if ( (unsigned int)v14 >= LODWORD(v16[0]) && (unsigned int)v14 < HIDWORD(v16[0]) )
      LOBYTE(tinfo_size) = (unsigned int)sub_69CC60(a1, v14, 1, 0) != 0;
  }
  else
  {
    LODWORD(tinfo_size) = 1;
  }
  return (unsigned int)tinfo_size;
}

