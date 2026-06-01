__int64 __fastcall sub_32E500(__int64 a1, unsigned int a2, int *a3, int a4)
{
  int v5; // r13d
  __int64 flags; // rax
  __int64 v7; // r12
  __int64 result; // rax

  v5 = *a3;
  flags = get_flags_ex(a1, 0);
  v7 = flags;
  if ( v5 == 1 && (unsigned __int8)is_fltnum(flags, a2)
    || (unsigned __int8)is_numop(v7, a2) && v5 == (unsigned int)get_radix(v7, a2) )
  {
    if ( a4 == 3 )
      return 0;
    return (unsigned __int8)clr_op_type(a1, a2) ^ 1u;
  }
  else
  {
    if ( a4 == 2 )
      return 0;
    switch ( v5 )
    {
      case 1:
        result = (unsigned __int8)set_op_type(a1, 0xCCCCCC0CC00000LL, a2) ^ 1u;
        break;
      case 2:
        result = (unsigned __int8)set_op_type(a1, 0x66666606600000LL, a2) ^ 1u;
        break;
      case 8:
        result = (unsigned __int8)set_op_type(a1, 0x77777707700000LL, a2) ^ 1u;
        break;
      case 10:
        result = (unsigned __int8)set_op_type(a1, 0x22222202200000LL, a2) ^ 1u;
        break;
      case 16:
        result = (unsigned __int8)set_op_type(a1, 0x11111101100000LL, a2) ^ 1u;
        break;
      default:
        result = 1;
        break;
    }
  }
  return result;
}
