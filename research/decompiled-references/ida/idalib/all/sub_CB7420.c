__int64 __fastcall sub_CB7420(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int8 v6; // cl
  _QWORD *v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( **(_BYTE **)a1 )
    return 1;
  v1 = **(_QWORD **)(a1 + 8);
  v2 = *(_BYTE *)(v1 + 28) & 0x7F;
  if ( v2 != 40 && v2 != 46 )
    return 1;
  v3 = *(_QWORD *)(v1 + 16);
  v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 & 4) != 0 )
  {
    v4 = *(_QWORD *)(v4 + 8);
    if ( v4 )
      goto LABEL_6;
    return 1;
  }
  if ( !v4 )
    return 1;
LABEL_6:
  v6 = *(_BYTE *)(sub_B8EAA0(v4) + 8) & 0x7F;
  if ( v6 > 0x12u )
  {
    if ( ((v6 + 94) & 0x7Fu) > 5 )
      return 1;
  }
  else if ( ((1LL << v6) & 0x40182) == 0 )
  {
    return 1;
  }
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *v8;
  if ( (*(_BYTE *)(*v8 + 96LL) & 7) != 2
    && ((*(_BYTE *)(*v8 + 96LL) & 7) != 0 || ((*(_BYTE *)(*v8 + 96LL) >> 3) & 3) != 2) )
  {
    return 1;
  }
  if ( ((*(_BYTE *)(v9 + 28) + 85) & 0x7D) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v10 = *(_QWORD *)(v10 + 8);
    v11 = *(_BYTE *)(sub_B8EAA0(v10) + 8) & 0x7F;
    if ( !v11 || v11 == 24 )
      return 1;
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x2B )
    {
      v12 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
        v12 = *(_QWORD *)v12;
      if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) <= 3 )
        return 1;
    }
    v8 = *(_QWORD **)(a1 + 8);
    v9 = *v8;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14[0] = v9 & 0xFFFFFFFFFFFFFFFBLL;
  return sub_D000D0(v13, *v8, v14);
}
