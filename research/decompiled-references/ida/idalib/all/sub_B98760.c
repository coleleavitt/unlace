unsigned __int64 __fastcall sub_B98760(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi

  v4 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v5 )
    v5 -= 64LL;
  v6 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 26 )
    v7 = sub_F63050(v7, a2, v2, v3);
  return sub_B98540(v7, v5);
}
