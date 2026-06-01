/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477E51
// Address: 0x00477E51

//----- (00477E51) --------------------------------------------------------
int __usercall sub_477E51@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v3; // esi
  int v4; // ecx
  int result; // eax
  unsigned int v6; // ecx

  v3 = sub_4782C6();
  v4 = *(_DWORD *)(v3 + 848);
  result = ((v4 & 2) == 0) + 1;
  if ( a3 == -1 )
  {
    dword_4B6858 = -1;
  }
  else
  {
    switch ( a3 )
    {
      case 0:
        return result;
      case 1:
        v6 = v4 | 2;
        break;
      case 2:
        v6 = v4 & 0xFFFFFFFD;
        break;
      default:
        *sub_46B984() = 22;
        sub_467EF4(a1, a2);
        return -1;
    }
    *(_DWORD *)(v3 + 848) = v6;
  }
  return result;
}
// 4B6858: using guessed type int dword_4B6858;
