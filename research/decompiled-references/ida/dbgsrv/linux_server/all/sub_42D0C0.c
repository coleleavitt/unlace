/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D0C0
// Address: 0x000000000042D0C0

//----- (000000000042D0C0) ----------------------------------------------------
__int64 __fastcall sub_42D0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r12
  size_t v10; // r13
  void *v11; // rax

  v5 = sub_43CFD0(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    v6 = v5;
    v7 = strlen(v5);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v8 = v7;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v7 )
    {
      v10 = v7 + 1;
      v11 = sub_481540(a2 + 8, nullptr, v7 + 1, 1u);
      *(_QWORD *)(a2 + 16) = v10;
      *(_QWORD *)(a2 + 8) = v11;
      memmove(v11, v6, v8);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v8) = 0;
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
