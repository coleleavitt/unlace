/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_file_0
// Address: 0x0000000000087870

//----- (0000000000087870) ----------------------------------------------------
__int64 __fastcall lex_init_file_0(__int64 a1, const char *a2)
{
  __int64 *v3; // r15
  FILE *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // rax
  FILE *v8; // rax

  if ( *(_QWORD *)(a1 + 256) )
  {
    v3 = (__int64 *)(a1 + 208);
    do
    {
      v4 = *(FILE **)(a1 + 272);
      if ( v4 )
        qfclose(v4);
      qfree(*(void **)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0;
      v5 = *(_QWORD *)(a1 + 248);
      v6 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v5 + 40 * (v6 - 1) + 8);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v5 + 40 * (v6 - 1) + 32);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)(v5 + 40 * (v6 - 1));
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v5 + 40 * (v6 - 1) + 36);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v5 + 40 * (v6 - 1) + 16);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v5 + 40 * (v6 - 1) + 24);
      if ( !v6 )
        break;
      *(_QWORD *)(a1 + 256) = v6 - 1;
    }
    while ( v6 != 1 );
  }
  else
  {
    v3 = (__int64 *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = sub_814A0;
  *v3 = a1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_QWORD *)(a1 + 324) = 0;
  if ( !a2 )
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 2;
  }
  qfree(*(void **)(a1 + 280));
  v7 = qstrdup(a2);
  *(_QWORD *)(a1 + 280) = v7;
  if ( !v7 )
    return get_qerrno();
  v8 = fopenRT(v7);
  *(_QWORD *)(a1 + 272) = v8;
  if ( !v8 )
    return get_qerrno();
  if ( *(_BYTE *)(a1 + 504) )
    return sub_81940(a1, 0, 0);
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
