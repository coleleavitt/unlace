void __fastcall sub_118BCD0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  _DWORD *v9; // r14
  unsigned __int64 v10; // r15
  const char *v11; // rbp
  size_t v12; // r8
  signed __int64 v13; // r14
  const char **v14; // rax
  char *v15; // r15
  size_t v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, void *, __int64); // r14
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 (__fastcall *v24)(__int64); // rax
  const char *v25; // rdi
  void *v26; // rbx
  _BYTE *v27; // rbp
  _BYTE *v28; // rax
  __int64 v29; // rax
  signed __int64 v30; // [rsp+8h] [rbp-220h]
  size_t v31; // [rsp+10h] [rbp-218h]
  size_t v32; // [rsp+10h] [rbp-218h]
  size_t v33; // [rsp+10h] [rbp-218h]
  size_t v34; // [rsp+18h] [rbp-210h]
  _QWORD *v35; // [rsp+20h] [rbp-208h]
  __m128i si128; // [rsp+50h] [rbp-1D8h]
  __int64 v39; // [rsp+60h] [rbp-1C8h]
  _QWORD v40[4]; // [rsp+70h] [rbp-1B8h] BYREF
  __int16 v41; // [rsp+90h] [rbp-198h]
  void *s[2]; // [rsp+A0h] [rbp-188h] BYREF
  _QWORD v43[4]; // [rsp+B0h] [rbp-178h] BYREF
  void *ptr; // [rsp+D0h] [rbp-158h] BYREF
  __m128i v45; // [rsp+D8h] [rbp-150h]
  void *v46; // [rsp+E8h] [rbp-140h] BYREF
  __int16 v47; // [rsp+F0h] [rbp-138h]

  sub_10DF020((__int64)s, (__int64)a3, 0x2BBu, 0x23Cu);
  v39 = v43[0];
  si128 = _mm_load_si128((const __m128i *)s);
  v35 = (_QWORD *)v43[1];
  while ( 1 )
  {
    v5 = (_QWORD *)si128.m128i_i64[0];
    if ( v35 == (_QWORD *)si128.m128i_i64[0] )
      break;
    while ( 1 )
    {
      v6 = *v5;
      v7 = *(_QWORD *)(*v5 + 8LL);
      v8 = **(_QWORD **)(v7 + 8);
      v9 = (_DWORD *)(*(_QWORD *)(v7 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)*v5 + 40LL) - 1));
      if ( !*v9 )
      {
        v10 = 0;
        v11 = (const char *)((unsigned int)v9[1] + v8);
        if ( !v11 )
        {
          v10 = 0;
          v12 = 0;
LABEL_7:
          v13 = v12 - v10;
          v12 = v10;
          goto LABEL_8;
        }
LABEL_5:
        v12 = strlen(v11);
        goto LABEL_6;
      }
      v10 = 0;
      v25 = (const char *)(v8 + *(unsigned int *)(*(_QWORD *)(v7 + 16) + 4LL * (unsigned int)(*v9 + 1)));
      if ( v25 )
        v10 = (unsigned int)strlen(v25);
      v12 = 0;
      v11 = (const char *)((unsigned int)v9[1] + v8);
      if ( v11 )
        goto LABEL_5;
LABEL_6:
      v13 = 0;
      if ( v12 >= v10 )
        goto LABEL_7;
LABEL_8:
      v14 = *(const char ***)(v6 + 48);
      v15 = (char *)*v14;
      if ( !*v14 || (v31 = v12, v16 = strlen(*v14), v12 = v31, (v30 = v16) == 0) )
      {
        v30 = 0;
LABEL_30:
        v33 = v12;
        sub_FC70B0((__int64)&ptr, *a1, 0, 372);
        sub_AEC220((unsigned __int8 **)&ptr, v15, v30);
        sub_AEC220((unsigned __int8 **)&ptr, &v11[v33], v13);
        sub_AEA040((__int64)&ptr);
        goto LABEL_17;
      }
      v34 = v31;
      v32 = v16;
      v17 = memchr(v15, 61, v16);
      v12 = v34;
      if ( !v17 || v17 - v15 == -1 )
        goto LABEL_30;
      v40[2] = v15;
      v40[0] = "-fdebug-prefix-map=";
      v41 = 1283;
      v18 = *a3;
      v40[3] = v32;
      ptr = &v46;
      v45 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v19 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v18 + 16);
      sub_22538C0(v40, &ptr);
      v20 = v19(a3, ptr, v45.m128i_i64[0]);
      if ( ptr != &v46 )
        free(ptr);
      v21 = *(unsigned int *)(a4 + 8);
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        sub_2237220(a4, a4 + 16, v21 + 1, 8);
        v21 = *(unsigned int *)(a4 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a4 + 8 * v21) = v20;
      ++*(_DWORD *)(a4 + 8);
LABEL_17:
      v22 = *(_QWORD *)(v6 + 16);
      if ( !v22 )
        v22 = v6;
      si128.m128i_i64[0] = (__int64)++v5;
      *(_BYTE *)(v22 + 44) |= 1u;
      if ( v5 != (_QWORD *)si128.m128i_i64[1] )
        break;
LABEL_26:
      if ( v35 == v5 )
        goto LABEL_27;
    }
    while ( 1 )
    {
      v23 = *v5;
      if ( *v5 )
      {
        if ( (_DWORD)v39
          && ((unsigned __int8)sub_21B9810(*v5, (unsigned int)v39)
           || HIDWORD(v39) && (unsigned __int8)sub_21B9810(v23, HIDWORD(v39))) )
        {
          break;
        }
      }
      si128.m128i_i64[0] = (__int64)++v5;
      if ( (_QWORD *)si128.m128i_i64[1] == v5 )
        goto LABEL_26;
    }
  }
LABEL_27:
  v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 416LL);
  if ( v24 != sub_10D8240 )
  {
    ((void (__fastcall *)(void **, __int64))v24)(s, a2);
    v26 = s[1];
    if ( s[1] )
    {
      v27 = s[0];
      v28 = memchr(s[0], 61, (size_t)s[1]);
      if ( !v28 || v28 - v27 == -1 )
      {
        sub_FC70B0((__int64)&ptr, *a1, 0, 372);
        sub_AEC220((unsigned __int8 **)&ptr, v27, (signed __int64)v26);
        sub_AEC220((unsigned __int8 **)&ptr, "environment", 11);
        sub_AEA040((__int64)&ptr);
      }
      else
      {
        v45.m128i_i64[1] = (__int64)v27;
        v47 = 1283;
        ptr = "-fdebug-prefix-map=";
        v46 = v26;
        v29 = sub_10DA6C0((__int64)a3, (__int64)&ptr);
        sub_10DC5D0(a4, v29);
      }
    }
    if ( s[0] != v43 )
      operator delete(s[0]);
  }
}
