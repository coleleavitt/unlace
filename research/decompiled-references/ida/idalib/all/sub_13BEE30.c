__int64 __fastcall sub_13BEE30(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  int v7; // edx
  void *v8; // r13
  size_t v9; // rbp
  unsigned __int64 v10; // rax
  size_t v11; // r15
  void *v12; // r13
  size_t v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 v20; // rax
  unsigned int v21; // r9d
  __int64 *v22; // r8
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  char *v25; // rdi
  unsigned int v27; // eax
  int v28; // eax
  __int64 *v29; // rsi
  void *v30; // r12
  void *src; // [rsp+18h] [rbp-510h]
  unsigned int srca; // [rsp+18h] [rbp-510h]
  __int64 *v34; // [rsp+20h] [rbp-508h]
  __int64 v35; // [rsp+28h] [rbp-500h]
  _QWORD *v36; // [rsp+48h] [rbp-4E0h]
  __int64 *v37; // [rsp+58h] [rbp-4D0h] BYREF
  unsigned __int64 v38; // [rsp+64h] [rbp-4C4h]
  int v39; // [rsp+6Ch] [rbp-4BCh]
  __m128i v40; // [rsp+70h] [rbp-4B8h] BYREF
  char v41; // [rsp+80h] [rbp-4A8h]
  void *v42; // [rsp+90h] [rbp-498h] BYREF
  size_t v43; // [rsp+98h] [rbp-490h]
  char v44; // [rsp+A0h] [rbp-488h]
  void *v45; // [rsp+B0h] [rbp-478h] BYREF
  size_t n; // [rsp+B8h] [rbp-470h]
  char v47; // [rsp+C0h] [rbp-468h]
  void *s2; // [rsp+D0h] [rbp-458h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-450h]
  _BYTE v50[1088]; // [rsp+E8h] [rbp-440h] BYREF

  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    v27 = sub_2244B30(a2, a3);
    v28 = sub_2244E60(a1 + 16, a2, a3, v27);
    if ( v28 == -1 )
      v29 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24));
    else
      v29 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v28);
    sub_11635E0((__int64 **)&s2, v29, 1);
    v30 = s2;
    sub_11635E0((__int64 **)&s2, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24)), 1);
    if ( v30 == s2 )
      return 0;
    else
      return *(_QWORD *)(*(_QWORD *)v30 + 8LL);
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 16LL);
    if ( *(_BYTE *)(a1 + 8) )
      v5 = _byteswap_ulong(v5);
    v35 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = sub_13BE9A0((_BYTE *)a1, v4);
        v38 = v6;
        v39 = v7;
        if ( (_DWORD)v6 )
        {
          sub_13BE9E0((__int64)&v40, (_BYTE *)a1, v6);
          sub_13BE9E0((__int64)&v42, (_BYTE *)a1, SHIDWORD(v38));
          v8 = v42;
          sub_13BE9E0((__int64)&v45, (_BYTE *)a1, v39);
          if ( v41 )
          {
            if ( v44 && v47 )
              break;
          }
        }
LABEL_23:
        if ( v5 == ++v4 )
          return v35;
      }
      v9 = v43;
      src = v45;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
      s2 = v50;
      if ( v43 > 0x400 )
      {
        sub_2236E10(&s2, v50, v43, 1);
        v25 = (char *)s2 + si128.m128i_i64[0];
      }
      else
      {
        v10 = 1024;
        if ( !v43 )
          goto LABEL_11;
        v25 = v50;
      }
      memcpy(v25, v8, v9);
      v10 = si128.m128i_u64[1];
      v9 += si128.m128i_i64[0];
LABEL_11:
      v11 = n;
      si128.m128i_i64[0] = v9;
      if ( n + v9 > v10 )
      {
        sub_2236E10(&s2, v50, n + v9, 1);
        v9 = si128.m128i_i64[0];
      }
      v12 = s2;
      if ( v11 )
      {
        memcpy((char *)s2 + v9, src, v11);
        v12 = s2;
        v9 = si128.m128i_i64[0];
      }
      v13 = v11 + v9;
      si128.m128i_i64[0] = v13;
      v14 = sub_2244B30(v12, v13);
      v15 = (unsigned int)sub_2244CB0(a1 + 16, v12, v13, v14);
      v17 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v15);
      if ( *v17 )
      {
        if ( *v17 != -8 )
        {
          sub_10EA060(&v37, v17, 0);
          v18 = v37;
LABEL_18:
          *(__m128i *)(*v18 + 8) = _mm_load_si128(&v40);
          if ( a3 == v13 && (!a3 || !memcmp(a2, v12, a3)) )
            v35 = v40.m128i_i64[0];
          if ( s2 != v50 )
            free(s2);
          goto LABEL_23;
        }
        --*(_DWORD *)(a1 + 32);
      }
      v34 = v17;
      srca = v15;
      v20 = sub_22300B0(v13 + 25, 8, v15, v16, v17, v15);
      v21 = srca;
      v22 = v34;
      v23 = (_QWORD *)v20;
      if ( v13 )
      {
        v36 = (_QWORD *)v20;
        memcpy((void *)(v20 + 24), v12, v13);
        v23 = v36;
        v22 = v34;
        v21 = srca;
      }
      *((_BYTE *)v23 + v13 + 24) = 0;
      *v23 = v13;
      v23[1] = 0;
      v23[2] = 0;
      *v22 = (__int64)v23;
      ++*(_DWORD *)(a1 + 28);
      v24 = sub_22450D0(a1 + 16, v21);
      sub_10EA060(&v37, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v24), 0);
      v18 = v37;
      goto LABEL_18;
    }
    return v35;
  }
}
