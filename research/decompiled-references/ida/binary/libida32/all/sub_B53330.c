__int64 __fastcall sub_B53330(_QWORD *a1, const __m128i *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int *v7; // rsi

  if ( a4 )
    sub_B53090(a1, a2, a3);
  else
    (*(void (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  result = a1[19];
  if ( result )
  {
    if ( ((result >> 1) & 3) == 2 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
        v7 = *(unsigned int **)(result + 24);
        if ( v7 )
          return sub_F4D590(a2, v7 + 2, *v7, a3, 0);
      }
    }
  }
  return result;
}

