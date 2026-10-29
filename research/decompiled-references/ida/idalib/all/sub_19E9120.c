__int64 __fastcall sub_19E9120(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  char v5; // al
  __int64 v8; // rdx
  char v9; // al
  bool v11; // al

  v4 = a1 + 16;
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v5 == 47 )
  {
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  if ( (v5 == 11 || v5 == 34) && sub_19E8320(a4, a3, "nil", 3u) )
  {
    *(_QWORD *)a1 = v4;
    *(_WORD *)(a1 + 16) = 26990;
    *(_BYTE *)(a1 + 18) = 108;
    *(_QWORD *)(a1 + 8) = 3;
    *(_BYTE *)(a1 + 19) = 0;
    return a1;
  }
  if ( !sub_F58100(a2) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_BYTE *)(v8 + 16);
    if ( v9 == 13 )
    {
      if ( ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B4 )
        goto LABEL_16;
      if ( (*(_BYTE *)(*(_QWORD *)(a4 + 232) + 1LL) & 8) != 0 || sub_19E8320(a4, a3, "false", 5u) )
      {
        *(_QWORD *)a1 = v4;
        *(_DWORD *)(a1 + 16) = 1936482662;
        *(_BYTE *)(a1 + 20) = 101;
        *(_QWORD *)(a1 + 8) = 5;
        *(_BYTE *)(a1 + 21) = 0;
        return a1;
      }
      v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    if ( v9 == 33 || v9 == 42 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a4 + 232) + 1LL) & 0x10) != 0 )
      {
        *(_QWORD *)a1 = v4;
        *(_DWORD *)(a1 + 16) = 1819047278;
        *(_WORD *)(a1 + 20) = 29808;
        *(_BYTE *)(a1 + 22) = 114;
        *(_QWORD *)(a1 + 8) = 7;
        *(_BYTE *)(a1 + 23) = 0;
        return a1;
      }
      if ( sub_19E8320(a4, a3, "NULL", 4u) )
      {
        *(_QWORD *)a1 = v4;
        strcpy((char *)(a1 + 16), "NULL");
        *(_QWORD *)(a1 + 8) = 4;
        return a1;
      }
    }
LABEL_16:
    if ( (unsigned __int8)sub_F57EE0(a2) )
    {
      *(_QWORD *)a1 = v4;
      strcpy((char *)(a1 + 16), "'\\0'");
      *(_QWORD *)(a1 + 8) = 4;
    }
    else if ( (unsigned __int8)sub_F57F20(a2) )
    {
      *(_QWORD *)a1 = v4;
      *(_DWORD *)(a1 + 16) = 811345740;
      *(_BYTE *)(a1 + 20) = 39;
      *(_QWORD *)(a1 + 8) = 5;
      *(_BYTE *)(a1 + 21) = 0;
    }
    else if ( sub_F57F90(a2) )
    {
      *(_QWORD *)a1 = v4;
      *(_DWORD *)(a1 + 16) = 811345781;
      *(_BYTE *)(a1 + 20) = 39;
      *(_QWORD *)(a1 + 8) = 5;
      *(_BYTE *)(a1 + 21) = 0;
    }
    else
    {
      v11 = sub_F57FC0(a2);
      *(_QWORD *)a1 = v4;
      if ( v11 )
      {
        *(_DWORD *)(a1 + 16) = 811345749;
        *(_BYTE *)(a1 + 20) = 39;
        *(_QWORD *)(a1 + 8) = 5;
        *(_BYTE *)(a1 + 21) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 1;
        *(_WORD *)(a1 + 16) = 48;
      }
    }
    return a1;
  }
  *(_QWORD *)a1 = v4;
  *(_WORD *)(a1 + 16) = 11824;
  *(_BYTE *)(a1 + 18) = 48;
  *(_QWORD *)(a1 + 8) = 3;
  *(_BYTE *)(a1 + 19) = 0;
  return a1;
}
