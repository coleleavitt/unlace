__int64 __fastcall sub_278E60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 tinfo_size; // r14
  unsigned int v5; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v8 = 0;
  copy_tinfo_t(&v8, a2);
  v9 = 0;
  copy_tinfo_t(&v9, a1 + 48);
  while ( (get_tinfo_property(v8, 2) & 0xF) == 0xA )
  {
    if ( (get_tinfo_property(v9, 2) & 0xF) != 0xA )
      goto LABEL_7;
    tinfo_size = get_tinfo_size(0, v8, 0);
    if ( tinfo_size != get_tinfo_size(0, v9, 0) )
      goto LABEL_7;
    v11[0] = 0;
    v11[0] = get_tinfo_property(v8, 9);
    copy_tinfo_t(&v8, v11);
    clear_tinfo_t(v11);
    v11[0] = 0;
    v11[0] = get_tinfo_property(v9, 9);
    copy_tinfo_t(&v9, v11);
    clear_tinfo_t(v11);
  }
  if ( (get_tinfo_property(v8, 2) & 0xF) != 0xC
    || (get_tinfo_property(v9, 2) & 0xF) != 0xC
    || (v5 = compare_tinfo(v9, v8, 24), !(_BYTE)v5) )
  {
LABEL_7:
    v5 = 1;
    goto LABEL_8;
  }
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(v8, 24);
  if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) != 1 )
  {
    v11[0] = 0;
    v11[0] = get_tinfo_property(v9, 24);
    if ( (get_tinfo_property(v11[0], 2) & 0x3F) != 1 )
    {
      v7 = (int)get_tinfo_size(0, v11[0], 0);
      if ( v7 >= get_tinfo_size(0, tinfo_property, 0) )
      {
LABEL_18:
        v5 = 0;
        goto LABEL_19;
      }
      if ( a3 )
      {
        if ( (get_tinfo_property(*a3, 2) & 0x3F) != 1 )
        {
          LOBYTE(v5) = v7 < get_tinfo_size(0, *a3, 0);
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
LABEL_19:
    clear_tinfo_t(v11);
    goto LABEL_13;
  }
  v5 = 0;
LABEL_13:
  clear_tinfo_t(&tinfo_property);
LABEL_8:
  clear_tinfo_t(&v9);
  clear_tinfo_t(&v8);
  return v5;
}
