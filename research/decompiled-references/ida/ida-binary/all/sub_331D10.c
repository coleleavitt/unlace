__int64 __fastcall sub_331D10(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (a4 & 2) == 0 )
    return (unsigned __int8)set_op_type(a1, 0x33333303300000LL, a2);
  if ( (unsigned __int8)sub_331AD0(&v5, a1, a2, 0, 0) && (v6[0] = &v5, (unsigned __int8)format_charlit(0, v6, 8, 0, 0)) )
    return (unsigned __int8)set_op_type(a1, 0x33333303300000LL, a2);
  else
    return 0;
}
