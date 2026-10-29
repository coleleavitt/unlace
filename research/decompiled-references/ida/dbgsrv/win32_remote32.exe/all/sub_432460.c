/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432460
// Address: 0x00432460

//----- (00432460) --------------------------------------------------------
int __userpurge sub_432460@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int result; // eax
  BOOL v7; // eax
  char v8[8]; // [esp+14h] [ebp-10h] BYREF
  __int64 v9; // [esp+1Ch] [ebp-8h]

  sub_432390(this, xmm0_0, ebx0, a2, a3);
  for ( result = *(this + 66); *(_WORD *)(result + 12) == 9766; result = *(this + 66) )
  {
    v8[0] = 1;
    v9 = 0;
    sub_432390(this, (__m128i)0LL, (void **)0x2626, (int)v8, 1);
    v7 = *(_QWORD *)(a2 + 8) && v9;
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 12) = 0;
    *(_BYTE *)a2 = 0;
  }
  return result;
}
