__int64 __fastcall sub_32FE70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+8h] [rbp-140h] BYREF
  _QWORD v6[39]; // [rsp+10h] [rbp-138h] BYREF

  v6[35] = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf(9) && (unsigned __int8)is_spec_ea(a1) )
    return (unsigned __int8)getinf(9);
  v6[0] = a3;
  if ( (int)is_varsize_item(a1, a2, v6, &v5) <= 0 )
    return get_data_elsize(a1, a2, v6);
  else
    return v5;
}
