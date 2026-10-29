__int64 __fastcall sub_79BA50(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  bool v8; // al
  unsigned int v9; // ebp
  char v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // al

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned __int8)v2 <= 0x3Cu )
  {
    v3 = 0x1F00003F03FF01FFLL;
    if ( _bittest64(&v3, v2) )
    {
      v4 = sub_79AC10(a1);
      return sub_79B8A0(v4);
    }
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = ((v6 >> 2) & 1) == 0;
  if ( (*(_WORD *)(a1 + 30) & 0x980) != 0 )
  {
    if ( !v8 )
      v7 = (_QWORD *)v7[1];
  }
  else if ( !v8 )
  {
    v7 = (_QWORD *)*v7;
  }
  v9 = sub_79B8A0((unsigned __int64)v7);
  if ( !(_BYTE)v9 )
  {
    v10 = *(_BYTE *)(a1 + 28);
    v11 = v10 & 0x7F;
    if ( (unsigned int)(v11 - 66) <= 6 )
      return 1;
    if ( (unsigned int)(v11 - 32) > 5 )
    {
      if ( (unsigned int)(v11 - 57) > 2 )
      {
        if ( (unsigned int)(v11 - 38) > 6 )
        {
          if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x3F )
          {
            v12 = *(_QWORD *)(a1 + 88);
            if ( !v12 )
              return v9;
            goto LABEL_16;
          }
LABEL_21:
          v14 = v10 & 0x7F;
          if ( v14 == 59 )
          {
            v13 = *(_QWORD *)(a1 + 184);
          }
          else
          {
            if ( v14 != 40 )
              return v9;
            v13 = *(_QWORD *)(a1 + 144);
          }
          goto LABEL_17;
        }
        v12 = sub_77CBA0(a1);
      }
      else
      {
        v12 = sub_7A47A0(a1);
      }
    }
    else
    {
      v12 = sub_780E20(a1);
    }
    if ( v12 )
    {
LABEL_16:
      v13 = *(_QWORD *)(v12 + 56);
LABEL_17:
      LOBYTE(v9) = v13 != 0;
      return v9;
    }
    v10 = *(_BYTE *)(a1 + 28);
    goto LABEL_21;
  }
  return v9;
}

