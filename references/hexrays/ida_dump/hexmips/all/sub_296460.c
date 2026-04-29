bool __fastcall sub_296460(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  int v8; // r15d
  unsigned __int64 v9; // r14
  bool v10; // bp
  unsigned __int64 v11; // rdx
  const __m128i *v12; // r9
  __m128i v14; // xmm1
  __int64 v15; // rbx
  __int64 v16; // r9
  char tinfo_property; // al
  char v18; // al
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbp
  __int64 tinfo_size; // rax
  unsigned __int64 v24; // r13
  int v25; // [rsp+0h] [rbp-68h]
  _QWORD *v26; // [rsp+0h] [rbp-68h]
  char v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+18h] [rbp-50h] BYREF
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+30h] [rbp-38h]
  int v37; // [rsp+38h] [rbp-30h]
  __int64 v38; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a2 + 8);
  v25 = a4;
  v35 = __readfsqword(0x28u);
  if ( !v6 )
    return 0;
  v8 = 1;
  v9 = 8 * a3;
  v10 = a3 == -1;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (const __m128i *)(*(_QWORD *)a2 + 144 * v11);
      if ( !*(_BYTE *)(a2 + 51) && !v10 )
        break;
      if ( (unsigned __int8)sub_296790(
                              a1,
                              (int)v12 + 64,
                              a3,
                              v25,
                              a5,
                              (_DWORD)v12,
                              v25,
                              v28,
                              v31,
                              v33,
                              v34,
                              v35,
                              v36,
                              v37,
                              v38) )
        return 1;
      v6 = *(_QWORD *)(a2 + 8);
      v11 = v8++;
      if ( v11 >= v6 )
        return 0;
    }
    if ( v6 - 1 == v11 )
      break;
    v11 = v8;
    if ( v9 < *(_QWORD *)(*(_QWORD *)a2 + 144LL * v8) )
      break;
    ++v8;
    if ( v11 >= v6 )
      return 0;
  }
  if ( (v12[4].m128i_i8[0] & 0xF) == 0xE )
    return 0;
  v14 = _mm_loadu_si128(v12);
  if ( _mm_add_epi64(_mm_srli_si128(v14, 8), v14).m128i_u64[0] < v9 )
    return 0;
  v15 = a3 - ((unsigned __int64)v14.m128i_i64[0] >> 3);
  if ( (unsigned __int8)sub_296790(
                          a1,
                          (int)v12 + 64,
                          v15,
                          v25,
                          a5,
                          (_DWORD)v12,
                          v25,
                          (__int64)v12,
                          v31,
                          v33,
                          v34,
                          v35,
                          v36,
                          v37,
                          v38) )
    return 1;
  v16 = v29;
  if ( !v15 )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(v29 + 64), 2);
    v16 = v29;
    if ( (tinfo_property & 0xF) == 0xA )
    {
      v18 = get_tinfo_property(*v26, 2);
      v16 = v29;
      if ( (v18 & 0xF) == 0xA )
      {
        v34 = 0;
        v34 = get_tinfo_property(*v26, 9);
        v33 = 0;
        v19 = get_tinfo_property(*(_QWORD *)(v29 + 64), 9);
        v27 = sub_296790(
                a1,
                (unsigned int)&v33,
                0,
                (unsigned int)&v34,
                v20,
                v21,
                (_DWORD)v26,
                v29,
                v32,
                v19,
                v34,
                v35,
                v36,
                v37,
                v38);
        clear_tinfo_t(&v33);
        clear_tinfo_t(&v34);
        return v27;
      }
    }
  }
  v30 = v16;
  if ( (get_tinfo_property(*(_QWORD *)(v16 + 64), 2) & 0x2F) == 0xD )
    return 0;
  if ( (get_tinfo_property(*(_QWORD *)(v30 + 64), 2) & 0xF) == 0xB )
    return 0;
  v22 = *(int *)(a1 + 80);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v30 + 64), 0);
  v24 = tinfo_size;
  return v22 < tinfo_size
      && !(tinfo_size % v22)
      && !(v15 % v22)
      && v22 == get_tinfo_size(0, *v26, 0)
      && v24 >= v22 + v15;
}
