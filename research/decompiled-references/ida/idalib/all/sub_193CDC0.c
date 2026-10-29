__int64 __fastcall sub_193CDC0(__int64 *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  __int64 v10; // r13
  int v11; // r14d
  bool v12; // r15
  int v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+10h] [rbp-88h] BYREF
  int v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128i_i64, a4);
  if ( v4 == 1 )
    return 1;
  v6 = *a1;
  v7 = v4 & 0xFFFFFFFFFFFFFFFELL;
  v8 = sub_EEC140(*(_QWORD *)(a2 + 16));
  v9 = sub_15F0EF0(v6, v8, 0, a3, *(double *)a4.m128_u64);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_DWORD *)(a2 + 32);
  v13 = v9;
  v18 = 0;
  v12 = sub_C00400(a2);
  *(_OWORD *)ptr = 0;
  v20 = 0;
  v15 = v10;
  v16 = v11;
  sub_B85890(&v17, v10);
  result = sub_19CC2F0(*a1, v7, *(_QWORD *)(v7 + 8), v13, v12, (unsigned int)&v18, 0, 0, (__int64)&v15, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
  {
    v14 = result;
    free(ptr[0]);
    return v14;
  }
  return result;
}
