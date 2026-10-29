__m128i *__fastcall sub_1DC8630(
        __int64 *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 *v10; // r13
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i *result; // rax
  __int32 v16; // r14d
  __int32 v17; // r15d
  unsigned int v18; // r13d
  int v19; // eax
  bool v20; // al
  __m128i *v21; // [rsp+8h] [rbp-50h]
  void *v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-40h]

  v8 = (unsigned __int64)sub_1DC71F0(a1, a2[3].m128i_u64[0], a3, a4, a5, a6, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  if ( v8 == a2[3].m128i_i64[0] )
    return (__m128i *)a2;
  v9 = v8;
  v10 = (__int64 *)*a1;
  v11 = sub_B13FF0((__int64)a2);
  if ( (unsigned __int8)sub_1915F50(v10, v9, a2[1].m128i_u32[2], v11 == 1, v12, a7, a8) )
    return (__m128i *)a2;
  v16 = a2[2].m128i_i32[2];
  v17 = a2[2].m128i_i32[3];
  sub_C3DC60((__int64)&v22, v9, *(_QWORD *)(*a1 + 248), 0, v13, v14);
  v18 = v23;
  if ( v23 <= 0x40 )
  {
    if ( !v22 )
      goto LABEL_7;
    v20 = v22 == (char *)&dword_0 + 1;
LABEL_12:
    if ( v20 )
    {
      v17 = 1;
      v16 = 4;
    }
    goto LABEL_8;
  }
  v19 = sub_2206780(&v22);
  if ( v19 != v18 )
  {
    v20 = v18 - 1 == v19;
    goto LABEL_12;
  }
LABEL_7:
  v17 = 1;
  v16 = 4;
LABEL_8:
  result = sub_B26EE0(*(_QWORD *)(*a1 + 248), v16, v17, v9, a2);
  if ( v23 > 0x40 )
  {
    if ( v22 )
    {
      v21 = result;
      operator delete[](v22);
      return v21;
    }
  }
  return result;
}
