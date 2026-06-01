__int64 __fastcall sub_14A1B60(__int64 a1)
{
  __int16 v2; // ax
  __int64 *v3; // rdi
  unsigned __int16 v4; // ax
  unsigned int v5; // r14d
  bool v6; // zf
  char v7; // dl
  _BYTE *v8; // rax
  unsigned int v10; // edx
  char v11; // al
  _BYTE *v12; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  int v15; // [rsp+18h] [rbp-50h]
  __int16 v16; // [rsp+1Ch] [rbp-4Ch]
  __int64 (__fastcall *v17)(__int64); // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]

  if ( !(unsigned int)sub_155CBC0(a1, 0, 0) )
    return 0;
  while ( 1 )
  {
    v2 = *(_WORD *)(a1 + 32);
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 == 20 )
      break;
LABEL_3:
    v4 = v2 - 406;
    if ( v4 <= 8u && (v4 > 6u || !byte_26171C0[v4]) )
    {
      v5 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v5;
      sub_14634E0(v3, (int *)(a1 + 16));
      goto LABEL_14;
    }
    v5 = 0;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v3, (int *)(a1 + 16));
    v6 = *(_WORD *)(a1 + 32) == 22;
    v7 = *(_BYTE *)(a1 + 1952);
    v8 = (_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v12 = (_BYTE *)(a1 + 1952);
    v13 = v7;
    v14 = a1;
    v15 = 1507350;
    v16 = 63;
    v17 = sub_146A990;
    v18 = 0;
    v19 = 0;
    if ( !v6 )
      goto LABEL_11;
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
    {
      if ( (unsigned __int8)sub_1568800(&v12) )
        goto LABEL_10;
    }
    else
    {
      LODWORD(v19) = sub_146A990(a1);
    }
    sub_156E210(&v12);
LABEL_10:
    v5 = HIDWORD(v19);
    v8 = v12;
    v7 = v13;
LABEL_11:
    *v8 = v7;
    if ( !(unsigned int)sub_155CBC0(a1, 0, 0) )
      return v5;
  }
  while ( 1 )
  {
    v14 = a1;
    v10 = *(unsigned __int16 *)(a1 + 90);
    v12 = (_BYTE *)(a1 + 1952);
    v11 = *(_BYTE *)(a1 + 1952);
    v15 = 1376276;
    v13 = v11;
    *(_BYTE *)(a1 + 1952) = 1;
    v16 = 63;
    v17 = sub_14789E0;
    v18 = 0;
    v19 = 0;
    if ( v10 >= *(_DWORD *)(v3[7] + 144) )
      sub_1568800(&v12);
    else
      LODWORD(v19) = sub_14789E0(a1);
    sub_156E210(&v12);
    v5 = HIDWORD(v19);
    *v12 = v13;
LABEL_14:
    if ( !(unsigned int)sub_155CBC0(a1, 0, 0) )
      return v5;
    v2 = *(_WORD *)(a1 + 32);
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != 20 )
      goto LABEL_3;
  }
}
