/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063BF0
// Address: 0x0000000140063BF0

//----- (0000000140063BF0) ----------------------------------------------------
__int64 __fastcall sub_140063BF0(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  __int64 v5; // rcx

  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
  {
    if ( !(unsigned int)sub_140064520(*(_QWORD *)(a1 + 8)) )
      return sub_140064580(*(_QWORD *)(a1 + 8));
    return -1;
  }
  if ( a3 )
  {
    v4 = a3 - 1;
    if ( !v4 )
    {
      *(_QWORD *)(a1 + 24) += a2;
      return *(_QWORD *)(a1 + 24);
    }
    if ( v4 == 1 )
    {
      v5 = a2 + *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) = v5;
      return v5;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a2;
  }
  return *(_QWORD *)(a1 + 24);
}
