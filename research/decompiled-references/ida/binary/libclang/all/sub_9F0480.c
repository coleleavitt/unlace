__int64 __fastcall sub_9F0480(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  char *v11; // rdx
  char *v12; // rdi
  unsigned int v13; // eax
  void *v15; // r12
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v25; // [rsp+8h] [rbp-120h]
  unsigned __int8 v26; // [rsp+1Fh] [rbp-109h] BYREF
  void *v27; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-100h]
  __int64 v29[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v30[4]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v31[64]; // [rsp+70h] [rbp-B8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-70h]
  _BYTE s[96]; // [rsp+C8h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v31, v8);
  sub_A1A5E0(v7, 56);
  v9 = sub_9E82D0(a1, a2, (__int64)v31);
  if ( !(_BYTE)v9 )
    goto LABEL_10;
  ptr = s;
  v10 = a4 >> 3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
  if ( a4 >> 3 )
  {
    v11 = &s[v10];
    v12 = s;
    if ( a4 >> 3 > 0x28 )
    {
      sub_25D6230(&ptr, s, a4 >> 3, 1);
      if ( v10 == si128.m128i_i64[0] )
        goto LABEL_5;
      v12 = (char *)ptr + si128.m128i_i64[0];
      v11 = (char *)ptr + v10;
    }
    memset(v12, 0, v11 - v12);
LABEL_5:
    si128.m128i_i64[0] = a4 >> 3;
  }
  v26 = 0;
  v13 = sub_2575E10(a5);
  if ( (unsigned __int8)sub_99D500(a1, a2, (__int64)v31, ptr, v13, a4, &v26)
    && (v9 = sub_9C9D40(a1, a2, v26, a3), (_BYTE)v9) )
  {
    v15 = ptr;
    v25 = *(_QWORD *)(a1 + 184);
    v28 = sub_2575D80(a5);
    v16 = v28;
    if ( v28 > 0x40 )
      sub_2585A50(&v27, 1, 0);
    else
      v27 = &dword_0 + 1;
    sub_2592D00(&v27, v15, v16 >> 3);
    v18 = sub_2575D20(&v27, v15, v17);
    v19 = v18;
    if ( a5 == v18 )
      sub_2581430(v30, v18, &v27);
    else
      sub_2583C60(v30, a5, &v27);
    if ( v30[0] == v19 )
      sub_257CF50(v29, v30);
    else
      sub_25768A0(v29, v30);
    sub_5FF3B0(v30);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v22 = sub_A1A4E0(v25, 24);
    if ( v29[0] == v19 )
      sub_257D000(v22, v29, v20, v21);
    else
      sub_2576960(v22, v29);
    sub_5FF3B0(v29);
  }
  else
  {
    v9 = 0;
  }
  if ( ptr != s )
    free(ptr);
LABEL_10:
  sub_A1C0C0(v31);
  return v9;
}

