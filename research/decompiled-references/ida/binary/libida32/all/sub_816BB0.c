__int64 __fastcall sub_816BB0(int a1, int a2)
{
  __int64 result; // rax

  if ( !a1 || a1 > 16 )
    a1 = 4;
  result = (unsigned int)a2;
  if ( a1 <= a2 )
    return (unsigned int)a1;
  return result;
}

