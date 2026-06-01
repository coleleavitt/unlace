/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F2E8
// Address: 0x000000010000F2E8

//----- (000000010000F2E8) ----------------------------------------------------
_QWORD *sub_10000F2E8()
{
  __int64 v0; // x0
  off_t v1; // x1
  int v2; // w2
  int v3; // w21
  __int64 v4; // x20
  off_t v5; // x23
  char *v6; // x19
  FILE *v7; // x0
  FILE *v8; // x22
  size_t v9; // x23
  _QWORD *v10; // x20
  __int64 v11; // x0
  void *v12; // x0
  char __ptr[4096]; // [xsp+18h] [xbp-1048h] BYREF

  v0 = __chkstk_darwin();
  if ( !*(_QWORD *)(v0 + 464) )
    return nullptr;
  v3 = v2;
  v4 = v0;
  v5 = v1;
  v6 = qtmpnam(nullptr, 0);
  v7 = fopenWB(v6);
  if ( !v7 )
  {
    get_errdesc(v6, -1);
    sub_10000F540();
    return nullptr;
  }
  v8 = v7;
  qlseek(*(_QWORD *)(v4 + 48), v5, 0);
  while ( v3 >= 1 )
  {
    if ( (unsigned int)v3 >= 0x1000 )
      v9 = 4096;
    else
      v9 = (unsigned int)v3;
    if ( qlread(*(_QWORD *)(v4 + 48), __ptr, v9) == v9 )
    {
      v3 -= v9;
      if ( qfwrite(v8, __ptr, v9) == v9 )
        continue;
    }
    qfclose(v8);
    goto LABEL_22;
  }
  qfclose(v8);
  if ( v3 )
    goto LABEL_22;
  qstrncpy(__ptr, (unsigned __int8 *)v6, 4096);
  if ( !(***(unsigned int (****)(void))(v4 + 464))() )
    goto LABEL_22;
  if ( *(_BYTE *)(v4 + 56) == 1 )
    close_linput(*(void **)(v4 + 48));
  v11 = open_linput(nullptr, 0);
  *(_QWORD *)(v4 + 48) = v11;
  if ( v11 )
  {
    *(_BYTE *)(v4 + 56) = 1;
    *(_QWORD *)(v4 + 96) = 0;
    v12 = *(void **)(v4 + 72);
    if ( v12 )
    {
      *(_QWORD *)(v4 + 80) = 0;
      qfree(v12);
      *(_QWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 88) = 0;
    }
    if ( (unsigned int)sub_10000EE5C(v4) )
    {
      v10 = sub_10000F5B0(v4, 0, 0, 0);
LABEL_23:
      qunlink(v6);
      return v10;
    }
LABEL_22:
    v10 = nullptr;
    goto LABEL_23;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(20028);
  return (_QWORD *)sub_10000F540();
}
// 10000F338: variable 'v2' is possibly undefined
// 10000F340: variable 'v1' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);
