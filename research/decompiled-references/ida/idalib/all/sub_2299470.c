__int64 __fastcall sub_2299470(__int64 a1, char *a2, size_t a3, char a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-99h]
  __m128i v7[2]; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+68h] [rbp-40h]
  __int64 v10; // [rsp+78h] [rbp-30h]
  unsigned __int8 v11; // [rsp+80h] [rbp-28h]

  if ( !a4 || a3 <= 2 || *(_WORD *)a2 != 28526 || (v4 = 3, a2[2] != 45) )
  {
    if ( a3 <= 1 || *(_WORD *)a2 != 28526 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v4 = 2;
  }
  a2 += v4;
  a3 -= v4;
LABEL_7:
  sub_2298AD0(v7, a2, a3);
  result = v11;
  if ( v11 )
  {
    if ( v9 && v10 )
    {
      v6 = v11;
      if ( v4 )
        sub_2299260(a1, v8);
      else
        sub_2299030(a1, v8);
      return v6;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
