/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D240
// Address: 0x000000000042D240

//----- (000000000042D240) ----------------------------------------------------
__int64 __fastcall sub_42D240(__int64 a1, __int64 a2)
{
  const void *v2; // r12
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // r13
  void *v6; // rax

  if ( *(_QWORD *)(a1 + 16) && (v2 = *(const void **)(a1 + 8)) != nullptr )
  {
    v3 = strlen(*(const char **)(a1 + 8));
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v4 = v3;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v3 )
    {
      v5 = v3 + 1;
      v6 = sub_481540(a2 + 8, nullptr, v3 + 1, 1u);
      *(_QWORD *)(a2 + 16) = v5;
      *(_QWORD *)(a2 + 8) = v6;
      memmove(v6, v2, v4);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) = 0;
      return 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  return 0;
}
