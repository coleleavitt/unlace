__int64 __fastcall sub_363CC0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  unsigned int v5; // eax
  int item_end; // eax
  __int64 v8; // rdx
  __m128i *v9; // rax
  __int64 v10; // rsi
  unsigned int data_elsize; // eax
  __int64 v12; // r13
  unsigned int v13; // r12d
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  unsigned __int64 v17; // r13
  __int64 v19; // rdx
  unsigned __int8 v20; // [rsp+Bh] [rbp-D5h]
  unsigned int v21; // [rsp+Ch] [rbp-D4h]
  unsigned int v22; // [rsp+1Ch] [rbp-C4h] BYREF
  unsigned int *v23; // [rsp+20h] [rbp-C0h] BYREF
  int v24; // [rsp+28h] [rbp-B8h]
  __int64 v25; // [rsp+30h] [rbp-B0h] BYREF
  int v26; // [rsp+38h] [rbp-A8h]
  char v27; // [rsp+3Ch] [rbp-A4h]
  __int64 v28; // [rsp+40h] [rbp-A0h] BYREF
  int v29; // [rsp+48h] [rbp-98h] BYREF
  void *v30; // [rsp+50h] [rbp-90h]
  int *v31; // [rsp+58h] [rbp-88h]
  int *v32; // [rsp+60h] [rbp-80h]
  __int64 v33; // [rsp+68h] [rbp-78h]
  void *ptr; // [rsp+70h] [rbp-70h]
  __int128 v35; // [rsp+78h] [rbp-68h]
  __int8 *v36; // [rsp+88h] [rbp-58h]
  __m128i v37; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp-38h]

  v5 = *(_DWORD *)(a2 + 16);
  v38 = __readfsqword(0x28u);
  v21 = v5;
  item_end = get_item_end(v5, a2, a3, a4);
  v8 = *(_QWORD *)(a2 + 528);
  if ( (v8 & 0x600) == 0x400 && (v8 & 0xF0000000) == 0xB0000000LL )
  {
    sub_35A040(a2, item_end - v21, v8, v21);
    return 1;
  }
  else
  {
    v26 = item_end;
    v25 = a1;
    v22 = v21;
    v27 = 0;
    v29 = 0;
    v30 = nullptr;
    v31 = &v29;
    v32 = &v29;
    v33 = 0;
    ptr = nullptr;
    v23 = &v22;
    v35 = 0;
    v9 = (__m128i *)sub_359200(&v28, (__int64)&v29, &v23);
    v36 = &v9[2].m128i_i8[8];
    if ( a3 )
    {
      v9[8] = _mm_loadu_si128(a3);
      v9[9] = _mm_loadu_si128(a3 + 1);
      v9[10] = _mm_loadu_si128(a3 + 2);
      v9[11] = _mm_loadu_si128(a3 + 3);
      v9[12] = _mm_loadu_si128(a3 + 4);
      v9[13] = _mm_loadu_si128(a3 + 5);
      v9[14] = _mm_loadu_si128(a3 + 6);
      v9[15] = _mm_loadu_si128(a3 + 7);
      v9[16].m128i_i64[0] = a3[8].m128i_i64[0];
    }
    v10 = *(_QWORD *)(a2 + 528);
    *(_QWORD *)(a2 + 88) = &v25;
    data_elsize = get_data_elsize(v21, v10, a3);
    v12 = data_elsize;
    v13 = data_elsize;
    v37 = 0;
    v14 = nbits(v21);
    v15 = v14 + 14;
    v16 = v14 + 7;
    if ( v16 >= 0 )
      v15 = v16;
    v17 = (v15 >> 3) * v12;
    if ( v17 > 0x10 )
      v17 = 16;
    v20 = 0;
    if ( get_bytes(&v37, v17, v21, 0, 0) == v17 )
    {
      if ( (unsigned __int8)getinf_flag(3, 32) )
        sub_358FA0(v21, v37.m128i_i8, v17);
      v24 = -1;
      v19 = *(_QWORD *)(a2 + 528);
      v23 = nullptr;
      sub_35CDB0(a2, v21, v19, &v37, v13, 1u, (int *)&v23, v21);
      v20 = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
    sub_359930(v30);
  }
  return v20;
}

