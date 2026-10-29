__int64 __fastcall sub_16FE9F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  char v8; // dl
  char v9; // dl
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rdx
  int *v15; // rax
  int v16; // edx

  if ( !a2 )
    return 80;
  v2 = *(_QWORD *)(a2 + 16);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = (v2 >> 2) & 1;
  if ( !v5 )
  {
    v6 = *(_BYTE *)(v4 + 8) & 0x7F;
    if ( v6 > 0x12u )
      goto LABEL_4;
LABEL_14:
    if ( ((1LL << v6) & 0x40182) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
  v6 = *(_BYTE *)(v3[1] + 8LL) & 0x7F;
  if ( v6 <= 0x12u )
    goto LABEL_14;
LABEL_4:
  if ( ((v6 + 94) & 0x7Fu) <= 5 )
  {
LABEL_15:
    result = 34;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2D )
      return result;
    v12 = *(_QWORD *)(a2 + 40);
    if ( (v12 & 7) != 0 )
      return result;
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13 )
      return result;
    v14 = *(_DWORD **)(v13 + 16);
    if ( *v14 != 4 || v14[4] != 1684890463 )
      return result;
    return 80;
  }
LABEL_5:
  if ( v5 )
    v3 = (_QWORD *)*v3;
  v7 = *(_BYTE *)(sub_B8EAA0((__int64)v3) + 8) & 0x7F;
  v8 = *(_BYTE *)(a2 + 28);
  if ( ((v7 + 70) & 0x7Fu) <= 3 )
  {
    v9 = v8 & 0x7F;
LABEL_9:
    if ( v9 != 36 )
    {
      v10 = *(_QWORD *)(a2 + 40) & 7LL;
      if ( (_DWORD)v10 == 7 )
      {
        v15 = (int *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL);
        v16 = 3;
        if ( (unsigned int)*v15 <= 3 )
          v16 = *v15;
        LODWORD(v10) = v16 + 8;
        if ( (unsigned int)(v10 - 5) <= 1 )
          return 80;
      }
      else if ( (unsigned int)(v10 - 5) <= 1 )
      {
        return 80;
      }
      result = 35;
      if ( (_DWORD)v10 != 9 )
        return result;
    }
    return 80;
  }
  v9 = v8 & 0x7F;
  if ( (unsigned int)v7 - 19 <= 4 )
    goto LABEL_9;
  result = 65;
  if ( v9 != 33 )
    return 50;
  return result;
}
