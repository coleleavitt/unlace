/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E874
// Address: 0x000000010003E874

//----- (000000010003E874) ----------------------------------------------------
void __fastcall sub_10003E874(__int64 a1, char *__s)
{
  _QWORD *v4; // x20
  size_t v5; // x0
  void *v6; // x22
  void *v7; // x23
  size_t v8; // x24
  __int64 **v9; // x0
  __int64 *v10; // x20
  _Unwind_Exception *v11; // x0
  _Unwind_Exception *v12; // x19
  void *__p[2]; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 v14; // [xsp+10h] [xbp-40h]

  if ( *(_BYTE *)(a1 + 608) == 1 )
  {
    if ( under_debugger != 1 )
    {
      interr(303);
      v12 = v11;
      if ( SHIBYTE(v14) < 0 )
      {
        operator delete(__p[0]);
        _Unwind_Resume(v12);
      }
      _Unwind_Resume(v11);
    }
    __break(1u);
LABEL_19:
    sub_100044FA8();
  }
  v4 = *(_QWORD **)(a1 + 560);
  v5 = strlen(__s);
  if ( v5 >= 0x7FFFFFFFFFFFFFF8LL )
    goto LABEL_19;
  v6 = (void *)v5;
  if ( v5 >= 0x17 )
  {
    if ( (v5 | 7) == 0x17 )
      v8 = 25;
    else
      v8 = (v5 | 7) + 1;
    v7 = operator new(v8);
    __p[1] = v6;
    v14 = v8 | 0x8000000000000000LL;
    __p[0] = v7;
    goto LABEL_10;
  }
  HIBYTE(v14) = v5;
  v7 = __p;
  if ( v5 )
LABEL_10:
    memcpy(v7, __s, (size_t)v6);
  *((_BYTE *)v6 + (_QWORD)v7) = 0;
  v9 = sub_1000459E4(v4, (__int64)__p);
  v10 = (__int64 *)v9;
  if ( SHIBYTE(v14) < 0 )
  {
    operator delete(__p[0]);
    if ( !v10 )
      return;
  }
  else if ( !v9 )
  {
    return;
  }
  sub_1000467D4(*(_QWORD **)(a1 + 560), v10);
}
// 10003E9B8: variable 'v11' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
