/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common2
// Address: 0x00000000000C9BA0

//----- (00000000000C9BA0) ----------------------------------------------------
char __fastcall rangeset_t_has_common2(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  unsigned __int64 *v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r8

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 0;
  v4 = (_QWORD *)*a1;
  v5 = *(unsigned __int64 **)a2;
  v6 = *(_QWORD *)a2 + 16 * v3;
  v7 = *(_QWORD *)(*a1 + 8LL);
  v8 = (__int64)&v4[2 * v2 - 2];
  while ( *v5 >= v7 || *v4 >= v5[1] )
  {
    while ( v7 <= *v5 )
    {
      if ( (_QWORD *)v8 == v4 )
        return 0;
      v7 = v4[3];
      v4 += 2;
    }
    while ( v5[1] <= *v4 )
    {
      v5 += 2;
      if ( (unsigned __int64 *)v6 == v5 )
        return 0;
    }
  }
  return 1;
}
