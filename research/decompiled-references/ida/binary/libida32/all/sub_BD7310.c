bool __fastcall sub_BD7310(__int64 a1, __int64 a2)
{
  bool result; // al
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 v6; // dx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  bool v13; // [rsp+1h] [rbp-29h]
  void *v14; // [rsp+2h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+Ah] [rbp-20h]

  result = 0;
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    return result;
  v3 = *(unsigned __int64 **)(a1 + 16);
  if ( (unsigned int)((__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v3) >> 3) != 1 )
    return result;
  v4 = *v3;
  if ( !*v3 )
    return result;
  while ( 1 )
  {
    v6 = *(_WORD *)v4 & 0x1FF;
    if ( v6 == 79 || ((v6 + 452) & 0x1FFu) <= 1 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      goto LABEL_6;
    }
    if ( v6 != 48 )
      break;
    v7 = *(_QWORD *)(v4 + 16);
    if ( (v7 & 4) != 0 )
    {
      v5 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      goto LABEL_6;
    }
    v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 == v4 )
      goto LABEL_13;
LABEL_7:
    v4 = v5;
  }
  if ( v6 == 116 )
  {
    v5 = *(_QWORD *)(v4 + 24);
LABEL_6:
    if ( v5 == v4 )
      goto LABEL_13;
    goto LABEL_7;
  }
LABEL_13:
  result = 0;
  if ( v6 == 52 )
  {
    v8 = *(void **)(v4 + 16);
    v9 = *(unsigned int *)(v4 + 24);
    v10 = (unsigned __int64)(v9 + 63) >> 6;
    if ( v10 > 1 )
    {
      sub_21E18D0(&v14, v9, v10, v8);
    }
    else
    {
      v15 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)v9 <= 0x40 )
      {
        v14 = v8;
        return v14 == nullptr;
      }
      sub_21E1730(&v14, v8, 0);
    }
    v11 = v15;
    if ( v15 <= 0x40 )
    {
      return v14 == nullptr;
    }
    else
    {
      v12 = v11 - sub_21E2A40(&v14);
      result = 0;
      if ( v12 <= 0x40 )
        result = *(_QWORD *)v14 == 0;
      if ( v14 )
      {
        v13 = result;
        operator delete[](v14);
        return v13;
      }
    }
  }
  return result;
}

