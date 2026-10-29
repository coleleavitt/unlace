void __fastcall sub_A9CDE0(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, unsigned int *a6)
{
  __int64 v9; // rax
  unsigned int *v10; // r15
  __int64 v11; // rax
  unsigned int *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v20[0] = 0;
  if ( a4 == 2 )
  {
    if ( (unsigned __int8)sub_A87660(a1, a2, a3, (int *)a6, 1)
      && (unsigned __int8)sub_A7E890(a1, a2, v20, (__int64)a6, 0) )
    {
      v9 = sub_FF9FF0(a1[63]);
      v10 = (unsigned int *)v20[0];
      v19 = v9;
      v11 = sub_FF9FF0(a1[63]);
      v12 = (unsigned int *)sub_180C100(*(_QWORD *)(v11 + 56), 8);
      *v12 = 0x80000000;
      v13 = v12;
      v12[1] = a3;
      if ( !v10 || v10 == v12 )
        goto LABEL_9;
LABEL_8:
      v14 = sub_180C100(*(_QWORD *)(v19 + 56), 24);
      v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v10);
      *v13 = (*v13 + 1) & 0x3FFFFFFF | *v13 & 0xC0000000;
      v13 = (_DWORD *)v14;
      *v10 = (*v10 + 1) & 0x3FFFFFFF | *v10 & 0xC0000000;
      *(_QWORD *)v14 = 0;
      *(__m128i *)(v14 + 8) = v15;
LABEL_9:
      sub_A9CA00((__int64)a1, *(_DWORD *)(a5 + 12), (__int64)v13, a6);
    }
  }
  else if ( a4 == -2
         && (unsigned __int8)sub_A87660(a1, a2, a3, (int *)a6, 0)
         && (unsigned __int8)sub_A7E890(a1, a2, v20, (__int64)a6, 1) )
  {
    v16 = sub_FF9FF0(a1[63]);
    v10 = (unsigned int *)v20[0];
    v19 = v16;
    v17 = sub_FF9FF0(a1[63]);
    v18 = (unsigned int *)sub_180C100(*(_QWORD *)(v17 + 56), 8);
    *v18 = 0x80000000;
    v13 = v18;
    v18[1] = a3;
    if ( !v10 || v10 == v18 )
      goto LABEL_9;
    goto LABEL_8;
  }
}

