/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_value
// Address: 0x000B9300

//----- (000B9300) --------------------------------------------------------
char __cdecl swap_value(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // xmm0_8

  switch ( a3 )
  {
    case 1:
      LOBYTE(v3) = *(_BYTE *)a2;
      *(_BYTE *)a1 = *(_BYTE *)a2;
      break;
    case 2:
      LOWORD(v3) = __ROL2__(*(_WORD *)a2, 8);
      *(_WORD *)a1 = v3;
      break;
    case 4:
      LODWORD(v3) = _byteswap_ulong(*(_DWORD *)a2);
      *(_DWORD *)a1 = v3;
      break;
    case 8:
      v3 = swap64(*a2);
      *a1 = v3;
      break;
    case 16:
      if ( a1 != a2 )
      {
        v4 = *a2;
        a1[1] = a2[1];
        *a1 = v4;
      }
      LOBYTE(v3) = swap128(a1);
      break;
    default:
      return v3;
  }
  return v3;
}
// B9381: variable 'v3' is possibly undefined
