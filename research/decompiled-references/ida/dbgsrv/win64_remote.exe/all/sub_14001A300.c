/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A300
// Address: 0x000000014001A300

//----- (000000014001A300) ----------------------------------------------------
void __fastcall sub_14001A300(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  if ( a2 )
  {
    v5 = a2 + 1;
    if ( (unsigned __int64)(a2 + 1) <= *(_QWORD *)(a1 + 8) )
    {
      if ( a2 + 1 != *(_QWORD *)(a1 + 8) && (unsigned __int64)(a2 + 1) < *(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 8) = v5;
    }
    else
    {
      if ( v5 > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v5, 1u);
      memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v5 - *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = v5;
    }
    *(_BYTE *)(a2 + *(_QWORD *)a1) = 0;
  }
  else
  {
    v4 = *(void **)a1;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j_free(v4);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
}
