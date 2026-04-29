__int64 __fastcall sub_3251D0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  __int64 tinfo_property; // [rsp+8h] [rbp-80h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  __int128 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  __int16 v14; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v4 = *a2;
  v15 = __readfsqword(0x28u);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 84) == get_tinfo_size(0, v4, 0) )
  {
    tinfo_property = get_tinfo_property(*a2, 9);
    if ( a3 != ((get_tinfo_property(tinfo_property, 2) & 0x40) != 0) )
    {
      if ( a3 )
      {
        if ( (_BYTE)tinfo_property )
          tinfo_property |= 0x40uLL;
        goto LABEL_7;
      }
      set_tinfo_property(&tinfo_property, 6, 64);
      if ( (get_tinfo_property(tinfo_property, 2) & 0x40) == 0 )
      {
LABEL_7:
        v10 = 0;
        v11 = 0;
        v9 = 0;
        copy_tinfo_t((char *)&v11 + 8, &v9);
        v12 = 0;
        copy_tinfo_t(&v12, &v10);
        v13 = 0;
        v14 = 0;
        clear_tinfo_t(&v9);
        clear_tinfo_t(&v10);
        copy_tinfo_t(&v11, &tinfo_property);
        create_tinfo(a2, 10, 10, &v11);
        clear_tinfo_t(&v12);
        clear_tinfo_t((char *)&v11 + 8);
        v6 = 1;
        clear_tinfo_t(&v11);
LABEL_8:
        clear_tinfo_t(&tinfo_property);
        return v6;
      }
    }
    v6 = 0;
    goto LABEL_8;
  }
  return v6;
}
