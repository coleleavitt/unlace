__int64 __fastcall sub_13725F0(std::_V2 *a1, __int64 a2, char a3, _BYTE *a4, __int64 a5, char a6, unsigned __int8 a7)
{
  __int64 v10; // rbp
  int v11; // eax
  __int8 *v12; // r12
  std::_V2 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  size_t v25; // r14
  void *v26; // rax
  unsigned __int64 v27; // rdx
  size_t v28; // rdi
  void *v29; // rax
  size_t v30; // r14
  void *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  char *v37; // rdi
  __int64 v38; // rax
  void **p_src; // [rsp+0h] [rbp-3E8h]
  __int64 v40; // [rsp+8h] [rbp-3E0h]
  unsigned __int8 v42; // [rsp+18h] [rbp-3D0h]
  void *v43; // [rsp+28h] [rbp-3C0h]
  void *v44; // [rsp+28h] [rbp-3C0h]
  void *ptr; // [rsp+70h] [rbp-378h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-370h]
  __m128i v50; // [rsp+88h] [rbp-360h] BYREF
  _BYTE v51[248]; // [rsp+98h] [rbp-350h] BYREF
  void *src; // [rsp+190h] [rbp-258h] BYREF
  __m128i si128; // [rsp+198h] [rbp-250h] BYREF
  _BYTE v54[8]; // [rsp+1A8h] [rbp-240h] BYREF

  v10 = sub_227D6D0(a1, a2);
  if ( a7 )
  {
    v11 = *(_DWORD *)(a2 + 12);
    if ( v11 == 1 )
    {
      v42 = 0;
      v10 = sub_227D600();
      if ( !a5 )
        goto LABEL_11;
      goto LABEL_6;
    }
    if ( v11 != 2 )
      return sub_13731E0();
    v10 = sub_227D6D0(a1, a2);
  }
  v42 = 0;
  if ( !a5 )
    goto LABEL_11;
LABEL_6:
  std::_V2::system_category(a1);
  if ( a4 )
  {
    src = &si128.m128i_u64[1];
    sub_1371340(&src, a4, (__int64)&a4[a5]);
    v12 = (__int8 *)src;
  }
  else
  {
    v12 = &si128.m128i_i8[8];
    si128.m128i_i64[0] = 0;
    src = &si128.m128i_u64[1];
    si128.m128i_i8[8] = 0;
  }
  v13 = (std::_V2 *)operator new(0x60u);
  sub_227D450(v13);
  if ( src != &si128.m128i_u64[1] )
    operator delete(src);
  if ( *((_QWORD *)v13 + 4) != *((_QWORD *)v13 + 2) )
    sub_227B9F0(v13, v12, v14, 0, v15, v16, &src);
  sub_227B8B0(v13, 0, 0, 0);
  v10 = (__int64)v13;
  v42 = 1;
LABEL_11:
  result = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)result == 1 )
  {
    v24 = *(_QWORD *)(a2 + 112);
    v40 = *(_QWORD *)(a2 + 120);
    if ( v24 == v40 )
    {
LABEL_40:
      v19 = operator new(0x30u);
      *(_QWORD *)v19 = &off_2C43868;
      v36 = *((_QWORD *)a1 + 11);
      *(_QWORD *)(v19 + 16) = v10;
      v21 = *((_QWORD *)a1 + 149);
      *(_QWORD *)(v19 + 8) = v36;
      *(_DWORD *)(v19 + 32) = 0;
      *(_QWORD *)(v19 + 24) = a2;
      *(_BYTE *)(v19 + 36) = 0;
      *(_BYTE *)(v19 + 37) = v42;
      *(_BYTE *)(v19 + 38) = a3;
      *(_BYTE *)(v19 + 39) = a6;
      result = a7;
      *(_BYTE *)(v19 + 40) = a7;
      if ( !v21 )
        goto LABEL_55;
      goto LABEL_17;
    }
    p_src = &src;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      v26 = *(void **)v24;
      src = v54;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
      if ( v25 > 0x200 )
        break;
      if ( v25 )
      {
        v37 = v54;
        goto LABEL_47;
      }
LABEL_25:
      si128.m128i_i64[0] = v25;
      if ( a7 )
      {
        ptr = &v50;
        v27 = v25 + 21;
        v28 = 21;
        n[1] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0).m128i_u64[1];
        v50 = _mm_load_si128((const __m128i *)&xmmword_23AA110);
        qmemcpy(v51, "file:", 5);
        n[0] = 21;
        if ( a6 )
        {
          v51[5] = 32;
          v27 = v25 + 22;
          v28 = 22;
          n[0] = 22;
        }
      }
      else
      {
        sub_13D11F0(p_src);
        ptr = &v50;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v25 = si128.m128i_i64[0];
        if ( a6 )
        {
          v28 = 2;
          n[0] = 2;
          v50.m128i_i16[0] = 8238;
          v27 = si128.m128i_i64[0] + 2;
        }
        else
        {
          v28 = 0;
          v27 = si128.m128i_i64[0];
        }
      }
      v29 = src;
      if ( v27 > 0x100 )
      {
        v44 = src;
        sub_2236E10(&ptr, &v50, v27, 1);
        v28 = n[0];
        v29 = v44;
      }
      if ( v25 )
      {
        memcpy((char *)ptr + v28, v29, v25);
        v28 = n[0];
      }
      v30 = v28 + v25;
      n[0] = v30;
      if ( v30 + 1 > n[1] )
      {
        sub_2236E10(&ptr, &v50, v30 + 1, 1);
        v30 = n[0];
      }
      *((_BYTE *)ptr + v30) = 10;
      v31 = ptr;
      sub_227BF10(v10, ptr, ++n[0]);
      if ( *(_QWORD *)(v10 + 32) != *(_QWORD *)(v10 + 16) )
        sub_227B9F0(v10, v31, v32, v33, v34, v35, p_src);
      if ( ptr != &v50 )
        free(ptr);
      if ( src == v54 )
      {
        v24 += 40;
        if ( v40 == v24 )
          goto LABEL_40;
      }
      else
      {
        free(src);
        v24 += 40;
        if ( v40 == v24 )
          goto LABEL_40;
      }
    }
    v43 = v26;
    sub_2236E10(p_src, v54, v25, 1);
    v26 = v43;
    v37 = (char *)src + si128.m128i_i64[0];
