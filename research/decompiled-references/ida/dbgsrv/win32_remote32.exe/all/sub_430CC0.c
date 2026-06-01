/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430CC0
// Address: 0x00430CC0

//----- (00430CC0) --------------------------------------------------------
void *__usercall sub_430CC0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // esi
  void *v4; // eax
  void *result; // eax

  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 )
  {
    v4 = (void *)v3[8];
    if ( v4 )
    {
      v3[9] = 0;
      sub_453A20(v4);
      v3[8] = 0;
      v3[10] = 0;
    }
    sub_430D50((int)(v3 + 2), a2, a1);
  }
  result = *(void **)(a1 + 4);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
