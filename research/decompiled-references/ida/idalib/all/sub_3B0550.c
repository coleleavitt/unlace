__int64 __fastcall sub_3B0550(__int64 *a1, __int64 a2, const char *a3, double a4, __m128 a5)
{
  const char *v5; // rbx
  _QWORD *std_dirtree; // r14
  __int64 v10; // rax
  __m128 si128; // xmm0
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r12
  _BYTE *v18; // rsi
  __int64 v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  size_t v22; // r13
  _BYTE *v23; // rsi
  const char *v24; // rdx
  const char *v25; // rsi
  __int64 v26; // [rsp+17h] [rbp-B1h] BYREF
  char v27; // [rsp+1Fh] [rbp-A9h]
  __m128 v28; // [rsp+20h] [rbp-A8h] BYREF
  void *v29; // [rsp+30h] [rbp-98h] BYREF
  __int128 v30; // [rsp+38h] [rbp-90h]
  void *v31; // [rsp+50h] [rbp-78h] BYREF
  __int128 v32; // [rsp+58h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  LOBYTE(v5) = a3 == nullptr || a2 == 0;
  if ( (_BYTE)v5
    || (std_dirtree = (_QWORD *)get_std_dirtree(5),
        v10 = *(_QWORD *)(a2 + 88),
        *(_OWORD *)ptr = -1,
        v27 = 0,
        v26 = v10,
        dirtree_find_entry(ptr, std_dirtree, &v26),
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr),
        v28 = si128,
        si128.m128_u64[0] == -1)
    && _mm_movehl_ps(a5, si128).m128_u64[0] )
  {
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v29 = nullptr;
  v30 = 0;
  dirtree_get_abspath_by_cursor(&v29, *std_dirtree, &v28, 0);
  v31 = nullptr;
  v32 = 0;
  if ( !strcmp(a3, "Default") || *a3 == 47 )
  {
    sub_35A790((char **)&v31);
    if ( !(_QWORD)v32 )
      goto LABEL_8;
  }
  else
  {
    sub_35A790((char **)&v31);
    if ( !(_QWORD)v32 )
    {
LABEL_8:
      v12 = haystack;
      goto LABEL_9;
    }
  }
  v12 = (const char *)v31;
  if ( *(_BYTE *)v31 == 47 && !*((_BYTE *)v31 + 1) )
  {
LABEL_10:
    v13 = *a1;
    v14 = *(_QWORD *)(a2 + 88);
    memset(ptr, 0, sizeof(ptr));
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, _QWORD))(v13 + 320))(a1, ptr, v14, 0);
    v15 = v32;
    if ( (_QWORD)v32 )
    {
      v16 = v32 + 1;
      v17 = v32;
      v15 = v32 - 1;
    }
    else
    {
      v16 = 2;
      v17 = 1;
    }
    v18 = v31;
    if ( *((_QWORD *)&v32 + 1) < v16 )
    {
      v31 = (void *)qvector_reserve(&v31, v31, v16, 1);
      v18 = v31;
    }
    *(_QWORD *)&v32 = v16;
    v18[v17] = 0;
    *((_BYTE *)v31 + v15) = 47;
    v5 = haystack;
    if ( *(_QWORD *)&ptr[8] )
      v5 = *(const char **)ptr;
    if ( v5 )
    {
      v19 = v32;
      v20 = strlen(v5);
      v21 = v20;
      v22 = v20;
      if ( v19 )
      {
        --v19;
        v22 = v20 + v19;
      }
      v23 = v31;
      if ( *((_QWORD *)&v32 + 1) < v22 + 1 )
      {
        v31 = (void *)qvector_reserve(&v31, v31, v22 + 1, 1);
        v23 = v31;
      }
      *(_QWORD *)&v32 = v22 + 1;
      v23[v22] = 0;
      memmove((char *)v31 + v19, v5, v21);
    }
    v24 = haystack;
    if ( (_QWORD)v32 )
      LODWORD(v24) = (_DWORD)v31;
    v25 = haystack;
    if ( (_QWORD)v30 )
      LODWORD(v25) = (_DWORD)v29;
    LOBYTE(v5) = (unsigned __int8)dirtree_rename(*std_dirtree, (int)v25, (int)v24) == 0;
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    goto LABEL_28;
  }
LABEL_9:
  if ( (unsigned __int8)dirtree_mkdir(*std_dirtree, v12) <= 1u )
    goto LABEL_10;
LABEL_28:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return (unsigned int)v5;
}
