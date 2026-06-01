__int64 __fastcall sub_6BA9B0(__int64 a1, __int64 idati, unsigned int a3)
{
  unsigned int tinfo_property; // ebp
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  v7 = 257;
  v6[1] = a3;
  if ( !idati )
    idati = get_idati(a1, 0);
  v6[0] = idati;
  if ( (unsigned __int8)create_tinfo(&v5, 61, 189, v6) && (get_tinfo_property(v5, 2) & 0x3F) == 0x2D )
    tinfo_property = get_tinfo_property(v5, 3);
  else
    tinfo_property = 0;
  clear_tinfo_t(&v5);
  return tinfo_property;
}
