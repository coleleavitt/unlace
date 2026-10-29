__int64 __fastcall sub_6BD8A0(__int64 *a1, __int64 *a2, _QWORD *a3, void *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  char *v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v13; // r14
  __int64 *tinfo_property; // rax
  const char *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rbp
  const char *v20; // rdi
  unsigned __int64 v21; // r15
  size_t v22; // r9
  unsigned __int64 v23; // r15
  size_t v24; // r9
  const void *v25; // r10
  void *v26; // rax
  const char *v27; // r10
  void *v28; // rdi
  char *s2; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-70h]
  const void *v32; // [rsp+18h] [rbp-70h]
  const char *v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v34 = 0;
  if ( (unsigned int)sub_6BD6E0(a1, a4, 1, (__int64)&v34, a5) && (get_tinfo_property(v34, 2) & 0x3F) == 0x2D )
  {
    ptr = nullptr;
    v36 = 0;
    v8 = sub_6B9E00(a1, (__int64)&ptr, a4, v6, v7);
    v9 = (char *)ptr;
    if ( !v8 )
      goto LABEL_4;
    v13 = v36;
    tinfo_property = (__int64 *)get_tinfo_property(v34, 310);
    if ( !tinfo_property )
      goto LABEL_4;
    v15 = haystack;
    if ( v13 )
      v15 = v9;
    s2 = (char *)v15;
    v16 = tinfo_property[1];
    if ( !v16 )
      goto LABEL_4;
    v17 = -56;
    v31 = *tinfo_property;
    if ( v16 != -1 )
      v17 = 56 * v16;
    v18 = v31 + v17;
    if ( v31 != v18 )
    {
      v19 = *tinfo_property;
      while ( 1 )
      {
        v20 = haystack;
        if ( *(_QWORD *)(v19 + 8) )
          v20 = *(const char **)v19;
        if ( !strcmp(v20, s2) )
          break;
        v19 += 56;
        if ( v18 == v19 )
          goto LABEL_4;
      }
      v10 = 0x6DB6DB6DB6DB6DB7LL * ((v19 - v31) >> 3);
      if ( a3 && v19 - v31 != -56 )
      {
        if ( (_QWORD *)v19 != a3 )
        {
          v21 = *(_QWORD *)(v19 + 8);
          if ( v21 && (v22 = v21 - 1, v21 != 1) )
          {
            v27 = *(const char **)v19;
            v28 = (void *)*a3;
            if ( a3[2] < v21 )
            {
              v33 = *(const char **)v19;
              v28 = (void *)qvector_reserve(a3, *a3, *(_QWORD *)(v19 + 8), 1);
              v27 = v33;
              v22 = v21 - 1;
              *a3 = v28;
            }
            a3[1] = v21;
            memmove(v28, v27, v22);
            *(_BYTE *)(*a3 + v21 - 1) = 0;
          }
          else
          {
            a3[1] = 0;
          }
        }
        if ( a3 + 3 != (_QWORD *)(v19 + 24) )
        {
          v23 = *(_QWORD *)(v19 + 32);
          if ( v23 && (v24 = v23 - 1, v23 != 1) )
          {
            v25 = *(const void **)(v19 + 24);
            v26 = (void *)a3[3];
            if ( a3[5] < v23 )
            {
              v32 = *(const void **)(v19 + 24);
              v26 = (void *)qvector_reserve(a3 + 3, a3[3], *(_QWORD *)(v19 + 32), 1);
              v25 = v32;
              v24 = v23 - 1;
              a3[3] = v26;
            }
            a3[4] = v23;
            memmove(v26, v25, v24);
            *(_BYTE *)(a3[3] + v23 - 1) = 0;
          }
          else
          {
            a3[4] = 0;
          }
        }
        a3[6] = *(_QWORD *)(v19 + 48);
      }
    }
    else
    {
LABEL_4:
      v10 = -1;
    }
    if ( v9 )
      qfree(v9);
  }
  else
  {
    v10 = -1;
  }
  if ( a2 )
  {
    v11 = v34;
    v34 = *a2;
    *a2 = v11;
  }
  clear_tinfo_t(&v34);
  return v10;
}
