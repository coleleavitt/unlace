/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50488
// Address: 0x00050488

//----- (00050488) --------------------------------------------------------
int __fastcall sub_50488(int a1, int a2, int a3)
{
  int v5; // r3
  int v6; // r3
  int result; // r0
  char v8; // r1
  __int64 v9; // r2
  char v10; // r1
  int v11; // r3
  int v12; // r1
  char v13; // r2
  _BYTE v14[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v15; // [sp+8h] [bp-10h]

  if ( a3 )
    sub_502C8(a1);
  v5 = *(_DWORD *)(a1 + 592);
  v15 = 0;
  v6 = *(unsigned __int16 *)(v5 + 12);
  v14[0] = 1;
  switch ( v6 )
  {
    case '-':
      result = sub_50488(a1, v14);
      LODWORD(v9) = -(int)v15;
      HIDWORD(v9) = HIDWORD(v15) - (2 * HIDWORD(v15) + ((_DWORD)v15 != 0));
      *(_BYTE *)a2 = v14[0];
      *(_QWORD *)(a2 + 8) = v9;
      break;
    case '+':
      result = sub_50488(a1, v14);
      v10 = v14[0];
      *(_QWORD *)(a2 + 8) = v15;
      *(_BYTE *)a2 = v10;
      break;
    case '!':
      sub_50488(a1, v14);
      v11 = HIDWORD(v15);
      v12 = v15;
      v13 = v14[0];
      *(_DWORD *)(a2 + 12) = 0;
      *(_BYTE *)a2 = v13;
      *(_DWORD *)(a2 + 8) = (v11 | v12) == 0;
      return 0;
    case '~':
      result = sub_50488(a1, v14);
      v8 = v14[0];
      *(_QWORD *)(a2 + 8) = ~v15;
      *(_BYTE *)a2 = v8;
      break;
    default:
      return sub_5038C(a1, a2);
  }
  return result;
}
