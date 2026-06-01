/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432A70
// Address: 0x00432A70

//----- (00432A70) --------------------------------------------------------
int __userpurge sub_432A70@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int v6; // eax
  int result; // eax
  bool v8; // cf
  _BYTE v9[8]; // [esp+8h] [ebp-10h] BYREF
  __int64 v10; // [esp+10h] [ebp-8h]

  sub_432930(this, xmm0_0, ebx0, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(this + 66);
      v9[0] = 1;
      v10 = 0;
      result = *(unsigned __int16 *)(v6 + 12);
      if ( result != 43 )
        break;
      sub_432930(this, (__m128i)0LL, ebx0, (int)v9, 1);
      v8 = __CFADD__((_DWORD)v10, *(_DWORD *)(a2 + 8));
      *(_DWORD *)(a2 + 8) += v10;
      *(_DWORD *)(a2 + 12) += HIDWORD(v10) + v8;
    }
    if ( result != 45 )
      break;
    sub_432930(this, (__m128i)0LL, ebx0, (int)v9, 1);
    v8 = *(_DWORD *)(a2 + 8) < (unsigned int)v10;
    *(_DWORD *)(a2 + 8) -= v10;
    *(_DWORD *)(a2 + 12) -= v8 + HIDWORD(v10);
  }
  return result;
}
