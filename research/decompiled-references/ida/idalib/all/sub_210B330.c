unsigned __int64 __fastcall sub_210B330(
        __int64 a1,
        const char **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _BYTE *v14; // rsi
  _BYTE *v15; // rdx
  _QWORD *v16; // rax
  _BYTE *v17; // rsi
  _BYTE *v18; // rdx
  size_t v19; // r14
  void *v20; // r15
  unsigned int v21; // eax
  __int64 *v22; // rax
  char v23; // dl
  void *v24; // rdi
  __int64 *v25; // r14
  size_t *v26; // rsi
  size_t v27; // rdx
  const void *v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int8 v31; // cl
  const char *v32; // rax
  size_t v33; // rdx
  size_t v34; // r14
  unsigned int v35; // eax
  __int64 *v36; // rax
  size_t v37; // rbx
  const char *v38; // r14
  unsigned int v39; // eax
  unsigned __int32 v43; // [rsp+14h] [rbp-F4h]
  char v44; // [rsp+18h] [rbp-F0h]
  const char *v45; // [rsp+18h] [rbp-F0h]
  unsigned int v46; // [rsp+2Ch] [rbp-DCh] BYREF
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-D0h]
  _BYTE v49[192]; // [rsp+48h] [rbp-C0h] BYREF

  if ( !(a9 | a6) && a8 == -1 )
  {
    if ( *((_BYTE *)a2 + 33) == 1 && (v31 = *((_BYTE *)a2 + 32), v31 <= 6u) && ((1LL << v31) & 0x7A) != 0 )
    {
      switch ( *((_BYTE *)a2 + 32) )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v37 = (size_t)a2[1];
          v38 = *a2;
          v43 = v37;
          break;
        case 1:
          v43 = 0;
          v37 = 0;
          v38 = nullptr;
          break;
        case 3:
          v38 = *a2;
          if ( *a2 )
          {
            v37 = j__strlen(*a2);
            v43 = v37;
          }
          else
          {
            v43 = 0;
            v37 = 0;
          }
          break;
        case 4:
          v37 = *((_QWORD *)*a2 + 1);
          v38 = *(const char **)*a2;
          v43 = v37;
          break;
        default:
          goto LABEL_28;
      }
      v39 = sub_2244B30(v38, v37);
      v25 = sub_2109B40(a1 + 2024, v38, v37, v39);
    }
    else
    {
LABEL_28:
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v49;
      v32 = sub_116C3C0(a2, (__int64)&ptr);
      v34 = v33;
      v43 = v33;
      v45 = v32;
      v35 = sub_2244B30(v32, v33);
      v36 = sub_2109B40(a1 + 2024, v45, v34, v35);
      v24 = ptr;
      v25 = v36;
      if ( ptr != v49 )
      {
LABEL_16:
        v44 = v23;
        free(v24);
        v23 = v44;
      }
    }
  }
  else
  {
    ptr = v49;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_22538C0(a2, &ptr);
    v11 = si128.m128i_i64[0];
    v43 = si128.m128i_i32[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v49, si128.m128i_i64[0] + 1, 1);
      v11 = si128.m128i_i64[0];
    }
    *((_BYTE *)ptr + v11) = 0;
    v12 = ++si128.m128i_i64[0];
    if ( a6 )
    {
      if ( (*(_BYTE *)(a6 + 8) & 1) != 0 )
      {
        v13 = *(_QWORD **)(a6 - 8);
        v14 = v13 + 3;
        v15 = (char *)v13 + *v13 + 24;
      }
      else
      {
        v15 = nullptr;
        v14 = nullptr;
      }
      sub_A1FE50(&ptr, v14, v15);
      v12 = si128.m128i_i64[0];
    }
    if ( (unsigned __int64)(v12 + 1) > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v49, v12 + 1, 1);
      v12 = si128.m128i_i64[0];
    }
    *((_BYTE *)ptr + v12) = 0;
    ++si128.m128i_i64[0];
    if ( a9 )
    {
      if ( (*(_BYTE *)(a9 + 8) & 1) != 0 )
      {
        v16 = *(_QWORD **)(a9 - 8);
        v17 = v16 + 3;
        v18 = (char *)v16 + *v16 + 24;
      }
      else
      {
        v18 = nullptr;
        v17 = nullptr;
      }
      sub_A1FE50(&ptr, v17, v18);
    }
    v46 = a8;
    sub_A1FE50(&ptr, &v46, &ptr);
    v19 = si128.m128i_i64[0];
    v20 = ptr;
    v21 = sub_2244B30(ptr, si128.m128i_i64[0]);
    v22 = sub_2109B40(a1 + 2024, v20, v19, v21);
    v24 = ptr;
    v25 = v22;
    if ( ptr != v49 )
      goto LABEL_16;
  }
  v26 = (size_t *)*v25;
  if ( !v23 )
    return v26[1];
  v27 = *v26;
  v28 = v26 + 2;
  if ( v43 < v27 )
    v27 = v43;
  v29 = sub_2107A90(a1, v28, v27, a3, a4, a5, a6, a7, a8, a9);
  *(_QWORD *)(*v25 + 8) = v29;
  sub_210B0C0(
    a1,
    *(void **)(v29 + 152),
    *(_QWORD *)(v29 + 160),
    *(_DWORD *)(v29 + 176),
    *(_DWORD *)(v29 + 180),
    *(_DWORD *)(v29 + 184));
  return v29;
}
