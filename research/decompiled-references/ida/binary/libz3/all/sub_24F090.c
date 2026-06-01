__int64 __fastcall sub_24F090(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  void *v3; // r12
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  result = *(_QWORD *)(a1 + 3000);
  if ( !result )
  {
    v2 = sub_186B270(8u);
    v4[0] = 0;
    sub_16FC590(v2, a1 + 1624, a1 + 2272, v4, 0);
    v3 = *(void **)(a1 + 3000);
    if ( (void *)v2 != v3 )
    {
      if ( v3 )
      {
        sub_16FCBC0(*(_QWORD *)(a1 + 3000));
        sub_186B220(v3);
      }
      *(_QWORD *)(a1 + 3000) = v2;
    }
    sub_18572D0(v4);
    return *(_QWORD *)(a1 + 3000);
  }
  return result;
}

