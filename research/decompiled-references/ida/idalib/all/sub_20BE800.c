void __fastcall sub_20BE800(unsigned __int64 a1, unsigned int a2, const void *a3, size_t a4, __int64 a5)
{
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  __m128 *v14; // rbp
  _QWORD *v15; // rax
  double v16[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v17; // [rsp+10h] [rbp-48h] BYREF
  __m128 v18; // [rsp+18h] [rbp-40h]

  v8 = *(__int64 **)a1;
  *(_QWORD *)&v16[0] = a5;
  v9 = sub_20C31F0(v8);
  v10 = sub_205FB40(v9, a2, 0);
  v11 = sub_20AFB20(v10);
  v12 = *(__int64 **)a1;
  v17 = v11;
  v13 = sub_20B4D60(v12, a3, a4);
  v14 = *(__m128 **)(a1 + 856);
  *(_QWORD *)&v16[1] = v13;
  v18 = _mm_loadh_ps(v16);
  if ( !v14 )
    v14 = sub_20BE620(a1, "llvm.module.flags", (__int64 *)((char *)&word_10 + 1));
  v15 = (_QWORD *)sub_20B52A0(*(__int64 **)a1, &v17, 3, 0, 1);
  sub_20B3610((__int64)v14, v15);
}
