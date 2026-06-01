/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FE40
// Address: 0x000000010000FE40

//----- (000000010000FE40) ----------------------------------------------------
__int64 __fastcall sub_10000FE40(__int64 a1, off_t a2, unsigned int a3)
{
  const char *v5; // rax
  char *v6; // r13
  FILE *v7; // rax
  FILE *v8; // r12
  size_t v9; // rbx
  unsigned int v10; // r15d
  __int64 errdesc; // rax
  const char *v12; // rdi
  _QWORD *v14; // rax
  void *v15; // rdi
  const char *v16; // [rsp+8h] [rbp-1038h] BYREF
  _BYTE __ptr[4096]; // [rsp+10h] [rbp-1030h] BYREF

  if ( !*(_QWORD *)(a1 + 464) )
    return 0;
  LODWORD(v5) = qtmpnam(nullptr, 0);
  v6 = (char *)v5;
  v7 = fopenWB(v5);
  if ( !v7 )
  {
    errdesc = get_errdesc(v6, 0xFFFFFFFF);
    v10 = 0;
    sub_100010070((int)"%s", errdesc);
    return v10;
  }
  v8 = v7;
  qlseek(*(_QWORD *)(a1 + 48), a2, 0);
  while ( (int)a3 > 0 )
  {
    v9 = 4096;
    if ( a3 < 0x1000 )
      v9 = a3;
    if ( qlread(*(_QWORD *)(a1 + 48), __ptr, v9) == v9 )
    {
      a3 -= v9;
      if ( qfwrite(v8, __ptr, v9) == v9 )
        continue;
    }
    qfclose(v8);
    goto LABEL_13;
  }
  qfclose(v8);
  if ( a3 )
  {
LABEL_13:
    v10 = 0;
    v12 = v6;
LABEL_14:
    qunlink(v12);
    return v10;
  }
  v16 = nullptr;
  qstrncpy(__ptr, (__int64)v6, 4096);
  v10 = 0;
  if ( !(***(unsigned __int8 (__fastcall ****)(_QWORD, _BYTE *, __int64, const char **, _QWORD))(a1 + 464))(
          *(_QWORD *)(a1 + 464),
          __ptr,
          4096,
          &v16,
          0) )
  {
LABEL_25:
    v12 = v6;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a1 + 56) == 1 )
    close_linput(*(void **)(a1 + 48));
  v14 = open_linput(v16, 0);
  *(_QWORD *)(a1 + 48) = v14;
  if ( v14 )
  {
    *(_BYTE *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 96) = 0;
    v15 = *(void **)(a1 + 72);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v15);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    if ( (unsigned __int8)sub_10000FA10(a1) )
      v10 = sub_100010140(a1, 0, 0, 0);
    else
      v10 = 0;
    goto LABEL_25;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4E3Cu);
  return sub_100010070(20028);
}
// 10000FE8A: variable 'v5' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
