/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F120
// Address: 0x000000014001F120

//----- (000000014001F120) ----------------------------------------------------
__int64 __fastcall sub_14001F120(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rbx
  __int64 v6; // rdi

  v2 = a1[2];
  v3 = (_BYTE *)a1[1];
  v6 = v2 - 1;
  if ( !v2 )
    v6 = 0;
  for ( ; v6; --v6 )
  {
    *v3 = tolower((unsigned __int8)*v3);
    ++v3;
  }
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}
