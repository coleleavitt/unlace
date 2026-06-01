/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D3C0
// Address: 0x000000000042D3C0

//----- (000000000042D3C0) ----------------------------------------------------
__int64 __fastcall sub_42D3C0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  size_t v9; // r13
  void *v10; // rax

  v3 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  v4 = sub_43D030(a1, v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = strlen(v4);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v7 = v6;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v6 )
    {
      v9 = v6 + 1;
      v10 = sub_481540(a2 + 8, nullptr, v6 + 1, 1u);
      *(_QWORD *)(a2 + 16) = v9;
      *(_QWORD *)(a2 + 8) = v10;
      memmove(v10, v5, v7);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v7) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
}
