__int64 __fastcall sub_25CC70(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int flags; // eax
  unsigned int v7; // r15d
  _QWORD *v9; // rbp
  __int64 strid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  char tinfo_property; // al
  __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v19; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 816LL);
    if ( !*v9 )
      *v9 = get_named_type_tid("__CFString");
    strid = get_strid(a2);
    if ( strid != -1 && *v9 == strid )
    {
      v15 = 0;
      v19 = 256;
      v18[1] = "__CFString";
      v18[0] = get_idati(a2, 4, v11, v12);
      v7 = create_tinfo(&v15, 61, 61, v18);
      if ( !(_BYTE)v7 )
      {
LABEL_15:
        clear_tinfo_t(&v15);
        return v7;
      }
      v16 = 0;
      v7 = sub_25B3B0((__int64)&v17, &v15, "data", a2, (__int64)&v16);
      if ( !(_BYTE)v7 )
        goto LABEL_13;
      if ( (get_tinfo_property(v16, 2) & 0xF) != 0xA )
        goto LABEL_13;
      v13 = get_flags_ex(v17, 4);
      if ( (v13 & 0x600) != 0x400 || (v13 & 0xF0000000) != 0x50000000 )
        goto LABEL_13;
      if ( a3 )
        *a3 = v17;
      if ( !a4 )
        goto LABEL_14;
      if ( (unsigned __int8)sub_25B3B0((__int64)v18, &v15, "length", a2, (__int64)&v16)
        && (tinfo_property = get_tinfo_property(v16, 2), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8 )
      {
        *a4 = v18[0];
      }
      else
      {
LABEL_13:
        v7 = 0;
      }
LABEL_14:
      clear_tinfo_t(&v16);
      goto LABEL_15;
    }
  }
  return 0;
}
