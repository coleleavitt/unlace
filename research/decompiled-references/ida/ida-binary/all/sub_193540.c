__int64 __fastcall sub_193540(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int128 *v7; // rsi
  __int64 tinfo_property4; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+0h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C8h]
  __m128i v20; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-B0h]
  __int128 v22; // [rsp+38h] [rbp-A8h]
  _OWORD v23[3]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-68h]
  int v25; // [rsp+80h] [rbp-60h]
  __int64 v26; // [rsp+88h] [rbp-58h]
  char v27; // [rsp+90h] [rbp-50h]
  unsigned __int64 v28; // [rsp+A0h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v17 = 0;
  v7 = &v18;
  v19 = 0;
  v21 = 0;
  v24 = 1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v23[0] = 0;
  if ( get_udm_by_tid(&v17, &v18, a3) == -1
    || (v7 = (_OWORD *)(&qword_128 + 4), get_tinfo_property4(v17, 300, 0, 0, 0, 0) == -1) )
  {
    v12 = 0;
  }
  else
  {
    v7 = (_OWORD *)(&qword_128 + 4);
    tinfo_property4 = get_tinfo_property4(v17, 300, 0, 0, 0, 0);
    *a1 = get_func(tinfo_property4);
    *a2 = a3;
    if ( a4 )
    {
      v9 = *a4;
      v10 = _mm_loadu_si128((const __m128i *)(a4 + 1));
      v11 = _mm_loadu_si128(&v20);
      *a4 = v19;
      v19 = v9;
      *(__m128i *)(a4 + 1) = v11;
      v20 = v10;
    }
    v12 = 1;
  }
  clear_tinfo_t(v23);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v7, v13, v14, v15);
  }
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19, v7, v13, v14, v15);
  }
  clear_tinfo_t(&v17);
  return v12;
}
