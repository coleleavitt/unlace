__int64 __fastcall sub_B8F1C0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi

  v4 = *a1;
  v5 = *(void **)(*a1 + 32);
  if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v5 > 9u )
  {
    qmemcpy(v5, "namespace ", 10);
    *(_QWORD *)(v4 + 32) += 10LL;
  }
  else
  {
    v4 = sub_22581D0(*a1, "namespace ", 10);
  }
  sub_B4EFB0(a2, v4);
  v6 = *(_QWORD *)(v4 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v6) > 2 )
  {
    *(_BYTE *)(v6 + 2) = 32;
    *(_WORD *)v6 = 15648;
    *(_QWORD *)(v4 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(v4, " = ", 3);
  }
  v7 = *(_QWORD *)(a2 + 72);
  v8 = *a1;
  if ( v7 )
  {
    sub_E6C510(v7, v8, a1 + 1, 0, 1);
    v8 = *a1;
  }
  return sub_B4EFB0(*(_QWORD *)(a2 + 88), v8);
}

