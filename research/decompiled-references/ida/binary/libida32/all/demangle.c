__int64 __fastcall demangle(char *a1, int a2, const char *a3, int a4)
{
  __int64 result; // rax

  if ( byte_2CA2EC4 )
    return 4294967294LL;
  byte_2CA2EC4 = 1;
  result = sub_7510C0(a1, a2, a3, a4);
  byte_2CA2EC4 = 0;
  return result;
}

