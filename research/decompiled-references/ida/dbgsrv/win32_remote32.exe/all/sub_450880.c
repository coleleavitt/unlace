/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450880
// Address: 0x00450880

//----- (00450880) --------------------------------------------------------
int __usercall sub_450880@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        _DWORD *a4,
        unsigned int a5,
        int a6,
        ...)
{
  int *v6; // eax
  int result; // eax
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a6);
  v6 = sub_41C0F0();
  result = sub_46B612(a1, a2, a3, *v6, v6[1], a4, a5, a6, nullptr, (int)va);
  if ( result < 0 )
    return -1;
  return result;
}
