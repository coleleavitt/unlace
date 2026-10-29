/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053E80
// Address: 0x0000000100053E80

//----- (0000000100053E80) ----------------------------------------------------
__int64 __fastcall sub_100053E80(__int64 a1, __int64 a2, const void *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  unsigned __int64 v6; // r12
  void *v7; // rax

  if ( a3 && (v4 = strlen((const char *)a3)) != 0 )
  {
    v5 = v4;
    v6 = v4 + 1;
    v7 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) < v6 )
    {
      v7 = qvector_reserve(a2, *(void **)a2, v6, 1u);
      *(_QWORD *)a2 = v7;
    }
    *(_QWORD *)(a2 + 8) = v6;
    memmove(v7, a3, v5);
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return 0;
}
