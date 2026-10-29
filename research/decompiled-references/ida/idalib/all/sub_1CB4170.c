__int64 __fastcall sub_1CB4170(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  char v6; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  int v12; // edx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // al
  int v19; // edx

  v6 = a3 ^ 1;
  v8 = *(_QWORD **)(a2 + 8);
  v9 = &v8[*(unsigned int *)(a2 + 16)];
  while ( v9 != v8 )
  {
    v10 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_BYTE *)(v10 + 28) & 0x7F;
    v12 = v11;
    if ( (unsigned int)v11 - 53 <= 1 || ((v11 + 52) & 0x7Fu) <= 1 )
    {
      v10 = sub_B72ED0(*v8 & 0xFFFFFFFFFFFFFFF8LL);
      v11 = *(_BYTE *)(v10 + 28) & 0x7F;
      v12 = v11;
    }
    if ( (unsigned int)(v12 - 68) > 6 )
    {
      if ( (unsigned int)(v12 - 59) > 2 )
      {
        if ( v11 == 28 && a4 )
          return 1;
      }
      else if ( sub_B97450(v10) )
      {
        v14 = *(_QWORD *)(v10 + 16);
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v14 & 4) != 0 )
          v15 = *(_QWORD *)v15;
        if ( v15 )
          v15 -= 64LL;
        if ( sub_B97230(v15) )
        {
          v16 = sub_B97230(v15);
        }
        else
        {
          if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 60 > 1 )
            goto LABEL_18;
          v16 = sub_BBF290(v15);
        }
        if ( v16 )
          return 1;
      }
    }
    else if ( !v6 || v11 != 71 )
    {
      return 1;
    }
LABEL_18:
    if ( a5 )
    {
      v17 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = *(_BYTE *)(v17 + 28) & 0x7F;
      v19 = v18;
      if ( ((v18 + 52) & 0x7Fu) <= 1 || (unsigned int)v18 - 53 <= 1 )
        v19 = *(_BYTE *)(sub_B72ED0(v17) + 28) & 0x7F;
      if ( (unsigned int)(v19 - 34) <= 5 )
        return 1;
    }
    ++v8;
  }
  return 0;
}
