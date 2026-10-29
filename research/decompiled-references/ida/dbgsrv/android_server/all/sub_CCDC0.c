/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CCDC0
// Address: 0x00000000000CCDC0

//----- (00000000000CCDC0) ----------------------------------------------------
__int64 __fastcall sub_CCDC0(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // x8
  int v5; // w10

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 )
    return 4294967294LL;
  if ( *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  if ( !a2 )
    return 0;
  if ( a2 < 0 )
  {
    *(_QWORD *)(v3 + 80) = 0;
    *(_DWORD *)(v3 + 88) = 0;
    return 0;
  }
  else if ( a2 <= 16 )
  {
    v5 = *(_DWORD *)(v3 + 88);
    if ( (unsigned int)(v5 + a2) <= 0x20 )
    {
      *(_QWORD *)(v3 + 80) += (a3 & ~(unsigned int)(-1LL << a2)) << v5;
      *(_DWORD *)(v3 + 88) = v5 + a2;
      return 0;
    }
    else
    {
      return 4294967294LL;
    }
  }
  else
  {
    return 4294967294LL;
  }
}
