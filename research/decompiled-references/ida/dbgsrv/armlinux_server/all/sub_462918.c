/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462918
// Address: 0x0000000000462918

//----- (0000000000462918) ----------------------------------------------------
__int64 __fastcall sub_462918(__int64 a1, __int64 a2, __int64 **a3)
{
  unsigned __int64 v3; // x1
  __int64 v4; // x3
  __int64 *v5; // x0

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 >= *(_QWORD *)(a1 + 112) )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 104) + 120 * v3;
      a3[3] = *(__int64 **)v4;
      a3[5] = (__int64 *)*(unsigned int *)(v4 + 8);
      if ( *(_QWORD *)(v4 + 24) )
        v5 = *(__int64 **)(v4 + 16);
      else
        v5 = &qword_4B2D48;
      *a3 = v5;
      a3[6] = (__int64 *)*(unsigned int *)(v4 + 40);
      a3[9] = (__int64 *)*(unsigned int *)(v4 + 44);
      a3[1] = *(__int64 **)(v4 + 56);
      a3[7] = *(__int64 **)(v4 + 64);
      return 0;
    }
  }
  else
  {
    a3[1] = nullptr;
    a3[2] = nullptr;
    *a3 = (__int64 *)&byte_4B31F0;
    a3[3] = nullptr;
    a3[4] = nullptr;
    a3[5] = nullptr;
    a3[6] = nullptr;
    a3[7] = nullptr;
    a3[8] = nullptr;
    a3[9] = nullptr;
    return 0;
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
