__int64 __fastcall sub_B8C360(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v2 && (v2 & 4) == 0 && (v3 = v1 & 0xFFFFFFFFFFFFFFF8LL, (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
  {
    if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0 )
      return *(_QWORD *)(v3 + 88);
  }
  else
  {
    if ( (v1 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v1 & 4) == 0 )
      BUG();
    v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    v3 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(*(_QWORD *)v5 + 28LL) & 0x7F) == 0 )
      return *(_QWORD *)(v3 + 88);
  }
  return *(_QWORD *)(sub_B8C2C0(v3) + 88);
}
