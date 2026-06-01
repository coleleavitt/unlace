__int64 __fastcall sub_AA59B0(__int64 a1, int a2)
{
  _QWORD **v2; // rbx
  __int64 result; // rax
  _QWORD **i; // r12
  _QWORD *v5; // rax
  void *v6; // [rsp+0h] [rbp-28h]
  int v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v2 = *(_QWORD ***)(a1 + 8664);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = sub_164ACB0(
                                               a2,
                                               *(_QWORD *)(a1 + 104),
                                               *v5,
                                               (int)a1 + 10384,
                                               1,
                                               0,
                                               v6,
                                               v7,
                                               v8) )
      v5 = *v2++;
  }
  return result;
}

