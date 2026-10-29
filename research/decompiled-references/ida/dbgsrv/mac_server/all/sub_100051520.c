/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051520
// Address: 0x0000000100051520

//----- (0000000100051520) ----------------------------------------------------
__int64 __fastcall sub_100051520(__int64 a1, __int64 a2, const char **a3)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rax
  const char *v6; // rcx

  if ( a2 )
  {
    v3 = a2 - 1;
    result = 0xFFFFFFFFLL;
    if ( v3 < *(_QWORD *)(a1 + 112) )
    {
      v5 = *(_QWORD *)(a1 + 104) + 120 * v3;
      a3[3] = *(const char **)v5;
      a3[5] = (const char *)*(unsigned int *)(v5 + 8);
      if ( *(_QWORD *)(v5 + 24) )
        v6 = *(const char **)(v5 + 16);
      else
        v6 = _s1;
      *a3 = v6;
      a3[6] = (const char *)*(unsigned int *)(v5 + 40);
      a3[9] = (const char *)*(unsigned int *)(v5 + 44);
      a3[1] = *(const char **)(v5 + 56);
      a3[7] = *(const char **)(v5 + 64);
      return 0;
    }
  }
  else
  {
    *(_OWORD *)(a3 + 7) = 0;
    *(_OWORD *)(a3 + 5) = 0;
    *(_OWORD *)(a3 + 3) = 0;
    *(_OWORD *)(a3 + 1) = 0;
    a3[9] = nullptr;
    *a3 = &_s;
    return 0;
  }
  return result;
}
