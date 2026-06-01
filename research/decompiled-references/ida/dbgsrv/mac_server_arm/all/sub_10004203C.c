/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004203C
// Address: 0x000000010004203C

//----- (000000010004203C) ----------------------------------------------------
__int64 __fastcall sub_10004203C(__int64 a1, char *a2)
{
  FILE *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  char *v8; // x0
  FILE *v9; // x0

  if ( *(_QWORD *)(a1 + 256) )
  {
    do
    {
      v4 = *(FILE **)(a1 + 272);
      if ( v4 )
        qfclose(v4);
      qfree(*(void **)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0;
      v5 = *(_QWORD *)(a1 + 256);
      v6 = *(_QWORD *)(a1 + 248) + 40 * v5;
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v6 - 32);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v6 - 8);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)(v6 - 40);
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v6 - 4);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v6 - 24);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v6 - 16);
      if ( !v5 )
        break;
      v7 = v5 - 1;
      *(_QWORD *)(a1 + 256) = v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a1 + 200) = sub_10003D860;
  *(_QWORD *)(a1 + 208) = a1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  if ( !a2 )
  {
    set_qerrno();
    *__error() = 2;
  }
  qfree(*(void **)(a1 + 280));
  v8 = qstrdup(a2);
  *(_QWORD *)(a1 + 280) = v8;
  if ( !v8 )
    return get_qerrno();
  v9 = fopenRT(v8);
  *(_QWORD *)(a1 + 272) = v9;
  if ( !v9 )
    return get_qerrno();
  if ( *(_BYTE *)(a1 + 608) == 1 )
    return sub_10003D96C(a1, 0, 0);
  return 0;
}
