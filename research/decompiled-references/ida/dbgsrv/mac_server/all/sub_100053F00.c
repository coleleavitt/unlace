/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053F00
// Address: 0x0000000100053F00

//----- (0000000100053F00) ----------------------------------------------------
char __fastcall sub_100053F00(__int64 a1)
{
  const char *v1; // rbx
  int v2; // r15d
  _QWORD *v3; // rax
  char v4; // r15
  char result; // al
  const char *v6; // rsi
  void *__p[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-30h]
  void **v9; // [rsp+18h] [rbp-28h]

  v1 = *(const char **)a1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v2 - 10) >= 2 )
  {
    if ( v2 == 25 )
    {
      if ( (unsigned __int8)sub_100051CC0((__m128i *)(a1 + 2096), __p, v1, *(_DWORD *)(a1 + 2088)) )
      {
        *(_BYTE *)(a1 + 29) = __p[0];
        return 1;
      }
      goto LABEL_11;
    }
    if ( v2 != 18 )
      return 0;
  }
  v3 = open_linput(*(const char **)a1, 0);
  __p[0] = v3;
  if ( !v3
    || ((v9 = __p, v2 != 11) ? (_QWORD *)(v4 = 0) : (v4 = sub_100052790(a1 + 28, (__int64)v3), v3 = __p[0]),
        close_linput(v3),
        result = 1,
        !v4) )
  {
LABEL_11:
    *(_OWORD *)__p = 0;
    v8 = 0;
    sub_100053400(a1, (__int64)__p);
    if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
    {
      if ( __p[1] )
        v6 = (const char *)__p[0];
      else
        v6 = _s1;
      sub_100000AE0((int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v6, v1);
    }
    if ( __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
    return 0;
  }
  return result;
}
// 1000AD1A8: using guessed type __int64 qword_1000AD1A8;
