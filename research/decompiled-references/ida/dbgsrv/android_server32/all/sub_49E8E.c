/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E8E
// Address: 0x00049E8E

//----- (00049E8E) --------------------------------------------------------
void __fastcall sub_49E8E(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        __int64 a12)
{
  int *v12; // r4
  int v13; // r7
  int v14; // r6
  int v15; // r7
  int v16; // r4

  v14 = *v12;
  v15 = v13 * (v12[1] - 1);
  v16 = *v12 + v15;
  switch ( sub_4AAC8((unsigned __int8 *)v16, &a11) )
  {
    case 2:
      if ( !(_DWORD)a12 )
        goto LABEL_9;
      *(int *)(v16 + 8) /= (int)a12;
      break;
    case 3:
      switch ( ediv((__int16 *)(v16 + 8), a8, (_WORD *)(v16 + 8)) )
      {
        case 2:
        case 4:
          JUMPOUT(0x4A452);
        case 5:
          JUMPOUT(0x4A450);
        default:
          goto LABEL_14;
      }
      break;
    case 5:
      set_qerrno(1531);
      break;
    case 6:
    case 8:
      set_qerrno(1531);
      goto LABEL_15;
    case 7:
      if ( !idcv_int64(v16) && !idcv_int64((int)&a11) )
        goto LABEL_8;
      break;
    case 9:
LABEL_8:
      if ( !a12 )
      {
LABEL_9:
        set_qerrno(86);
LABEL_15:
        JUMPOUT(0x4A456);
      }
      *(__int64 *)(v14 + v15 + 8) /= a12;
      break;
    default:
      break;
  }
LABEL_14:
  JUMPOUT(0x4A458);
}
// 4A1EA: control flows out of bounds to 4A450
// 4A1EA: control flows out of bounds to 4A452
// 4A1EA: control flows out of bounds to 4A458
// 49ECA: control flows out of bounds to 4A456
// 49E8E: variable 'v12' is possibly undefined
// 49E94: variable 'v13' is possibly undefined
