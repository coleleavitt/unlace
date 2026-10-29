__int64 __fastcall sub_7D3890(unsigned int *src, unsigned int *a2, unsigned int *a3)
{
  __int64 v4; // rsi
  unsigned int *v6; // r14
  unsigned int *v8; // r15
  unsigned int *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // rcx

  v4 = (char *)a2 - (char *)src;
  v6 = (unsigned int *)((char *)a3 + v4);
  if ( v4 <= 6624 )
    return sub_7D2840(src, a2);
  v8 = src;
  do
  {
    v9 = v8;
    v8 += 1932;
    sub_7D2840(v9, v8);
  }
  while ( (char *)a2 - (char *)v8 > 6624 );
  result = sub_7D2840(v8, a2);
  if ( v4 > 7728 )
  {
    v11 = 7;
    do
    {
      sub_7D37E0(src, a2, a3, v11);
      v12 = 2 * v11;
      v11 *= 4;
      result = sub_7D37E0(a3, v6, src, v12);
    }
    while ( (__int64)(0xF128CFC4A33F128DLL * (v4 >> 4)) > v11 );
  }
  return result;
}

