unsigned __int64 __fastcall pb_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v7; // rbx
  int v8; // edx
  __int64 v9; // rdx
  int v10; // ebp
  __int64 v11; // r15
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 wide_byte; // rax
  int original_byte; // edx
  __int64 v16; // r9
  __int64 v17; // r10
  char *v18; // r9
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r11
  __int128 v22; // kr10_16
  __int64 *v23; // rax
  __int64 v24; // rcx
  const char *v25; // rsi
  const __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+18h] [rbp-80h]
  __int64 v33; // [rsp+20h] [rbp-78h] BYREF
  __m128i v34; // [rsp+28h] [rbp-70h]
  const char *v35; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v7 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 16 * a6);
  v8 = *(_DWORD *)(a1 + 224);
  v37 = __readfsqword(0x28u);
  sub_169A50(*a2, (__int64)"%0*a", 2 * v8, a3);
  sub_169A50(*a2 + 3, (__int64)"0x%llx", v7[1]);
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v9 = v7[1];
  v35 = nullptr;
  if ( v9 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      original_byte = get_original_byte(v11 + *v7);
      if ( original_byte == -1 )
        break;
      v12 = "%02X ";
      sub_16FAA0((__int64 *)&v35, (__int64)"%02X ", original_byte);
LABEL_4:
      wide_byte = get_wide_byte(v11 + *v7, v12, v13);
      sub_16FAA0(&v33, (__int64)"%02llX ", wide_byte);
      v11 = ++v10;
      if ( (unsigned __int64)v10 >= v7[1] )
      {
        v19 = v33;
        v20 = v34.m128i_i64[1];
        v9 = v34.m128i_i64[0];
        v21 = (__int64)v35;
        v22 = v36;
        goto LABEL_12;
      }
    }
    v16 = v36;
    if ( (_QWORD)v36 )
    {
      v17 = v36 + 2;
      v13 = v36 + 3;
      v12 = v35;
      v16 = v36 - 1;
      if ( *((_QWORD *)&v36 + 1) >= (unsigned __int64)(v36 + 3) )
      {
LABEL_8:
        *(_QWORD *)&v36 = v13;
        v12[v17] = 0;
        v18 = (char *)&v35[v16];
        *(_WORD *)v18 = 16191;
        v18[2] = 32;
        goto LABEL_4;
      }
    }
    else
    {
      v12 = v35;
      v13 = 4;
      v17 = 3;
      if ( *((_QWORD *)&v36 + 1) >= 4u )
        goto LABEL_8;
    }
    v32 = v17;
    v31 = v16;
    v30 = v13;
    v35 = (const char *)qvector_reserve(&v35, v12, v13, 1);
    v17 = v32;
    v12 = v35;
    v16 = v31;
    v13 = v30;
    goto LABEL_8;
  }
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v22 = 0u;
LABEL_12:
  v23 = *a2;
  v24 = (*a2)[6];
  v25 = (const char *)(*a2)[8];
  v23[6] = v21;
  *(_OWORD *)(v23 + 7) = v22;
  v26 = (const __m128i *)*a2;
  v35 = (const char *)v24;
  v27 = _mm_loadu_si128(v26 + 5);
  v28 = v26[4].m128i_i64[1];
  *((_QWORD *)&v36 + 1) = v25;
  v26[4].m128i_i64[1] = v19;
  v26[5].m128i_i64[0] = v9;
  v26[5].m128i_i64[1] = v20;
  v33 = v28;
  v34 = v27;
  if ( v24 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v24, v25);
    v28 = v33;
  }
  if ( v28 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v28, v25);
  }
  return v37 - __readfsqword(0x28u);
}
