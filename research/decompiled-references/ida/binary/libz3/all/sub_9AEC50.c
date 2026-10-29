__int64 __fastcall sub_9AEC50(__int64 a1, char a2, __int64 a3)
{
  void *v4; // r14
  char v5; // al
  char v6; // bp
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  __int64 result; // rax
  int v11; // eax
  int v12; // eax

  v4 = qword_1C7F2C0;
  v5 = (4 * (a2 & 1)) | *(_BYTE *)(a1 + 88) & 0xFB;
  *(_BYTE *)(a1 + 88) = v5;
  if ( a2 )
  {
    sub_27B950((__int64)v4, a1 + 16, (int *)(a1 + 56));
    v6 = *(_BYTE *)(a1 + 88) & 1;
    goto LABEL_7;
  }
  if ( (v5 & 3) != 0 )
  {
    v6 = 0;
    if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
    {
      sub_182C690(v4, a1 + 16, a1 + 56);
      if ( (*(_BYTE *)(a1 + 76) & 1) == 0 )
        goto LABEL_5;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v7;
      if ( (*(_BYTE *)(a1 + 76) & 1) == 0 )
      {
LABEL_5:
        v8 = *(_DWORD *)(a1 + 72);
        *(_BYTE *)(a1 + 36) &= ~1u;
        *(_DWORD *)(a1 + 32) = v8;
LABEL_6:
        sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 16, a3, a1 + 16);
        goto LABEL_7;
      }
    }
    sub_182C690(v4, a1 + 32, a1 + 72);
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
  {
    sub_182C690(v4, a1 + 16, a1 + 56);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v11;
  }
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(v4, a1 + 32, a1 + 72);
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72);
    *(_BYTE *)(a1 + 36) &= ~1u;
    *(_DWORD *)(a1 + 32) = v12;
  }
  v6 = 1;
  sub_89ABF0((__int64)qword_1C7F2C0, a1 + 16, a3, a1 + 16);
LABEL_7:
  v9 = v6 & 1;
  result = v9 | *(_BYTE *)(a1 + 48) & 0xFEu;
  *(_BYTE *)(a1 + 48) = v9 | *(_BYTE *)(a1 + 48) & 0xFE;
  return result;
}

