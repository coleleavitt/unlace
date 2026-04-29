__int64 __fastcall sub_23CF30(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v6; // rdx
  int *v7; // rdi

  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
    return 0;
  v2 = a1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( v3 > 0x41 )
      return 0;
    if ( v3 <= 0x12 )
    {
      if ( v3 != 1 && (v3 != 16 || !(unsigned __int8)sub_23CF30(*(_QWORD *)(v2 + 40), (unsigned int)a2)) )
        return 0;
      goto LABEL_12;
    }
    v4 = 1LL << ((unsigned __int8)v3 - 19);
    if ( (v4 & 0x7F0007) == 0 )
      break;
LABEL_12:
    v2 = *(_QWORD *)(v2 + 32);
LABEL_13:
    if ( (*(_BYTE *)(v2 + 56) & 4) != 0 )
      return 0;
  }
  if ( (v4 & 0x9000E000) != 0 )
  {
    v2 = *(_QWORD *)(v2 + 24);
    goto LABEL_13;
  }
  if ( v3 != 65 )
    return 0;
  v6 = *(_QWORD *)(v2 + 24);
  v7 = (int *)(*(_QWORD *)(v6 + 432) + 104LL * *(int *)(v2 + 32));
  if ( a2 <= v7[22] )
    return 0;
  return sub_1EB9B0(v7, *(_QWORD **)(v6 + 1504));
}
