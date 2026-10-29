__int64 __fastcall sub_B6A600(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned __int8 v8; // al
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned __int8)v2 <= 0x3Eu )
  {
    v3 = 0x7C0000FC0FFC01FFLL;
    if ( _bittest64(&v3, v2) )
    {
      v10 = sub_B69600(a1);
      if ( v10 )
        return sub_B6A440(v10);
    }
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = (v4 >> 2) & 1;
  if ( (*(_WORD *)(a1 + 30) & 0x980) != 0 )
  {
    if ( v6 )
    {
      v7 = sub_B6A440(v5[1]);
      if ( (_BYTE)v7 )
        return v7;
      goto LABEL_6;
    }
  }
  else if ( v6 )
  {
    v5 = (_QWORD *)*v5;
  }
  v7 = sub_B6A440((unsigned __int64)v5);
  if ( (_BYTE)v7 )
    return v7;
LABEL_6:
  v8 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v8 - 68 <= 6 )
    return 1;
  if ( (unsigned int)v8 - 34 <= 5 )
  {
    v11 = sub_B53CF0(a1);
LABEL_17:
    if ( v11 )
    {
LABEL_18:
      v12 = *(_QWORD *)(v11 + 56);
      goto LABEL_19;
    }
    v8 = *(_BYTE *)(a1 + 28) & 0x7F;
    goto LABEL_23;
  }
  if ( (unsigned int)v8 - 59 <= 2 )
  {
    v11 = sub_B734F0(a1);
    goto LABEL_17;
  }
  if ( (unsigned int)v8 - 40 <= 6 )
  {
    v11 = sub_B4FEA0(a1);
    goto LABEL_17;
  }
  if ( v8 == 65 )
  {
    v11 = *(_QWORD *)(a1 + 88);
    if ( !v11 )
      return v7;
    goto LABEL_18;
  }
LABEL_23:
  if ( v8 == 61 )
  {
    v12 = *(_QWORD *)(a1 + 184);
  }
  else
  {
    if ( v8 != 42 )
      return v7;
    v12 = *(_QWORD *)(a1 + 144);
  }
LABEL_19:
  LOBYTE(v7) = v12 != 0;
  return v7;
}

