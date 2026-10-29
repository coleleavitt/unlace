__int64 __fastcall sub_1A892A0(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // r13
  unsigned int v7; // edx
  __int64 v8; // r15
  char *v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // rax
  char *v12; // rdi
  _BYTE *v13; // rcx
  _BYTE *v14; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  _BYTE *v18; // [rsp+0h] [rbp-218h]
  _BYTE *v19; // [rsp+8h] [rbp-210h]
  char *v20; // [rsp+18h] [rbp-200h] BYREF
  _BYTE *v21; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v23[18]; // [rsp+30h] [rbp-1E8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-158h] BYREF
  __m128i v25; // [rsp+C8h] [rbp-150h]
  _BYTE v26[320]; // [rsp+D8h] [rbp-140h] BYREF

  v4 = sub_BFD550(a2);
  if ( (*(_WORD *)v4 & 0x1FF) != 9 || (*(_BYTE *)(v4 + 2) & 0x38) != 0 )
  {
    v16 = sub_EEB7E0(v4, a2, a3);
    sub_168B9F0((__int64)&ptr, a1, v16, 0xD69u, 0);
    v23[0] = sub_EEC8C0(v4, (__int64)a1, a3);
    sub_1587DB0((__int64)&ptr, v23);
    sub_15F7200(&ptr);
    return 1;
  }
  else
  {
    v5 = *(unsigned int *)(v4 + 4);
    v6 = (char *)(v4 + 4 * v5 + 20);
    v7 = *(_DWORD *)(v4 + 16) * ((*(_WORD *)(v4 + 2) >> 6) & 7);
    v8 = v7;
    if ( v6 != &v6[v7] )
    {
      if ( *v6 <= 0 )
      {
LABEL_8:
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v11 = 2LL * v7;
        v12 = v26;
        ptr = v26;
        v13 = &v26[v11];
        v14 = v26;
        v25 = si128;
        if ( v7 )
        {
          v14 = v26;
          if ( v7 > 0x80uLL )
          {
            sub_2236E10(&ptr, v26, v7, 2);
            v14 = ptr;
            v11 = 2 * v8;
            v12 = (char *)ptr + 2 * v25.m128i_i64[0];
          }
          v13 = &v14[v11];
          if ( &v14[v11] != v12 )
          {
            v19 = v14;
            v18 = &v14[v11];
            memset(v12, 0, 2 * ((unsigned __int64)(v13 - v12 - 2) >> 1) + 2);
            v13 = v18;
            v14 = v19;
          }
          v25.m128i_i64[0] = v8;
        }
        v21 = v14;
        v20 = v6;
        if ( (unsigned int)sub_2218B10(&v20, &v6[v8], &v21, v13, 0) )
        {
          v17 = sub_EEB7E0(v4, (__int64)&v6[v8], *(double *)si128.m128i_i64);
          sub_168B9F0((__int64)v23, a1, v17, 0x1A0Bu, 0);
          v22 = sub_EEC8C0(v4, (__int64)a1, *(double *)si128.m128i_i64);
          sub_1587DB0((__int64)v23, &v22);
          sub_15F7200(v23);
        }
        if ( ptr != v26 )
          free(ptr);
      }
      else
      {
        v9 = (char *)(v4 + 4 * v5 + 20);
        while ( &v6[v7] != ++v9 )
        {
          if ( *v9 <= 0 )
            goto LABEL_8;
        }
      }
    }
    return 0;
  }
}
