__int64 __fastcall sub_127A0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebp
  const char *v4; // rax
  const char *v5; // rax
  unsigned int v6; // r14d
  const char *v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 idati; // [rsp+10h] [rbp-48h]
  const char *v10; // [rsp+18h] [rbp-40h]
  __int16 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a1 + 404) - 111) > 2 )
    return v12 - __readfsqword(0x28u);
  if ( !(unsigned __int8)get_data_value() )
    return v12 - __readfsqword(0x28u);
  if ( v8 <= 0xFFFF )
    return v12 - __readfsqword(0x28u);
  if ( !(unsigned __int8)is_mapped() )
    return v12 - __readfsqword(0x28u);
  if ( !(unsigned __int8)get_data_value() )
    return v12 - __readfsqword(0x28u);
  v2 = getseg();
  if ( !v2 || (*(_BYTE *)(v2 + 42) & 1) == 0 || (unsigned __int8)(get_byte() - 1) > 0x3Fu )
    return v12 - __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(a1 + 404) = 114;
  if ( v3 <= 115 )
  {
    if ( v3 <= 113 )
    {
      v7 = "MAP_TYPE111";
      v8 = 0;
      if ( v3 <= 110 )
        v7 = "MAP_TYPE105";
      v11 = 256;
      v10 = v7;
      idati = get_idati();
      if ( (unsigned __int8)create_tinfo() )
        set_tinfo_property4();
      sub_FE10(a1, 0xFu, (__int64)&v8, 1);
      clear_tinfo_t();
    }
  }
  else
  {
    v4 = "FUNCINFO116";
    if ( v3 > 117 )
    {
      v4 = "FUNCINFO118";
      if ( v3 != 118 )
        v4 = "FUNCINFO120";
    }
    v10 = v4;
    v8 = 0;
    v11 = 256;
    idati = get_idati();
    if ( (unsigned __int8)create_tinfo() )
      set_tinfo_property4();
    sub_FE10(a1, 3u, (__int64)&v8, 1);
    clear_tinfo_t();
    v5 = "FUNCTAB_ENTRY118";
    if ( v3 <= 117 )
      v5 = "FUNCTAB_ENTRY116";
    v11 = 256;
    v8 = 0;
    v10 = v5;
    idati = get_idati();
    if ( (unsigned __int8)create_tinfo() )
      set_tinfo_property4();
    sub_FE10(a1, 0, (__int64)&v8, 1);
    clear_tinfo_t();
  }
  if ( byte_284D0 )
    return v12 - __readfsqword(0x28u);
  v6 = *(_DWORD *)(a1 + 404);
  netnode_check();
  v8 = v6;
  netnode_supset();
  netnode_check();
  v8 = *(unsigned int *)(a1 + 536);
  netnode_supset();
  if ( !v6 )
    byte_284D0 = 1;
  *(_BYTE *)(a1 + 556) = 1;
  if ( (unsigned __int8)getinf_flag() )
  {
    netnode_check();
    if ( (unsigned int)netnode_altval() > 0x74 )
      get_ph();
  }
  return setinf();
}
