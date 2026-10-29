/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FC00
// Address: 0x0003FC00

//----- (0003FC00) --------------------------------------------------------
int __userpurge sub_3FC00@<eax>(int a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // ecx

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 > 1879047929 )
  {
    if ( (unsigned __int64)(a3 - 1879047930) >= 3 && a3 != 0x7FFFFFFF && a3 != 2147483645 )
      return a1;
LABEL_8:
    sub_3C8A0((int *)a2, (void **)a1, (_QWORD *)(a2 + 260), a4);
    return a1;
  }
  if ( (unsigned __int64)a3 <= 0x1D )
  {
    v4 = 536920066;
    if ( _bittest(&v4, a3) )
      goto LABEL_8;
  }
  return a1;
}
