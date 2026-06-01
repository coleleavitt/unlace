/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add2
// Address: 0x00000000000C9A80

//----- (00000000000C9A80) ----------------------------------------------------
char __fastcall rangeset_t_add2(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  int v3; // ebp
  char v4; // cl
  int v5; // eax

  if ( !(16LL * *(_QWORD *)(a2 + 8)) )
    return 0;
  v2 = *(unsigned __int64 **)a2;
  v3 = 0;
  do
  {
    v5 = rangeset_t_add(a1, v2);
    v4 = v5;
    LOBYTE(v5) = 1;
    if ( !v4 )
      v5 = v3;
    v2 += 2;
    v3 = v5;
  }
  while ( v2 != (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  return v5 & 1;
}
