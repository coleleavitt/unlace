/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4673EC
// Address: 0x004673EC

//----- (004673EC) --------------------------------------------------------
int __usercall sub_4673EC@<eax>(int a1@<ebx>, int *a2@<edi>, int a3@<esi>, _DWORD *a4)
{
  _DWORD *v4; // eax

  v4 = (_DWORD *)*a4;
  if ( *(_DWORD *)*a4 != -529697949
    || v4[4] != 3
    || v4[5] != 429065504 && v4[5] != 429065505 && v4[5] != 429065506
    || v4[7] )
  {
    return 0;
  }
  *((_DWORD *)sub_4667C5(a1, a2, a3) + 8) = 1;
  return 1;
}
