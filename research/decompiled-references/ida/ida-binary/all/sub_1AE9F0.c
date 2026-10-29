__int64 __fastcall sub_1AE9F0(
        const char *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 si128; // xmm0
  const char *v11; // rax
  char v12; // al
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  char *v20; // rbx
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  char *v32; // rax
  char v33; // [rsp+0h] [rbp-B8h]
  __int64 (__fastcall **v34)(); // [rsp+18h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-98h] BYREF
  __int128 v36; // [rsp+28h] [rbp-90h]
  char *s; // [rsp+40h] [rbp-78h] BYREF
  __int128 v38; // [rsp+48h] [rbp-70h]
  char v39[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v40; // [rsp+68h] [rbp-50h]
  __int64 v41; // [rsp+78h] [rbp-40h]
  unsigned __int64 v42; // [rsp+88h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  if ( !*a1 )
    return 1;
  si128 = 0;
  v39[0] = 2;
  v35 = 0;
  v41 = 0;
  s = nullptr;
  v36 = 0;
  v40 = 0;
  v38 = 0;
  v11 = &a1[strlen(a1)];
  if ( a1 >= v11 || (v12 = *(v11 - 1), v12 != 59) && v12 != 125 )
  {
    if ( (unsigned __int8)eval_idc_expr(v39, xmmword_8CC810, a1, &s) )
      goto LABEL_22;
    goto LABEL_12;
  }
  v13 = a1;
  v34 = &my_addr_resolver_t___vtable;
  if ( !(unsigned __int8)eval_idc_snippet(v39, a1, &s, &v34) )
  {
LABEL_12:
    if ( v39[0] == 2 && !(_QWORD)v40 || !(unsigned int)get_idcv_attr(v39, v39, "description", 0) )
    {
      if ( (_QWORD)v38 )
      {
        v20 = s;
        v32 = strchr(s, 58);
        if ( v32 )
          v20 = (char *)skip_spaces(v32 + 1);
      }
      else
      {
        v20 = (char *)&s1;
      }
      v13 = v20;
      sub_169700((int)"%s\n", (__int64)v20, v14, v15, v16, v17, (__m128)0LL, (__m128)0LL, a4, a5, v18, v19, a8, a9, v33);
      goto LABEL_6;
    }
    v21 = v36;
    if ( (_QWORD)v36 )
    {
      v23 = v36 + 20;
      v22 = v36 + 21;
      v21 = v36 - 1;
    }
    else
    {
      v22 = 22;
      v23 = 21;
    }
    v24 = v35;
    if ( *((_QWORD *)&v36 + 1) < v22 )
    {
      v35 = qvector_reserve(&v35, v35, v22, 1);
      v24 = v35;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC580);
    *(_QWORD *)&v36 = v22;
    *(_BYTE *)(v24 + v23) = 0;
    v25 = v35 + v21;
    *(__m128 *)v25 = si128;
    *(_QWORD *)(v25 + 13) = 0x203A6E6F69747065LL;
LABEL_22:
    print_idcv(&v35, v39, 0, 0);
    v13 = &s1;
    if ( (_QWORD)v36 )
      v13 = (const char *)v35;
    sub_169700((int)"%s\n", (__int64)v13, v26, v27, v28, v29, si128, (__m128)0LL, a4, a5, v30, v31, a8, a9, v33);
  }
LABEL_6:
  if ( s )
  {
    *(_QWORD *)&v38 = 0;
    qfree(s, v13);
  }
  free_idcv(v39);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v13);
  }
  return 1;
}
