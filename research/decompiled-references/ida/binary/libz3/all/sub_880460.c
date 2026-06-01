__int64 __fastcall sub_880460(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  void *v9; // rbp
  __int64 v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rdi
  __m128i v13; // xmm0
  int v14; // edx
  void *v15; // [rsp+0h] [rbp-68h]
  void *v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(v5 + 24);
  if ( result )
  {
    if ( *(_BYTE *)(result + 352) )
    {
      sub_7A4170(v5);
      sub_87F730((_DWORD *)(a1 + 960), *(_QWORD *)(a1 + 80), 3);
      v17 = 1;
      v18 = 0;
      v19 = 1;
      v20 = 0;
      sub_182CBA0(qword_1C7F2C0, &v19);
      BYTE4(v19) &= ~1u;
      LODWORD(v19) = 1;
      sub_83BB30((int **)(a1 + 960), (int *)&v17, a2);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v17);
      sub_182CBA0(v16, &v19);
      v17 = 1;
      v18 = 0;
      v19 = 1;
      v20 = 0;
      sub_182CBA0(qword_1C7F2C0, &v19);
      BYTE4(v19) &= ~1u;
      LODWORD(v19) = 1;
      sub_83BB30((int **)(a1 + 960), (int *)&v17, a3);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v17);
      sub_182CBA0(v15, &v19);
      v17 = 1;
      v18 = 0;
      v19 = 1;
      v20 = 0;
      sub_182CBA0(qword_1C7F2C0, &v19);
      BYTE4(v19) &= ~1u;
      LODWORD(v19) = 1;
      sub_83BB30((int **)(a1 + 960), (int *)&v17, a4 ^ 1);
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v17);
      sub_182CBA0(v9, &v19);
      v10 = *(_QWORD *)(a1 + 80);
      v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 432LL);
      if ( (char *)v11 == (char *)sub_79EFF0 )
        v12 = v10 + 2144;
      else
        v12 = v11();
      result = sub_180C100(v12, 32);
      v13 = _mm_loadu_si128((const __m128i *)(a1 + 980));
      v14 = *(_DWORD *)(a1 + 976);
      *(_QWORD *)result = off_1C55958;
      *(_DWORD *)(result + 8) = v14;
      *(__m128i *)(result + 12) = v13;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

