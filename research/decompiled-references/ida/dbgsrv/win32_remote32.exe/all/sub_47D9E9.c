/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D9E9
// Address: 0x0047D9E9

//----- (0047D9E9) --------------------------------------------------------
int *__usercall sub_47D9E9@<eax>(int a1@<ebx>, int *a2, void **a3)
{
  int *v3; // esi

  if ( (dword_4B6858 & a2[212]) != 0 && a2[19] )
  {
    v3 = (int *)a2[18];
  }
  else
  {
    sub_47A78B(5);
    v3 = (int *)a2[18];
    a1 = (int)a3;
    if ( v3 != *a3 )
    {
      if ( v3 && !_InterlockedExchangeAdd(v3, 0xFFFFFFFF) && v3 != dword_4B62D8 )
        sub_479216(v3);
      v3 = (int *)*a3;
      a2[18] = (int)*a3;
      _InterlockedIncrement(v3);
    }
    sub_47A7D3(5);
  }
  if ( !v3 )
    sub_467F38(a1, a2, 0);
  return v3;
}
// 4B62D8: using guessed type int dword_4B62D8[22];
// 4B6858: using guessed type int dword_4B6858;
