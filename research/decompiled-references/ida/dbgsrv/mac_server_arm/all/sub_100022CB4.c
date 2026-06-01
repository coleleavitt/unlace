/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022CB4
// Address: 0x0000000100022CB4

//----- (0000000100022CB4) ----------------------------------------------------
void __fastcall sub_100022CB4(_QWORD **a1, __int64 a2)
{
  __int64 v3; // x8
  char *v4; // x1
  bool v5; // cf
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x2
  __int64 *v8; // x20
  __int64 v9; // x8
  size_t v10; // x21
  _QWORD *v11; // x1
  _QWORD *v12; // x8
  char *v13; // x8
  char *v14; // x23
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x8
  size_t v17; // x20
  _QWORD *v18; // x8
  _QWORD *v19; // x9
  char *v20; // x9
  char *v21; // x22
  unsigned __int64 v22; // x21
  __int64 v23; // x24
  _QWORD *v24; // x0
  void *v25; // [xsp+0h] [xbp-50h] BYREF
  __int64 v26; // [xsp+8h] [xbp-48h]
  __int64 v27; // [xsp+10h] [xbp-40h]

  if ( *(_BYTE *)(a2 + 40) == 1 )
  {
    v25 = nullptr;
    v26 = 0;
    v27 = 0;
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
      v4 = *(char **)a2;
    else
      v4 = &byte_100075A30;
    v5 = v3 != 0;
    v6 = v3 - 1;
    if ( v5 )
      v7 = v6;
    else
      v7 = 0;
    if ( (utf8_utf16(&v25, v4, v7) & 1) == 0 )
    {
      if ( under_debugger != 1 )
        goto LABEL_34;
      while ( 1 )
      {
        __break(1u);
LABEL_34:
        interr(274);
      }
    }
    if ( v26 )
      v8 = (__int64 *)v25;
    else
      v8 = qword_100075BA8;
    v9 = v26 - 1;
    if ( !v26 )
      v9 = 0;
    v10 = 2 * v9;
    v11 = *a1;
    v12 = a1[1];
    v5 = v12 != nullptr;
    v13 = (char *)v12 - 1;
    if ( v5 )
      v14 = v13;
    else
      v14 = nullptr;
    v15 = (unsigned __int64)&v14[v10 + 1];
    if ( (unsigned __int64)a1[2] < v15 )
    {
      v11 = qvector_reserve(a1, v11, (unsigned __int64)&v14[v10 + 1], 1u);
      *a1 = v11;
    }
    a1[1] = (_QWORD *)v15;
    v14[v10 + (_QWORD)v11] = 0;
    memmove(&v14[(_QWORD)*a1], v8, v10);
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 )
      v17 = v16 - 1;
    else
      v17 = 0;
    if ( v16 >= 2 )
    {
      v18 = *a1;
      v19 = a1[1];
      v5 = v19 != nullptr;
      v20 = (char *)v19 - 1;
      if ( v5 )
        v21 = v20;
      else
        v21 = nullptr;
      v22 = (unsigned __int64)&v21[v17 + 1];
      if ( (unsigned __int64)a1[2] < v22 )
      {
        v23 = a2;
        v24 = qvector_reserve(a1, *a1, (unsigned __int64)&v21[v17 + 1], 1u);
        a2 = v23;
        v18 = v24;
        *a1 = v24;
      }
      a1[1] = (_QWORD *)v22;
      v21[v17 + (_QWORD)v18] = 0;
      memcpy(&v21[(_QWORD)*a1], *(const void **)a2, v17);
    }
  }
}
// 100075A30: using guessed type char byte_100075A30;
// 100075BA8: using guessed type __int64 qword_100075BA8[223];
// 10009D90D: using guessed type char under_debugger;
