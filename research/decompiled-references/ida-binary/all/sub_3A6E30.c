__int64 __fastcall sub_3A6E30(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v6[6]; // [rsp+10h] [rbp-30h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = a2;
  v3 = *a2;
  v5 = 0;
  if ( v3
    && (unsigned int)get_named_type(v2[1], v3, 0, v6, 0, 0, 0, 0, 0)
    && (*(_BYTE *)v6[0] & 0x3F) == 0x3D
    && (unsigned __int8)deserialize_tinfo(&v5, v2[1], v6, 0, 0, 0)
    && (v5 & 0x100) != 0 )
  {
    LOBYTE(v2) = get_tinfo_pdata(a1, v5, 0) != 0;
  }
  else
  {
    LODWORD(v2) = 0;
  }
  clear_tinfo_t(&v5);
  return (unsigned int)v2;
}
