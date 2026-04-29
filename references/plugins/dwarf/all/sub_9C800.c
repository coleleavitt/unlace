__int64 __fastcall sub_9C800(__int64 *a1, __int64 *a2)
{
  size_t v2; // rbx
  __int64 v3; // rdi
  const char *v4; // rax
  __int64 v5; // rbp
  size_t v6; // rax
  __int64 result; // rax
  const __m128i *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // r13
  const char *v12; // rax
  size_t v13; // rax
  const char *v14; // r8
  size_t v15; // rbx
  void *v16; // rdi
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // rbp
  __int64 v20; // rax
  unsigned __int8 srca; // [rsp+0h] [rbp-180h]
  const char *src; // [rsp+0h] [rbp-180h]
  __m128i si128; // [rsp+8h] [rbp-178h] BYREF
  _UNKNOWN **v24; // [rsp+18h] [rbp-168h]
  __int64 v25; // [rsp+20h] [rbp-160h] BYREF
  __int128 v26; // [rsp+28h] [rbp-158h]
  __int64 v27[4]; // [rsp+38h] [rbp-148h] BYREF
  __int128 v28; // [rsp+58h] [rbp-128h]
  __int128 v29; // [rsp+68h] [rbp-118h]
  __int64 v30; // [rsp+78h] [rbp-108h]
  __int128 v31; // [rsp+80h] [rbp-100h]
  __int64 v32; // [rsp+90h] [rbp-F0h]
  __int128 v33; // [rsp+98h] [rbp-E8h]
  __int64 v34; // [rsp+D0h] [rbp-B0h]
  __int128 v35; // [rsp+D8h] [rbp-A8h]
  __int64 v36; // [rsp+E8h] [rbp-98h]
  __int128 v37; // [rsp+F0h] [rbp-90h]
  __int64 v38; // [rsp+10Ch] [rbp-74h]
  __int128 v39; // [rsp+114h] [rbp-6Ch] BYREF
  unsigned __int64 v40; // [rsp+124h] [rbp-5Ch]
  __int64 v41; // [rsp+130h] [rbp-50h]
  unsigned __int64 v42; // [rsp+140h] [rbp-40h]

  v2 = (size_t)a1;
  v3 = *a1;
  v42 = __readfsqword(0x28u);
  v24 = &off_C9680;
  v25 = 0;
  v26 = 0;
  v4 = (const char *)sub_986B0(v3);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v6 = strlen(v4);
    v2 = v6;
    if ( v6 )
    {
      v16 = (void *)*a2;
      v11 = (__int64 *)(v6 + 1);
      if ( a2[2] < v6 + 1 )
        goto LABEL_25;
      goto LABEL_19;
    }
    a2[1] = 0;
LABEL_4:
    result = 1;
  }
  else
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    v8 = *(const __m128i **)v2;
    v9 = *(_QWORD *)(*(_QWORD *)v2 + 224LL);
    if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v9 == -1 )
    {
      if ( under_debugger )
        goto LABEL_30;
      interr(30478);
    }
    si128 = _mm_loadu_si128(v8 + 14);
    while ( 1 )
    {
      v10 = operator new(0x20u);
      *(_QWORD *)v10 = off_C9528;
      v11 = v27;
      *(_DWORD *)(v10 + 8) = 1;
      v27[0] = v10;
      *(_OWORD *)(v10 + 16) = 0;
      v27[3] = 0;
      v30 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v41 = 0;
      v38 = 0;
      *(_QWORD *)&v39 = 0;
      *((_QWORD *)&v39 + 1) = 0x80000000LL;
      v40 = 0xFFFFFFFF00000000LL;
      v28 = 0;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      if ( !(unsigned __int8)sub_9B440(v2, v27, si128.m128i_i64, (__int64)&v25) )
        break;
      v12 = (const char *)sub_986B0((__int64)v27);
      if ( v12 )
      {
        src = v12;
        v13 = strlen(v12);
        v14 = src;
        v15 = v13;
        if ( v13 )
        {
          v18 = (void *)*a2;
          v19 = v13 + 1;
          if ( a2[2] < v13 + 1 )
          {
            v20 = qvector_reserve(a2, *a2, v13 + 1, 1);
            *a2 = v20;
            v14 = src;
            v18 = (void *)v20;
          }
          a2[1] = v19;
          memmove(v18, v14, v15);
          *(_BYTE *)(*a2 + v15) = 0;
        }
        else
        {
          a2[1] = 0;
        }
        sub_1B750((__int64)v27);
        goto LABEL_4;
      }
      if ( (*(_QWORD *)((_BYTE *)&v39 + 4) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)((char *)&v39 + 4) == -1 )
      {
        if ( !under_debugger )
        {
          v16 = &stru_76F8 + 22;
          interr(30478);
LABEL_25:
          v17 = qvector_reserve(a2, v16, v11, 1);
          *a2 = v17;
          v16 = (void *)v17;
LABEL_19:
          a2[1] = (__int64)v11;
          memmove(v16, (const void *)v5, v2);
          *(_BYTE *)(*a2 + v2) = 0;
          goto LABEL_4;
        }
LABEL_30:
        BUG();
      }
      si128 = _mm_load_si128((const __m128i *)((char *)&v39 + 4));
      sub_1B750((__int64)v27);
    }
    sub_1B750((__int64)v27);
    result = 0;
  }
  v24 = (_UNKNOWN **)&unk_C9D00;
  if ( v25 )
  {
    srca = result;
    *(_QWORD *)&v26 = 0;
    qfree(v25);
    return srca;
  }
  return result;
}
