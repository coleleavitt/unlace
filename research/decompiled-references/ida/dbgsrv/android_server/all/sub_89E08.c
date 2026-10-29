/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89E08
// Address: 0x0000000000089E08

//----- (0000000000089E08) ----------------------------------------------------
__int64 __fastcall sub_89E08(__int64 a1, __int64 a2, char **a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10
  char *v6; // x10
  __int64 v8; // x8

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( (unsigned __int64)(a2 - 1) >= *(_QWORD *)(a1 + 112) )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 104);
      v5 = v4 + 120 * v3;
      a3[3] = *(char **)v5;
      a3[5] = (char *)*(unsigned int *)(v5 + 8);
      if ( *(_QWORD *)(v5 + 24) )
        v6 = *(char **)(v4 + 120 * v3 + 16);
      else
        v6 = &byte_F154B;
      *a3 = v6;
      v8 = v4 + 120 * v3;
      a3[6] = (char *)*(unsigned int *)(v8 + 40);
      a3[9] = (char *)*(unsigned int *)(v8 + 44);
      a3[1] = *(char **)(v8 + 56);
      a3[7] = *(char **)(v8 + 64);
      return 0;
    }
  }
  else
  {
    a3[9] = nullptr;
    *(_OWORD *)(a3 + 7) = 0u;
    *(_OWORD *)(a3 + 5) = 0u;
    *(_OWORD *)(a3 + 3) = 0u;
    *(_OWORD *)(a3 + 1) = 0u;
    *a3 = "";
    return 0;
  }
}
// F154B: using guessed type char byte_F154B;
