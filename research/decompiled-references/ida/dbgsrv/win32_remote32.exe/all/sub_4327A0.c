/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4327A0
// Address: 0x004327A0

//----- (004327A0) --------------------------------------------------------
char __userpurge sub_4327A0@<al>(int *this@<ecx>, __m128i xmm0_0@<xmm0>, void **ebx0@<ebx>, int a2, char a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  char result; // al
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _BYTE v14[8]; // [esp+14h] [ebp-10h] BYREF
  __int64 v15; // [esp+1Ch] [ebp-8h]

  if ( a3 )
  {
    ebx0 = (void **)*(this + 66);
    v6 = sub_4360F0((int)this, ebx0, xmm0_0, (int)ebx0, 0, nullptr);
    if ( *(this + 8) )
    {
      if ( v6 )
        goto LABEL_18;
      v6 = sub_4345C0((const CHAR **)this, ebx0, (int)ebx0);
    }
    if ( !v6 )
      goto LABEL_6;
LABEL_18:
    v13 = sub_45C9E0();
    sub_46653B(this + 50, v13);
    JUMPOUT(0x432921);
  }
LABEL_6:
  v7 = *(this + 66);
  v14[0] = 1;
  v15 = 0;
  v8 = *(unsigned __int16 *)(v7 + 12);
  switch ( v8 )
  {
    case '-':
      sub_4327A0(this, (__m128i)0LL, ebx0, (int)v14, 1);
      v9 = -(int)v15;
      *(_DWORD *)(a2 + 12) = (unsigned __int64)-v15 >> 32;
      result = v14[0];
      *(_DWORD *)(a2 + 8) = v9;
      *(_BYTE *)a2 = result;
      break;
    case '+':
      sub_4327A0(this, (__m128i)0LL, ebx0, (int)v14, 1);
      v11 = HIDWORD(v15);
      *(_DWORD *)(a2 + 8) = v15;
      result = v14[0];
      *(_DWORD *)(a2 + 12) = v11;
      *(_BYTE *)a2 = result;
      break;
    case '!':
      sub_4327A0(this, (__m128i)0LL, ebx0, (int)v14, 1);
      if ( v15 )
        *(_DWORD *)(a2 + 8) = 0;
      else
        *(_DWORD *)(a2 + 8) = 1;
      result = v14[0];
      *(_DWORD *)(a2 + 12) = 0;
      *(_BYTE *)a2 = result;
      break;
    case '~':
      sub_4327A0(this, (__m128i)0LL, ebx0, (int)v14, 1);
      v12 = v15;
      *(_DWORD *)(a2 + 12) = ~HIDWORD(v15);
      result = v14[0];
      *(_DWORD *)(a2 + 8) = ~v12;
      *(_BYTE *)a2 = result;
      break;
    default:
      return sub_432500((int)this, ebx0, (__m128i)0LL, a2);
  }
  return result;
}
// 43291C: control flows out of bounds to 432921
