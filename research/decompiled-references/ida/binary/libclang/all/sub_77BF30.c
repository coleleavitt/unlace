__int64 __fastcall sub_77BF30(__int64 a1)
{
  unsigned __int8 v1; // al
  _BYTE *v3; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v1 = *(_BYTE *)(a1 + 97);
  if ( (v1 & 1) != 0 )
    goto LABEL_2;
  v9 = (v1 >> 1) & 3;
  if ( v9 == 2 )
  {
    v11 = sub_AC7B80(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL);
    v5 = HIDWORD(v11);
    goto LABEL_14;
  }
  if ( v9 == 3 )
  {
    v10 = sub_77BC00(a1);
    if ( v10 )
    {
      v11 = sub_AC7B80(v10);
      v5 = HIDWORD(v11);
LABEL_14:
      if ( (_DWORD)v11 && (_DWORD)v5 )
        goto LABEL_7;
    }
  }
LABEL_2:
  v3 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v3 + 8LL) & 0x7F) != 0x10 )
      return sub_779400(a1);
  }
  else if ( (v3[8] & 0x7F) != 0x10 )
  {
    return sub_779400(a1);
  }
  v5 = *(unsigned int *)(a1 + 24);
LABEL_7:
  v6 = *(_QWORD *)(a1 + 56);
  if ( (v6 & 4) != 0 && (v7 = v6 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v7 + 16)) )
    v8 = *(unsigned int *)(**(_QWORD **)(v7 + 24) + 8LL);
  else
    v8 = *(unsigned int *)(a1 + 64);
  return (v5 << 32) | v8;
}

