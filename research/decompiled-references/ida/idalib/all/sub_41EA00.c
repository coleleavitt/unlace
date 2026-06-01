unsigned __int64 __fastcall sub_41EA00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  _QWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  void *v18; // [rsp+0h] [rbp-108h] BYREF
  __int128 v19; // [rsp+8h] [rbp-100h]
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  _BYTE v26[88]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1672);
  v27 = __readfsqword(0x28u);
  sub_42D210(v26, v4);
  v6 = *(_QWORD **)(a2 + 1672);
  v18 = nullptr;
  v19 = 0;
  sub_7BF130(v6 + 308, a2, &v18);
  v7 = a3[1];
  v8 = *a3;
  if ( a3[2] < (unsigned __int64)(v7 + 1) )
  {
    v17 = qvector_reserve(a3, v8, v7 + 1, 24);
    *a3 = v17;
    v7 = a3[1];
    v8 = v17;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a3[1];
  sub_42D250(v26, v6[308], 0, 1);
  sub_35A790((char **)v9);
  v10 = -1;
  if ( v6[314] )
    v10 = *(_QWORD *)(v6[312] + 32LL);
  v11 = 11;
  while ( v10 != -1 )
  {
    if ( !--v11 )
      break;
    v22 = 0;
    v24 = 0;
    v25 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    if ( (unsigned __int8)get_fixup(&v22, v10) )
    {
      v13 = a3[1];
      v14 = *a3;
      ptr = nullptr;
      v21 = 0;
      if ( a3[2] < (unsigned __int64)(v13 + 1) )
      {
        v15 = qvector_reserve(a3, v14, v13 + 1, 24);
        *a3 = v15;
        v13 = a3[1];
        v14 = v15;
      }
      v12 = v14 + 24 * v13;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a3[1];
      get_fixup_desc(&ptr, v10, &v22);
      sub_35A790((char **)v12);
      if ( ptr )
      {
        *(_QWORD *)&v21 = 0;
        qfree(ptr);
      }
    }
    v10 = sub_41BA40((__int64)v6, v10);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v27 - __readfsqword(0x28u);
}
