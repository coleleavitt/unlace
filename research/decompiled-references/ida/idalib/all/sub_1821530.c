void __fastcall sub_1821530(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rax
  bool v11; // zf
  _QWORD *v12; // rdi
  char *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+Ch] [rbp-4Ch] BYREF
  char *v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]

  v22 = "mutex";
  v10 = a3[4].m128i_i64[1];
  v23 = 5;
  v11 = *(_WORD *)(v10 + 8) == 84;
  v21 = 0;
  if ( !v11 || (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v22, &v21, a4, a5) )
  {
    v12 = *(_QWORD **)(a1 + 248);
    v13 = v22;
    v14 = v23;
    v15 = v12[294];
    v12[304] += 56LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v16[3].m128i_u64[1] && v15 )
      v12[294] = (char *)v16 + 56;
    else
      v16 = (__m128i *)sub_986170((__int64)(v12 + 294), 56, 56, 3, a7, a8);
    sub_B2E200(v16, *(_QWORD *)(a1 + 248), a3, v13, v14);
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
  }
}
