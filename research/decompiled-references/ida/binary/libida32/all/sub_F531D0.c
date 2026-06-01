char __fastcall sub_F531D0(__m128i *a1, __int64 a2, unsigned __int64 a3)
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
  char v19; // al
  __m128i *v20; // rdx
  _WORD *v21; // rdx
  __m128i *v22; // rdx
  __int64 v23; // r13
  _WORD *v24; // rdx
  _BYTE *v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __m128i si128; // xmm0
  void *v30; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+8h] [rbp-40h]

  v5 = *(__m128i **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v5 > 0x11u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2385110);
    v6 = a3;
    v5[1].m128i_i16[0] = 15461;
    *v5 = si128;
    *(_QWORD *)(a3 + 32) += 18LL;
  }
  else
  {
    v6 = sub_22581D0(a3, "__hlsl_spirv_type<", 18);
  }
  sub_2257BD0(v6, *(unsigned int *)(a2 + 32));
  v7 = *(_WORD **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v7 > 1u )
  {
    v8 = a3;
    *v7 = 8236;
    *(_QWORD *)(a3 + 32) += 2LL;
  }
  else
  {
    v8 = sub_22581D0(a3, ", ", 2);
  }
  sub_2257BD0(v8, *(unsigned int *)(a2 + 36));
  v9 = *(_WORD **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v9 > 1u )
  {
    v10 = a3;
    *v9 = 8236;
    *(_QWORD *)(a3 + 32) += 2LL;
  }
  else
  {
    v10 = sub_22581D0(a3, ", ", 2);
  }
  LOBYTE(v11) = sub_2257BD0(v10, *(unsigned int *)(a2 + 40));
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
        sub_22581D0(a3, ", ", 2);
      }
      v19 = *v17;
      if ( *v17 == 2 )
        goto LABEL_16;
      if ( v19 == 3 )
      {
        v18 = *((_QWORD *)v17 + 1);
        sub_F507B0(a1, v18, a3, v12, v14, v13);
        LOBYTE(v11) = sub_F53190(a1, v18, a3);
        v15 = *(_WORD **)(a3 + 32);
LABEL_10:
        v17 += 32;
        if ( (char *)v16 == v17 )
          break;
      }
      else
      {
        if ( v19 == 1 )
        {
          v22 = *(__m128i **)(a3 + 32);
          v23 = *((_QWORD *)v17 + 1);
          if ( *(_QWORD *)(a3 + 24) - (_QWORD)v22 > 0x15u )
          {
            v26 = _mm_load_si128((const __m128i *)&xmmword_2385120);
            v22[1].m128i_i32[0] = 1851880563;
            v22[1].m128i_i16[2] = 15476;
            *v22 = v26;
            *(_QWORD *)(a3 + 32) += 22LL;
          }
          else
          {
            sub_22581D0(a3, "vk::integral_constant<", 22);
          }
          sub_F507B0(a1, v23, a3, v12, v14, v13);
          sub_F53190(a1, v23, a3);
          v24 = *(_WORD **)(a3 + 32);
          if ( *(_QWORD *)(a3 + 24) - (_QWORD)v24 > 1u )
          {
            *v24 = 8236;
            *(_QWORD *)(a3 + 32) += 2LL;
          }
          else
          {
            sub_22581D0(a3, ", ", 2);
          }
          v31 = *((_DWORD *)v17 + 6);
          if ( v31 > 0x40 )
            sub_21E17D0(&v30);
          else
            v30 = *((void **)v17 + 2);
          sub_21E8630(&v30, a3, 1);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v25 = *(_BYTE **)(a3 + 32);
          if ( v25 == *(_BYTE **)(a3 + 24) )
          {
            LOBYTE(v11) = sub_22581D0(a3, ">", 1);
            v15 = *(_WORD **)(a3 + 32);
          }
          else
          {
            *v25 = 62;
            v11 = *(_QWORD *)(a3 + 32);
            v15 = (_WORD *)(v11 + 1);
            *(_QWORD *)(a3 + 32) = v11 + 1;
          }
          goto LABEL_10;
        }
LABEL_16:
        v20 = *(__m128i **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v20 > 0x27u )
        {
          v27 = _mm_load_si128((const __m128i *)&xmmword_2385130);
          v20[2].m128i_i64[0] = 0x202C746E69753C74LL;
          *v20 = v27;
          v20[1] = _mm_load_si128((const __m128i *)&xmmword_2385140);
          *(_QWORD *)(a3 + 32) += 40LL;
        }
        else
        {
          sub_22581D0(a3, "vk::Literal<vk::integral_constant<uint, ", 40);
        }
        v31 = *((_DWORD *)v17 + 6);
        if ( v31 > 0x40 )
          sub_21E17D0(&v30);
        else
          v30 = *((void **)v17 + 2);
        sub_21E8630(&v30, a3, 1);
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        v21 = *(_WORD **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v21 > 1u )
        {
          *v21 = 15934;
          v11 = *(_QWORD *)(a3 + 32);
          v15 = (_WORD *)(v11 + 2);
          *(_QWORD *)(a3 + 32) = v11 + 2;
          goto LABEL_10;
        }
        v17 += 32;
        LOBYTE(v11) = sub_22581D0(a3, ">>", 2);
        v15 = *(_WORD **)(a3 + 32);
        if ( (char *)v16 == v17 )
          break;
      }
    }
  }
  if ( *(_WORD **)(a3 + 24) == v15 )
  {
    LOBYTE(v11) = sub_22581D0(a3, ">", 1);
  }
  else
  {
    *(_BYTE *)v15 = 62;
    ++*(_QWORD *)(a3 + 32);
  }
  return v11;
}

