/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430C60
// Address: 0x00430C60

//----- (00430C60) --------------------------------------------------------
void *__usercall sub_430C60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // ecx
  void *result; // eax

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
    sub_430D50(v4 + 8, a2, a3);
  result = *(void **)(a1 + 4);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
