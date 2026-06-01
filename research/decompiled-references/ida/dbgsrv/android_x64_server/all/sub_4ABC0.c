/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ABC0
// Address: 0x000000000004ABC0

//----- (000000000004ABC0) ----------------------------------------------------
__int64 __fastcall sub_4ABC0(__int64 a1, const void *a2, size_t a3)
{
  size_t v5; // r12
  void *v6; // rdi
  __int64 result; // rax

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a3 )
  {
    v5 = a3 + 1;
    if ( a3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve(a1, nullptr, a3 + 1, 1u);
      *(_QWORD *)a1 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v6, a2, a3);
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + a3) = 0;
  }
  return result;
}
