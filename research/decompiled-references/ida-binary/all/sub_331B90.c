__int64 __fastcall sub_331B90(__int64 a1, unsigned int a2, __int64 a3, int a4, char a5)
{
  __int64 flags; // rax
  __int64 result; // rax
  char v10; // dl
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  flags = get_flags_ex(a1, 0);
  if ( (unsigned __int8)is_off(flags, a2) )
  {
    if ( a4 != 3 )
      return (unsigned __int8)clr_op_type(a1, a2) ^ 1u;
    return 0;
  }
  if ( a4 == 2 )
    return 0;
  if ( (a5 & 4) != 0 )
    *(_DWORD *)(a3 + 24) = (unsigned __int8)get_default_reftype(a1);
  if ( (a5 & 1) != 0
    && (!(unsigned __int8)sub_331AD0(&v11, a1, a2, 0, 0)
     || !(unsigned __int8)calc_reference_data(v12, 0, a1, a3, v11)
     || v12[0] < (unsigned __int64)getinf(23)
     || (unsigned __int64)getinf(24) < v12[0]
     || (a5 & 2) != 0 && !(unsigned __int8)is_mapped(v12[0])) )
  {
    return 0;
  }
  v10 = op_offset_ex(a1, a2, a3);
  result = 0xFFFFFFFFLL;
  if ( v10 )
  {
    delete_all_xrefs_from(a1, 0);
    create_xrefs_from(a1);
    return 0;
  }
  return result;
}
