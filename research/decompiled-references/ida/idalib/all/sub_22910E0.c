__m128i *__fastcall sub_22910E0(std::_V2 *a1, std::_V2 *a2, size_t a3, char *a4, __int64 a5)
{
  __m128i *v7; // r12
  __int64 v8; // rbp
  _BYTE *v10; // rax
  __int64 v12; // rbp
  char *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  const void *v16; // rax
  char *v17; // rdi
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // rbx
  size_t v21; // rax
  _BYTE *v22; // rdi
  char *v23; // [rsp+10h] [rbp-2C8h]
  const void *v24; // [rsp+20h] [rbp-2B8h]
  _QWORD v25[4]; // [rsp+30h] [rbp-2A8h] BYREF
  __int16 v26; // [rsp+50h] [rbp-288h]
  char v27[32]; // [rsp+60h] [rbp-278h] BYREF
  __int16 v28; // [rsp+80h] [rbp-258h]
  char v29[32]; // [rsp+90h] [rbp-248h] BYREF
  __int16 v30; // [rsp+B0h] [rbp-228h]
  size_t v31[2]; // [rsp+C0h] [rbp-218h] BYREF
  __m128i v32; // [rsp+D0h] [rbp-208h] BYREF
  __int16 v33; // [rsp+E0h] [rbp-1F8h]
  void *ptr; // [rsp+F0h] [rbp-1E8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-1E0h]
  _BYTE dest[136]; // [rsp+108h] [rbp-1D0h] BYREF
  void *v37; // [rsp+190h] [rbp-148h] BYREF
  __int64 v38; // [rsp+198h] [rbp-140h]
  __m128i v39[19]; // [rsp+1A0h] [rbp-138h] BYREF

  v7 = (__m128i *)a1;
  v8 = a5;
  if ( a3 )
  {
    a1 = a2;
    v10 = memchr(a2, 47, a3);
    if ( v10 )
    {
      if ( v10 - (_BYTE *)a2 != -1 )
      {
        v37 = v39;
        sub_2290E80(&v37, a2, (__int64)a2 + a3);
        v7[2].m128i_i8[0] &= ~1u;
        v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
        if ( v37 == v39 )
        {
          v7[1] = _mm_load_si128(v39);
        }
        else
        {
          v7->m128i_i64[0] = (__int64)v37;
          v7[1].m128i_i64[0] = v39[0].m128i_i64[0];
        }
        v7->m128i_i64[1] = v38;
        return v7;
      }
    }
  }
  v37 = v39;
  v38 = 0x1000000000LL;
  if ( !a5 )
  {
    a1 = (std::_V2 *)"PATH";
    v19 = getenv("PATH");
    v20 = (__int64)v19;
    if ( !v19 )
      goto LABEL_22;
    v21 = strlen(v19);
    a1 = (std::_V2 *)v20;
    sub_2244850(v20, v21, (__int64)&v37, (__int64)":", 1);
    a4 = (char *)v37;
    v8 = (unsigned int)v38;
  }
  v12 = 16 * v8;
  v23 = &a4[v12];
  if ( &a4[v12] == a4 )
  {
LABEL_22:
    v7[2].m128i_i8[0] |= 1u;
    v18 = std::_V2::generic_category(a1);
    v7->m128i_i32[0] = 2;
    v7->m128i_i64[1] = v18;
    goto LABEL_23;
  }
  v13 = a4;
  while ( 1 )
  {
    v15 = *((_QWORD *)v13 + 1);
    if ( v15 )
      break;
LABEL_18:
    v13 += 16;
    if ( v23 == v13 )
      goto LABEL_22;
  }
  v16 = *(const void **)v13;
  v17 = dest;
  ptr = dest;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v15 > 0x80 )
  {
    v24 = v16;
    sub_2236E10((__int64)&ptr, dest, v15, 1);
    v16 = v24;
    v17 = (char *)ptr + si128.m128i_i64[0];
  }
  memcpy(v17, v16, v15);
  v28 = 257;
  v26 = 261;
  v33 = 257;
  v30 = 257;
  si128.m128i_i64[0] += v15;
  v25[0] = a2;
  v25[1] = a3;
  sub_228A3B0(&ptr, v25, v27, v29, v31);
  v14 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_2236E10((__int64)&ptr, dest, si128.m128i_i64[0] + 1, 1);
    v14 = si128.m128i_i64[0];
  }
  *((_BYTE *)ptr + v14) = 0;
  v33 = 257;
  if ( *(_BYTE *)ptr )
  {
    v31[0] = (size_t)ptr;
    LOBYTE(v33) = 3;
  }
  if ( !sub_228C2C0(v31) )
  {
    a1 = (std::_V2 *)ptr;
    if ( ptr != dest )
      free(ptr);
    goto LABEL_18;
  }
  v31[0] = (size_t)&v32;
  sub_2290E80(v31, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v7[2].m128i_i8[0] &= ~1u;
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  if ( (__m128i *)v31[0] == &v32 )
  {
    v7[1] = _mm_load_si128(&v32);
  }
  else
  {
    v7->m128i_i64[0] = v31[0];
    v7[1].m128i_i64[0] = v32.m128i_i64[0];
  }
  v22 = ptr;
  v7->m128i_i64[1] = v31[1];
  if ( v22 != dest )
    free(v22);
LABEL_23:
  if ( v37 != v39 )
    free(v37);
  return v7;
}
