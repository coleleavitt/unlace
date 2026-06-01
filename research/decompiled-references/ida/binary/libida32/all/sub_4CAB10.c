__int64 __fastcall sub_4CAB10(__int64 *a1, __m128i *a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v8; // eax

  if ( !a2 )
    return 0;
  if ( (~a4 & 0xF) != 0 )
  {
    if ( (a4 & 8) != 0 )
    {
      return 0;
    }
    else
    {
      v6 = sub_4CA080(a4);
      return sub_4CA730(*a1, a2, a3, v6);
    }
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_4CA080(v7);
      result = sub_4CA730(*a1, a2, a3, v8);
      if ( (_BYTE)result )
        break;
      if ( ++v7 == 8 )
        return 0;
    }
  }
  return result;
}

