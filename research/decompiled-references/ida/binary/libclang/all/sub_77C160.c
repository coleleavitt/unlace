unsigned __int64 __fastcall sub_77C160(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  char v6; // al
  unsigned __int64 v7; // r15
  char v9; // al
  _BYTE *v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-80h]
  unsigned int v12; // [rsp+10h] [rbp-78h] BYREF
  char v13; // [rsp+14h] [rbp-74h]

  v4 = sub_77C090(a1);
  v5 = sub_77BC00(a1);
  v6 = *(_BYTE *)v4;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    v7 = v4 + 16;
    if ( *(_DWORD *)(v4 + 16) )
      return v7;
    return 0;
  }
  if ( (v6 & 2) != 0 )
    return 0;
  v7 = v4 + 16;
  *(_BYTE *)v4 = v6 | 2;
  v11 = sub_798D40(a1);
  v9 = sub_8984C0(v5, v4 + 16, v11, a1, a2, a3);
  if ( a3
    && ((v10 = *(_BYTE **)(v11 + 2160), (v10[1] & 8) != 0)
     || (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 && *(char *)(a1 + 97) < 0 && (*v10 & 8) != 0)
    && *(_DWORD *)(a2 + 8)
    || !v9 )
  {
    v13 &= ~1u;
    v12 = 0;
    sub_6A01B0(v4 + 16, (__int64)&v12);
    if ( v12 > 1 )
      sub_69F740((__int64)&v12);
    *(_BYTE *)v4 = *(_BYTE *)v4 & 0xFC | 1;
    return 0;
  }
  if ( sub_6A0220(v4 + 16) )
    sub_6B5A70(v11, (__int64)sub_778160, v4 + 16);
  *(_BYTE *)v4 = *(_BYTE *)v4 & 0xFC | 1;
  return v7;
}

