__int64 __fastcall sub_21A3A00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 (__fastcall ***v7)(); // r13
  size_t v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 72) + 80LL * a3;
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    if ( v5 <= 0xD )
    {
      v10 = sub_201FB60(v5);
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = v11;
      return a1;
    }
    else
    {
      v7 = sub_2195B10();
      v13[0] = v14;
      v8 = j__strlen(&byte_22F0C30);
      sub_21A31E0(v13, &byte_22F0C30, (__int64)(&byte_22F0C30 + v8));
      sub_22205D0(&v12, v13, 6, v7);
      if ( v13[0] != v14 )
        operator delete(v13[0]);
      v9 = v12;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v9;
      return a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v4 + 8));
    return a1;
  }
}
