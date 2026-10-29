/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024E10
// Address: 0x0000000100024E10

//----- (0000000100024E10) ----------------------------------------------------
__int64 __fastcall sub_100024E10(__int64 a1, __int64 a2)
{
  const char *v2; // r14
  size_t v3; // rax
  size_t v4; // r15
  size_t v5; // r12
  void *v6; // rdi

  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(const char **)(a1 + 8);
    if ( !v2 )
    {
      *(_BYTE *)a2 = 7;
      *(_OWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      return 0;
    }
  }
  else
  {
    v2 = _s1;
  }
  v3 = strlen(v2);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v3 )
  {
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve(a2 + 8, nullptr, v3 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v6;
    }
    *(_QWORD *)(a2 + 16) = v5;
    memmove(v6, v2, v4);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) = 0;
  }
  return 0;
}
