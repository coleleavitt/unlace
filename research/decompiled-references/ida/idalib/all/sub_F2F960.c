__int64 __fastcall sub_F2F960(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) <= (unsigned __int64)v4 )
  {
    sub_227BA10(v3, 32);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 32;
  }
  v5 = *(_QWORD *)(a2 + 72);
  if ( v5 )
  {
    v6 = sub_B8C330(a2);
    sub_E90250(v5, *(_QWORD *)(a1 + 1096), (const __m128i *)(v6 + 17464), 0, 1);
  }
  return sub_B86360(*(_QWORD *)(a1 + 1096), *(_QWORD *)(a2 + 40));
}
