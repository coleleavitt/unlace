__int64 __fastcall sub_1ABE0(__int64 a1, size_t a2, size_t a3, size_t a4, _DWORD *a5)
{
  __int64 v6; // r12
  size_t v9; // r8
  __int64 result; // rax
  int v11; // edx
  size_t v12; // rax
  unsigned int random; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rbp
  __int64 i; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdx
  void *ptr; // [rsp+0h] [rbp-178h]
  _QWORD *v23; // [rsp+8h] [rbp-170h]
  _DWORD *v24; // [rsp+10h] [rbp-168h]
  unsigned int v25; // [rsp+10h] [rbp-168h]
  __int64 v26; // [rsp+18h] [rbp-160h]
  _OWORD v27[3]; // [rsp+30h] [rbp-148h] BYREF
  __m128i si128; // [rsp+60h] [rbp-118h]
  __m128i v29; // [rsp+70h] [rbp-108h]
  __m128i v30; // [rsp+80h] [rbp-F8h]
  __m128i v31; // [rsp+90h] [rbp-E8h]
  __m128i v32; // [rsp+A0h] [rbp-D8h]
  __m128i v33; // [rsp+B0h] [rbp-C8h]
  __m128i v34; // [rsp+C0h] [rbp-B8h]
  __m128i v35; // [rsp+D0h] [rbp-A8h]
  __int64 v36; // [rsp+E0h] [rbp-98h]
  _OWORD buf[4]; // [rsp+F0h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 144);
  v38 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(v6 + 112) || !*(_DWORD *)(v6 + 128) )
  {
    buf[0] = _mm_load_si128((const __m128i *)&xmmword_946E0);
    v36 = 0;
    buf[1] = _mm_load_si128((const __m128i *)&xmmword_946F0);
    buf[2] = _mm_load_si128((const __m128i *)&xmmword_94700);
    buf[3] = _mm_load_si128((const __m128i *)&xmmword_94710);
    v27[0] = _mm_load_si128((const __m128i *)&xmmword_94720);
    v27[1] = _mm_load_si128((const __m128i *)&xmmword_94730);
    v27[2] = _mm_load_si128((const __m128i *)&xmmword_94740);
    si128 = _mm_load_si128((const __m128i *)&xmmword_94750);
    v29 = _mm_load_si128((const __m128i *)&xmmword_94760);
    v30 = _mm_load_si128((const __m128i *)&xmmword_94770);
    v31 = _mm_load_si128((const __m128i *)&xmmword_94780);
    v32 = _mm_load_si128((const __m128i *)&xmmword_94790);
    v33 = _mm_load_si128((const __m128i *)&xmmword_947A0);
    v34 = _mm_load_si128((const __m128i *)&xmmword_947B0);
    v35 = _mm_load_si128((const __m128i *)&xmmword_947C0);
    result = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), buf);
    if ( (_DWORD)result )
      return result;
    sub_1AAC0(a1, v27, (__int64)buf);
    if ( *(_DWORD *)(v6 + 116) )
    {
      *(_DWORD *)(v6 + 112) = 1;
      a4 = si128.m128i_u64[1];
      *(_QWORD *)(v6 + 104) = si128.m128i_i64[1];
      if ( a4 <= 2 )
      {
        *a5 = 494;
        return 1;
      }
      if ( !*(_DWORD *)(v6 + 132) )
      {
        if ( !*(_DWORD *)(v6 + 128) )
          goto LABEL_4;
LABEL_51:
        v12 = *(_QWORD *)(v6 + 120);
        goto LABEL_20;
      }
      v12 = v29.m128i_i64[0];
      *(_DWORD *)(v6 + 128) = 1;
      *(_QWORD *)(v6 + 120) = v12;
    }
    else
    {
      a4 = *(_QWORD *)(v6 + 104);
      v11 = *(_DWORD *)(v6 + 112);
      if ( !*(_DWORD *)(v6 + 132) )
      {
        if ( !v11 || !*(_DWORD *)(v6 + 128) )
          goto LABEL_3;
        goto LABEL_51;
      }
      v12 = v29.m128i_i64[0];
      *(_DWORD *)(v6 + 128) = 1;
      *(_QWORD *)(v6 + 120) = v12;
      if ( !v11 )
        goto LABEL_3;
    }
LABEL_20:
    if ( v12 >= a4 )
    {
      *a5 = 493;
      return 1;
    }
    goto LABEL_4;
  }
LABEL_3:
  if ( !a4 )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( a3 <= 0x3F )
  {
LABEL_17:
    *a5 = 435;
    return 1;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( a3 > 0xC8 || v9 < a2 || v9 < a4 || v9 < a4 * a3 + a2 )
  {
    *a5 = 470;
    return 1;
  }
  v26 = *(_QWORD *)(a1 + 144);
  ptr = calloc(a4, a3);
  if ( !ptr )
  {
LABEL_58:
    *a5 = 62;
    return 1;
  }
  v23 = calloc(a4, 0xB8u);
  if ( !v23 )
  {
    free(ptr);
    goto LABEL_58;
  }
  random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), ptr);
  if ( !random )
  {
    v24 = a5;
    v14 = v23;
    v15 = 0;
    for ( i = (__int64)ptr; ; i += 64 )
    {
      *v14 = v15;
      sub_1AAC0(a1, v14, i);
      v17 = v14[7];
      v18 = v14[3];
      if ( v17 >= *(_QWORD *)(a1 + 40) && v18 != 8 )
      {
        a5 = v24;
        free(ptr);
        free(v23);
        goto LABEL_17;
      }
      if ( v15 )
      {
        v19 = v14[4];
        if ( v19 )
        {
          v20 = 0;
          do
          {
            v20 += *((_DWORD *)nibblecounts + (v19 & 0xF));
            v19 >>= 4;
          }
          while ( v19 );
          if ( v20 > 8 )
          {
            free(ptr);
            free(v23);
            *v24 = 496;
            return 1;
          }
        }
        if ( v18 == 9 || v18 == 4 )
          v14[9] = v14[10];
      }
      else
      {
        if ( *(_DWORD *)(v26 + 116) )
          v17 = 0;
        v21 = 0;
        if ( !*(_DWORD *)(v26 + 132) )
          v21 = v14[8];
        if ( (v18 & 0xFFFFFFFFFFFFFFF7LL) != 0 || v14[1] || v21 | v14[4] | v17 || v14[5] || v14[10] )
        {
          free(ptr);
          free(v23);
          *v24 = 497;
          return 1;
        }
      }
      ++v15;
      v14 += 23;
      if ( v15 == a4 )
      {
        free(ptr);
        *(_QWORD *)(a1 + 168) = v15;
        *(_QWORD *)(a1 + 160) = a2;
        *(_QWORD *)(a1 + 192) = v23;
        *(_QWORD *)(a1 + 152) = "Section Header";
        *(_QWORD *)(a1 + 176) = 64;
        *(_QWORD *)(a1 + 184) = v15 << 6;
        return 0;
      }
    }
  }
  v25 = random;
  free(ptr);
  free(v23);
  return v25;
}

