__int64 sub_1C2D80()
{
  unsigned int v0; // ebx
  unsigned int tinfo_size; // r15d
  int v3[4]; // [rsp+0h] [rbp-88h] BYREF
  int v4[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v5; // [rsp+20h] [rbp-68h] BYREF
  __int128 v6; // [rsp+28h] [rbp-60h]
  __int64 v7; // [rsp+38h] [rbp-50h]
  int v8; // [rsp+40h] [rbp-48h]
  unsigned __int64 v9; // [rsp+48h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v8 = -1;
  v6 = 0;
  v5 = 0;
  v7 = 0;
  v0 = calc_tinfo_gaps();
  if ( (_BYTE)v0 )
  {
    v0 = 0;
    if ( (_QWORD)v6 )
    {
      v3[0] = 0;
      tinfo_size = get_tinfo_size();
      copy_argloc();
      if ( (unsigned int)sub_1C2C50(v3, &v5, tinfo_size) )
      {
        v4[0] = 0;
        copy_argloc();
        if ( v4[0] == 2 )
          sub_1C2280((__int64)v4, tinfo_size);
        if ( v3[0] == 2 )
          sub_1C2280((__int64)v3, tinfo_size);
        LOBYTE(v0) = (unsigned int)sub_1C2AD0(v3, v4) == 0;
        cleanup_argloc();
        cleanup_argloc();
      }
      else
      {
        cleanup_argloc();
      }
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v0;
}
