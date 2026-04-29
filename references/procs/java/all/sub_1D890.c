unsigned __int64 __fastcall sub_1D890(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r12
  unsigned __int8 v11; // al
  __int64 v12; // r12
  int flags; // eax
  __int64 v14; // r14
  int v15; // eax
  char v16; // al
  unsigned int v17; // ecx
  signed __int64 v18; // r12
  __int16 v19; // r12
  _BYTE *v20; // [rsp+0h] [rbp-268h]
  int v21; // [rsp+8h] [rbp-260h]
  __int16 v22; // [rsp+Eh] [rbp-25Ah]
  __int64 v23; // [rsp+10h] [rbp-258h] BYREF
  __int64 v24; // [rsp+18h] [rbp-250h]
  _BYTE v25[520]; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int64 v26; // [rsp+228h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 33336);
  v26 = __readfsqword(0x28u);
  v4 = netnode_supfirst(v3, 114);
  if ( v4 != -1 )
  {
    v6 = v4;
    LOBYTE(v7) = 5;
    sub_19090((__int64)"HIDECANCEL\nRenaming labels with national characters");
    if ( a2 != -1 )
      v7 = a2 == 0 ? 2 : 7;
    v22 = 0;
    while ( 1 )
    {
      v10 = netnode_charval(*(_QWORD *)(a1 + 33336), v6, 114);
      show_auto(v6, 0);
      if ( (unsigned __int8)(v10 - 1) > 2u )
LABEL_40:
        sub_E6A0();
      if ( (v10 & 2) == 0 && a2 == -1 )
        goto LABEL_10;
      v11 = *(_BYTE *)(sub_19F50(a1, v6, 0) + 184);
      if ( v11 == 4 )
      {
        v18 = v6 - *(_QWORD *)(a1 + 33053);
        if ( v18 < 0 )
          goto LABEL_40;
        if ( v6 == *(_QWORD *)(a1 + 33053) )
        {
          v19 = *(_WORD *)(a1 + 33147);
          *(_WORD *)(a1 + 33147) = 0;
          sub_1D070(a1, *(_WORD *)(a1 + 33021), v6, *(_WORD *)(a1 + 33029), 0, v7);
          *(_WORD *)(a1 + 33147) = v19;
        }
        else
        {
          if ( *(unsigned __int16 *)(a1 + 33031) < v18
            || netnode_supval(*(_QWORD *)(a1 + 33320), v6 - *(_QWORD *)(a1 + 33053), a1 + 33265, 44, 83) != 44 )
          {
            goto LABEL_40;
          }
          sub_1D070(a1, *(_WORD *)(a1 + 33265), v6, *(_WORD *)(a1 + 33269), v18, v7);
        }
        goto LABEL_10;
      }
      if ( v11 > 4u )
      {
        if ( v11 != 9 )
          goto LABEL_40;
        if ( !*(_QWORD *)(a1 + 33193) )
          goto LABEL_40;
        v12 = v6 - *(_QWORD *)(a1 + 33165);
        if ( v12 < 0 )
          goto LABEL_40;
        if ( *(unsigned __int16 *)(a1 + 33173) <= v12 )
          goto LABEL_40;
        flags = get_flags_ex(v6, 4);
        if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0xB0000000LL )
          goto LABEL_40;
        if ( netnode_supval(*(_QWORD *)(a1 + 33193), v12, (char *)&v23 + 4, 10, 83) != 10 )
          goto LABEL_40;
        sub_1B570(a1, v24, v6, v7);
        goto LABEL_10;
      }
      if ( v11 != 1 )
      {
        if ( v11 != 2 || *(_QWORD *)(a1 + 33157) != v6 )
          goto LABEL_40;
        sub_1D070(
          a1,
          *(_WORD *)(a1 + 33141),
          v6,
          *(_WORD *)(a1 + 33145),
          (*(unsigned __int16 *)(a1 + 33147) + *(unsigned __int16 *)(a1 + 33031)) & 0x1FFFF,
          v7);
        goto LABEL_10;
      }
      v14 = v6 - *(_QWORD *)(a1 + 33065);
      if ( v14 <= 0 )
        goto LABEL_40;
      if ( *(unsigned __int16 *)(a1 + 33081) < v14 )
        goto LABEL_40;
      v15 = netnode_altval(*(_QWORD *)(a1 + 33328), v6 - *(_QWORD *)(a1 + 33065), 65);
      if ( !v15 || !sub_13D40(a1, 1, v15, 0, (char *)&v23 + 4) )
        goto LABEL_40;
      if ( BYTE4(v23) == 7 )
      {
        v22 = v24;
        v16 = v7;
      }
      else
      {
        if ( (unsigned __int8)(BYTE4(v23) - 9) > 2u )
          goto LABEL_40;
        if ( (_WORD)v24 == v22 )
        {
          v17 = v14;
LABEL_32:
          sub_1D360(a1, 0xFFFFFFFFLL, (_WORD *)&v23 + 2, v17, (__int64)v25, 512, 0, v7);
          goto LABEL_10;
        }
        v22 = v24;
        v16 = 4;
      }
      v20 = v25;
      v21 = v14;
      sub_1D360(a1, 0xFFFFFFFFLL, (_WORD *)&v23 + 2, v14, (__int64)v25, 512, 1, v16);
      v17 = v14;
      if ( BYTE4(v23) != 7 )
        goto LABEL_32;
LABEL_10:
      v6 = netnode_supnext(*(_QWORD *)(a1 + 33336), v6, 114);
      if ( v6 == -1 )
      {
        callui(24, 10, 0, &callui, v8, v9, v20, v21, v23, v24);
        return v26 - __readfsqword(0x28u);
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
