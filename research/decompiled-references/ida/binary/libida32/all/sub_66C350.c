__int64 __fastcall sub_66C350(__m128i *a1, const char *src, unsigned int a3, char a4)
{
  __int64 v8; // r14
  int v9; // edx
  __int64 v10; // r15
  char v12; // al
  const char *v13; // rdi
  int v14; // edx
  size_t v15; // rax
  _QWORD *v16; // r11
  size_t v17; // r10
  void *v18; // rax
  size_t v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  void *ptr; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+10h] [rbp-78h]
  size_t v26; // [rsp+10h] [rbp-78h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  _QWORD *v28; // [rsp+18h] [rbp-70h]
  size_t v29; // [rsp+18h] [rbp-70h]
  __int64 v30; // [rsp+20h] [rbp-68h]
  size_t v31; // [rsp+28h] [rbp-60h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !src )
    return 1;
  v8 = *(_QWORD *)(a1->m128i_i64[0] + 1584);
  if ( *(_QWORD *)(v8 + 56) )
  {
    v9 = strcmp(*(const char **)(v8 + 48), src);
    if ( !v9 )
    {
LABEL_4:
      v10 = *(_QWORD *)(v8 + 32);
      if ( v10 )
        return sub_66BE40(a1, v10, a3, a4);
      goto LABEL_9;
    }
  }
  else
  {
    v9 = strcmp(haystack, src);
    if ( !v9 )
      goto LABEL_4;
  }
  if ( *(_QWORD *)(v8 + 80) )
  {
    if ( !strcmp(*(const char **)(v8 + 72), src) )
    {
LABEL_8:
      v10 = *(_QWORD *)(v8 + 40);
      v9 = 1;
      if ( v10 )
        return sub_66BE40(a1, v10, a3, a4);
      goto LABEL_9;
    }
  }
  else if ( !strcmp(haystack, src) )
  {
    goto LABEL_8;
  }
  v9 = -1;
LABEL_9:
  v23 = v9;
  v32 = nullptr;
  v33 = 0;
  v12 = sub_66A120((__int64 *)&v32, src);
  ptr = v32;
  if ( !v12 )
    sub_375400();
  v13 = (const char *)v32;
  if ( !(_QWORD)v33 )
    v13 = haystack;
  v10 = sub_7F3A90(v13);
  if ( v10 )
  {
    sub_5FF200((__int64)v13);
    *(_QWORD *)(v10 + 88) = sub_5FF320;
    if ( v23 == -1 )
      v14 = *(_QWORD *)(v8 + 32) != 0;
    else
      v14 = v23 ^ 1;
    v24 = v14;
    free_idasgn(*(void **)(v8 + 8LL * v14 + 32));
    *(_QWORD *)(v8 + 8 * v24 + 32) = v10;
    v27 = v24;
    v25 = v8 + (-(int)v24 & 0x18) + 48;
    v15 = strlen(src);
    v16 = (_QWORD *)v25;
    v17 = v15;
    if ( v15 )
    {
      v19 = v15 + 1;
      if ( *(_QWORD *)(v25 + 16) < v15 + 1 )
      {
        v31 = v15;
        v20 = *(_QWORD *)(v8 + 24 * v27 + 48);
        v30 = v27;
        v29 = v15 + 1;
        v21 = qvector_reserve(v25, v20, v19, 1);
        v17 = v31;
        v19 = v29;
        v16 = (_QWORD *)v25;
        *(_QWORD *)(v8 + 24 * v30 + 48) = v21;
      }
      v16[1] = v19;
      v28 = v16;
      v26 = v17;
      memmove((void *)*v16, src, v17);
      *(_BYTE *)(*v28 + v26) = 0;
      v18 = ptr;
      if ( !ptr )
        return sub_66BE40(a1, v10, a3, a4);
    }
    else
    {
      v18 = ptr;
      *(_QWORD *)(v25 + 8) = 0;
      if ( !ptr )
        return sub_66BE40(a1, v10, a3, a4);
    }
    qfree(v18);
    return sub_66BE40(a1, v10, a3, a4);
  }
  if ( ptr )
    qfree(ptr);
  return 1;
}

