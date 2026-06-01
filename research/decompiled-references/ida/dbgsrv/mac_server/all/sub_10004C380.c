/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C380
// Address: 0x000000010004C380

//----- (000000010004C380) ----------------------------------------------------
void __fastcall sub_10004C380(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r15
  size_t v5; // r12
  void *v6; // rdi

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve(a1, nullptr, v3 + 1, 1u);
      *(_QWORD *)a1 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v6, a2, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  }
}
