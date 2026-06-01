/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E870
// Address: 0x000000010000E870

//----- (000000010000E870) ----------------------------------------------------
_QWORD *__fastcall sub_10000E870(__int64 a1, off_t a2, unsigned int a3)
{
  char *v6; // x19
  FILE *v7; // x0
  FILE *v8; // x22
  size_t v9; // x23
  _QWORD *v10; // x20
  __int64 v11; // x0
  void *v12; // x0
  const char *v14; // [xsp+10h] [xbp-1050h] BYREF
  char __ptr[4096]; // [xsp+18h] [xbp-1048h] BYREF

  if ( !*(_QWORD *)(a1 + 464) )
    return nullptr;
  v6 = qtmpnam(nullptr, 0);
  v7 = fopenWB(v6);
  if ( !v7 )
  {
    get_errdesc(v6, -1);
    sub_10000EA94();
    return nullptr;
  }
  v8 = v7;
  qlseek(*(_QWORD *)(a1 + 48), a2, 0);
  while ( (int)a3 >= 1 )
  {
    if ( a3 >= 0x1000 )
      v9 = 4096;
    else
      v9 = a3;
    if ( qlread(*(_QWORD *)(a1 + 48), __ptr, v9) == v9 )
    {
      a3 -= v9;
      if ( qfwrite(v8, __ptr, v9) == v9 )
        continue;
    }
    qfclose(v8);
    goto LABEL_22;
  }
  qfclose(v8);
  if ( a3 )
    goto LABEL_22;
  v14 = nullptr;
  qstrncpy(__ptr, (unsigned __int8 *)v6, 4096);
  if ( !(***(unsigned int (__fastcall ****)(_QWORD, char *, __int64, const char **, _QWORD))(a1 + 464))(
          *(_QWORD *)(a1 + 464),
          __ptr,
          4096,
          &v14,
          0) )
    goto LABEL_22;
  if ( *(_BYTE *)(a1 + 56) == 1 )
    close_linput(*(void **)(a1 + 48));
  v11 = open_linput(v14, 0);
  *(_QWORD *)(a1 + 48) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 96) = 0;
    v12 = *(void **)(a1 + 72);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v12);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    if ( (unsigned int)sub_10000E3F0(a1) )
    {
      v10 = sub_10000EB00(a1, 0, 0, 0);
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
  return (_QWORD *)sub_10000EA94();
}
// 10009D90D: using guessed type char under_debugger;
