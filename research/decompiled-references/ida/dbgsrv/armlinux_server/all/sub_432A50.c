/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432A50
// Address: 0x0000000000432A50

//----- (0000000000432A50) ----------------------------------------------------
__int64 __fastcall sub_432A50(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 result; // x0
  __int64 v5; // x3
  int v6; // w4

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    result = sub_43E590(v3, *(const char **)(a1 + 40));
    if ( result )
      goto LABEL_3;
LABEL_8:
    if ( *(_QWORD *)(a1 + 48) )
      sub_486A58(0, *(char **)(a1 + 40));
    else
      sub_486A58(0, (char *)&qword_4B2D48);
    return sub_4869C8(1536);
  }
  result = sub_43E590(v3, (const char *)&qword_4B2D48);
  if ( !result )
    goto LABEL_8;
LABEL_3:
  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_DWORD *)(result + 52);
  LODWORD(result) = v6;
  do
  {
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * (int)result) + 48LL);
    if ( *(_DWORD *)(v5 + 52) == (_DWORD)result )
      return sub_4869C8(1537);
  }
  while ( (_DWORD)result );
  *(_DWORD *)(v5 + 48) = v6;
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
