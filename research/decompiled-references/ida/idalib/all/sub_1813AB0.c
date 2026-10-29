void __fastcall sub_1813AB0(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __m128i *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  _BYTE v18[72]; // [rsp+10h] [rbp-48h] BYREF

  v17 = 0x100000000LL;
  ptr = v18;
  sub_18134D0(a1, a2, (__int64)a3, (unsigned __int64)&ptr, 0, 0);
  if ( !(_DWORD)v17 )
  {
    v7 = ptr;
    if ( ptr == v18 )
      return;
    goto LABEL_3;
  }
  v8 = *(_QWORD **)(a1 + 248);
  v9 = *(_QWORD *)ptr;
  v10 = v8[294];
  v8[304] += 48LL;
  v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8[295] >= (unsigned __int64)&v11[3] && v10 )
    v8[294] = v11 + 3;
  else
    v11 = (__m128i *)sub_986170((__int64)(v8 + 294), 48, 48, 3, v5, v6);
  sub_B13EC0(v11, *(_QWORD *)(a1 + 248), a3, v9);
  sub_B8CC60((__int64)a2, (__int64)v11, v12, v13, v14, v15);
  v7 = ptr;
  if ( ptr != v18 )
LABEL_3:
    free(v7);
}
