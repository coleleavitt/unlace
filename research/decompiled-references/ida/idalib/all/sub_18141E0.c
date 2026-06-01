void __fastcall sub_18141E0(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  _BYTE v17[56]; // [rsp+10h] [rbp-38h] BYREF

  v16 = 0x100000000LL;
  ptr = v17;
  sub_18134D0(a1, a2, (__int64)a3, (unsigned __int64)&ptr, 0, 0);
  if ( (_DWORD)v16 == 1 )
  {
    v7 = *(_QWORD *)ptr;
    if ( ptr != v17 )
      free(ptr);
    v8 = *(_QWORD **)(a1 + 248);
    v9 = v8[294];
    v8[304] += 48LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v10[3] && v9 )
      v8[294] = v10 + 3;
    else
      v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 48, 48, 3, v5, v6);
    sub_B131E0(v10, *(_QWORD *)(a1 + 248), a3, v7);
    sub_B8CC60((__int64)a2, (__int64)v10, v11, v12, v13, v14);
  }
  else if ( ptr != v17 )
  {
    free(ptr);
  }
}
