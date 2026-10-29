void __fastcall sub_F2A610(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax

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
  sub_F2A310(a1, a2, 1);
}
