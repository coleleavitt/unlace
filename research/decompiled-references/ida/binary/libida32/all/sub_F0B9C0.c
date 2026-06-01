void __fastcall sub_F0B9C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rax

  sub_F068D0(a1, *(_QWORD *)(a2 + 48));
  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" depth ");
  v4 = sub_9717A0(v2, " depth ", v3);
  v5 = sub_2257BD0(v4, *(_DWORD *)(a2 + 68) & 0xFFFFF);
  v6 = j__strlen(" index ");
  v7 = sub_9717A0(v5, " index ", v6);
  sub_2257BD0(v7, *(_WORD *)(a2 + 70) >> 4);
  if ( *(_BYTE *)(a2 + 80) )
    sub_971800(*(_QWORD *)(a1 + 1096), " ...");
  sub_F07020(a1, a2);
}

