/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA150
// Address: 0x00000000000EA150

//----- (00000000000EA150) ----------------------------------------------------
__int64 __fastcall sub_EA150(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  unsigned __int8 *v3; // x0
  int v4; // w8
  __int64 v6; // x9

  if ( *(_DWORD *)(a2 + 28) != -1 )
  {
    v2 = *(unsigned int *)(a2 + 24);
    if ( *(_QWORD *)(a1 + 24) > v2 )
      goto LABEL_3;
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = v6;
  if ( !v6 )
    return 0;
LABEL_3:
  v3 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 16) + 8 * v2);
  v4 = v3[11];
  if ( v4 == 2 )
    return (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v3 + 16LL))(v3);
  else
    return v4 == 0;
}
