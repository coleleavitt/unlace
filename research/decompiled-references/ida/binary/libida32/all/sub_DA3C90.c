__int64 __fastcall sub_DA3C90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r13
  __int64 j; // rbx
  __int64 v10; // kr00_8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  int v19; // r13d
  unsigned int i; // ebx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1[50] + 8LL);
  if ( !v6 || (*(_BYTE *)(a3 + 504) & 0x40) == 0 )
  {
LABEL_3:
    result = *(unsigned int *)(a3 + 392);
    goto LABEL_4;
  }
  v14 = sub_DFB220(v6);
  v16 = *(_WORD *)v14 & 0x1FF;
  if ( (((_WORD)v16 + 423) & 0x1FFu) <= 4 )
  {
    v17 = *(_DWORD *)(v14 + 16);
    v3 = v14 + 8 * (((*(_BYTE *)(v14 + 2) & 8) != 0) + 1LL) + 32;
  }
  else if ( (unsigned int)(unsigned __int16)v16 - 113 > 1 )
  {
    v17 = 0;
    v3 = 0;
  }
  else
  {
    v3 = v14 + 40;
    v17 = *(_DWORD *)(v14 + 32);
    if ( (_WORD)v16 == 114 )
      v3 = v14 + 48;
  }
  result = *(unsigned int *)(a3 + 392);
  v18 = (_WORD)v16 == 91;
  v19 = v18 + *(_DWORD *)(a3 + 392) - ((*(_BYTE *)(a3 + 504) & 4) != 0) - ((*(_BYTE *)(a3 + 504) & 8) != 0);
  if ( v17 != v19 )
  {
    for ( i = v17 - 1; ; --i )
    {
      v23 = *(_QWORD *)(v3 + 8LL * i);
      if ( (*(_BYTE *)(v23 + 1) & 6) != 0
        || (v24 = sub_CC2440(a1[23], *(_QWORD *)(v23 + 8), v18, v16, v15), v18 = HIDWORD(v24), !BYTE4(v24)) )
      {
LABEL_22:
        v21 = a1[22];
        v22 = sub_DFDA20(v21, 48);
        sub_DFF560(v22);
        sub_DFDA50(v21, 48);
      }
      else
      {
        switch ( v24 )
        {
          case 0uLL:
          case 1uLL:
          case 2uLL:
          case 3uLL:
          case 4uLL:
          case 5uLL:
          case 6uLL:
          case 7uLL:
          case 0xAuLL:
            v25 = a1[22];
            sub_DFDA20(v25, 8);
            sub_DFDA50(v25, 8);
            break;
          case 8uLL:
          case 9uLL:
          case 0xCuLL:
            v26 = a1[22];
            sub_DFDA20(v26, 16);
            sub_DFDA50(v26, 16);
            break;
          case 0xBuLL:
            v30 = a1[22];
            v27 = sub_DFDA20(v30, 24);
            v28 = v30;
            if ( *(_DWORD *)(v27 + 8) > 0x40u && *(_QWORD *)v27 )
            {
              operator delete[](*(void **)v27);
              v28 = v30;
            }
            sub_DFDA50(v28, 24);
            break;
          case 0xDuLL:
            goto LABEL_22;
          case 0xEuLL:
            v31 = a1[22];
            v29 = sub_DFDA20(v31, 64);
            sub_DFF560(v29);
            sub_DFDA50(v31, 64);
            break;
          default:
            break;
        }
      }
      if ( i == v19 )
        break;
    }
    goto LABEL_3;
  }
LABEL_4:
  v8 = *(_QWORD *)(a3 + 384);
  for ( j = v8 + 4 * result; v8 != j; j -= 4 )
  {
    v10 = v3;
    v3 = a1[22];
    switch ( *(_DWORD *)(j - 4) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xA:
        sub_DFDA20(a1[22], 8);
        result = sub_DFDA50(v3, 8);
        break;
      case 8:
      case 9:
      case 0xC:
        sub_DFDA20(a1[22], 16);
        result = sub_DFDA50(v3, 16);
        break;
      case 0xB:
        v12 = sub_DFDA20(a1[22], 24);
        if ( *(_DWORD *)(v12 + 8) > 0x40u )
        {
          if ( *(_QWORD *)v12 )
            operator delete[](*(void **)v12);
        }
        result = sub_DFDA50(v3, 24);
        break;
      case 0xD:
        v13 = sub_DFDA20(a1[22], 48);
        sub_DFF560(v13);
        result = sub_DFDA50(v3, 48);
        break;
      case 0xE:
        v11 = sub_DFDA20(a1[22], 64);
        sub_DFF560(v11);
        result = sub_DFDA50(v3, 64);
        break;
      default:
        v3 = v10;
        break;
    }
  }
  return result;
}

