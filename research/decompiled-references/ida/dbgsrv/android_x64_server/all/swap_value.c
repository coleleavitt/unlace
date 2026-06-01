/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_value
// Address: 0x00000000000CB540

//----- (00000000000CB540) ----------------------------------------------------
void __fastcall swap_value(__int64 *a1, unsigned int *a2, int a3)
{
  switch ( a3 )
  {
    case 1:
      *(_BYTE *)a1 = *(_BYTE *)a2;
      break;
    case 2:
      *(_WORD *)a1 = __ROL2__(*(_WORD *)a2, 8);
      break;
    case 4:
      *(_DWORD *)a1 = _byteswap_ulong(*a2);
      break;
    case 8:
      *a1 = swap64(*(_QWORD *)a2);
      break;
    case 16:
      if ( a1 != (__int64 *)a2 )
        *(_OWORD *)a1 = *(_OWORD *)a2;
      swap128(a1);
      break;
    default:
      return;
  }
}
