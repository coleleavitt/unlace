__int64 __fastcall sub_425230(_DWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // ebx
  int v8; // edx
  char v9; // [rsp+0h] [rbp-18h]

  result = (unsigned int)*a1;
  v7 = 0;
  if ( (int)result > 0 )
  {
    do
    {
      if ( v7 )
        sub_48EDF0(a2, ", ", 0xFFFFFFFFLL);
      v8 = a1[++v7];
      result = sub_490C60(a2, (unsigned int)"%%v%u", v8, a4, a5, a6, v9);
    }
    while ( *a1 > v7 );
  }
  return result;
}

