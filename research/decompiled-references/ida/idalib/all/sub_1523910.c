__int64 __fastcall sub_1523910(__int64 a1, _BYTE *a2, signed __int64 a3, unsigned int a4)
{
  bool v7; // zf
  __int64 *v8; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int16 v14; // ax
  char v15; // bp
  unsigned int v16; // r12d
  unsigned __int64 v17; // rdi
  unsigned int *v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int16 v23; // bp
  int v24; // eax
  _BYTE *v25; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v27[17]; // [rsp+20h] [rbp-88h] BYREF

  v7 = *(_WORD *)(a1 + 32) == 22;
  v8 = *(__int64 **)(a1 + 8);
  v25 = a2;
  if ( !v7 )
  {
    sub_FC70B0((__int64)v27, v8[6], a4, 2192);
LABEL_3:
    sub_AEC220(v27, a2, a3);
    sub_AEA040((__int64)v27);
    return 0;
  }
  sub_14634E0(v8, (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 14 )
  {
    v10 = 2198;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
LABEL_7:
    sub_FC70B0((__int64)v27, v11, a4, v10);
    a2 = v25;
    goto LABEL_3;
  }
  v12 = sub_14B6F80(a1, 0);
  if ( v12 == 1 )
    return 0;
  v13 = *(__int64 **)(a1 + 8);
  v26 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( ((*(_WORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 2) >> 6) & 7) != 1 )
  {
    v11 = v13[6];
    v10 = 2193;
    goto LABEL_7;
  }
  v14 = *(_WORD *)(a1 + 32);
  v15 = 1;
  v16 = 1;
  if ( v14 == 66 )
  {
    do
    {
      sub_14634E0(v13, (int *)(a1 + 16));
      v17 = *(unsigned __int16 *)(a1 + 32);
      if ( (_WORD)v17 != 98 && (_WORD)v17 != 95 )
      {
        if ( (unsigned __int16)(v17 - 5) > 1u )
        {
          sub_FC70B0((__int64)v27, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), a4, 2185);
          sub_AEC220(v27, a2, a3);
          sub_AEA040((__int64)v27);
          return ((_WORD)v17 == 98) | (unsigned __int8)((_WORD)v17 == 95);
        }
        v15 = sub_141A630(v17);
        if ( v15 )
          BUG();
        v18 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
        v19 = *v18;
        v20 = v18 + 4;
        switch ( v19 )
        {
          case 4LL:
            if ( v18[4] != 1684104562 )
              goto LABEL_16;
            v24 = 1;
            break;
          case 5LL:
            if ( v18[4] != 1953067639 || *((_BYTE *)v18 + 20) != 101 )
              goto LABEL_16;
            v24 = 2;
            break;
          case 7LL:
            if ( v18[4] != 1667594341 || *((_WORD *)v18 + 10) != 29813 || *((_BYTE *)v18 + 22) != 101 )
            {
              if ( *v20 == 1633906542 && *((_WORD *)v18 + 10) == 26723 && *((_BYTE *)v18 + 22) == 101
                || *v20 == 1668508004 && *((_WORD *)v18 + 10) == 29281 && *((_BYTE *)v18 + 22) == 100 )
              {
                goto LABEL_33;
              }
LABEL_16:
              v21 = *(_QWORD *)(a1 + 8);
              v22 = 2209;
              goto LABEL_17;
            }
            v24 = 4;
            break;
          default:
            if ( v19 != 6
              || (*v20 != 1918986355 || *((_WORD *)v18 + 10) != 25701)
              && (*v20 != 1634758510 || *((_WORD *)v18 + 10) != 25959)
              && (*v20 != 1869440370 || *((_WORD *)v18 + 10) != 25974) )
            {
              goto LABEL_16;
            }
LABEL_33:
            v21 = *(_QWORD *)(a1 + 8);
            v22 = 2218;
LABEL_17:
            sub_FC70B0((__int64)v27, *(_QWORD *)(v21 + 48), a4, v22);
            sub_AEC220(v27, a2, a3);
            v23 = *(_WORD *)(a1 + 32);
            if ( (v23 == 1) | (unsigned __int8)sub_141A630(v23) )
              BUG();
            sub_AEC220(
              v27,
              (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 16LL),
              **(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL));
            sub_AEA040((__int64)v27);
            return 0;
        }
        v16 |= v24;
      }
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v14 = *(_WORD *)(a1 + 32);
      v13 = *(__int64 **)(a1 + 8);
    }
    while ( v14 == 66 );
    if ( v15 )
      goto LABEL_54;
  }
  else
  {
LABEL_54:
    v16 |= 2u;
  }
  if ( v14 != 23 )
  {
    v11 = v13[6];
    v10 = 2196;
    goto LABEL_7;
  }
  sub_14634E0(v13, (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 1 )
  {
    v10 = 2202;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
    goto LABEL_7;
  }
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  sub_166BF70(*(_QWORD *)(a1 + 96), a4, v16, v26);
  return 1;
}
