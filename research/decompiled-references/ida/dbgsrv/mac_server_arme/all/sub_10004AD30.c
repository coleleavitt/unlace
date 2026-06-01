/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AD30
// Address: 0x000000010004AD30

//----- (000000010004AD30) ----------------------------------------------------
__int64 __fastcall sub_10004AD30(__int64 a1, __int64 a2, char **a3)
{
  __int64 v3; // x8
  char *v4; // x9

  if ( a2 )
  {
    if ( (unsigned __int64)(a2 - 1) >= *(_QWORD *)(a1 + 112) )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 104) + 120 * (a2 - 1);
      a3[3] = *(char **)v3;
      a3[5] = (char *)*(unsigned int *)(v3 + 8);
      if ( *(_QWORD *)(v3 + 24) )
        v4 = *(char **)(v3 + 16);
      else
        v4 = &byte_10007AE40;
      *a3 = v4;
      a3[6] = (char *)*(unsigned int *)(v3 + 40);
      a3[9] = (char *)*(unsigned int *)(v3 + 44);
      a3[1] = *(char **)(v3 + 56);
      a3[7] = *(char **)(v3 + 64);
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
    *a3 = &byte_1000931E5;
    return 0;
  }
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
