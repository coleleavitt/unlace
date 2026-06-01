__int64 __fastcall sub_331E30(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  __int64 v4; // r13
  unsigned __int8 v5; // r12
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *a3;
  v5 = *((_BYTE *)a3 + 8);
  v8[1] = __readfsqword(0x28u);
  if ( (a4 & 2) != 0 )
  {
    v7 = 0;
    get_type_by_tid(&v7, v4);
    if ( !get_tinfo_property(v7, 291)
      && (!(unsigned __int8)sub_331AD0(v8, a1, a2, 0, 0) || get_tinfo_property4(v7, 294, 0, v8[0], -1, v5) == -1) )
    {
      clear_tinfo_t(&v7);
      return 0;
    }
    clear_tinfo_t(&v7);
  }
  return (unsigned __int8)op_enum(a1, a2, v4, v5);
}
