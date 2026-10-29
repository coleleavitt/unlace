/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DFA0
// Address: 0x000000000004DFA0

//----- (000000000004DFA0) ----------------------------------------------------
__int64 __fastcall sub_4DFA0(__int64 a1, const char *a2)
{
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  char *v6; // rax

  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = v3 - 1;
    if ( !v3 )
      v4 = 0;
    v5 = v4 + v2 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v5 )
    {
      v6 = *(char **)a1;
    }
    else
    {
      v6 = (char *)qvector_reserve(a1, *(char **)a1, v4 + v2 + 1, 1u);
      *(_QWORD *)a1 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
    v6[v4 + v2] = 0;
    memmove((void *)(*(_QWORD *)a1 + v4), a2, v2);
  }
  return a1;
}
