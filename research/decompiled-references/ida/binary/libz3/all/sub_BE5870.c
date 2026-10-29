__m128i *__fastcall sub_BE5870(__m128i *a1, double *a2, unsigned int *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rax
  __m128 v7; // xmm0
  void *v8; // rbx
  bool v10; // r14
  unsigned __int64 v11; // r15
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // rax
  bool v18; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  v18 = 0;
  v5 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  if ( (v5 && *v5 == 5 || (v6 = sub_15D1F10(a3), (unsigned __int8)sub_1673B10(a2 + 4, v6)))
    && (unsigned __int8)sub_BE51C0(a2, a3, (int *)v19, &v18)
    && !(v10 = v18) )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(_DWORD **)(sub_15D1F10(a3) + 24);
    if ( v12 && *v12 == 5 )
      v10 = v12[1] == 1;
    v16 = *((_QWORD *)a2 + 3);
    if ( !v16 )
    {
      sub_16669E0(a2 + 2);
      v16 = *((_QWORD *)a2 + 3);
    }
    v17 = sub_166A700(v16, (unsigned int)v19, v10, v13, v14, v15);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)v11);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
  }
  else
  {
    v7 = _mm_loadh_ps(a2 + 1);
    ++a3[2];
    *a1 = (__m128i)v7;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v8, v20);
  return a1;
}

