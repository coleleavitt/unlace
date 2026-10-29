/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432930
// Address: 0x00432930

//----- (00432930) --------------------------------------------------------
int __userpurge sub_432930@<eax>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int v6; // eax
  int result; // eax
  int v8; // edx
  int v9; // edx
  _BYTE v10[8]; // [esp+8h] [ebp-10h] BYREF
  __int64 v11; // [esp+10h] [ebp-8h]

  sub_4327A0(this, xmm0_0, ebx0, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(this + 66);
        v10[0] = 1;
        v11 = 0;
        result = *(unsigned __int16 *)(v6 + 12);
        if ( result != 42 )
          break;
        sub_4327A0(this, (__m128i)0LL, ebx0, (int)v10, 1);
        *(_QWORD *)(a2 + 8) = sub_4633C0(*(_QWORD *)(a2 + 8), v11);
      }
      if ( result != 47 )
        break;
      sub_4327A0(this, (__m128i)0LL, ebx0, (int)v10, 1);
      if ( !v11 )
        goto LABEL_17;
      if ( *(_BYTE *)a2 || v10[0] )
      {
        *(_DWORD *)(a2 + 8) = sub_463510(*(_QWORD *)(a2 + 8), v11);
        *(_DWORD *)(a2 + 12) = v9;
      }
      else
      {
        *(_DWORD *)(a2 + 8) = sub_462A90(*(_QWORD *)(a2 + 8), v11);
        *(_DWORD *)(a2 + 12) = v8;
      }
    }
    if ( result != 37 )
      return result;
    sub_4327A0(this, (__m128i)0LL, ebx0, (int)v10, 1);
    if ( !v11 )
    {
LABEL_17:
      sub_46653B(this + 50, 86);
      JUMPOUT(0x432A6A);
    }
    if ( *(_BYTE *)a2 || v10[0] )
      *(_QWORD *)(a2 + 8) = sub_463580(*(_QWORD *)(a2 + 8), v11);
    else
      *(_QWORD *)(a2 + 8) = sub_463400(*(_QWORD *)(a2 + 8), v11);
  }
}
// 432A65: control flows out of bounds to 432A6A
// 4329D7: variable 'v8' is possibly undefined
// 4329EF: variable 'v9' is possibly undefined
