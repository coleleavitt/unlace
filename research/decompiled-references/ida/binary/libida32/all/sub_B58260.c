unsigned __int64 __fastcall sub_B58260(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  char v7; // al
  char v9; // al
  _BYTE *v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-80h]
  unsigned int v12; // [rsp+10h] [rbp-78h] BYREF
  char v13; // [rsp+14h] [rbp-74h]

  v3 = 0;
  v5 = sub_B58190(a1);
  v6 = sub_B4F900(a1);
  v7 = *(_BYTE *)v5;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( *(_DWORD *)(v5 + 16) )
      return v5 + 16;
  }
  else if ( (v7 & 2) == 0 )
  {
    v3 = v5 + 16;
    *(_BYTE *)v5 = v7 | 2;
    v11 = sub_B685F0(a1);
    v9 = sub_C5EB70(v6, v5 + 16, v11, a1, a2, a3);
    if ( a3
      && ((v10 = *(_BYTE **)(v11 + 2320), (v10[1] & 8) != 0)
       || (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B && *(char *)(a1 + 97) < 0 && (*v10 & 8) != 0)
      && *(_DWORD *)(a2 + 8)
      || !v9 )
    {
      v13 &= ~1u;
      v12 = 0;
      sub_A2BFE0(v5 + 16, (__int64)&v12);
      v3 = 0;
      if ( v12 > 1 )
        sub_A2BBA0((int *)&v12);
      *(_BYTE *)v5 = *(_BYTE *)v5 & 0xFC | 1;
    }
    else
    {
      if ( sub_A2C050(v5 + 16) )
        sub_A3B850(v11, (__int64)sub_B4CF80, v5 + 16);
      *(_BYTE *)v5 = *(_BYTE *)v5 & 0xFC | 1;
    }
  }
  return v3;
}

