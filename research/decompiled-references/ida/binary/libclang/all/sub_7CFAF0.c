void __fastcall sub_7CFAF0(_DWORD *a1)
{
  bool v1; // cc

  v1 = a1[16] <= 1u;
  *(_QWORD *)a1 = &off_49F6C40;
  if ( !v1 )
    sub_69F740((__int64)(a1 + 16));
  *(_QWORD *)a1 = &off_47D9B58;
  sub_792DA0(a1);
  operator delete(a1, 0x78u);
}

