__int64 __fastcall sub_46A6F0(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int64 *a4, unsigned __int64 a5)
{
  unsigned __int64 tinfo_size; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int128 v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a3 && (a2 & 0x600) == 0x400 && (a2 & 0xF0000000) == 0x60000000 )
  {
    v11 = *a1;
    v16 = 0;
    sub_630CA0(v11, 26, &v16, 16);
    v12 = *a4;
    if ( *a4 < (unsigned __int64)v16 || v12 >= *((_QWORD *)&v16 + 1) )
    {
      LODWORD(tinfo_size) = 0;
      return (unsigned int)tinfo_size;
    }
    *(_QWORD *)&v16 = 0;
    if ( (unsigned int)sub_6BD6E0(a1, v12, 0, &v16) )
    {
      if ( (get_tinfo_property(v16, 2) & 0x2F) == 0xD )
      {
        tinfo_size = get_tinfo_size(0, v16, 0);
        if ( tinfo_size != -1 )
        {
          if ( get_tinfo_property(v16, 286) )
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
    clear_tinfo_t(&v16);
    return (unsigned int)tinfo_size;
  }
  LODWORD(tinfo_size) = is_enum(a2, a3);
  if ( (_BYTE)tinfo_size )
  {
    v10 = *a1;
    LODWORD(tinfo_size) = 0;
    v16 = 0;
    sub_630CA0(v10, 26, &v16, 16);
    if ( *a4 >= (unsigned __int64)v16 && *a4 < *((_QWORD *)&v16 + 1) )
      LODWORD(tinfo_size) = sub_6BA660(a1, &v16);
  }
  else if ( (unsigned __int8)is_stroff(a2, a3) )
  {
    v13 = *a1;
    v16 = 0;
    sub_630CA0(v13, 26, &v16, 16);
    v14 = a4[1];
    if ( v14 >= (unsigned __int64)v16 && v14 < *((_QWORD *)&v16 + 1) )
      LOBYTE(tinfo_size) = (unsigned int)sub_6BD6E0(a1, v14, 1, 0) != 0;
  }
  else
  {
    LODWORD(tinfo_size) = 1;
  }
  return (unsigned int)tinfo_size;
}
