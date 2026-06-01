/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014AC0
// Address: 0x0000000100014AC0

//----- (0000000100014AC0) ----------------------------------------------------
__int64 __fastcall sub_100014AC0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // x21
  __int64 v5; // x24
  _QWORD *v6; // x26
  size_t v7; // x20
  const char *v8; // x23
  __int64 v9; // x28
  const char *v10; // x1
  void *v12; // x23
  _QWORD *v13; // x8

  v4 = (_QWORD *)*a1;
  v5 = a1[1];
  v6 = (_QWORD *)*a1;
  if ( 24 * v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 )
      v8 = *(const char **)a2;
    else
      v8 = &byte_100075A30;
    v9 = 24 * v5;
    v6 = (_QWORD *)*a1;
    while ( 1 )
    {
      v10 = v6[1] ? (const char *)*v6 : &byte_100075A30;
      if ( !strcmp(v8, v10) )
        break;
      v6 += 3;
      v9 -= 24;
      if ( !v9 )
        goto LABEL_15;
    }
  }
  if ( v6 != &v4[3 * v5] )
    return 0;
  v7 = *(_QWORD *)(a2 + 8);
LABEL_15:
  if ( v7 )
  {
    v12 = qalloc_or_throw(v7);
    memcpy(v12, *(const void **)a2, v7);
    v4 = (_QWORD *)*a1;
    v5 = a1[1];
  }
  else
  {
    v12 = nullptr;
  }
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v4 = qvector_reserve(a1, v4, v5 + 1, 0x18u);
    *a1 = v4;
    v5 = a1[1];
  }
  v13 = &v4[3 * v5];
  *v13 = v12;
  v13[1] = v7;
  v13[2] = v7;
  ++a1[1];
  return 1;
}
// 100075A30: using guessed type char byte_100075A30;
