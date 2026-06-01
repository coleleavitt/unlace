__int64 __fastcall sub_9F0730(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE *v9; // rcx
  __int64 v10; // rbx
  char *v11; // rdx
  char *v12; // rdi
  void *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned int v17; // eax
  void *v19; // [rsp+0h] [rbp-108h]
  unsigned __int8 v20; // [rsp+1Fh] [rbp-E9h] BYREF
  void *v21; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  void *v23; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-D0h]
  void *v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-C0h]
  _BYTE v27[64]; // [rsp+50h] [rbp-B8h] BYREF
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h]
  _BYTE s[96]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v27, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_9E82D0(a1, a2, (__int64)v27);
  if ( !(_BYTE)v8 )
    goto LABEL_10;
  ptr = s;
  v9 = s;
  v10 = a4 >> 3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
  if ( a4 >> 3 )
  {
    v11 = &s[v10];
    v12 = s;
    if ( a4 >> 3 > 0x28 )
    {
      sub_25D6230(&ptr, s, a4 >> 3, 1);
      v9 = ptr;
      if ( v10 == si128.m128i_i64[0] )
        goto LABEL_5;
      v12 = (char *)ptr + si128.m128i_i64[0];
      v11 = (char *)ptr + v10;
    }
    memset(v12, 0, v11 - v12);
    v9 = ptr;
LABEL_5:
    si128.m128i_i64[0] = a4 >> 3;
  }
  v20 = 0;
  if ( (unsigned __int8)sub_99D500(a1, a2, (__int64)v27, v9, a4, a4, &v20)
    && (v8 = sub_9C9D40(a1, a2, v20, a3), (_BYTE)v8) )
  {
    v24 = a4;
    v14 = ptr;
    v15 = *(_QWORD *)(a1 + 184);
    if ( a4 > 0x40 )
    {
      v19 = ptr;
      sub_2585A50(&v23, 0, 1);
      v14 = v19;
    }
    else
    {
      v23 = nullptr;
    }
    sub_2592D00(&v23, v14, a4 >> 3);
    v26 = v24;
    if ( v24 > 0x40 )
    {
      sub_2585B30(&v25);
      v22 = v26;
      if ( v26 <= 0x40 )
      {
        v17 = v24;
        v21 = v25;
      }
      else
      {
        sub_2585B30(&v21);
        if ( v26 > 0x40 && v25 )
          operator delete[](v25);
        v17 = v24;
      }
      if ( v17 > 0x40 && v23 )
        operator delete[](v23);
    }
    else
    {
      v22 = v24;
      v21 = v23;
    }
    v16 = sub_A1A4E0(v15, 16);
    *(_DWORD *)(v16 + 8) = v22;
    *(_QWORD *)v16 = v21;
  }
  else
  {
    v8 = 0;
  }
  if ( ptr != s )
    free(ptr);
LABEL_10:
  sub_A1C0C0(v27);
  return v8;
}

