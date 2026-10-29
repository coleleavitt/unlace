/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C810
// Address: 0x0045C810

//----- (0045C810) --------------------------------------------------------
int __userpurge sub_45C810@<eax>(int a1@<ebx>, int a2@<edi>, int a3, __int64 a4, DWORD a5)
{
  __int64 v5; // kr00_8
  bool v7; // cf

  if ( !a3 )
    return -1;
  if ( *(int *)a3 < 2 )
  {
    if ( !sub_45CFE0(a1, a2, *(_DWORD *)(a3 + 8), a4, a5) )
      return sub_45D030(a1, a2, *(unsigned int **)(a3 + 8));
    return -1;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v7 = __CFADD__((_DWORD)a4, *(_DWORD *)(a3 + 24));
      *(_DWORD *)(a3 + 24) += a4;
      *(_DWORD *)(a3 + 28) += HIDWORD(a4) + v7;
      return *(_DWORD *)(a3 + 24);
    }
    if ( a5 == 2 )
    {
      v5 = *(_QWORD *)(a3 + 16) + a4;
      *(_QWORD *)(a3 + 24) = v5;
      return v5;
    }
  }
  else
  {
    *(_QWORD *)(a3 + 24) = a4;
  }
  return *(_DWORD *)(a3 + 24);
}
