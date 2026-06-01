unsigned __int64 __fastcall sub_8C6FC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
    return sub_6C4DA0(a2, *(_QWORD *)(a1 + 8), 1u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(v4 + 8);
  if ( (v5 & 7) != 0 || (v5 & 8) != 0 )
    return sub_B0CF30(v3, a2) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v4 & 0xFFFFFFFFFFFFFFF0LL;
}

