void __fastcall sub_18093E0(_QWORD *a1, __int64 a2, char *a3, size_t a4)
{
  __int64 v6; // rax
  __int32 v7; // r13d
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  char *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm2
  char *v16; // r13
  char *v17; // rbx
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rax
  size_t v22; // r15
  const void *v23; // rax
  void *v24; // rdi
  __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // r9
  char *s; // [rsp+8h] [rbp-2B0h]
  __int64 v29; // [rsp+10h] [rbp-2A8h]
  const void *v32; // [rsp+40h] [rbp-278h]
  __m128i v33; // [rsp+50h] [rbp-268h] BYREF
  __int64 v34; // [rsp+60h] [rbp-258h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+70h] [rbp-248h] BYREF
  int v36; // [rsp+78h] [rbp-240h]
  __int128 v37; // [rsp+80h] [rbp-238h]
  __int64 v38; // [rsp+90h] [rbp-228h]
  char v39; // [rsp+98h] [rbp-220h]
  int v40; // [rsp+9Ch] [rbp-21Ch]
  void **p_s1; // [rsp+A0h] [rbp-218h]
  __int64 v42; // [rsp+B0h] [rbp-208h] BYREF
  void *ptr; // [rsp+B8h] [rbp-200h]
  __int64 v44; // [rsp+C0h] [rbp-1F8h]
  _BYTE v45[64]; // [rsp+C8h] [rbp-1F0h] BYREF
  void *v46[2]; // [rsp+108h] [rbp-1B0h]
  __int64 v47; // [rsp+118h] [rbp-1A0h]
  _QWORD *v48; // [rsp+120h] [rbp-198h]
  __m128i v49; // [rsp+128h] [rbp-190h]
  __int64 v50; // [rsp+138h] [rbp-180h]
  __int64 v51; // [rsp+140h] [rbp-178h]
  __int64 v52; // [rsp+148h] [rbp-170h]
  __int64 v53; // [rsp+150h] [rbp-168h]
  void *s1; // [rsp+160h] [rbp-158h] BYREF
  __m128i si128; // [rsp+168h] [rbp-150h]
  _BYTE v56[320]; // [rsp+178h] [rbp-140h] BYREF

  if ( (unsigned int)sub_A5F4F0(a1[31]) == 10 )
  {
    v6 = sub_A64930(a1[31], 0);
    v7 = *(_DWORD *)(a2 + 24);
    v8 = (__int64 *)v6;
    s1 = v56;
    v9 = a1[31];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v10 = *(_QWORD *)(v9 + 17504);
  }
  else
  {
    s = (char *)sub_20E0630(a4, a3, 0);
    v13 = sub_A64930(a1[31], 0);
    v7 = *(_DWORD *)(a2 + 24);
    v8 = (__int64 *)v13;
    s1 = v56;
    v14 = a1[31];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v10 = *(_QWORD *)(v14 + 17504);
    if ( s )
    {
      v11 = s;
      v12 = j__strlen(s);
      goto LABEL_6;
    }
  }
  v11 = a3;
  v12 = a4;
  s = nullptr;
LABEL_6:
  v33.m128i_i32[2] = v7;
  v33.m128i_i64[0] = sub_6F3470(v10, v11, v12);
  sub_B85890(&v34, v33.m128i_i64[0]);
  v15 = _mm_load_si128(&v33);
  ptr = v45;
  v44 = 0x800000000LL;
  v50 = v34;
  v42 = 0;
  *(_OWORD *)v46 = 0;
  v47 = 0;
  v48 = a1;
  v49 = v15;
  v51 = 0;
  v52 = 0;
  v53 = 0x101010000LL;
  sub_1A395A0(&v42);
  if ( (unsigned __int8)sub_1A49A10(a1, &v42, a1[24], 0, 0) )
  {
    v16 = (char *)ptr + 8 * (unsigned int)v44;
    if ( ptr != v16 )
    {
      v17 = (char *)ptr;
      do
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( ((*(_BYTE *)(v18 + 28) + 94) & 0x7Fu) <= 0xC )
          {
            if ( (unsigned __int8)sub_E6F1E0(v8, *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v36 = 2;
              v37 = 0;
              v35 = &off_2BEBEE0;
              v39 = 0;
              p_s1 = &s1;
              v40 = 1;
              v38 = 0;
              sub_227B8B0(&v35, 0, 0, 0);
              v29 &= 0xFFFFFFFF00000000LL;
              si128.m128i_i64[0] = 0;
              sub_E6F990(v8, v18, v29, (__int64)&v35, v26, v27);
              v35 = (__int64 (__fastcall **)())&unk_2C76288;
              sub_227B7A0(&v35);
              v25 = si128.m128i_i64[0];
              v24 = s1;
            }
            else
            {
              v19 = *(_QWORD *)(v18 + 40);
              if ( (v19 & 7) != 0 )
                BUG();
              v20 = 0;
              v21 = *(unsigned int **)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 16);
              v22 = *v21;
              v23 = v21 + 4;
              si128.m128i_i64[0] = 0;
              if ( v22 > si128.m128i_i64[1] )
              {
                v32 = v23;
                sub_2236E10(&s1, v56, v22, 1);
                v20 = si128.m128i_i64[0];
                v23 = v32;
              }
              v24 = s1;
              if ( v22 )
              {
                memcpy((char *)s1 + v20, v23, v22);
                v20 = si128.m128i_i64[0];
                v24 = s1;
              }
              v25 = v22 + v20;
              si128.m128i_i64[0] = v22 + v20;
            }
            if ( a4 == v25 && (!a4 || !memcmp(v24, a3, a4)) )
              break;
          }
          v17 += 8;
          if ( v16 == v17 )
            goto LABEL_22;
        }
        v17 += 8;
        sub_B8C4D0(v18, a1[31]);
      }
      while ( v16 != v17 );
    }
  }
LABEL_22:
  if ( !BYTE3(v53) )
  {
LABEL_38:
    if ( !BYTE4(v53) || (_DWORD)v42 != 5 )
      goto LABEL_26;
LABEL_43:
    sub_1A445B0(v48, &v42);
    goto LABEL_26;
  }
  if ( (_DWORD)v42 == 5 )
  {
    if ( !BYTE4(v53) )
      goto LABEL_26;
    goto LABEL_43;
  }
  if ( v46[1] && (*(_BYTE *)(v48[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v48, (__int64)&v42);
    goto LABEL_38;
  }
LABEL_26:
  if ( v46[0] )
    sub_1A39780(v46[0]);
  if ( ptr != v45 )
    free(ptr);
  if ( s1 != v56 )
    free(s1);
  if ( v8 )
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  if ( s )
    free(s);
}
