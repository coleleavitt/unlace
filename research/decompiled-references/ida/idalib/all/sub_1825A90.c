void __fastcall sub_1825A90(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r9
  void *v7; // r15
  __int64 v8; // r8
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h]
  _BYTE v20[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B || sub_18255F0(a1, a2, (__int64)a3, a4) )
  {
    ptr = v20;
    v19 = 0x100000000LL;
    sub_18134D0(a1, (__int64 *)a2, (__int64)a3, (unsigned __int64)&ptr, 0, 1);
    v7 = ptr;
    v8 = (unsigned int)v19;
    v9 = *(_QWORD **)(a1 + 248);
    v10 = v9[294];
    v9[304] += 72LL;
    v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[295] >= (unsigned __int64)&v11[4].m128i_u64[1] && v10 )
    {
      v9[294] = (char *)v11 + 72;
    }
    else
    {
      v17 = v8;
      v16 = sub_986170((__int64)(v9 + 294), 72, 72, 3, v8, v6);
      LODWORD(v8) = v17;
      v11 = (__m128i *)v16;
    }
    sub_B2FCE0(v11, *(_QWORD *)(a1 + 248), a3, v7, v8);
    sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
    if ( ptr != v20 )
      free(ptr);
  }
}
