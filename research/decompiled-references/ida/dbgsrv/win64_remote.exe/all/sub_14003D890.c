/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D890
// Address: 0x000000014003D890

//----- (000000014003D890) ----------------------------------------------------
void __fastcall sub_14003D890(__int64 a1, int a2)
{
  signed __int64 v3; // rdi
  void *v4; // rcx

  v3 = *(_QWORD *)(a1 + 8) - a2;
  if ( v3 > 1 )
  {
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v3, 1u);
    *(_QWORD *)(a1 + 8) = v3;
    *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
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
