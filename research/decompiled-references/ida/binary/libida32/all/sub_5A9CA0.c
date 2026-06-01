__int64 __fastcall sub_5A9CA0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  if ( (unsigned int)a1 < *a3 )
    a1 = *a3;
  result = a3[1];
  if ( (unsigned int)a2 > (unsigned int)result )
    a2 = (unsigned int)result;
  if ( (unsigned int)a2 >= (unsigned int)a1 && (unsigned int)a1 < (unsigned int)a2 )
    return auto_mark_range(a1, a2, 40);
  return result;
}

