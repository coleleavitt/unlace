void __fastcall sub_2232F80(__int64 a1, int a2, __int64 a3, char a4, __m128d a5)
{
  const __m128i *v5; // r14
  __int64 v8; // r14
  char v9; // r15
  __int64 (__fastcall ***v10)(); // rdi
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  char *v14; // kr00_8
  _QWORD *v15; // rcx
  signed __int64 v16; // rdx
  const char *v17; // rbx
  size_t v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rsi
  _BYTE *v22; // rax
  unsigned __int64 v23; // rdi
  char *v24; // rcx
  char *v25; // r14
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rsi
  char *format; // [rsp+10h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-B0h]
  _BYTE v31[8]; // [rsp+28h] [rbp-A0h] BYREF
  char s[32]; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h]
  _WORD *v36; // [rsp+70h] [rbp-58h]
  char v37; // [rsp+78h] [rbp-50h]
  int v38; // [rsp+7Ch] [rbp-4Ch]
  char **p_format; // [rsp+80h] [rbp-48h]

  if ( a2 < 0 )
    goto LABEL_52;
  if ( a2 <= 1 )
  {
    v8 = 6;
    goto LABEL_4;
  }
  if ( a2 > 3 )
  {
LABEL_52:
    *(__m128i *)&dword_0 = _mm_loadu_si128(v5);
    BUG();
  }
  v8 = 2;
LABEL_4:
  if ( a4 )
    v8 = a3;
  if ( fabs(a5.m128d_f64[0]) > 1.797693134862316e308 )
  {
    v17 = "-INF";
    if ( (_mm_movemask_pd(a5) & 1) == 0 )
      v17 = "INF";
    v18 = strlen(v17);
    v19 = *(_QWORD *)(a1 + 32);
    if ( v18 <= *(_QWORD *)(a1 + 24) - v19 )
    {
      if ( (_DWORD)v18 )
      {
        v20 = 0;
        do
        {
          v21 = v20++;
          *(_BYTE *)(v19 + v21) = v17[v21];
        }
        while ( v20 < (unsigned int)v18 );
      }
      *(_QWORD *)(a1 + 32) += v18;
    }
    else
    {
      sub_227BF10(a1, v17, v18);
    }
  }
  else
  {
    v9 = 101;
    if ( a2 )
    {
      v9 = 69;
      if ( a2 != 1 )
        v9 = 102;
    }
    format = v31;
    v34 = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
    v37 = 0;
    v33 = &off_2BEBEE0;
    v38 = 1;
    v36 = nullptr;
    v35 = 0;
    p_format = &format;
    sub_227B8B0(&v33, 0, 0, 0);
    if ( *((_QWORD *)&v35 + 1) - (_QWORD)v36 > 1u )
    {
      v10 = &v33;
      *v36++ = 11813;
    }
    else
    {
      v10 = (__int64 (__fastcall ***)())sub_227BF10(&v33, "%.", 2);
    }
    v11 = sub_227B910(v10, v8);
    v12 = *(char **)(v11 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
    {
      sub_227BA10(v11, (unsigned int)v9);
    }
    else
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = v9;
    }
    if ( a2 == 3 )
      a5.m128d_f64[0] = a5.m128d_f64[0] * 100.0;
    v13 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_2236E10(&format, v31, si128.m128i_i64[0] + 1, 1);
      v13 = si128.m128i_i64[0];
    }
    format[v13] = 0;
    snprintf(s, 0x20u, format, a5.m128d_f64[0]);
    v14 = &s[strlen(s)];
    v15 = *(_QWORD **)(a1 + 32);
    v16 = v14 - s;
    if ( (unsigned __int64)(v14 - s) > *(_QWORD *)(a1 + 24) - (_QWORD)v15 )
    {
      sub_227BF10(a1, s, v16);
    }
    else if ( v16 )
    {
      if ( (unsigned int)v16 >= 8 )
      {
        v23 = (unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v15 = *(_QWORD *)s;
        *(_QWORD *)((char *)v15 + (unsigned int)v16 - 8) = *(_QWORD *)&v31[(unsigned int)v16];
        v24 = (char *)v15 - v23;
        v25 = (char *)(s - v24);
        if ( (((_DWORD)v16 + (_DWORD)v24) & 0xFFFFFFF8) >= 8 )
        {
          v26 = (v16 + (_DWORD)v24) & 0xFFFFFFF8;
          v27 = 0;
          do
          {
            v28 = v27;
            v27 += 8;
            *(_QWORD *)(v23 + v28) = *(_QWORD *)&v25[v28];
          }
          while ( v27 < v26 );
        }
      }
      else if ( (v16 & 4) != 0 )
      {
        *(_DWORD *)v15 = *(_DWORD *)s;
        *(_DWORD *)((char *)v15 + (unsigned int)v16 - 4) = *(_DWORD *)&v31[(unsigned int)v16 + 4];
      }
      else if ( (_DWORD)v16 )
      {
        *(_BYTE *)v15 = s[0];
        if ( (v16 & 2) != 0 )
          *(_WORD *)((char *)v15 + (unsigned int)v16 - 2) = *(_WORD *)&v31[(unsigned int)v16 + 6];
      }
      *(_QWORD *)(a1 + 32) += v16;
    }
    if ( a2 == 3 )
    {
      v22 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 37);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v22 + 1;
        *v22 = 37;
      }
    }
    v33 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v33);
    if ( format != v31 )
      free(format);
  }
}
