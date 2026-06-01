__int64 __fastcall sub_13C2BF0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  size_t v9; // r8
  void *v10; // rax
  __int64 v12; // rax
  char v13; // dl
  char *v14; // rdi
  __int64 v15; // rcx
  _BYTE *v16; // rdi
  __int64 v17; // [rsp+10h] [rbp-278h]
  _BYTE *v18; // [rsp+18h] [rbp-270h]
  __int64 v19; // [rsp+20h] [rbp-268h]
  __int64 i; // [rsp+28h] [rbp-260h]
  size_t v21; // [rsp+30h] [rbp-258h]
  const char *v22; // [rsp+38h] [rbp-250h]
  size_t n; // [rsp+50h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-238h]
  size_t nb; // [rsp+50h] [rbp-238h]
  __int64 v26; // [rsp+58h] [rbp-230h]
  void *src; // [rsp+60h] [rbp-228h]
  _QWORD v29[4]; // [rsp+70h] [rbp-218h] BYREF
  __int16 v30; // [rsp+90h] [rbp-1F8h]
  _BYTE v31[32]; // [rsp+A0h] [rbp-1E8h] BYREF
  __int16 v32; // [rsp+C0h] [rbp-1C8h]
  __int64 v33[4]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int16 v34; // [rsp+F0h] [rbp-198h]
  void *v35; // [rsp+100h] [rbp-188h] BYREF
  size_t v36; // [rsp+108h] [rbp-180h]
  __m128i v37; // [rsp+110h] [rbp-178h] BYREF
  __int16 v38; // [rsp+120h] [rbp-168h]
  void *ptr; // [rsp+130h] [rbp-158h] BYREF
  __m128i si128; // [rsp+138h] [rbp-150h]
  _BYTE v41[320]; // [rsp+148h] [rbp-140h] BYREF

  v4 = (__int64 *)sub_13FC270(a2 + 79, a3);
  v5 = v4[1];
  v19 = *a3;
  for ( i = a3[1]; v5; v5 = *(_QWORD *)(v6 + 8) )
  {
    if ( (v5 & 4) == 0 )
      break;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      break;
    v4 = (__int64 *)v6;
  }
  v7 = *a2;
  v18 = v4 + 4;
  v17 = *v4;
  if ( (*(_BYTE *)(*a2 + 280) & 1) != 0 )
  {
    v21 = j__strlen(&byte_22F0C30);
    v22 = &byte_22F0C30;
  }
  else
  {
    v22 = (const char *)a2[34];
    v21 = a2[35];
  }
  v8 = *(_QWORD *)(v7 + 224);
  v26 = *(_QWORD *)(v7 + 232);
  if ( v8 == v26 )
  {
LABEL_15:
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(void **)v8;
    ptr = v41;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    if ( v9 > 0x100 )
    {
      src = v10;
      n = v9;
      sub_2236E10(&ptr, v41, v9, 1);
      v9 = n;
      v10 = src;
      v14 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v9 )
        goto LABEL_10;
      v14 = v41;
    }
    na = v9;
    memcpy(v14, v10, v9);
    v9 = si128.m128i_i64[0] + na;
LABEL_10:
    si128.m128i_i64[0] = v9;
    sub_228EC80(&ptr);
    v38 = 257;
    v29[0] = v22;
    v34 = 257;
    v32 = 257;
    v30 = 261;
    v29[1] = v21;
    sub_228A3B0(&ptr, v29, v31, v33, &v35);
    sub_13C0EE0((__int64)&v35, (__int64)a2, v19, i, v18, v17, ptr, si128.m128i_i64[0]);
    if ( v36 )
      break;
LABEL_11:
    if ( v35 != &v37 )
      operator delete(v35);
    if ( ptr == v41 )
    {
      v8 += 32;
      if ( v26 == v8 )
        goto LABEL_15;
    }
    else
    {
      free(ptr);
      v8 += 32;
      if ( v26 == v8 )
        goto LABEL_15;
    }
  }
  sub_FD9C70((__int64)v33, a2[5], v35, v36, 0, 1, 1);
  v12 = sub_A05DE0(v33);
  if ( !v13 )
  {
    sub_A04D90(v33);
    goto LABEL_11;
  }
  nb = v12;
  sub_A04D90(v33);
  if ( !nb )
    goto LABEL_11;
  *(_QWORD *)a1 = a1 + 16;
  if ( v35 == &v37 )
  {
    v15 = a1;
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v37);
  }
  else
  {
    *(_QWORD *)a1 = v35;
    v15 = a1;
    *(_QWORD *)(a1 + 16) = v37.m128i_i64[0];
  }
  v16 = ptr;
  *(_QWORD *)(v15 + 8) = v36;
  if ( v16 != v41 )
    free(v16);
  return a1;
}
