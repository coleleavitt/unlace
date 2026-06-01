/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E4A4
// Address: 0x0007E4A4

//----- (0007E4A4) --------------------------------------------------------
int __fastcall sub_7E4A4(__int64 a1, int a2)
{
  _QWORD *v2; // r4
  __int64 v3; // r2

  v2 = (_QWORD *)a1;
  switch ( a2 )
  {
    case 1:
      *(_BYTE *)a1 = *(_BYTE *)HIDWORD(a1);
      break;
    case 2:
      *(_WORD *)a1 = __rev16((unsigned __int16)*(_WORD *)HIDWORD(a1));
      break;
    case 4:
      *(_DWORD *)a1 = bswap32(*(_DWORD *)HIDWORD(a1));
      break;
    case 8:
      LODWORD(a1) = sub_75294(*(_DWORD *)HIDWORD(a1), *(_DWORD *)(HIDWORD(a1) + 4));
      *v2 = a1;
      break;
    case 16:
      if ( (_DWORD)a1 != HIDWORD(a1) )
      {
        v3 = *(_QWORD *)(HIDWORD(a1) + 8);
        *(_QWORD *)a1 = *(_QWORD *)HIDWORD(a1);
        *(_QWORD *)(a1 + 8) = v3;
      }
      LODWORD(a1) = sub_7F864(a1);
      break;
    default:
      return a1;
  }
  return a1;
}
// 7E4F4: variable 'a1' is possibly undefined
