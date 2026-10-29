_QWORD *__fastcall sub_67BDC0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v8; // rax

  v4 = sub_15D1F10(a3);
  if ( (unsigned __int8)sub_1673B10(a2 + 144, v4) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
    v8 = sub_67B850(*(__int64 **)(a2 + 16), a3);
    sub_1374250(a1, v7, v8);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    *a1 = 0;
    a1[1] = v5;
  }
  return a1;
}

