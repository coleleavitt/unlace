__int64 __fastcall sub_1464550(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int16 v6; // ax
  __int16 v8; // ax
  int v9; // r12d
  __int16 v10; // ax
  int v11; // edx
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r8
  bool v16; // cf
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  int v26; // r8d
  void *v27; // rsi
  __int16 v28; // ax
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // [rsp+12h] [rbp-136h]
  int v32; // [rsp+14h] [rbp-134h]
  unsigned __int64 v33; // [rsp+18h] [rbp-130h]
  unsigned int v34; // [rsp+18h] [rbp-130h]
  unsigned __int64 v35; // [rsp+18h] [rbp-130h]
  unsigned __int64 v36; // [rsp+18h] [rbp-130h]
  unsigned __int64 v37; // [rsp+18h] [rbp-130h]
  void *src[10]; // [rsp+20h] [rbp-128h] BYREF
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-D0h]
  _BYTE v41[192]; // [rsp+88h] [rbp-C0h] BYREF

  if ( *(_QWORD *)(a1 + 1120) )
    sub_1465EE0();
  else
    sub_14634E0((__int64 *)a1, (int *)a2);
  ptr = v41;
  v6 = *(_WORD *)(a2 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v6 != 47 )
  {
    LOBYTE(v3) = a3 & (v6 == 14);
    if ( (_BYTE)v3 )
    {
      v12 = (_BYTE *)sub_145C740(a1, a2, (__int64 *)&ptr, nullptr);
      v3 = 0;
      if ( v13 > 1 && *v12 == 34 && v12[v13 - 1] == 34 )
        *(_WORD *)(a2 + 16) = 16;
      goto LABEL_10;
    }
    return v3;
  }
  v3 = 0;
  if ( !(_BYTE)a3 )
    return v3;
  v8 = *(_WORD *)(a2 + 18);
  v9 = *(_DWORD *)a2;
  v41[0] = 60;
  si128.m128i_i64[0] = 1;
  v31 = v8;
  do
  {
    sub_14634E0((__int64 *)a1, (int *)a2);
    v10 = *(_WORD *)(a2 + 16);
    if ( (unsigned __int16)(v10 - 1) <= 1u )
    {
      sub_FC70B0((__int64)src, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 14);
      sub_AE9DF0((unsigned __int8 **)src, 52, 4u);
      sub_AEA040((__int64)src);
      v11 = v9;
      v3 = a3;
      sub_FC70B0((__int64)src, *(_QWORD *)(a1 + 48), v11, 109);
      sub_AE9DF0((unsigned __int8 **)src, 47, 4u);
      sub_AEA040((__int64)src);
      goto LABEL_10;
    }
    v32 = *(_DWORD *)a2;
    if ( v10 == 3 )
    {
      v30 = *(_QWORD *)(a1 + 48);
      *(_BYTE *)(a1 + 968) = 1;
      *(_BYTE *)(v30 + 6) = 1;
      sub_14634E0((__int64 *)a1, (int *)a2);
      continue;
    }
    v14 = si128.m128i_i64[0];
    if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
    {
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v41, si128.m128i_i64[0] + 1, 1);
        v14 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v14) = 32;
      v14 = ++si128.m128i_i64[0];
    }
    v15 = *(unsigned int *)(a2 + 4);
    v16 = __CFADD__(v14, v15);
    v17 = v14 + v15;
    if ( v17 != v14 )
    {
      if ( !v16 )
      {
        v18 = v14;
        if ( v17 > si128.m128i_i64[1] )
        {
          v36 = v17;
          sub_2236E10(&ptr, v41, v17, 1);
          v18 = si128.m128i_i64[0];
          v17 = v36;
        }
        v19 = (char *)ptr;
        if ( (char *)ptr + v18 != (char *)ptr + v17 )
        {
          v33 = v17;
          memset((char *)ptr + v18, 0, v17 - v18);
          v19 = (char *)ptr;
          v17 = v33;
        }
        si128.m128i_i64[0] = v17;
        goto LABEL_26;
      }
      si128.m128i_i64[0] = v17;
    }
    v19 = (char *)ptr;
LABEL_26:
    v20 = *(_QWORD *)(a1 + 56);
    v21 = *(_QWORD *)(a1 + 88);
    src[0] = &v19[v14];
    v22 = sub_13D1B40(a2, (__int64 *)src, v21, v20, nullptr);
    v23 = v22;
    if ( src[0] != (char *)ptr + v14 )
    {
      v34 = v22;
      memcpy((char *)ptr + v14, src[0], v22);
      v23 = v34;
    }
    if ( *(_DWORD *)(a2 + 4) != (_DWORD)v23 )
    {
      v24 = si128.m128i_i64[0];
      v25 = v23 + v14;
      if ( v23 + v14 != si128.m128i_i64[0] )
      {
        if ( (unsigned __int64)(v23 + v14) >= si128.m128i_i64[0] )
        {
          if ( v25 > si128.m128i_i64[1] )
          {
            v37 = v23 + v14;
            sub_2236E10(&ptr, v41, v23 + v14, 1);
            v24 = si128.m128i_i64[0];
            v25 = v37;
          }
          if ( (char *)ptr + v24 != (char *)ptr + v25 )
          {
            v35 = v25;
            memset((char *)ptr + v24, 0, v25 - v24);
            v25 = v35;
          }
        }
        si128.m128i_i64[0] = v25;
      }
    }
  }
  while ( *(_WORD *)(a2 + 16) != 52 );
  v26 = v9;
  *(_DWORD *)(a2 + 16) = 16;
  v27 = ptr;
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v28 = 3 - ((v31 & 1) == 0);
  if ( (v31 & 2) == 0 )
    v28 = v31 & 1;
  if ( (v31 & 0x10) != 0 )
    v28 |= 0x10u;
  v29 = si128.m128i_i64[0];
  v3 = 0;
  *(_WORD *)(a2 + 18) = v28;
  sub_145C860(a1, (__int64)v27, v29, a2, v26, v32);
LABEL_10:
  if ( ptr != v41 )
    free(ptr);
  return v3;
}
