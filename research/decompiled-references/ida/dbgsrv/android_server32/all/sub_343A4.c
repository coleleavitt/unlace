/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_343A4
// Address: 0x000343A4

//----- (000343A4) --------------------------------------------------------
int __fastcall sub_343A4(int a1, _DWORD *a2, int a3)
{
  int v5; // r0
  int v6; // r2
  int v7; // r5
  _DWORD *v8; // r7
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned __int16 *v14; // r1
  int v16; // [sp+8h] [bp-4h]

  v5 = a3 - 1;
  v6 = 11;
  switch ( v5 )
  {
    case 0:
      break;
    case 1:
    case 3:
      v6 = 9;
      break;
    case 2:
    case 4:
      v6 = 4;
      break;
    case 5:
      v6 = 4;
      if ( *(_DWORD *)(a1 + 480) != 7 )
        v6 = 9;
      break;
    case 11:
      v6 = 1879048189;
      break;
    case 12:
      v6 = 1879048190;
      break;
    case 13:
      v6 = 1879048191;
      break;
    default:
      if ( !under_debugger )
        interr(20101);
      __debugbreak();
  }
  v16 = v6;
  v7 = 32 * a3;
  v8 = (_DWORD *)(a1 + 32 * a3);
  result = 0;
  if ( *(__int64 *)v8 >= 1 )
  {
    if ( *((_QWORD *)v8 + 2) )
    {
      memset(a2, 0, 0x40u);
      v10 = *(_DWORD *)(a1 + v7 + 8);
      a2[5] = *(_DWORD *)(a1 + v7 + 12);
      a2[4] = v10;
      v11 = *v8;
      a2[7] = v8[1];
      a2[6] = v11;
      v12 = v8[4];
      a2[9] = v8[5];
      a2[8] = v12;
      v13 = *(_DWORD *)(a1 + v7 + 28);
      a2[1] = v16;
      a2[11] = v13;
      result = 1;
      if ( (a3 | 1) != 5 )
      {
        if ( (v16 & 0x7FFFFFFF) == 4 )
        {
          v14 = (unsigned __int16 *)(a1 + 120);
        }
        else if ( (v16 & 0x7FFFFFFF) == 0xB )
        {
          v14 = (unsigned __int16 *)(a1 + v7 + 24);
        }
        else
        {
          v14 = (unsigned __int16 *)(a1 + 88);
        }
        a2[14] = *v14;
        a2[15] = 0;
      }
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
