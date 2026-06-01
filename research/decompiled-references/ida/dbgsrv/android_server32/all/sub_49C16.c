/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C16
// Address: 0x00049C16

//----- (00049C16) --------------------------------------------------------
void __fastcall sub_49C16(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 *a8,
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
      *(_DWORD *)(v16 + 8) *= (_DWORD)a12;
      break;
    case 3:
      switch ( emul((unsigned __int16 *)(v16 + 8), a8, (_WORD *)(v16 + 8)) )
      {
        case 2:
        case 4:
          JUMPOUT(0x4A41C);
        case 5:
          JUMPOUT(0x4A41A);
        default:
          goto LABEL_11;
      }
      break;
    case 5:
      set_qerrno(1531);
      break;
    case 6:
    case 8:
      set_qerrno(1531);
      JUMPOUT(0x4A420);
    case 7:
      if ( !idcv_int64(v16) && !idcv_int64((int)&a11) )
        goto LABEL_7;
      break;
    case 9:
LABEL_7:
      *(_QWORD *)(v14 + v15 + 8) *= a12;
      break;
    default:
      break;
  }
LABEL_11:
  JUMPOUT(0x4A422);
}
// 4A0A2: control flows out of bounds to 4A41A
// 4A0A2: control flows out of bounds to 4A41C
// 4A0A2: control flows out of bounds to 4A422
// 49C52: control flows out of bounds to 4A420
// 49C16: variable 'v12' is possibly undefined
// 49C1C: variable 'v13' is possibly undefined
