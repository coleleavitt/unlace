__int64 __fastcall sub_5EA520(__int64 a1, __int64 idati)
{
  char v2; // dl
  char v4; // dl
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  bool v8; // [rsp+Fh] [rbp-49h]
  __int64 v9; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  while ( 1 )
  {
    v2 = *(_BYTE *)(a1 + 186);
    if ( (v2 & 0xF) == 0xB )
    {
      while ( *(_DWORD *)(a1 + 60) )
      {
        a1 = *(_QWORD *)(a1 + 48);
        v2 = *(_BYTE *)(a1 + 186);
        if ( (v2 & 0xF) != 0xB )
          goto LABEL_7;
      }
      return 1;
    }
LABEL_7:
    v4 = v2 & 0x3F;
    if ( v4 != 13 )
      break;
    if ( (*(_BYTE *)(a1 + 80) & 2) == 0 )
      goto LABEL_10;
    v6 = *(_QWORD **)(a1 + 48);
    if ( !v6 )
      return 0;
    v7 = v6[1];
    if ( !v7 )
      return 0;
    a1 = *(_QWORD *)(*v6 + 8 * v7 - 8);
  }
  if ( v4 != 61 )
    return 0;
LABEL_10:
  v5 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  if ( !v5 )
    goto LABEL_19;
  v10[1] = v5;
  v11 = 256;
  if ( !idati )
    idati = get_idati(a1, 0);
  v10[0] = idati;
  if ( (unsigned __int8)create_tinfo(&v9, 61, 61, v10) )
  {
    v8 = get_tinfo_property(v9, 286) != 0;
    clear_tinfo_t(&v9);
    return v8;
  }
  else
  {
LABEL_19:
    clear_tinfo_t(&v9);
    return 0;
  }
}
