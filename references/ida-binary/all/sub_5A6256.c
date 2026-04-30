__int64 __fastcall sub_5A6256(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_5A5FDC(a1);
  sub_5A5FEA(a2, *(_QWORD *)(a1 + 32), v2);
  *(_QWORD *)(a1 + 32) = a2;
  return a1;
}
