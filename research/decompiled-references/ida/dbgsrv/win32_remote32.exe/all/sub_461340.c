/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461340
// Address: 0x00461340

//----- (00461340) --------------------------------------------------------
int __stdcall sub_461340(unsigned __int64 *a1, unsigned int *a2, int a3)
{
  unsigned __int64 v3; // rax
  __int16 v4; // cx

  LODWORD(v3) = a3 - 1;
  switch ( a3 )
  {
    case 1:
      *(_BYTE *)a1 = *(_BYTE *)a2;
      LODWORD(v3) = a1;
      break;
    case 2:
      LOBYTE(v4) = HIBYTE(*(_WORD *)a2);
      HIBYTE(v4) = *(_WORD *)a2;
      *(_WORD *)a1 = v4;
      LODWORD(v3) = a1;
      break;
    case 4:
      *(_DWORD *)a1 = _byteswap_ulong(*a2);
      LODWORD(v3) = a1;
      break;
    case 8:
      v3 = sub_462250(*(_QWORD *)a2);
      *a1 = v3;
      break;
    case 16:
      if ( a1 != (unsigned __int64 *)a2 )
        *(_OWORD *)a1 = *(_OWORD *)a2;
      LODWORD(v3) = sub_462270(a1);
      break;
    default:
      return v3;
  }
  return v3;
}
