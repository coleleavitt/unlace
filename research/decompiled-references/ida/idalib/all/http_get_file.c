__int64 __fastcall http_get_file(const __m128i *a1, __int64 a2, __int64 *a3)
{
  _BYTE *v3; // rcx
  __int64 v4; // rax
  _BYTE *v5; // r8
  __int32 v6; // r13d
  const char *v8; // rsi
  unsigned __int8 v9; // al
  size_t v10; // rax
  size_t v11; // r15
  int v12; // eax
  unsigned int v13; // ebx
  void *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // rax
  size_t v18; // [rsp+8h] [rbp-590h]
  _QWORD v19[2]; // [rsp+10h] [rbp-588h] BYREF
  void *ptr; // [rsp+20h] [rbp-578h] BYREF
  __int128 v21; // [rsp+28h] [rbp-570h]
  _OWORD v22[4]; // [rsp+40h] [rbp-558h] BYREF
  __m256i v23; // [rsp+80h] [rbp-518h]
  __int64 v24; // [rsp+A0h] [rbp-4F8h]
  __int64 (__fastcall **v25)(); // [rsp+B0h] [rbp-4E8h] BYREF
  void *handle; // [rsp+B8h] [rbp-4E0h]
  __int128 v27; // [rsp+C0h] [rbp-4D8h]
  __int128 v28; // [rsp+D0h] [rbp-4C8h]
  __int128 v29; // [rsp+E0h] [rbp-4B8h]
  __int128 v30; // [rsp+F0h] [rbp-4A8h]
  __int128 v31; // [rsp+100h] [rbp-498h]
  __int64 v32; // [rsp+110h] [rbp-488h]
  void *v33; // [rsp+118h] [rbp-480h]
  __int128 v34; // [rsp+120h] [rbp-478h]
  int v35; // [rsp+130h] [rbp-468h]
  _QWORD *v36; // [rsp+138h] [rbp-460h]
  bool v37; // [rsp+140h] [rbp-458h]
  char s[1032]; // [rsp+150h] [rbp-448h] BYREF
  unsigned __int64 v39; // [rsp+558h] [rbp-40h]

  v3 = (_BYTE *)a1[1].m128i_i64[0];
  v39 = __readfsqword(0x28u);
  v4 = a1[6].m128i_i64[0];
  v22[0] = _mm_loadu_si128(a1);
  v24 = v4;
  v22[1] = _mm_loadu_si128(a1 + 1);
  v22[2] = _mm_loadu_si128(a1 + 2);
  v22[3] = _mm_loadu_si128(a1 + 3);
  *(__m128i *)v23.m256i_i8 = _mm_loadu_si128(a1 + 4);
  *(__m128i *)&v23.m256i_u64[2] = _mm_loadu_si128(a1 + 5);
  if ( !v3 )
    return (unsigned int)-1;
  if ( !*v3 )
    return (unsigned int)-1;
  v5 = (_BYTE *)a1[1].m128i_i64[1];
  if ( !v5 || *v5 != 47 )
    return (unsigned int)-1;
  v6 = a1->m128i_i32[2];
  ptr = nullptr;
  v21 = 0;
  sub_35A790((char **)&ptr);
  if ( (unk_2CD6F06 & 0x10) != 0 )
    sub_368890();
  v19[0] = a2;
  v27 = 0;
  v8 = haystack;
  v35 = v6 | 0x20;
  v36 = v19;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v37 = (v6 & 0x20) == 0;
  v31 = 0;
  v34 = 0;
  v19[1] = a3;
  handle = nullptr;
  v32 = 0;
  v33 = nullptr;
  v25 = off_2B3A8D0;
  v23.m256i_i64[3] = (__int64)s;
  v24 = 1024;
  *(__m128i *)&v23.m256i_u64[1] = _mm_unpacklo_epi64(
                                    (__m128i)(unsigned __int64)&byte_22F0C30,
                                    (__m128i)(unsigned __int64)&byte_22F0C30);
  if ( (_QWORD)v21 )
    v8 = (const char *)ptr;
  v9 = sub_7C5D40((__int64)&v25, (__int64)v8, v22);
  if ( v9 == 1 || !a3 )
  {
    if ( (*(_DWORD *)&debug & 0x100000) == 0 )
    {
      v13 = v9;
      goto LABEL_21;
    }
    if ( v9 )
      sub_368890();
    goto LABEL_13;
  }
  v10 = strlen(s);
  v11 = v10;
  if ( !v10 )
  {
    v12 = *(_DWORD *)&debug;
    a3[1] = 0;
    if ( (v12 & 0x100000) != 0 )
      goto LABEL_13;
    goto LABEL_14;
  }
  v15 = (void *)*a3;
  v16 = v10 + 1;
  if ( a3[2] < v10 + 1 )
  {
    v18 = v10 + 1;
    v17 = qvector_reserve(a3, *a3, v16, 1);
    *a3 = v17;
    v16 = v18;
    v15 = (void *)v17;
  }
  a3[1] = v16;
  memmove(v15, s, v11);
  *(_BYTE *)(*a3 + v11) = 0;
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
LABEL_13:
    sub_368890();
LABEL_14:
  v13 = 0;
LABEL_21:
  v25 = off_2B3A890;
  if ( handle )
    dlclose(handle);
  handle = nullptr;
  v32 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return v13;
}
