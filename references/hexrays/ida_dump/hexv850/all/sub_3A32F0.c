unsigned __int64 __fastcall sub_3A32F0(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int tinfo_property; // ebp
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 idati; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  set_tinfo_property(a1, 6, 192);
  v2 = *a1;
  if ( (*(_BYTE *)a1 & 0x3F) == 0x3D )
  {
    tinfo_property = get_tinfo_property(v2, 8);
    if ( tinfo_property )
    {
      if ( tinfo_property != (unsigned int)get_tinfo_property(*a1, 7) )
      {
        v5 = *a1;
        get_tinfo_pdata(v8, *a1, 3);
        idati = v8[0];
        v9 = 257;
        v8[1] = tinfo_property;
        if ( !v8[0] )
          idati = get_idati(v8, v5, 257, v6);
        v8[0] = idati;
        create_tinfo(a1, 61, 189, v8);
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
