__int64 __fastcall sub_B9BF20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 || (*(_BYTE *)(v2 + 10) & 0x20) == 0 || (v3 = sub_B95EB0(a1)) == 0 )
    BUG();
  if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x47 )
    v3 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 25;
  if ( (unsigned int)v6 > 1 )
  {
    v5 = sub_F63050(v5, a2, v6, v4);
    v7 = *(_QWORD *)(a1 + 128);
    if ( !v7 )
      return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 128);
    if ( !v7 )
      return 0;
  }
  if ( (*(_BYTE *)(v7 + 10) & 0x20) != 0 )
    return sub_B9BC80(a1, (*(_WORD *)(v5 + 20) >> 2) & 0x3F);
  return 0;
}
