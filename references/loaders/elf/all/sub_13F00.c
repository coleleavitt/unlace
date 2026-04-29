__int64 __fastcall sub_13F00(int a1, int *a2, double a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // r14
  int dword; // ebp
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // r15
  int v15; // r9d
  unsigned int v16; // ecx
  int v17; // r15d
  unsigned int v18; // ebx
  int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  int v23; // ebx
  int v24; // ebx
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 5);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = *a2;
  v10 = *(_QWORD *)(a2 + 1);
  if ( v7 == v8 )
  {
    v8 = *(_QWORD *)(a2 + 5);
    dword = get_dword(*(_QWORD *)(a2 + 1), a2, 0, a6, a7);
LABEL_3:
    switch ( (char)v9 )
    {
      case 0:
        return 4;
      case 1:
        v17 = (_DWORD)v8 << 24;
        if ( v8 > 0xFF )
          sub_BFC0((__int64)"Possible fixup overflow at %a (R_M68HC11_8, target %a)", a3, a4);
        goto LABEL_16;
      case 2:
        v18 = ((_DWORD)v8 << 16) & 0xFF000000;
        goto LABEL_18;
      case 3:
        v19 = (_DWORD)v8 << 24;
        goto LABEL_20;
      case 4:
        v20 = v8 - 1;
        v14 = v10;
        goto LABEL_22;
      case 5:
        v23 = (_DWORD)v8 << 16;
        goto LABEL_28;
      case 7:
        v24 = (_DWORD)v8 << 24;
        goto LABEL_30;
      case 8:
        v13 = v8 - 2;
        v14 = v10;
        goto LABEL_12;
      default:
        goto LABEL_31;
    }
  }
  if ( (_BYTE)v9 == 5 )
    v10 -= 2;
  else
    v10 += (_BYTE)v9 == 1;
  v25 = *(_QWORD *)(a2 + 5) - v8;
  dword = get_dword(v10, a2, v7 - v8, a6, a7);
  if ( v25 == 7 )
    goto LABEL_3;
  if ( v25 != 15 )
  {
    v8 = v7;
    goto LABEL_3;
  }
  switch ( (char)v9 )
  {
    case 0:
      return 4;
    case 1:
      v17 = 0;
LABEL_16:
      v15 = 13;
      v16 = v17 + dword;
      v14 = 0;
      goto LABEL_13;
    case 2:
      v18 = 0;
LABEL_18:
      v15 = 6;
      v14 = 0;
      v16 = v18 + dword;
      goto LABEL_13;
    case 3:
      v19 = 0;
LABEL_20:
      v15 = 8;
      v14 = 0;
      v16 = v19 + dword;
      goto LABEL_13;
    case 4:
      v14 = v10;
      v20 = -1;
LABEL_22:
      v21 = v20 - v10;
      v22 = -v21;
      if ( v21 > 0 )
        v22 = v21;
      if ( v22 > 0xFF )
        sub_BFC0((__int64)"Possible fixup overflow at %a (R_M68HC11_PCREL_8, target %a)", a3, a4);
      v15 = 13;
      v16 = ((_DWORD)v21 << 24) + dword;
      goto LABEL_13;
    case 5:
      v23 = 0;
LABEL_28:
      v15 = 1;
      v14 = 0;
      v16 = v23 + dword;
      goto LABEL_13;
    case 7:
      v24 = 0;
LABEL_30:
      v15 = 13;
      v14 = 0;
      v16 = dword & 0xF8FFFFFF | (v24 + dword) & 0x7000000;
      goto LABEL_13;
    case 8:
      v14 = v10;
      v13 = -2;
LABEL_12:
      v15 = 1;
      v16 = dword + ((v13 - (_DWORD)v10) << 16);
LABEL_13:
      sub_42050(a1, v10, v7, v16, 0, v15, v14, 0, 0);
      result = 0;
      break;
    default:
LABEL_31:
      result = 2;
      break;
  }
  return result;
}
