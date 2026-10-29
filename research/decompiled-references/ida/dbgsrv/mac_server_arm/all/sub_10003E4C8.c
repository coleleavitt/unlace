/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E4C8
// Address: 0x000000010003E4C8

//----- (000000010003E4C8) ----------------------------------------------------
__int64 **__fastcall sub_10003E4C8(__int64 a1, char *__s)
{
  _QWORD *v3; // x19
  size_t v4; // x0
  void *v5; // x20
  void *v6; // x22
  size_t v7; // x23
  __int64 **v8; // x0
  __int64 **v9; // x19
  void *__p[2]; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 v12; // [xsp+10h] [xbp-40h]

  v3 = *(_QWORD **)(a1 + 560);
  v4 = strlen(__s);
  if ( v4 >= 0x7FFFFFFFFFFFFFF8LL )
    sub_100044FA8();
  v5 = (void *)v4;
  if ( v4 >= 0x17 )
  {
    if ( (v4 | 7) == 0x17 )
      v7 = 25;
    else
      v7 = (v4 | 7) + 1;
    v6 = operator new(v7);
    __p[1] = v5;
    v12 = v7 | 0x8000000000000000LL;
    __p[0] = v6;
    goto LABEL_9;
  }
  HIBYTE(v12) = v4;
  v6 = __p;
  if ( v4 )
LABEL_9:
    memcpy(v6, __s, (size_t)v5);
  *((_BYTE *)v5 + (_QWORD)v6) = 0;
  v8 = sub_1000459E4(v3, (__int64)__p);
  if ( SHIBYTE(v12) < 0 )
  {
    v9 = v8;
    operator delete(__p[0]);
    v8 = v9;
  }
  if ( v8 )
    return v8 + 5;
  else
    return nullptr;
}
