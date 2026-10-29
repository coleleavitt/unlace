/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000409FC
// Address: 0x00000001000409FC

//----- (00000001000409FC) ----------------------------------------------------
__int64 __fastcall sub_1000409FC(__int64 a1, char a2, void **a3)
{
  _BYTE *v6; // x9
  __int64 v7; // x23
  _QWORD *v8; // x1
  _QWORD *v9; // x8
  bool v10; // cf
  char *v11; // x8
  char *v12; // x24
  _BYTE *v13; // x9
  __int64 v14; // x25
  _QWORD *v15; // x1
  _QWORD *v16; // x8
  char *v17; // x8
  const char *v18; // x21
  size_t v19; // x0
  void *v20; // x22
  void *v21; // x23
  size_t v22; // x24
  __int64 **v23; // x0
  __int64 **v24; // x20
  __int16 v25; // w8
  void *__p[2]; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v27; // [xsp+10h] [xbp-50h]

  if ( (a2 & 1) == 0 )
  {
    a3[1] = nullptr;
    if ( (unsigned __int64)a3[2] <= 0x3FF )
      *a3 = qvector_reserve(a3, *a3, 0x400u, 1u);
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v6;
    v7 = (char)*v6;
    if ( (v7 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v7] & 0x500) != 0 || *v6 == 95 || *v6 == 36 )
    {
      v8 = *a3;
      v9 = a3[1];
      v10 = v9 != nullptr;
      v11 = (char *)v9 - 1;
      if ( v10 )
        v12 = v11;
      else
        v12 = nullptr;
      if ( a3[2] < v12 + 2 )
      {
        v8 = qvector_reserve(a3, v8, (unsigned __int64)(v12 + 2), 1u);
        *a3 = v8;
      }
      a3[1] = v12 + 2;
      v12[(_QWORD)v8] = v7;
      while ( 1 )
      {
        v12[(_QWORD)*a3 + 1] = 0;
        v13 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
        *(_QWORD *)(a1 + 8) = v13;
        v14 = (char)*v13;
        if ( (v14 < 0 || (_DefaultRuneLocale.__runetype[v14] & 0x500) == 0) && *v13 != 95 && *v13 != 36 )
          break;
        v15 = *a3;
        v16 = a3[1];
        v10 = v16 != nullptr;
        v17 = (char *)v16 - 1;
        if ( v10 )
          v12 = v17;
        else
          v12 = nullptr;
        if ( a3[2] < v12 + 2 )
        {
          v15 = qvector_reserve(a3, v15, (unsigned __int64)(v12 + 2), 1u);
          *a3 = v15;
        }
        a3[1] = v12 + 2;
        v12[(_QWORD)v15] = v14;
      }
    }
  }
  if ( (sub_10003FF10(a1, (char **)a3) & 1) != 0 )
    return 0;
  if ( (unsigned int)sub_10003FC0C(a1, (__int64)a3, __p) )
    return 0xFFFFFFFFLL;
  if ( LOBYTE(__p[0]) )
    return 1;
  if ( a3[1] )
    v18 = (const char *)*a3;
  else
    v18 = &byte_100075A30;
  v19 = strlen(v18);
  if ( v19 >= 0x7FFFFFFFFFFFFFF8LL )
    sub_100044FA8();
  v20 = (void *)v19;
  if ( v19 >= 0x17 )
  {
    if ( (v19 | 7) == 0x17 )
      v22 = 25;
    else
      v22 = (v19 | 7) + 1;
    v21 = operator new(v22);
    __p[1] = v20;
    v27 = v22 | 0x8000000000000000LL;
    __p[0] = v21;
  }
  else
  {
    HIBYTE(v27) = v19;
    v21 = __p;
    if ( !v19 )
      goto LABEL_42;
  }
  memmove(v21, v18, (size_t)v20);
LABEL_42:
  *((_BYTE *)v20 + (_QWORD)v21) = 0;
  v23 = sub_1000469B8((_QWORD *)(a1 + 88), (__int64)__p);
  if ( SHIBYTE(v27) < 0 )
  {
    v24 = v23;
    operator delete(__p[0]);
    v23 = v24;
  }
  if ( v23 )
    v25 = *((_WORD *)v23 + 20);
  else
    v25 = 2;
  *((_WORD *)a3 + 12) = v25;
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
