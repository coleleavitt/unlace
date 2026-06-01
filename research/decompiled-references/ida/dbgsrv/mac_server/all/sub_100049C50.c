/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049C50
// Address: 0x0000000100049C50

//----- (0000000100049C50) ----------------------------------------------------
__int64 __fastcall sub_100049C50(__int64 a1, const char *a2)
{
  FILE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rax
  FILE *v8; // rax

  if ( *(_QWORD *)(a1 + 256) )
  {
    do
    {
      v3 = *(FILE **)(a1 + 272);
      if ( v3 )
        qfclose(v3);
      qfree(*(void **)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0;
      v4 = *(_QWORD *)(a1 + 248);
      v5 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(v4 + 40 * v5 - 32);
      *(_DWORD *)(a1 + 288) = *(_DWORD *)(v4 + 40 * v5 - 8);
      *(_QWORD *)(a1 + 280) = *(_QWORD *)(v4 + 40 * v5 - 40);
      *(_BYTE *)(a1 + 128) = *(_BYTE *)(v4 + 40 * v5 - 4);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(v4 + 40 * v5 - 24);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(v4 + 40 * v5 - 16);
      if ( !v5 )
        break;
      v6 = v5 - 1;
      *(_QWORD *)(a1 + 256) = v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 200) = sub_100044F70;
  *(_QWORD *)(a1 + 208) = a1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_QWORD *)(a1 + 324) = 0;
  if ( !a2 )
  {
    set_qerrno();
    *__error() = 2;
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
  if ( *(_BYTE *)(a1 + 568) == 1 )
    return sub_100045060(a1, 0, 0);
  return 0;
}
