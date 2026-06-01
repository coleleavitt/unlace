__int64 __fastcall demangle(char *a1, int a2, const char *a3, int a4)
{
  __int64 result; // rax

  if ( byte_2CCCDC4 )
    return 4294967294LL;
  byte_2CCCDC4 = 1;
  result = sub_771580(a1, a2, a3, a4);
  byte_2CCCDC4 = 0;
  return result;
}
