char __fastcall sub_F76F10(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __m128i *v5; // rdx
  __int64 v6; // rdi
  _WORD *v7; // rdx
  __int64 v8; // rdi
  _WORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  _WORD *v15; // rdx
  __int64 v16; // rbp
  char *v17; // r14
  __int64 v18; // r13
  __int64 v19; // rcx
  char v20; // al
  __m128i *v21; // rdx
  _WORD *v22; // rdx
  __m128i *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rcx
  _WORD *v26; // rdx
  _BYTE *v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i si128; // xmm0
  void *v32; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+8h] [rbp-40h]

  v5 = *(__m128i **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v5 > 0x11u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9140);
    v6 = a3;
    v5[1].m128i_i16[0] = 15461;
    *v5 = si128;
    *(_QWORD *)(a3 + 32) += 18LL;
  }
  else
  {
    v6 = sub_227BF10(a3, "__hlsl_spirv_type<", 18);
  }
  sub_227B910(v6, *(unsigned int *)(a2 + 32));
  v7 = *(_WORD **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v7 > 1u )
  {
    v8 = a3;
    *v7 = 8236;
    *(_QWORD *)(a3 + 32) += 2LL;
  }
  else
  {
    v8 = sub_227BF10(a3, ", ", 2);
  }
  sub_227B910(v8, *(unsigned int *)(a2 + 36));
  v9 = *(_WORD **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v9 > 1u )
  {
    v10 = a3;
    *v9 = 8236;
    *(_QWORD *)(a3 + 32) += 2LL;
  }
  else
  {
    v10 = sub_227BF10(a3, ", ", 2);
  }
  LOBYTE(v11) = sub_227B910(v10, *(unsigned int *)(a2 + 40));
  v14 = a2 + 64;
  v15 = *(_WORD **)(a3 + 32);
  v16 = a2 + 64 + 32LL * *(_QWORD *)(a2 + 48);
  if ( v16 != a2 + 64 )
  {
    v17 = (char *)(a2 + 64);
    while ( 1 )
    {
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v15 > 1u )
      {
        *v15 = 8236;
        *(_QWORD *)(a3 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a3, ", ", 2);
      }
      v20 = *v17;
      if ( *v17 == 2 )
        goto LABEL_16;
      if ( v20 == 3 )
      {
        v18 = *((_QWORD *)v17 + 1);
        sub_F744F0(a1, v18, a3, v12, v14, v13);
        LOBYTE(v11) = sub_F76ED0(a1, v18, a3, v19);
        v15 = *(_WORD **)(a3 + 32);
LABEL_10:
        v17 += 32;
        if ( (char *)v16 == v17 )
          break;
      }
      else
      {
        if ( v20 == 1 )
        {
          v23 = *(__m128i **)(a3 + 32);
          v24 = *((_QWORD *)v17 + 1);
          if ( *(_QWORD *)(a3 + 24) - (_QWORD)v23 > 0x15u )
          {
            v28 = _mm_load_si128((const __m128i *)&xmmword_23A9150);
            v23[1].m128i_i32[0] = 1851880563;
            v23[1].m128i_i16[2] = 15476;
            *v23 = v28;
            *(_QWORD *)(a3 + 32) += 22LL;
          }
          else
          {
            sub_227BF10(a3, "vk::integral_constant<", 22);
          }
          sub_F744F0(a1, v24, a3, v12, v14, v13);
          sub_F76ED0(a1, v24, a3, v25);
          v26 = *(_WORD **)(a3 + 32);
          if ( *(_QWORD *)(a3 + 24) - (_QWORD)v26 > 1u )
          {
            *v26 = 8236;
            *(_QWORD *)(a3 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(a3, ", ", 2);
          }
          v33 = *((_DWORD *)v17 + 6);
          if ( v33 > 0x40 )
            sub_2205510(&v32);
          else
            v32 = *((void **)v17 + 2);
          sub_220C370(&v32, a3, 1);
          if ( v33 > 0x40 && v32 )
            operator delete[](v32);
          v27 = *(_BYTE **)(a3 + 32);
          if ( v27 == *(_BYTE **)(a3 + 24) )
          {
            LOBYTE(v11) = sub_227BF10(a3, ">", 1);
            v15 = *(_WORD **)(a3 + 32);
          }
          else
          {
            *v27 = 62;
            v11 = *(_QWORD *)(a3 + 32);
            v15 = (_WORD *)(v11 + 1);
            *(_QWORD *)(a3 + 32) = v11 + 1;
          }
          goto LABEL_10;
        }
LABEL_16:
        v21 = *(__m128i **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v21 > 0x27u )
        {
          v29 = _mm_load_si128((const __m128i *)&xmmword_23A9160);
          v21[2].m128i_i64[0] = 0x202C746E69753C74LL;
          *v21 = v29;
          v21[1] = _mm_load_si128((const __m128i *)&xmmword_23A9170);
          *(_QWORD *)(a3 + 32) += 40LL;
        }
        else
        {
          sub_227BF10(a3, "vk::Literal<vk::integral_constant<uint, ", 40);
        }
        v33 = *((_DWORD *)v17 + 6);
        if ( v33 > 0x40 )
          sub_2205510(&v32);
        else
          v32 = *((void **)v17 + 2);
        sub_220C370(&v32, a3, 1);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        v22 = *(_WORD **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v22 > 1u )
        {
          *v22 = 15934;
          v11 = *(_QWORD *)(a3 + 32);
          v15 = (_WORD *)(v11 + 2);
          *(_QWORD *)(a3 + 32) = v11 + 2;
          goto LABEL_10;
        }
        v17 += 32;
        LOBYTE(v11) = sub_227BF10(a3, ">>", 2);
        v15 = *(_WORD **)(a3 + 32);
        if ( (char *)v16 == v17 )
          break;
      }
    }
  }
  if ( *(_WORD **)(a3 + 24) == v15 )
  {
    LOBYTE(v11) = sub_227BF10(a3, ">", 1);
  }
  else
  {
    *(_BYTE *)v15 = 62;
    ++*(_QWORD *)(a3 + 32);
  }
  return v11;
}
