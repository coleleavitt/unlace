__int64 __fastcall sub_3FAC40(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        double a7,
        int a8)
{
  __int64 v9; // rsi
  unsigned __int16 v12; // ax
  char v13; // r13
  int v14; // eax
  __int64 v15; // r15
  unsigned __int8 v16; // dl
  unsigned int v18; // [rsp+10h] [rbp-58h]
  int v19; // [rsp+14h] [rbp-54h]
  unsigned int v21; // [rsp+1Ch] [rbp-4Ch]
  __int64 v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+2Ch] [rbp-3Ch]

  v9 = a3;
  v12 = *(_WORD *)(a2 + 24);
  if ( v12 > 0x207u )
  {
    if ( v12 == 594 )
      goto LABEL_19;
LABEL_21:
    if ( !under_debugger )
      sub_3835A0(0xC86Cu, a3, a7);
LABEL_25:
    BUG();
  }
  if ( v12 > 0x1FEu )
  {
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 0x200:
        v23 = 1;
        v21 = 12;
        v19 = 1;
        v18 = 4;
        goto LABEL_5;
      case 0x201:
        v23 = 1;
        v21 = 7;
        v19 = 1;
        v18 = 4;
        goto LABEL_5;
      case 0x202:
        v23 = 1;
        v21 = 5;
        v19 = 1;
        v18 = 4;
        goto LABEL_5;
      case 0x203:
        v23 = 0;
        v21 = 3;
        v19 = 1;
        v18 = 3;
        goto LABEL_5;
      case 0x204:
        v23 = 0;
        v21 = 3;
        v13 = v12 == 594;
        v19 = -1;
        v18 = 3;
        if ( a3 - 14 <= 1 )
          goto LABEL_11;
        goto LABEL_6;
      case 0x205:
        v23 = 1;
        v21 = 4;
        v19 = 1;
        v18 = 12;
        goto LABEL_5;
      case 0x206:
        v23 = 1;
        v21 = 4;
        v19 = 1;
        v18 = 7;
        goto LABEL_5;
      case 0x207:
        v23 = 1;
        v21 = 4;
        v19 = 1;
        v18 = 5;
        goto LABEL_5;
      default:
        goto LABEL_19;
    }
  }
  if ( v12 != 435 )
    goto LABEL_21;
LABEL_19:
  v23 = 1;
  v21 = 4;
  v19 = 1;
  v18 = 4;
LABEL_5:
  v13 = v12 == 594;
  if ( a3 - 14 <= 1 )
  {
LABEL_11:
    sub_3F7690((__int64)a1, v18, a4, a5, a6, v19, a7, v13);
    return 0;
  }
LABEL_6:
  v14 = sub_3FAA90((__int64)a1, a3, a7);
  if ( v14 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCB91u, v9, a7);
    goto LABEL_25;
  }
  v24 = v14;
  v22 = sub_679D0(a1[1], *(_QWORD *)(a2 + 16), 2);
  v15 = sub_679D0(a1[1], *(_QWORD *)(a2 + 16), 2);
  sub_1D7370((__int64)a1, *(_DWORD *)(v15 + 72), v24);
  a1[2] = v22;
  sub_3F7690((__int64)a1, v18, a4, a5, a6, v19, a7, v13);
  v16 = 2;
  if ( *(_DWORD *)(a1[104] + 84) == 8 )
    v16 = 7;
  sub_3F56D0(
    (__int64)a1,
    0x37u,
    v16,
    *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26),
    0x3BEA45E214ADDC55LL,
    0x3BEA45E214ADDC55LL,
    0);
  a1[2] = v15;
  sub_3F7690((__int64)a1, v21, a4, a5, a8, v23, a7, v13);
  return 1;
}
