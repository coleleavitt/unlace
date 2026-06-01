void __fastcall sub_1813EA0(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // r9
  void *v6; // r15
  __int64 v7; // r8
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  _BYTE v19[72]; // [rsp+20h] [rbp-48h] BYREF

  ptr = v19;
  v18 = 0x100000000LL;
  sub_18134D0(a1, a2, (__int64)a3, (unsigned __int64)&ptr, 0, 1);
  v6 = ptr;
  v7 = (unsigned int)v18;
  v8 = *(_QWORD **)(a1 + 248);
  v9 = v8[294];
  v8[304] += 72LL;
  v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8[295] >= (unsigned __int64)&v10[4].m128i_u64[1] && v9 )
  {
    v8[294] = (char *)v10 + 72;
  }
  else
  {
    v16 = v7;
    v15 = sub_986170((__int64)(v8 + 294), 72, 72, 3, v7, v5);
    LODWORD(v7) = v16;
    v10 = (__m128i *)v15;
  }
  sub_B2DB80(v10, *(_QWORD *)(a1 + 248), a3, v6, v7);
  sub_B8CC60((__int64)a2, (__int64)v10, v11, v12, v13, v14);
  if ( ptr != v19 )
    free(ptr);
}
