void __fastcall sub_1813D80(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // r9
  _QWORD *v6; // rdi
  void *v7; // r15
  __int64 v8; // r8
  __int64 v9; // rax
  __m128i *v10; // rbp
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
  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u)
    && (unsigned __int8)sub_1813BC0(a1, a2, (__int64)a3, (unsigned __int64)&ptr) )
  {
    v6 = *(_QWORD **)(a1 + 248);
    v7 = ptr;
    v8 = (unsigned int)v18;
    v9 = v6[294];
    v6[304] += 72LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6[295] >= (unsigned __int64)&v10[4].m128i_u64[1] && v9 )
    {
      v6[294] = (char *)v10 + 72;
    }
    else
    {
      v16 = v8;
      v15 = sub_986170((__int64)(v6 + 294), 72, 72, 3, v8, v5);
      LODWORD(v8) = v16;
      v10 = (__m128i *)v15;
    }
    sub_B2D2D0(v10, *(_QWORD *)(a1 + 248), a3, v7, v8);
    sub_B8CC60((__int64)a2, (__int64)v10, v11, v12, v13, v14);
  }
  if ( ptr != v19 )
    free(ptr);
}
