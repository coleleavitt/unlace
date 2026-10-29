/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B130
// Address: 0x000000010001B130

//----- (000000010001B130) ----------------------------------------------------
__int64 __fastcall sub_10001B130(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r14
  bool v4; // cf
  size_t v5; // rax
  const void *v6; // r15
  void *v7; // rax

  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v3 = 0;
    v4 = v2 == 0;
    v5 = v2 - 1;
    if ( !v4 )
      v3 = v5;
    if ( v4 || v5 == 0 )
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      v6 = *(const void **)a2;
      v7 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) <= v3 )
      {
        v7 = qvector_reserve(a1, *(void **)a1, v3 + 1, 1u);
        *(_QWORD *)a1 = v7;
      }
      *(_QWORD *)(a1 + 8) = v3 + 1;
      memmove(v7, v6, v3);
      *(_BYTE *)(*(_QWORD *)a1 + v3) = 0;
    }
  }
  return a1;
}