LABEL_47:
    memcpy(v37, v26, v25);
    v25 += si128.m128i_i64[0];
    goto LABEL_25;
  }
  if ( (_DWORD)result != 2 )
    return result;
  v18 = *(_DWORD *)(a2 + 8);
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      v19 = operator new(0x40u);
      *(_QWORD *)v19 = &off_2C43B88;
      v20 = *((_QWORD *)a1 + 11);
      *(_QWORD *)(v19 + 24) = v10;
      v21 = *((_QWORD *)a1 + 149);
      *(_QWORD *)(v19 + 8) = v20;
      v22 = *((_QWORD *)a1 + 13);
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 16) = v22;
      result = v42;
      *(_QWORD *)(v19 + 48) = 0;
      *(_BYTE *)(v19 + 32) = v42;
      *(_DWORD *)(v19 + 56) = 0;
      if ( v21 )
        goto LABEL_17;
LABEL_55:
      *((_QWORD *)a1 + 149) = v19;
      return result;
    }
    return sub_13731E0();
  }
  v19 = operator new(0x230u);
  *(_QWORD *)v19 = &off_2C439F8;
  v38 = *((_QWORD *)a1 + 11);
  *(_QWORD *)(v19 + 16) = v10;
  *(_QWORD *)(v19 + 8) = v38;
  *(_BYTE *)(v19 + 24) = v42;
  *(_QWORD *)(v19 + 32) = v19 + 48;
  v21 = *((_QWORD *)a1 + 149);
  result = 0x1000000000LL;
  *(_QWORD *)(v19 + 40) = 0x1000000000LL;
  if ( !v21 )
    goto LABEL_55;
LABEL_17:
  *((_QWORD *)a1 + 149) = 0;
  result = operator new(0x18u);
  *(_QWORD *)(result + 8) = v19;
  *(_QWORD *)(result + 16) = v21;
  v23 = *((_QWORD *)a1 + 149);
  *(_QWORD *)result = &off_2BB2860;
  *((_QWORD *)a1 + 149) = result;
  if ( v23 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  return result;
}
