unsigned __int64 __fastcall sub_5BF530(_QWORD *a1, const char *a2, unsigned int a3, __int64 a4, int a5)
{
  char *v6; // r15
  char *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  char *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  char *v22; // rdi
  char *v23; // rax
  __int32 v24; // [rsp+4h] [rbp-94h]
  __int32 v25; // [rsp+8h] [rbp-90h]
  __int32 v26; // [rsp+Ch] [rbp-8Ch]
  char v27; // [rsp+10h] [rbp-88h]
  unsigned __int32 v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+1Ch] [rbp-7Ch]
  void *v31; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h]
  __int128 v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !a5 )
    return v35 - __readfsqword(0x28u);
  v6 = *(char **)(a4 + 32);
  v26 = *(_DWORD *)(a4 + 8);
  v25 = *(_DWORD *)(a4 + 12);
  v29 = *(_DWORD *)(a4 + 16);
  v24 = *(_DWORD *)(a4 + 20);
  if ( v6 )
  {
    v30 = a5;
    v9 = (char *)qalloc_or_throw(v6, a2);
    memcpy(v9, *(const void **)(a4 + 24), (size_t)v6);
    LOBYTE(a5) = v30;
    if ( v30 == 31 )
    {
      v31 = nullptr;
      si128 = 0;
      goto LABEL_32;
    }
  }
  else
  {
    if ( a5 == 31 )
    {
      v31 = nullptr;
      v9 = (char *)haystack;
      si128 = 0;
      goto LABEL_6;
    }
    v9 = nullptr;
  }
  v27 = a5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D00);
  v31 = &dword_30;
  ptr = nullptr;
  v34 = 0;
  v21 = sub_5BF350(a1, (__int64)&v31, (int)a2, a3);
  v22 = (char *)ptr;
  if ( v21 )
  {
    if ( (v27 & 1) == 0 )
      v26 = si128.m128i_i32[0];
    if ( (v27 & 2) == 0 )
      v25 = si128.m128i_i32[1];
    if ( (v27 & 4) == 0 )
      v24 = si128.m128i_i32[3];
    if ( (v27 & 8) == 0 )
    {
      v23 = v9;
      *((_QWORD *)&v34 + 1) = v6;
      v6 = (char *)v34;
      ptr = v9;
      v9 = v22;
      v22 = v23;
    }
    if ( (v27 & 0x10) == 0 )
      v29 = si128.m128i_u32[2];
  }
  if ( v22 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v22);
  }
  v31 = nullptr;
  si128 = 0;
  if ( !v6 )
  {
    v6 = v9;
    v9 = (char *)haystack;
LABEL_6:
    if ( haystack )
      goto LABEL_7;
LABEL_33:
    v11 = 21;
    goto LABEL_34;
  }
LABEL_32:
  v6 = v9;
  if ( !v9 )
    goto LABEL_33;
LABEL_7:
  v10 = strlen(v9);
  v11 = v10 + 25;
  if ( v10 != -25 )
  {
LABEL_34:
    v31 = (void *)qvector_reserve(&v31, 0, v11, 1);
    memset((char *)v31 + si128.m128i_i64[0], 0, v11 - si128.m128i_i64[0]);
    si128.m128i_i64[0] = v11;
    goto LABEL_9;
  }
  v11 = si128.m128i_i64[0];
LABEL_9:
  v12 = (char *)v31 + v11;
  v13 = pack_dd(v31, v12, (unsigned int)(v26 + 1));
  v14 = (unsigned int)(v24 - (_DWORD)a2 + 1);
  if ( v24 == -1 )
    v14 = 0;
  v15 = pack_dd(v13, v12, v14);
  v16 = pack_ds(v15, v12, v9, 0);
  v17 = pack_dd(v16, v12, (unsigned int)(v25 + 1));
  v18 = pack_dd(v17, v12, v29);
  v19 = sub_3B90A0(a1, (int)a2);
  v20 = a3 << 16;
  if ( a3 >= 0x10000 )
    v20 = 0xFFFFFFFFLL;
  netnode_setblob(v19, v31, v18 - (_QWORD)v31, v20, 103);
  if ( v31 )
  {
    si128.m128i_i64[0] = 0;
    qfree(v31);
  }
  if ( v6 )
    qfree(v6);
  return v35 - __readfsqword(0x28u);
}

