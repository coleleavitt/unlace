void __fastcall sub_F2F900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 v6; // rax

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    a2 = 32;
    sub_227BA10(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 32;
  }
  v6 = sub_F631C0(*(_QWORD *)(**(_QWORD **)(v2 + 64) & 0xFFFFFFFFFFFFFFF0LL), a2);
  sub_F2A6D0(a1, v6);
}
