__int64 __fastcall sub_B69650(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  int v4; // r8d
  __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = 0x7C0000FC0FFC01FFLL;
  while ( 1 )
  {
    v3 = *(_BYTE *)(a1 + 28) & 0x7F;
    v4 = (unsigned __int8)v3;
    if ( (unsigned __int8)v3 <= 0x3Eu )
    {
      if ( _bittest64(&v2, v3) )
      {
        v5 = sub_B69600(a1);
        if ( v5 )
        {
          v6 = *(_BYTE *)(v5 + 8) & 0x7F;
          if ( !v6 || v6 == 24 )
            return 0;
        }
      }
    }
    if ( (unsigned int)(v4 - 34) <= 5 )
    {
      v8 = sub_B53CF0(a1);
      goto LABEL_10;
    }
    if ( (unsigned int)(v4 - 59) <= 2 )
    {
      v8 = sub_B734F0(a1);
      if ( v8 )
        goto LABEL_11;
      goto LABEL_25;
    }
    if ( (unsigned int)(v4 - 40) <= 6 )
    {
      v8 = sub_B4FEA0(a1);
LABEL_10:
      if ( v8 )
        goto LABEL_11;
LABEL_25:
      LOBYTE(v3) = *(_BYTE *)(a1 + 28) & 0x7F;
      goto LABEL_26;
    }
    if ( (_BYTE)v3 == 65 )
    {
      v8 = *(_QWORD *)(a1 + 88);
      if ( !v8 )
        goto LABEL_17;
LABEL_11:
      if ( *(_QWORD *)(v8 + 56) )
        return (unsigned int)sub_B99A70() + 1;
      v9 = (*(_BYTE *)(a1 + 28) & 0x7F) - 59;
LABEL_13:
      if ( v9 > 2 )
        goto LABEL_17;
      goto LABEL_14;
    }
LABEL_26:
    if ( (_BYTE)v3 != 61 )
      break;
    if ( *(_QWORD *)(a1 + 184) )
      return (unsigned int)sub_B99A70() + 1;
LABEL_14:
    v10 = *(_QWORD *)(a1 + 128);
    if ( v10 && (*(_BYTE *)(v10 + 10) & 0x20) != 0 && (*(_BYTE *)(v10 + 104) & 3) == 1 && (v13 = sub_B733B0(a1)) != 0 )
    {
      a1 = v13;
    }
    else
    {
LABEL_17:
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      v12 = *(_QWORD *)(a1 + 16) & 4LL;
      if ( (*(_WORD *)(a1 + 30) & 0x180) != 0 )
      {
        if ( v12 )
          v11 = (_QWORD *)v11[1];
      }
      else if ( v12 )
      {
        v11 = (_QWORD *)*v11;
      }
      a1 = sub_B68470((__int64)v11);
    }
  }
  if ( (_BYTE)v3 != 42 )
  {
    v9 = (unsigned __int8)v3 - 59;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_17;
  return (unsigned int)sub_B99A70() + 1;
}

