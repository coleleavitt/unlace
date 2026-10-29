/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F190
// Address: 0x0003F190

//----- (0003F190) --------------------------------------------------------
char __cdecl sub_3F190(int a1, _DWORD *a2, int a3)
{
  int v3; // edx
  int v4; // edi
  char result; // al
  int v6; // edx
  unsigned __int16 *v7; // ecx

  v3 = 11;
  switch ( a3 )
  {
    case 1:
      break;
    case 2:
    case 4:
      v3 = 9;
      break;
    case 3:
    case 5:
      v3 = 4;
      break;
    case 6:
      v3 = 5 * (*(_DWORD *)(a1 + 480) != 7) + 4;
      break;
    case 12:
      v3 = 1879048189;
      break;
    case 13:
      v3 = 1879048190;
      break;
    case 14:
      v3 = 1879048191;
      break;
    default:
      if ( !(_BYTE)under_debugger )
        interr(20101);
      BUG();
  }
  v4 = 32 * a3;
  if ( *(__int64 *)(a1 + 32 * a3) < 1 || !*(_QWORD *)(a1 + v4 + 16) )
    return 0;
  a2[1] = 0;
  *a2 = 0;
  a2[3] = 0;
  a2[2] = 0;
  a2[5] = 0;
  a2[4] = 0;
  a2[7] = 0;
  a2[6] = 0;
  a2[9] = 0;
  a2[8] = 0;
  a2[11] = 0;
  a2[10] = 0;
  a2[13] = 0;
  a2[12] = 0;
  a2[15] = 0;
  a2[14] = 0;
  *((_QWORD *)a2 + 2) = *(_QWORD *)(a1 + v4 + 8);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 32 * a3);
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + v4 + 16);
  a2[11] = *(_DWORD *)(a1 + v4 + 28);
  a2[1] = v3;
  result = 1;
  if ( (a3 | 1) != 5 )
  {
    v6 = v3 & 0x7FFFFFFF;
    if ( v6 == 4 )
    {
      v7 = (unsigned __int16 *)(a1 + 120);
    }
    else if ( v6 == 11 )
    {
      v7 = (unsigned __int16 *)(a1 + v4 + 24);
    }
    else
    {
      v7 = (unsigned __int16 *)(a1 + 88);
    }
    a2[14] = *v7;
    a2[15] = 0;
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
