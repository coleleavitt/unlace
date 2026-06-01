/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028800
// Address: 0x0000000100028800

//----- (0000000100028800) ----------------------------------------------------
__int64 __fastcall sub_100028800(__int64 a1)
{
  __int64 v2; // x8
  int v3; // w22
  __int16 v4; // w21
  __int64 v5; // x8
  char **v6; // x20
  char **v7; // x0
  char *v8; // x9
  unsigned int v9; // w8
  char v10; // w22
  __int64 v11; // x0
  int v13; // w8
  __int64 v14; // x20
  _QWORD *v15; // x1
  __int64 v16; // x8
  _QWORD *v17; // x1
  __int64 v18; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 328);
  v3 = *(__int16 *)(*(_QWORD *)(a1 + 320) + 2 * v2 - 2);
  if ( v2 )
    *(_QWORD *)(a1 + 328) = v2 - 1;
  v4 = v3;
  v5 = *(_QWORD *)(a1 + 160) + 24LL * *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(v5 - 16) )
    v6 = *(char ***)(v5 - 24);
  else
    v6 = (char **)&byte_10007AE40;
  v7 = sub_10002EF28(v6);
  if ( v7 )
  {
    v8 = &v7[2][v3];
    v9 = (unsigned __int8)*v8;
    if ( v9 <= 4 )
    {
      switch ( v9 )
      {
        case 2u:
          if ( !sub_100024010(a1) )
          {
            v10 = -50;
            goto LABEL_31;
          }
LABEL_34:
          v17 = *(_QWORD **)(a1 + 320);
          v18 = *(_QWORD *)(a1 + 328);
          if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v18 + 1) )
          {
            v17 = qvector_reserve((_QWORD *)(a1 + 320), v17, v18 + 1, 2u);
            *(_QWORD *)(a1 + 320) = v17;
            v18 = *(_QWORD *)(a1 + 328);
          }
          *((_WORD *)v17 + v18) = v4 + 1;
          ++*(_QWORD *)(a1 + 328);
          return 0;
        case 3u:
          if ( (*(_BYTE *)(a1 + 212) & 0xFD) != 0xD0 )
          {
            v10 = -48;
            goto LABEL_31;
          }
          goto LABEL_34;
        case 4u:
          v4 = v3 - (v8[1] == 0);
          goto LABEL_34;
      }
    }
    else if ( v9 <= 0xA )
    {
      if ( ((1 << v9) & 0x560) != 0 )
        goto LABEL_34;
      if ( v9 == 7 )
      {
        v13 = *(unsigned __int8 *)(a1 + 212);
        if ( v13 != 168 && v13 != 191 )
        {
          v10 = -65;
          goto LABEL_31;
        }
        goto LABEL_34;
      }
      if ( v9 == 9 )
      {
        if ( *(unsigned __int8 *)(a1 + 212) != 211 )
        {
          v10 = -47;
LABEL_31:
          *(_BYTE *)(a1 + 212) = v10;
          v14 = *(_QWORD *)(a1 + 200);
          v15 = *(_QWORD **)v14;
          v16 = *(_QWORD *)(v14 + 8);
          if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
          {
            v15 = qvector_reserve(*(_QWORD **)(a1 + 200), v15, v16 + 1, 1u);
            *(_QWORD *)v14 = v15;
            v16 = *(_QWORD *)(v14 + 8);
          }
          *((_BYTE *)v15 + v16) = v10;
          ++*(_QWORD *)(v14 + 8);
          ++*(_DWORD *)(a1 + 208);
          goto LABEL_34;
        }
        goto LABEL_34;
      }
    }
  }
  else
  {
    v11 = sub_10002EC20(*(_QWORD **)(a1 + 104), (char *)v6);
    if ( v11 == -1 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v11) + 24LL) > v3 )
      goto LABEL_34;
  }
  set_error_string(0);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
// 100028938: variable '_28' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
