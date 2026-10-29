void __fastcall sub_F2F500(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    sub_227BA10(v3, 32);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 32;
  }
  v5 = sub_B99AD0(a2);
  sub_F2A6D0(a1, v5);
}
