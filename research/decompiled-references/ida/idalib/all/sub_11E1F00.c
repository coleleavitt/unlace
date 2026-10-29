void __fastcall sub_11E1F00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char *v6; // rax
  __m128i si128; // xmm0
  void *v8[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v10[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF

  v8[0] = v9;
  v6 = (char *)operator new(0x19u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BB0);
  strcpy(v6 + 16, "inux-gnu");
  *(__m128i *)v6 = si128;
  v8[0] = v6;
  v9[0] = 24;
  v8[1] = &qword_18;
  sub_22B9ED0(v10, v8);
  if ( v8[0] != v9 )
    operator delete(v8[0]);
  sub_11E1CB0(a1, a2, a3, (__int64)v10, a4);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
}
