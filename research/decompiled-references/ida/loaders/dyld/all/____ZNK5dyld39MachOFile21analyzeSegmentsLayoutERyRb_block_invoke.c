__int64 __fastcall ___ZNK5dyld39MachOFile21analyzeSegmentsLayoutERyRb_block_invoke(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x9
  __int64 v8; // x10
  unsigned __int64 v9; // x9
  __int64 v10; // x10

  result = _platform_strcmp(*(const char **)(a2 + 40), "__PAGEZERO");
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a2 + 52) & 2) != 0 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      v6 = *(_QWORD *)(a2 + 24);
      if ( v5 != v6 )
      {
        *(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = 1;
        v5 = v6;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 24);
    }
    if ( !v5 )
      *(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = 1;
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a1[5] + 8LL);
    if ( v7 < *(_QWORD *)(v8 + 24) )
    {
      *(_QWORD *)(v8 + 24) = v7;
      v7 = *(_QWORD *)(a2 + 16);
      v5 = *(_QWORD *)(a2 + 24);
    }
    v9 = v5 + v7;
    v10 = *(_QWORD *)(a1[6] + 8LL);
    if ( v9 > *(_QWORD *)(v10 + 24) )
    {
      *(_QWORD *)(v10 + 24) = v9;
      v5 = *(_QWORD *)(a2 + 24);
    }
    *(_QWORD *)(*(_QWORD *)(a1[7] + 8LL) + 24LL) += v5;
  }
  return result;
}
