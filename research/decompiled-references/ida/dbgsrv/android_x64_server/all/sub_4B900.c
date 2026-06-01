/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B900
// Address: 0x000000000004B900

//----- (000000000004B900) ----------------------------------------------------
__int64 __fastcall sub_4B900(__int64 a1, __int64 a2, const void *a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r12
  char *v9; // rdi

  result = 0;
  if ( a2 == 14 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( a3 && (v6 = strlen((const char *)a3)) != 0 )
    {
      v7 = v6;
      v8 = v6 + 1;
      if ( *(_QWORD *)(v5 + 16) >= v6 + 1 )
      {
        v9 = *(char **)v5;
      }
      else
      {
        v9 = (char *)qvector_reserve(v5, *(char **)v5, v6 + 1, 1u);
        *(_QWORD *)v5 = v9;
      }
      *(_QWORD *)(v5 + 8) = v8;
      memmove(v9, a3, v7);
      *(_BYTE *)(*(_QWORD *)v5 + v7) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
    }
    return 1;
  }
  return result;
}
