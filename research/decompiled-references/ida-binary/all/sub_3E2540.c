__int64 __fastcall sub_3E2540(__int64 *a1, __int64 a2, int a3, unsigned __int16 a4)
{
  char v5; // cl
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 reg_name; // rdx
  __int64 result; // rax

  v5 = 8 * a3;
  if ( (unsigned __int64)(8 * a3) > 0x3F )
  {
    v7 = -1;
  }
  else
  {
    v6 = 0;
    v7 = (1LL << v5) - 1;
    if ( 1LL << v5 == 1 )
      goto LABEL_5;
  }
  v6 = 0;
  do
  {
    ++v6;
    v7 >>= 8;
  }
  while ( v7 );
LABEL_5:
  reg_name = get_reg_name(a1, a2, v6, 0xFFFFFFFFLL);
  result = 0;
  if ( reg_name > 0 )
  {
    if ( a4 )
    {
      sub_16FAA0(a1, (__int64)"@%d", a4);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
