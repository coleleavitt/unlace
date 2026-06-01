__int64 __fastcall sub_12D7490(__int64 a1, __int64 a2, unsigned int a3, const void *a4, size_t a5)
{
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v9; // [rsp+Fh] [rbp-59h]
  int v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+2Ch] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-2Ch]

  if ( a5 )
  {
    v13 = 0;
    if ( (unsigned __int8)sub_12D64E0((__int64 *)a1, a2, (__int64)&v13)
      && (v9 = sub_12D6D10((__int64 *)a1, a2, a3, (int *)&v13, &v12)) != 0 )
    {
      sub_12D5F60(a1, a2, v13, v12);
      sub_12D6060(a1, a2, v13, a4, a5, 0);
      return v9;
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 0;
      return 0;
    }
  }
  else
  {
    v13 = a2;
    v14 = a3;
    v12 = 0;
    result = sub_12D6D10((__int64 *)a1, a2, a3, (int *)&v12, &v11);
    if ( (_BYTE)result )
    {
      v8 = result;
      sub_12D5F60(a1, a2, v12, v11);
      return v8;
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  return result;
}
