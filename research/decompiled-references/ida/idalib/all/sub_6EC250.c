__int64 __fastcall sub_6EC250(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v12; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // ebp
  const char *v20; // rdx
  __int64 v22; // rcx
  double v23; // xmm4_8
  double v24; // xmm5_8
  char *v25; // rsi
  const char *v26; // rbp
  char *v27; // r8
  const char *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  const char *v31; // rdx
  __int64 v32; // [rsp+8h] [rbp-B0h]
  __int64 v33; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int64 v36; // [rsp+28h] [rbp-90h]
  char *s2; // [rsp+40h] [rbp-78h] BYREF
  __int128 v38; // [rsp+48h] [rbp-70h]
  void *v39; // [rsp+60h] [rbp-58h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(char *)(a3 + 28) < 0 )
    return 1;
  v12 = *(_QWORD *)(a3 + 80);
  v16 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v17 = (v12 & 4) != 0 ? v16[1] : *v16;
  v32 = v17;
  if ( (*(_BYTE *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  sub_6D80F0((__int64)&ptr, a1, a3, 1);
  v19 = sub_6F41D0(a1, a3);
  if ( (_BYTE)v19 )
  {
    if ( a2 )
    {
      v20 = haystack;
      if ( v36 )
        v20 = (const char *)ptr;
      if ( !(unsigned __int8)sub_6F46E0(a1, a2, v20, v18, v32) )
      {
        v31 = haystack;
        if ( v36 )
          v31 = (const char *)ptr;
        sub_6DC6D0(a1, a2, v31);
      }
    }
    goto LABEL_10;
  }
  sub_6DA080(a1, (__int64)&ptr);
  sub_6E4130(&v33, a1, v32, v22, a5, a6, a7, a8, v23, v24, a11, a12);
  if ( (_BYTE)v33 )
  {
    s2 = nullptr;
    v38 = 0;
    if ( (v33 & 0x100) != 0 )
      get_tinfo_pdata(&s2, v33, 0);
    sub_6DA080(a1, (__int64)&s2);
    if ( (_QWORD)v38 )
    {
      v25 = s2;
      v26 = haystack;
      if ( !v36 )
        goto LABEL_25;
    }
    else
    {
      v25 = (char *)haystack;
      if ( !v36 )
        goto LABEL_43;
    }
    v26 = (const char *)ptr;
LABEL_25:
    if ( strcmp(v26, v25) )
    {
      v34 = 0;
      if ( !a4 || !(unsigned __int8)sub_6DC6D0(a1, &v34, v26) )
      {
        if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
          sub_6D4540((__int64)&v33, a3);
        sub_6D9CC0(a1, (unsigned __int64 *)&v33, a3);
        sub_6D7650((__int64)&v39, a1, a3);
        v27 = (char *)haystack;
        if ( v40 )
          v27 = (char *)v39;
        v28 = haystack;
        if ( v36 )
          v28 = (const char *)ptr;
        sub_6DF2F0(a1, &v33, 1, v28, v27, a3, 0);
        if ( a2 )
        {
          v29 = v33;
          v33 = *a2;
          *a2 = v29;
        }
        if ( v39 )
        {
          v40 = 0;
          qfree(v39);
        }
      }
      clear_tinfo_t(&v34);
LABEL_39:
      if ( s2 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(s2);
      }
      v19 = 1;
      goto LABEL_19;
    }
LABEL_43:
    if ( a2 )
    {
      v30 = v33;
      v33 = *a2;
      *a2 = v30;
    }
    goto LABEL_39;
  }
  if ( a2 )
    clear_tinfo_t(a2);
  LOBYTE(v19) = a2 == nullptr;
LABEL_19:
  clear_tinfo_t(&v33);
LABEL_10:
  if ( ptr )
  {
    v36 = 0;
    qfree(ptr);
  }
  return v19;
}
