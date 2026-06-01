/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402970
// Address: 0x00402970

//----- (00402970) --------------------------------------------------------
LPVOID *__usercall sub_402970@<eax>(__m128i a1@<xmm0>, LPVOID *a2, char *a3, ...)
{
  int v3; // eax
  int v4; // ebp
  void *v6; // [esp-4h] [ebp-14h]
  va_list va; // [esp+1Ch] [ebp+Ch] BYREF

  va_start(va, a3);
  if ( *a2 )
  {
    v6 = *a2;
    a2[1] = nullptr;
    sub_453A20(v6);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  v3 = sub_453E80(a1, nullptr, 0, a3, (int)va);
  if ( v3 )
  {
    v4 = v3 + 1;
    if ( v3 + 1 > (unsigned int)a2[2] )
      *a2 = sub_453B00((int)a2, *a2, v3 + 1, 1u);
    a2[1] = (LPVOID)v4;
    sub_453E80(a1, *a2, v4, a3, (int)va);
  }
  return a2;
}
