char __fastcall sub_33D280(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  int v4; // eax
  void *v5; // r13
  bool v6; // al
  void *v7; // r15
  int v8; // eax
  bool v9; // al
  __int64 v11; // rdx
  __int64 v12; // rsi

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    LOBYTE(v3) = sub_1848D40(qword_1C7F2C0, a1, a2);
  }
  else if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v3 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, a2) >> 31;
  }
  else
  {
    LOBYTE(v3) = *(_DWORD *)a1 < *(_DWORD *)a2;
  }
  if ( (_BYTE)v3 )
    goto LABEL_5;
  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, a2) )
    {
LABEL_9:
      LOBYTE(v4) = 0;
      return v4;
    }
  }
  else if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
  {
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0 )
    v6 = (unsigned int)sub_182C7B0(v5, a1 + 16, a2 + 16) == 0;
  else
    v6 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16);
  if ( !v6 )
    goto LABEL_9;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0
    || *(_DWORD *)(a1 + 48) != 1
    || (*(_BYTE *)(a2 + 52) & 1) != 0
    || *(_DWORD *)(a2 + 48) != 1 )
  {
    if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 32, a2 + 32) )
      goto LABEL_5;
  }
  else
  {
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 36) & 1) == 0 && (*(_BYTE *)(a2 + 36) & 1) == 0 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( v8 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_26;
LABEL_5:
      LOBYTE(v4) = 1;
      return v4;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 32, a2 + 32) < 0 )
      goto LABEL_5;
  }
  v7 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (*(_BYTE *)(a2 + 36) & 1) != 0 )
  {
    v9 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 32, a2 + 32) == 0;
    goto LABEL_27;
  }
  v8 = *(_DWORD *)(a1 + 32);
LABEL_26:
  v9 = v8 == *(_DWORD *)(a2 + 32);
LABEL_27:
  if ( !v9 )
    goto LABEL_9;
  if ( !((*(_BYTE *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(a2 + 52) & 1) != 0
       ? (unsigned int)sub_182C7B0(v7, a1 + 48, a2 + 48) == 0
       : *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48)) )
    goto LABEL_9;
  v11 = a2 + 64;
  v12 = a1 + 64;
  if ( (*(_BYTE *)(a1 + 84) & 1) != 0
    || *(_DWORD *)(a1 + 80) != 1
    || (*(_BYTE *)(a2 + 84) & 1) != 0
    || *(_DWORD *)(a2 + 80) != 1 )
  {
    LOBYTE(v4) = sub_1848D40(qword_1C7F2C0, v12, v11);
  }
  else if ( (*(_BYTE *)(a1 + 68) & 1) != 0 || (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    return (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v11) >> 31;
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(a1 + 64) < *(_DWORD *)(a2 + 64);
  }
  return v4;
}

