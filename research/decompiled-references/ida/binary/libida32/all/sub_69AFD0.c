__int64 __fastcall sub_69AFD0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int tinfo_details; // ebp
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a3 )
  {
    tinfo_details = 0;
    if ( *a3 )
    {
      v7[1] = a3;
      v6 = 0;
      v8 = 256;
      v7[0] = get_idati(a1, a2);
      tinfo_details = create_tinfo(&v6, 61, 61, v7);
      if ( (_BYTE)tinfo_details || get_tinfo_by_edm_name(&v6, 0, a3) != -1 )
        tinfo_details = get_tinfo_details(v6, 45, a2);
      clear_tinfo_t(&v6);
    }
  }
  else
  {
    return 0;
  }
  return tinfo_details;
}

