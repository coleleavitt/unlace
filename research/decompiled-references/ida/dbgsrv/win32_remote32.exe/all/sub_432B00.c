/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432B00
// Address: 0x00432B00

//----- (00432B00) --------------------------------------------------------
int __userpurge sub_432B00@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int v6; // eax
  int result; // eax
  int v8; // edx
  _BYTE v9[8]; // [esp+10h] [ebp-10h] BYREF
  __int64 v10; // [esp+18h] [ebp-8h]

  sub_432A70(this, xmm0_0, ebx0, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(this + 66);
      v9[0] = 1;
      v10 = 0;
      result = *(unsigned __int16 *)(v6 + 12);
      if ( (_WORD)result != 15934 )
        break;
      sub_432A70(this, (__m128i)0LL, (void **)0x3C3C, (int)v9, 1);
      sub_437CB0((_QWORD *)a2, (int)v9);
    }
    if ( (_WORD)result != 15420 )
      break;
    sub_432A70(this, (__m128i)0LL, (void **)0x3C3C, (int)v9, 1);
    *(_DWORD *)(a2 + 8) = sub_4634C0(*(_QWORD *)(a2 + 8), v10);
    *(_DWORD *)(a2 + 12) = v8;
  }
  return result;
}
// 432B7F: variable 'v8' is possibly undefined
