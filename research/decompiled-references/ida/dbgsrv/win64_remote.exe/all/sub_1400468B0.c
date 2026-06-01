/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400468B0
// Address: 0x00000001400468B0

//----- (00000001400468B0) ----------------------------------------------------
__int64 __fastcall sub_1400468B0(__int64 a1, __int64 a2, const char **a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rax

  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 < *(_QWORD *)(a1 + 112) )
    {
      v5 = *(_QWORD *)(a1 + 104) + 120 * v4;
      a3[3] = *(const char **)v5;
      a3[5] = (const char *)*(unsigned int *)(v5 + 8);
      v6 = Str1;
      if ( *(_QWORD *)(v5 + 24) )
        v6 = *(const char **)(v5 + 16);
      *a3 = v6;
      a3[6] = (const char *)*(unsigned int *)(v5 + 40);
      a3[9] = (const char *)*(unsigned int *)(v5 + 44);
      a3[1] = *(const char **)(v5 + 56);
      a3[7] = *(const char **)(v5 + 64);
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    a3[1] = nullptr;
    a3[2] = nullptr;
    a3[3] = nullptr;
    a3[4] = nullptr;
    a3[5] = nullptr;
    a3[6] = nullptr;
    a3[7] = nullptr;
    a3[8] = nullptr;
    a3[9] = nullptr;
    *a3 = pNodeName;
    return 0;
  }
}
