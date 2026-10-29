/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032380
// Address: 0x0000000140032380

//----- (0000000140032380) ----------------------------------------------------
__int64 __fastcall sub_140032380(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // r14
  char *v5; // rbp
  __int16 v6; // si
  __int64 v7; // rax
  const char **v8; // rax
  const char *v9; // rdx
  char v10; // dl
  __int16 v11; // si
  unsigned __int64 v12; // r8
  __int64 v14; // rax

  v1 = a1 + 312;
  v3 = *(_QWORD *)(a1 + 320);
  v4 = *(__int16 *)(*(_QWORD *)v1 + 2 * v3 - 2);
  if ( v3 )
    *(_QWORD *)(v1 + 8) = v3 - 1;
  v5 = (char *)Str1;
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(v7 + 24LL * *(_QWORD *)(a1 + 160) - 16) )
    v5 = *(char **)(v7 + 24LL * *(_QWORD *)(a1 + 160) - 24);
  v8 = sub_14002D300(v5);
  if ( v8 )
  {
    v9 = v8[2];
    switch ( v9[v4] )
    {
      case 2:
        switch ( *(_BYTE *)(a1 + 204) )
        {
          case 0xA0:
          case 0xA1:
          case 0xA7:
          case 0xB4:
          case 0xB5:
          case 0xB6:
          case 0xB7:
          case 0xB8:
          case 0xB9:
          case 0xBA:
          case 0xBB:
          case 0xBC:
          case 0xBD:
          case 0xBE:
          case 0xC8:
          case 0xC9:
          case 0xCA:
          case 0xCB:
          case 0xCC:
          case 0xCD:
          case 0xCE:
          case 0xD3:
          case 0xE0:
          case 0xE1:
          case 0xE2:
          case 0xE3:
          case 0xE4:
          case 0xE5:
          case 0xE6:
          case 0xE7:
          case 0xE8:
          case 0xE9:
          case 0xEA:
          case 0xEB:
          case 0xEC:
          case 0xED:
          case 0xEE:
          case 0xEF:
            goto LABEL_11;
          default:
            v10 = -50;
            goto LABEL_10;
        }
        goto LABEL_11;
      case 3:
        if ( *(unsigned __int8 *)(a1 + 204) == 208 || *(unsigned __int8 *)(a1 + 204) == 210 )
          goto LABEL_11;
        v10 = -48;
        break;
      case 4:
        if ( !v9[v4 + 1] )
          v6 = v4 - 1;
        goto LABEL_11;
      case 5:
      case 6:
      case 8:
      case 0xA:
        goto LABEL_11;
      case 7:
        if ( *(unsigned __int8 *)(a1 + 204) == 168 || *(unsigned __int8 *)(a1 + 204) == 191 )
          goto LABEL_11;
        v10 = -65;
        break;
      case 9:
        if ( *(_BYTE *)(a1 + 204) == 0xD3 )
          goto LABEL_11;
        v10 = -47;
        break;
      default:
        goto LABEL_25;
    }
LABEL_10:
    sub_1400347C0(a1, v10);
  }
  else
  {
    v14 = sub_14002D880(*(_QWORD **)(a1 + 96), v5);
    if ( v14 != -1 && (int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 96) + 8 * v14) + 24LL) )
    {
LABEL_25:
      sub_140063F70(0, v5);
      return sub_1400640B0(0x38u);
    }
  }
LABEL_11:
  v11 = v6 + 1;
  v12 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v12 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v12, 2u);
  *(_WORD *)(*(_QWORD *)v1 + 2LL * (*(_QWORD *)(a1 + 320))++) = v11;
  return 0;
}
