__int64 __fastcall sub_98B8A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r12d
  void *v4; // r13
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  char v9; // al
  __int64 v10; // rsi
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( (v3 & 1) != 0 )
      return 0;
  }
  else
  {
    v3 = 0;
  }
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && *(_DWORD *)(a1 + 16) == 1 )
  {
    sub_182CBA0(qword_1C7F2C0, a2 + 16);
    *(_BYTE *)(a2 + 20) &= ~1u;
    *(_DWORD *)(a2 + 16) = 1;
    if ( (unsigned __int8)sub_1835B50(v4, a1, a2) )
      goto LABEL_13;
    return 0;
  }
  if ( !(unsigned __int8)sub_1835B50(qword_1C7F2C0, a1, a2) || !(unsigned __int8)sub_1835B50(v4, a1 + 16, a2 + 16) )
    return 0;
  v11[0] = 0;
  v11[1] = 0;
  sub_1832C70(v4, a2, a2 + 16, v11);
  if ( (v11[0] & 0x100000000LL) != 0 || LODWORD(v11[0]) != 1 )
  {
    sub_1833EB0(v4, a2, v11, a2);
    sub_1833EB0(v4, a2 + 16, v11, a2 + 16);
  }
  sub_182CBA0(v4, v11);
LABEL_13:
  if ( v3 )
  {
    v6 = *(__int64 **)(a1 + 32);
    v7 = 0;
    v8 = &v6[v3];
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = v7;
        v7 = *v6;
        if ( v10 )
          break;
LABEL_16:
        ++v6;
        v9 = 1;
        if ( v8 == v6 )
          return (v9 & 1) == 0;
      }
      if ( v10 != v7 )
      {
        if ( (v9 & 1) != 0 )
          return 0;
        goto LABEL_16;
      }
      ++v6;
      ++v9;
      if ( v8 == v6 )
        return (v9 & 1) == 0;
    }
  }
  return 1;
}

