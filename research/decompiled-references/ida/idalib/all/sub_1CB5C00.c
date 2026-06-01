__int64 __fastcall sub_1CB5C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r14
  __int64 v9; // r8
  __int64 *v10; // r9
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v15; // rdx
  size_t v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // r9
  __m128i v24; // rax
  __int64 v25; // r8
  _WORD *v26; // rdx
  unsigned __int64 v27; // rax
  char *v28; // rdi
  __int64 v29; // rdx
  unsigned int *v30; // rsi
  unsigned __int64 v31; // rax
  const void *v32; // rsi
  __m128i *v33; // rdi
  _BYTE *v34; // rax
  _BYTE *v35; // rsi
  void *v36; // rdx
  __int64 v38; // [rsp+18h] [rbp-160h]
  size_t v40; // [rsp+38h] [rbp-140h]
  __m128i v41; // [rsp+40h] [rbp-138h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-128h] BYREF
  __m128i v43; // [rsp+60h] [rbp-118h] BYREF
  __int128 v44; // [rsp+70h] [rbp-108h]
  void *dest; // [rsp+80h] [rbp-F8h]
  char v46; // [rsp+88h] [rbp-F0h]
  int v47; // [rsp+8Ch] [rbp-ECh]
  void **p_ptr; // [rsp+90h] [rbp-E8h]
  void *ptr; // [rsp+A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-D0h]
  _BYTE v51[192]; // [rsp+B8h] [rbp-C0h] BYREF

  v6 = a1;
  ptr = v51;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  p_ptr = &ptr;
  v43.m128i_i32[2] = 2;
  v46 = 0;
  v47 = 1;
  dest = nullptr;
  v44 = 0;
  v43.m128i_i64[0] = (__int64)&off_2BEBEE0;
  sub_227B8B0(&v43, 0, 0, 0);
  if ( a3 && (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) != 0 && a5 )
  {
    v12 = a4;
    v38 = (*(_DWORD *)(a3 + 20) & 0x1FFFFFFFu) - 1;
    v13 = 0;
    do
    {
      v26 = dest;
      v27 = *((_QWORD *)&v44 + 1) - (_QWORD)dest;
      if ( v13 )
      {
        if ( v27 > 1 )
        {
          *(_WORD *)dest = 8236;
          v28 = (char *)dest + 2;
          dest = (char *)dest + 2;
        }
        else
        {
          sub_227BF10(&v43, ", ", 2);
          v28 = (char *)dest;
        }
      }
      else if ( v27 > 5 )
      {
        *(_DWORD *)dest = 1953068891;
        v26[2] = 8296;
        v28 = (char *)dest + 6;
        dest = (char *)dest + 6;
      }
      else
      {
        sub_227BF10(&v43, "[with ", 6);
        v28 = (char *)dest;
      }
      v29 = *(_QWORD *)(*(_QWORD *)(a3 + 8 * v13 + 24) + 40LL);
      if ( (v29 & 7) != 0 || (v15 = v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( (unsigned __int64)v28 >= *((_QWORD *)&v44 + 1) )
        {
          v33 = (__m128i *)sub_227BA10(&v43, 36);
        }
        else
        {
          dest = v28 + 1;
          *v28 = 36;
          v33 = &v43;
        }
        sub_227B910(v33, v13);
        v28 = (char *)dest;
        v31 = *((_QWORD *)&v44 + 1) - (_QWORD)dest;
      }
      else
      {
        v30 = *(unsigned int **)(v15 + 16);
        v31 = *((_QWORD *)&v44 + 1) - (_QWORD)v28;
        v16 = *v30;
        v32 = v30 + 4;
        if ( v16 > *((_QWORD *)&v44 + 1) - (_QWORD)v28 )
        {
          sub_227BF10(&v43, v32, v16);
          v28 = (char *)dest;
          v31 = *((_QWORD *)&v44 + 1) - (_QWORD)dest;
        }
        else if ( v16 )
        {
          v40 = v16;
          memcpy(v28, v32, v16);
          v16 = (size_t)dest + v40;
          v28 = (char *)v16;
          dest = (char *)dest + v40;
          v31 = *((_QWORD *)&v44 + 1) - v16;
        }
      }
      if ( v31 <= 2 )
      {
        sub_227BF10(&v43, " = ", 3);
      }
      else
      {
        v28[2] = 32;
        *(_WORD *)v28 = 15648;
        dest = (char *)dest + 3;
      }
      v17 = sub_16043A0(*(_QWORD **)(a2 + 248), *(_QWORD **)(a2 + 240), v15, v16, v9, v10);
      v42[1] = v18;
      v42[0] = v17;
      v19 = sub_BBDA50((__int64)v42, a3, v13);
      v24.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a2 + 248), *(_QWORD **)(a2 + 240), v20, v21, v22, v23);
      v41 = v24;
      sub_F1E030(v12, &v41, &v43, v19, v25, 0.0);
      if ( v13 == v38 )
        break;
      ++v13;
      v12 += 24;
    }
    while ( a5 > (unsigned int)v13 );
    v6 = a1;
    v34 = dest;
    if ( (unsigned __int64)dest >= *((_QWORD *)&v44 + 1) )
    {
      sub_227BA10(&v43, 93);
    }
    else
    {
      dest = (char *)dest + 1;
      *v34 = 93;
    }
    v35 = *p_ptr;
    v36 = p_ptr[1];
    *(_QWORD *)a1 = a1 + 16;
    sub_1CB0A40((_QWORD *)a1, v35, (__int64)v36 + (_QWORD)v35);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
  }
  v43.m128i_i64[0] = (__int64)&unk_2C76288;
  sub_227B7A0(&v43);
  if ( ptr != v51 )
    free(ptr);
  return v6;
}
