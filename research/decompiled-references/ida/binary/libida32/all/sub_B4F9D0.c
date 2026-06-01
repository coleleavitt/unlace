__int64 __fastcall sub_B4F9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // edx
  char v9; // al
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax

  if ( (*(_BYTE *)(a1 + 97) & 1) != 0 )
    goto LABEL_2;
  v9 = (*(_BYTE *)(a1 + 97) >> 1) & 3;
  if ( v9 == 2 )
  {
    v14 = sub_EC8B80(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL);
    v12 = v14;
    v6 = HIDWORD(v14);
    goto LABEL_14;
  }
  if ( v9 == 3 )
  {
    v10 = sub_B4F900(a1);
    if ( v10 )
    {
      v11 = sub_EC8B80(v10);
      v12 = v11;
      v6 = HIDWORD(v11);
LABEL_14:
      if ( v12 && (_DWORD)v6 )
        goto LABEL_7;
    }
  }
LABEL_2:
  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v4 = *(_QWORD *)v4;
    if ( (*(_BYTE *)(v4 + 8) & 0x7F) != 0x12 )
      return sub_B4E170(a1, a2, v4, a4);
  }
  else if ( (*(_BYTE *)(v4 + 8) & 0x7F) != 0x12 )
  {
    return sub_B4E170(a1, a2, v4, a4);
  }
  v6 = *(unsigned int *)(a1 + 24);
LABEL_7:
  v7 = *(_QWORD *)(a1 + 56);
  if ( (v7 & 4) != 0 && (v13 = v7 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v13 + 16)) )
    v8 = *(_DWORD *)(**(_QWORD **)(v13 + 24) + 8LL);
  else
    v8 = *(_DWORD *)(a1 + 64);
  return (v6 << 32) | v8;
}

