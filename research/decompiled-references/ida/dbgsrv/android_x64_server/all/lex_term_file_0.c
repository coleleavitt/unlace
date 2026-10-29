/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_term_file_0
// Address: 0x0000000000082130

//----- (0000000000082130) ----------------------------------------------------
__int64 __fastcall lex_term_file_0(__int64 a1, int a2)
{
  FILE **v3; // r14
  void **v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax

  if ( a2 )
    sub_81940(a1, 0, 0);
  if ( *(_QWORD *)(a1 + 256) )
  {
    v3 = (FILE **)(a1 + 272);
    v4 = (void **)(a1 + 280);
    do
    {
      if ( *v3 )
        qfclose(*v3);
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
    v4 = (void **)(a1 + 280);
    v3 = (FILE **)(a1 + 272);
  }
  qfree(*v4);
  *v4 = nullptr;
  if ( *v3 )
    qfclose(*v3);
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_BYTE *)(a1 + 128) = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( !result )
      break;
    v7 = result - 1;
    v8 = *(_QWORD *)(a1 + 56) + 56 * v7;
    *(_QWORD *)a1 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v8 + 32);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v8 + 48);
    *(_QWORD *)(a1 + 64) = v7;
    sub_38490((char **)v8);
  }
  return result;
}
