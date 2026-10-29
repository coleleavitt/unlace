/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048070
// Address: 0x0000000100048070

//----- (0000000100048070) ----------------------------------------------------
void __fastcall sub_100048070(__int64 a1, int a2)
{
  signed __int64 v3; // r14
  void *v4; // rdi
  char *v5; // rax

  v3 = *(_QWORD *)(a1 + 8) - a2;
  if ( v3 > 1 )
  {
    v5 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v3 )
    {
      v5 = (char *)qvector_reserve(a1, *(void **)a1, v3, 1u);
      *(_QWORD *)a1 = v5;
    }
    *(_QWORD *)(a1 + 8) = v3;
    v5[v3 - 1] = 0;
  }
  else
  {
    v4 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
}
