__int64 __fastcall TclInvokeStringCommand(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // ebp
  __int64 i; // r13
  __int64 v8; // rbx
  unsigned int v9; // ebx

  v5 = 0;
  for ( i = sub_4495F0(a2, 8LL * (a3 + 1)); v5 < (int)a3; *(_QWORD *)(i + 8 * v8) = sub_47B3B0(*(_QWORD *)(a4 + 8 * v8)) )
    v8 = v5++;
  *(_QWORD *)(i + 8LL * (int)a3) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), a2, a3, i);
  sub_449510(a2, i);
  return v9;
}

