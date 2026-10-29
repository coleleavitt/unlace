/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CD040
// Address: 0x00000000000CD040

//----- (00000000000CD040) ----------------------------------------------------
__int64 __fastcall sub_CD040(__int64 a1, unsigned __int64 a2)
{
  int v2; // r12d
  int v3; // r13d
  unsigned __int64 v5; // rbp
  int v6; // edi
  int v7; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned int v11; // r15d
  unsigned __int64 v13; // rbp
  int v14; // edi
  int v15; // edi
  int pipedes[2]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5);
      if ( v6 != -1 )
        close(v6);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v5);
      if ( v7 != -1 )
        close(v7);
      ++v5;
    }
    while ( v5 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  qfree(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = qcalloc(a2, 4u);
  *(_QWORD *)(a1 + 24) = qcalloc(*(_QWORD *)(a1 + 8), 4u);
  if ( !*(_QWORD *)(a1 + 8) )
    return 0;
  v8 = 0;
  do
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v8) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v8++) = -1;
    v9 = *(_QWORD *)(a1 + 8);
  }
  while ( v8 < v9 );
  if ( !v9 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( !pipe(pipedes) )
    {
      v2 = pipedes[0];
      v3 = pipedes[1];
      goto LABEL_17;
    }
    v11 = *(_DWORD *)__errno(pipedes);
    if ( v11 )
      break;
LABEL_17:
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v10) = v2;
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v10++) = v3;
    if ( v10 >= *(_QWORD *)(a1 + 8) )
      return 0;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v13 = 0;
    do
    {
      v14 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v13);
      if ( v14 != -1 )
        close(v14);
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v13);
      if ( v15 != -1 )
        close(v15);
      ++v13;
    }
    while ( v13 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  qfree(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return v11;
}
// CD14E: variable 'v2' is possibly undefined
// CD156: variable 'v3' is possibly undefined
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
