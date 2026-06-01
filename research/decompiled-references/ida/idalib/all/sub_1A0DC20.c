__int64 __fastcall sub_1A0DC20(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // rax^4
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+Fh] [rbp-89h]
  void *v16[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __m128i v18; // [rsp+30h] [rbp-68h] BYREF

  v6 = (_QWORD *)sub_1A0B620(a3);
  if ( sub_B73640((__int64)v6)
    || (((unsigned __int64)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6) >> 32) & 0x80000000) != 0LL )
  {
    return 0;
  }
  v8 = *(_QWORD *)&byte_8[v6[6] & 0xFFFFFFFFFFFFFFF0LL];
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | (unsigned __int8)v6[6]) & 7;
  *(double *)a4.m128i_i64 = (*(double (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  v11 = sub_15F0EF0(a1, v10, 0, a4, a5);
  sub_19E9430((__int64)v16, a1, v9, v11, v12, v13);
  result = 0;
  if ( v16[1] )
  {
    v14 = *(_QWORD *)(a3 + 16);
    v18.m128i_i32[0] = 21;
    v18.m128i_i64[1] = v14;
    sub_1A0C040(a2 + 8, &v18);
    sub_9EE8A0(a2 + 8064, (__int64)v16);
    *(_DWORD *)(a2 + 8096) = v11;
    result = 1;
  }
  if ( v16[0] != &v17 )
  {
    v15 = result;
    operator delete(v16[0]);
    return v15;
  }
  return result;
}
