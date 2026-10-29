void __fastcall sub_F0C190(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  size_t v4; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  if ( *(_BYTE *)(a2 + 92) )
  {
    v3 = j__strlen(" cbuffer");
    sub_9717A0(v2, " cbuffer", v3);
  }
  else
  {
    v4 = j__strlen(" tbuffer");
    sub_9717A0(v2, " tbuffer", v4);
  }
  sub_F07020(a1, a2);
}

