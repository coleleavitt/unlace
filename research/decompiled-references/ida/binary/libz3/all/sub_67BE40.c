_QWORD *__fastcall sub_67BE40(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v6; // r13
  __int64 v7; // rax

  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a2 + 8), a3) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
    v7 = sub_67B850(*(__int64 **)(a2 + 16), a3);
    sub_1374250(a1, v6, v7);
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 8);
    *a1 = 0;
    a1[1] = v4;
  }
  return a1;
}

