/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FF80
// Address: 0x000000000040FF80

//----- (000000000040FF80) ----------------------------------------------------
__int64 __fastcall sub_40FF80(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 1224);
  v4 = a1 + 1216;
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v5 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      v7 = *(_QWORD *)(v3 + 24);
      if ( a2 <= *(_DWORD *)(v3 + 32) )
        break;
      v3 = *(_QWORD *)(v3 + 24);
      if ( !v7 )
        goto LABEL_7;
    }
    v5 = v3;
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v6 );
LABEL_7:
  if ( v4 == v5 || a2 < *(_DWORD *)(v5 + 32) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(v5 + 56) = 1;
  return 1;
}
