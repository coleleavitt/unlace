unsigned __int64 __fastcall sub_750B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rbp
  size_t v9; // r8
  void *v10; // rdi
  __int64 v11; // rax
  void *v12; // rdx
  __m128 v13; // xmm0
  void *v15; // r9
  void *v16; // rdi
  __int64 v17; // rsi
  unsigned int i; // r12d
  int tinfo_udt_member; // ebp
  const char *v20; // rsi
  const char *v21; // r14
  size_t v22; // rax
  size_t v23; // r15
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-120h]
  size_t v26; // [rsp+0h] [rbp-120h]
  void *v27; // [rsp+8h] [rbp-118h]
  __int64 v28; // [rsp+20h] [rbp-100h] BYREF
  void *src; // [rsp+28h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-D8h] BYREF
  void *v32; // [rsp+58h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-C0h]
  __int64 v34; // [rsp+70h] [rbp-B0h]
  __int128 v35; // [rsp+78h] [rbp-A8h]
  __int128 v36[3]; // [rsp+88h] [rbp-98h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-68h]
  int v38; // [rsp+C0h] [rbp-60h]
  __int64 v39; // [rsp+C8h] [rbp-58h]
  char v40; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v41; // [rsp+E0h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v30 = 0;
  src = nullptr;
  sub_9C800(a4, &src);
  if ( a2 )
  {
    v8 = v30;
    if ( !(_QWORD)v30 || (v9 = v30 - 1, (_QWORD)v30 == 1) )
    {
      a2[1] = 0;
      goto LABEL_5;
    }
    v15 = src;
    v16 = (void *)*a2;
    if ( a2[2] < (unsigned __int64)v30 )
    {
      v27 = src;
      v24 = qvector_reserve(a2, *a2, v30, 1);
      *a2 = v24;
      v15 = v27;
      v16 = (void *)v24;
      v9 = v8 - 1;
    }
    a2[1] = v8;
    v25 = v9;
    memmove(v16, v15, v9);
    *(_BYTE *)(*a2 + v25) = 0;
  }
  if ( (unsigned __int64)v30 > 1 && !(unsigned __int8)validate_name(&src, a5 == 0 ? 6 : 2, 1) )
  {
    v17 = *(_QWORD *)(a3 + 16);
    v28 = 0;
    get_func_frame(&v28, v17);
    if ( (_BYTE)v28 )
    {
      for ( i = 0; ; ++i )
      {
        v20 = ::src;
        if ( (_QWORD)v30 )
          v20 = (const char *)src;
        sub_9EF10(a1, v20, i);
        v21 = ::src;
        if ( *(_QWORD *)(a1 + 8) )
          v21 = *(const char **)a1;
        v32 = nullptr;
        v34 = 0;
        v37 = 1;
        v38 = -1;
        v39 = 0;
        v40 = 0;
        v31 = 0;
        v33 = 0;
        v35 = 0;
        v36[0] = 0;
        if ( v21 )
        {
          v22 = strlen(v21);
          v23 = v22;
          if ( v22 )
          {
            v26 = v22 + 1;
            v32 = (void *)qvector_reserve(&v32, 0, v22 + 1, 1);
            *(_QWORD *)&v33 = v26;
            memmove(v32, v21, v23);
            *((_BYTE *)v32 + v23) = 0;
          }
        }
        tinfo_udt_member = find_tinfo_udt_member(&v31, v28, 3);
        clear_tinfo_t(v36);
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
        if ( tinfo_udt_member == -1 )
          break;
      }
      clear_tinfo_t(&v28);
      v10 = src;
      if ( src )
        goto LABEL_6;
      return v41 - __readfsqword(0x28u);
    }
    clear_tinfo_t(&v28);
  }
LABEL_5:
  v11 = *(_QWORD *)(a1 + 16);
  v12 = src;
  v13 = _mm_loadh_ps((const double *)&v30 + 1);
  src = *(void **)a1;
  v10 = src;
  *(_QWORD *)a1 = v12;
  *((_QWORD *)&v30 + 1) = v11;
  *(__m128 *)(a1 + 8) = v13;
  if ( v10 )
  {
LABEL_6:
    *(_QWORD *)&v30 = 0;
    qfree(v10);
  }
  return v41 - __readfsqword(0x28u);
}
