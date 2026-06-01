bool __fastcall sub_B996F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
    return 0;
  v3 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    BUG();
  v6 = *(_QWORD *)(v5 + 64);
  if ( !v6 || (*(_BYTE *)(v6 + 10) & 0x20) == 0 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
  if ( (unsigned int)v8 > 1 )
    v7 = sub_F63050(v7, a2, v8, v4);
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11;
}
