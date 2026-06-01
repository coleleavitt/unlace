__int64 __fastcall sub_688850(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rbx
  void *v9; // rdi
  void *v10; // rdi

  v5 = a1 + 344;
  v6 = a4;
  if ( a3 )
  {
    v5 = a1 + 344;
    if ( sub_7BEA80(a1 + 344, *a1, a3, -1, 83) < 0 )
    {
      v9 = *(void **)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)(a3 + 8) = 0;
        qfree(v9);
        *(_QWORD *)a3 = 0;
        *(_QWORD *)(a3 + 16) = 0;
      }
    }
  }
  if ( (int)v6 >= (int)sub_7BE710(v5, *a1, -2, 65) )
    return 0xFFFFFFFFLL;
  if ( a2 && sub_7BEA80(v5, *a1, a2, v6, 83) < 0 )
  {
    v10 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v10);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  return sub_7BE710(v5, *a1, v6, 65);
}
