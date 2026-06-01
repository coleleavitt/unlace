/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045830
// Address: 0x0000000100045830

//----- (0000000100045830) ----------------------------------------------------
__int64 __fastcall sub_100045830(__int64 a1, int a2)
{
  FILE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  FILE *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( a2 )
    sub_100045060(a1, 0, 0);
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
  qfree(*(void **)(a1 + 280));
  *(_QWORD *)(a1 + 280) = 0;
  v7 = *(FILE **)(a1 + 272);
  if ( v7 )
    qfclose(v7);
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_BYTE *)(a1 + 128) = 0;
  for ( result = *(_QWORD *)(a1 + 64); result; result = *(_QWORD *)(a1 + 64) )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = 56 * result;
    *(_QWORD *)a1 = *(_QWORD *)(v9 + v10 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v9 + v10 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v9 + v10 - 8);
    sub_100044BA0((__int64 *)(a1 + 56));
  }
  return result;
}
