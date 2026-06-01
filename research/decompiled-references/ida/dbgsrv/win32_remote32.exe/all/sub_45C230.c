/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C230
// Address: 0x0045C230

//----- (0045C230) --------------------------------------------------------
int __userpurge sub_45C230@<eax>(int a1@<ebx>, int a2@<edi>, LPCCH lpMultiByteStr, int a4, int a5)
{
  int result; // eax

  result = sub_45BC90(a1, a2, lpMultiByteStr, (_DWORD *)(a4 + 276), a5);
  if ( !result )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 284);
    sub_45A4D0((char *)(a4 + 4), (char *)(a4 + 292), 260);
    *(_WORD *)(a4 + 272) = *(_WORD *)(a4 + 290);
    *(_WORD *)(a4 + 274) = *(_WORD *)(a4 + 288);
    *(_QWORD *)(a4 + 264) = *(int *)(a4 + 280);
    return 0;
  }
  return result;
}
