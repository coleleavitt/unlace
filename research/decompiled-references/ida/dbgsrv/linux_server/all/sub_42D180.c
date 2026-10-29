/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D180
// Address: 0x000000000042D180

//----- (000000000042D180) ----------------------------------------------------
__int64 __fastcall sub_42D180(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax

  v2 = sub_43CF90(a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v5 = v4;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v4 )
    {
      v7 = v4 + 1;
      v8 = sub_481540(a2 + 8, nullptr, v4 + 1, 1u);
      *(_QWORD *)(a2 + 16) = v7;
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v8, v3, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
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
