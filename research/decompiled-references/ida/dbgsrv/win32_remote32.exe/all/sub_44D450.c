/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D450
// Address: 0x0044D450

//----- (0044D450) --------------------------------------------------------
int __usercall sub_44D450@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, char *a3, ...)
{
  int *v3; // edi
  int v4; // esi
  va_list va; // [esp+10h] [ebp+8h] BYREF

  va_start(va, a3);
  v3 = (int *)dword_4B6C94;
  if ( !dword_4B6C94 )
    v3 = sub_46953A(1);
  v4 = sub_453DB0(a1, (int)v3, a2, (int)v3, a3, (int)va);
  sub_46C197(a1, (int)v3, (int)v3);
  return v4;
}
// 4B6C94: using guessed type int dword_4B6C94;
