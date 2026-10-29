__int64 __fastcall sub_880FA0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  void *v7; // rbp
  __int64 v8; // rdi
  __int64 (*v9)(void); // rax
  __int64 v10; // rdi
  __m128i v11; // xmm0
  int v12; // edx
  _QWORD v13[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(v4 + 24);
  if ( result )
  {
    if ( *(_BYTE *)(result + 352) )
    {
      sub_7A4170(v4);
      sub_87F730((_DWORD *)(a1 + 960), *(_QWORD *)(a1 + 80), a2);
      sub_880690(a1, (unsigned __int64 *)(a1 + 720));
      if ( a3 != -2 )
      {
        v13[0] = 1;
        v13[1] = 0;
        v14[0] = 1;
        v14[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v14);
        BYTE4(v14[0]) &= ~1u;
        LODWORD(v14[0]) = 1;
        sub_83BB30((int **)(a1 + 960), (int *)v13, a3 ^ 1);
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        sub_182CBA0(v7, v14);
      }
      v8 = *(_QWORD *)(a1 + 80);
      v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 432LL);
      if ( (char *)v9 == (char *)sub_79EFF0 )
        v10 = v8 + 2144;
      else
        v10 = v9();
      result = sub_180C100(v10, 32);
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 980));
      v12 = *(_DWORD *)(a1 + 976);
      *(_QWORD *)result = off_1C55958;
      *(_DWORD *)(result + 8) = v12;
      *(__m128i *)(result + 12) = v11;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

