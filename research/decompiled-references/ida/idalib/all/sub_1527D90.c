char __fastcall sub_1527D90(__int64 a1)
{
  int *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdi
  char *v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r13d
  __int64 *v9; // rdi
  unsigned __int16 v10; // bp
  char v11; // bp
  unsigned int *v12; // r15
  signed __int64 v13; // r14
  __int64 (__fastcall *v14)(); // r9
  char result; // al
  _BYTE *v16; // [rsp+8h] [rbp-40h]

  v2 = (int *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(char **)v3;
  v6 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)v3 = 0;
  sub_14368B0(v4, v5, v6, 1u, 1u, 1u);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(__int64 **)(a1 + 8);
  if ( !v7 )
    v7 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v7;
  sub_14634E0(v9, v2);
  v10 = *(_WORD *)(a1 + 32);
  v11 = sub_141A630(v10) | (v10 == 1);
  if ( v11 )
    BUG();
  v12 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
  v13 = *v12;
  v16 = v12 + 4;
  sub_14634E0(*(__int64 **)(a1 + 8), v2);
  if ( v13 == 8 )
  {
    if ( *((_QWORD *)v12 + 2) != 0x6765735F61746164LL && *((_QWORD *)v12 + 2) != 0x6765735F65646F63LL )
    {
      if ( *((_QWORD *)v12 + 2) != 0x6765735F74696E69LL )
      {
LABEL_8:
        if ( *((_QWORD *)v12 + 2) != 0x6E6F6974636E7566LL )
        {
          v14 = (__int64 (__fastcall *)())sub_1523D60;
          goto LABEL_10;
        }
        v11 = 1;
        v14 = sub_152FD60;
        goto LABEL_23;
      }
      v14 = (__int64 (__fastcall *)())sub_1524810;
      v11 = 1;
LABEL_20:
      if ( (unsigned __int8)v11 | (v13 != 10) )
      {
LABEL_21:
        if ( v13 == 8 && !v11 )
        {
LABEL_10:
          if ( *((_QWORD *)v12 + 2) == 0x657A696D6974706FLL )
          {
            result = ((__int64 (__fastcall *)(__int64, _BYTE *, signed __int64, int))sub_15282C0)(a1, v16, v13, v8);
            goto LABEL_25;
          }
          goto LABEL_24;
        }
        goto LABEL_23;
      }
      goto LABEL_34;
    }
    goto LABEL_44;
  }
  if ( v13 == 7 )
  {
    if ( v12[4] == 1601401698 && *((_WORD *)v12 + 10) == 25971 && *((_BYTE *)v12 + 22) == 103 )
      goto LABEL_44;
  }
  else if ( v13 == 9 )
  {
    if ( *((_QWORD *)v12 + 2) != 0x65735F74736E6F63LL || *((_BYTE *)v12 + 24) != 103 )
      goto LABEL_16;
LABEL_44:
    v11 = 1;
    goto LABEL_16;
  }
  if ( v13 == 7 )
  {
    if ( v12[4] == 1952671091 && *((_WORD *)v12 + 10) == 28521 && *((_BYTE *)v12 + 22) == 110 )
    {
      v14 = (__int64 (__fastcall *)())sub_1523910;
      v11 = 1;
      goto LABEL_20;
    }
    goto LABEL_17;
  }
LABEL_16:
  if ( (unsigned __int8)v11 | (v13 != 15) )
  {
LABEL_17:
    if ( !v11 && v13 == 8 )
      goto LABEL_8;
    v14 = (__int64 (__fastcall *)())sub_1523D60;
    goto LABEL_20;
  }
  if ( *((_QWORD *)v12 + 2) == 0x675F746369727473LL
    && v12[6] == 1751342963
    && *((_WORD *)v12 + 14) == 25445
    && *((_BYTE *)v12 + 30) == 107 )
  {
    v11 = 1;
    v14 = (__int64 (__fastcall *)())sub_1524220;
    goto LABEL_23;
  }
  v14 = (__int64 (__fastcall *)())sub_1523D60;
  if ( (unsigned __int8)v11 | (v13 != 10) )
    goto LABEL_21;
LABEL_34:
  if ( *((_QWORD *)v12 + 2) == 0x65745F636F6C6C61LL && *((_WORD *)v12 + 12) == 29816 )
  {
    result = sub_1522D90(a1, v16, v13, v8);
    goto LABEL_25;
  }
LABEL_23:
  if ( (v13 != 9) | (unsigned __int8)v11 || *((_QWORD *)v12 + 2) != 0x69736E6972746E69LL || *((_BYTE *)v12 + 24) != 99 )
  {
LABEL_24:
    result = ((__int64 (__fastcall *)(__int64, _BYTE *, signed __int64, int))v14)(a1, v16, v13, v8);
    goto LABEL_25;
  }
  result = ((__int64 (__fastcall *)(__int64, _BYTE *, signed __int64, int))sub_152EF40)(a1, v16, v13, v8);
LABEL_25:
  if ( !result )
  {
    while ( *(_WORD *)(a1 + 32) != 1 )
      sub_14634E0(*(__int64 **)(a1 + 8), v2);
    return sub_14634E0(*(__int64 **)(a1 + 8), v2);
  }
  return result;
}
