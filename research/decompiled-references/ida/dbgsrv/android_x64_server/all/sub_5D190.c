/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D190
// Address: 0x000000000005D190

//----- (000000000005D190) ----------------------------------------------------
char __fastcall sub_5D190(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  const void *v3; // r13
  void *v4; // rax
  unsigned __int64 v5; // r12
  const void *v6; // rbp
  void *v7; // rax
  char result; // al

  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 < 2 )
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      v3 = *(const void **)a2;
      v4 = qvector_reserve(a1, nullptr, *(_QWORD *)(a2 + 8), 1u);
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v2;
      memmove(v4, v3, v2 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v2 - 1) = 0;
    }
    v5 = *(_QWORD *)(a2 + 32);
    if ( v5 < 2 )
    {
      *(_QWORD *)(a1 + 32) = 0;
    }
    else
    {
      v6 = *(const void **)(a2 + 24);
      v7 = *(void **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v5 )
      {
        v7 = qvector_reserve(a1 + 24, *(char **)(a1 + 24), *(_QWORD *)(a2 + 32), 1u);
        *(_QWORD *)(a1 + 24) = v7;
      }
      *(_QWORD *)(a1 + 32) = v5;
      memmove(v7, v6, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v5 - 1) = 0;
    }
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a1 + 92) = *(_BYTE *)(a2 + 92);
  *(_BYTE *)(a1 + 93) = *(_BYTE *)(a2 + 93);
  result = *(_BYTE *)(a2 + 94);
  *(_BYTE *)(a1 + 94) = result;
  return result;
}
