unsigned __int64 __fastcall sub_220FB50(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 result; // rax

  if ( a3 != 0x80000000 )
  {
    result = (((unsigned __int64)a2 << 31) + (a3 >> 1)) / a3;
    a2 = result;
  }
  *a1 = a2;
  return result;
}
