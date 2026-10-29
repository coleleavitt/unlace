/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432C60
// Address: 0x00432C60

//----- (00432C60) --------------------------------------------------------
int __userpurge sub_432C60@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, _QWORD *a2, char a3)
{
  int v6; // eax
  int result; // eax
  _QWORD v8[2]; // [esp+10h] [ebp-10h] BYREF

  sub_432B90(this, xmm0_0, ebx0, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(this + 66);
      LOBYTE(v8[0]) = 1;
      v8[1] = 0;
      result = *(unsigned __int16 *)(v6 + 12);
      if ( (_WORD)result != 15677 )
        break;
      sub_432B90(this, (__m128i)0LL, (void **)0x213D, v8, 1);
      sub_433400(a2, (int)v8);
    }
    if ( (_WORD)result != 8509 )
      break;
    sub_432B90(this, (__m128i)0LL, (void **)0x213D, v8, 1);
    sub_433850(a2, (int)v8);
  }
  return result;
}
