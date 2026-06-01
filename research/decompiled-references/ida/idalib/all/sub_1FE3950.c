void __fastcall sub_1FE3950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  double v11; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+Ch] [rbp-2Ch]
  __m128 v13[2]; // [rsp+10h] [rbp-28h] BYREF

  v6 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v7 = a2 & 7;
    if ( (a2 & 8) != 0 )
    {
      v7 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
      v6 = (_QWORD *)*v6;
    }
    v8 = *(unsigned int *)(a1 + 20);
    v11 = a1 + 8;
    v9 = *(unsigned int *)(a1 + 16);
    if ( v9 + 1 > v8 )
    {
      v12 = v7;
      sub_2237220(a1 + 8, a1 + 24, v9 + 1, 4);
      v9 = *(unsigned int *)(a1 + 16);
      LODWORD(v7) = v12;
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = a1;
    *(_DWORD *)(v10 + 4 * v9) = v7;
    ++*(_DWORD *)(a1 + 16);
    v13[0] = _mm_loadh_ps((const double *)&v11);
    sub_1FE2EB0(v13, (__int64)v6, v10, v9, a5, a6);
  }
  else
  {
    *(_BYTE *)a1 = 1;
  }
}
