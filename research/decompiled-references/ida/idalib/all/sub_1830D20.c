void __fastcall sub_1830D20(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // rax
  int v9; // r14d
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD v15[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v15[0] = 0;
  if ( (unsigned __int8)sub_1830010(
                          a1,
                          a2,
                          (__int64)a3,
                          1u,
                          (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL),
                          (__int64)v15,
                          1u,
                          0) )
  {
    v7 = *(_QWORD **)(a1 + 248);
    v8 = v7[294];
    v9 = v15[0] & 0x3FFFFFFF;
    v7[304] += 48LL;
    v10 = (__m128i *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7[295] >= (unsigned __int64)&v10[3] && v8 )
      v7[294] = v10 + 3;
    else
      v10 = (__m128i *)sub_986170((__int64)(v7 + 294), 48, 48, 3, v5, v6);
    sub_B1B990(v10, *(_QWORD *)(a1 + 248), a3, v9);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  }
}
