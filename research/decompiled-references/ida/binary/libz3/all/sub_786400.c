__int64 __fastcall sub_786400(__int64 *a1, const __m128i **a2, __int64 a3, double a4)
{
  void *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  void *v10; // rbx
  __m128i *v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h]
  _BYTE v17[8]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-48h]

  v13 = (__m128i *)(*a2)->m128i_i64[0];
  sub_786730(v14);
  sub_7811A0(&v15);
  v5 = (void *)sub_186B270(0x10A8u);
  sub_11CB0C0(v5, a1 + 3, v13);
  ptr = v5;
  sub_1858590(v17, a1 + 3);
  v18 = a1 + 7;
  sub_11B7290(ptr, a1 + 3);
  v6 = *a1;
  v7 = a1 + 3;
  a1[2] = (__int64)&v13;
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 112);
  if ( v8 == sub_784620 )
  {
    sub_1863170(a1 + 3, v7);
    v9 = a1[2];
    if ( v9 )
      sub_11B7290(*(_QWORD *)(v9 + 32), a1 + 3);
  }
  else
  {
    v8((__int64)a1, (__int64)v7);
  }
  sub_784AE0(&v13, a2, a3, a4);
  sub_11B9260(ptr, a1 + 4);
  a1[2] = 0;
  sub_18572D0(v17);
  v10 = ptr;
  if ( ptr )
  {
    (**(void (__fastcall ***)(void *))ptr)(ptr);
    sub_186B220(v10);
  }
  return sub_786740(v14);
}

