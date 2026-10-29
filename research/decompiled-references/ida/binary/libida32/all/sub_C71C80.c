unsigned __int64 __fastcall sub_C71C80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
    return sub_A4F2F0(a2, *(_QWORD *)(a1 + 8), 1u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v4 + 8) & 7LL | (*(__int64 *)(v4 + 8) >> 3) & 1 )
    return sub_F411C0(v3) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v4 & 0xFFFFFFFFFFFFFFF0LL;
}

