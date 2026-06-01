/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_file
// Address: 0x0000000000082570

//----- (0000000000082570) ----------------------------------------------------
__int64 __fastcall lex_init_file(__int64 a1, char *a2)
{
  __int64 *v4; // x21
  FILE *v5; // x0
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // x10
  __int64 v9; // x0
  pthread_mutex_t *v10; // x0
  FILE *v11; // x0
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7

  v4 = (__int64 *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 256) )
  {
    do
    {
      v5 = *(FILE **)(a1 + 272);
      if ( v5 )
        qfclose(v5);
      qfree(*(void **)(a1 + 280));
      v7 = *(_QWORD *)(a1 + 248);
      v6 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(a1 + 280) = 0;
      v8 = v7 + 40 * (v6 - 1);
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v8 + 8);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v8 + 32);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)v8;
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v8 + 36);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v8 + 24);
      if ( !v6 )
        break;
      *(_QWORD *)(a1 + 256) = v6 - 1;
    }
    while ( v6 != 1 );
  }
  *(_QWORD *)(a1 + 200) = sub_7CAE4;
  *v4 = a1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  if ( !a2 )
  {
    v9 = set_qerrno(1u);
    *(_DWORD *)__errno(v9) = 2;
  }
  qfree(*(void **)(a1 + 280));
  v10 = qstrdup(a2);
  *(_QWORD *)(a1 + 280) = v10;
  if ( !v10 )
    return get_qerrno();
  v11 = fopenRT((const char *)v10);
  *(_QWORD *)(a1 + 272) = v11;
  if ( !v11 )
    return get_qerrno();
  if ( *(_BYTE *)(a1 + 672) )
    return sub_7CEC8(a1, 0, 0, v12, v13, v14, v15, v16);
  return 0;
}
// 82678: variable 'v12' is possibly undefined
// 82678: variable 'v13' is possibly undefined
// 82678: variable 'v14' is possibly undefined
// 82678: variable 'v15' is possibly undefined
// 82678: variable 'v16' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
