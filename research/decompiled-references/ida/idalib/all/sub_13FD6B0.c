void __fastcall sub_13FD6B0(__int64 a1, unsigned int a2)
{
  __int64 *v3; // r15
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // al
  size_t v9; // rdx
  size_t v10; // r13
  size_t v11; // rax
  void *v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // rsi
  size_t v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // r8
  size_t v21; // r9
  const void *v22; // r11
  int v23; // eax
  size_t v24; // rdx
  unsigned int v25; // eax
  size_t v26; // rax
  int v27; // eax
  size_t v28; // rax
  _BYTE *ptr; // [rsp+0h] [rbp-298h]
  const void **ptra; // [rsp+0h] [rbp-298h]
  _BYTE *ptrc; // [rsp+0h] [rbp-298h]
  unsigned int ptrb; // [rsp+0h] [rbp-298h]
  void *ptrd; // [rsp+0h] [rbp-298h]
  __int64 v34; // [rsp+10h] [rbp-288h]
  __int64 v35; // [rsp+10h] [rbp-288h]
  size_t v36; // [rsp+10h] [rbp-288h]
  __int64 v38; // [rsp+20h] [rbp-278h]
  _BYTE *v39; // [rsp+28h] [rbp-270h]
  unsigned __int8 *v40[10]; // [rsp+30h] [rbp-268h] BYREF
  void *s1; // [rsp+80h] [rbp-218h] BYREF
  __m128i si128; // [rsp+88h] [rbp-210h]
  _BYTE v43[136]; // [rsp+98h] [rbp-200h] BYREF
  void *v44; // [rsp+120h] [rbp-178h] BYREF
  __m128i v45; // [rsp+128h] [rbp-170h]
  _BYTE v46[136]; // [rsp+138h] [rbp-160h] BYREF
  void *s2; // [rsp+1C0h] [rbp-D8h] BYREF
  __m128i v48; // [rsp+1C8h] [rbp-D0h] BYREF
  _BYTE v49[192]; // [rsp+1D8h] [rbp-C0h] BYREF

  sub_12EEE10(
    (__int64 **)&s2,
    *(__int64 **)(*(_QWORD *)(a1 + 16) + 256LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 264LL) == 0);
  v3 = (__int64 *)s2;
  while ( 1 )
  {
    sub_12EEE10(
      (__int64 **)&s2,
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 256LL) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 264LL)),
      1);
    if ( s2 == v3 )
      break;
    v4 = *(__int64 **)(a1 + 48);
    v5 = *(_QWORD *)(*v3 + 8);
    v6 = v4[6];
    v7 = *(_QWORD *)(v5 + 48);
    if ( v7 && v6 )
      v8 = *(_QWORD *)(v7 + 8) == *(_QWORD *)(v6 + 8);
    else
      v8 = (v7 != 0) == (v6 != 0);
    if ( v8 )
    {
      sub_FEEE60((__int64)&s2, v4, 0);
      s1 = v43;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&s1, s2, (_BYTE *)s2 + v48.m128i_i64[0]);
      if ( s2 != &v48.m128i_u64[1] )
        operator delete(s2);
      v9 = *(_QWORD *)(v5 + 8);
      v10 = si128.m128i_i64[0];
      ptr = s1;
      if ( si128.m128i_i64[0] < v9 || v9 && memcmp(s1, *(const void **)v5, v9) )
      {
        v11 = j__strlen("Private");
        if ( v10 < v11 || v11 && memcmp(&ptr[v10 - v11], "Private", v11) )
          goto LABEL_13;
      }
      v45 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v16 = *(_QWORD *)(v5 + 8);
      v44 = v46;
      v17 = *(_BYTE **)v5;
      v48 = v45;
      s2 = v49;
      sub_A1FE50(&s2, v17, &v17[v16]);
      v18 = j__strlen("_Private");
      sub_A1FE50(&s2, "_Private", &aPrivate_3[v18]);
      v19 = *(_QWORD *)(a1 + 48);
      ptra = *(const void ***)(v19 + 40);
      if ( ptra )
      {
        v34 = *(_QWORD *)(a1 + 48);
        if ( !sub_9B4AA0(v19, "Private") && !*(_QWORD *)(v5 + 40) )
        {
          v24 = *(_QWORD *)(v5 + 8);
          if ( (const void *)v24 == ptra[1] && !sub_9B48C0(*(const void **)v5, *ptra, v24) )
          {
            sub_FC70B0((__int64)v40, *(_QWORD *)(a1 + 8), *(_DWORD *)(v34 + 32), 1362);
            sub_AEC220(v40, s1, si128.m128i_i64[0]);
            sub_AEA040((__int64)v40);
            v25 = a2;
            if ( !a2 )
              v25 = *(_DWORD *)(a1 + 28);
            ptrb = v25;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 904LL) & 0x10) != 0 )
            {
              v28 = j__strlen("framework ");
              sub_A1FE50(&v44, "framework ", &aFramework[v28]);
            }
            v26 = j__strlen("module ");
            sub_A1FE50(&v44, "module ", &aInitializerFor[v26 + 16]);
            sub_A1FE50(&v44, s2, (_BYTE *)s2 + v48.m128i_i64[0]);
            sub_13FD190(
              a1,
              s1,
              si128.m128i_i64[0],
              v44,
              v45.m128i_i64[0],
              v5,
              ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL) << 32) | ptrb);
            if ( s2 != v49 )
              free(s2);
            if ( v44 != v46 )
              free(v44);
            ptr = s1;
LABEL_13:
            v12 = ptr;
            if ( ptr == v43 )
              goto LABEL_15;
LABEL_14:
            free(v12);
            goto LABEL_15;
          }
        }
        v20 = s2;
      }
      else
      {
        v20 = s2;
        if ( !*(_QWORD *)(v5 + 40) )
        {
          v21 = *(_QWORD *)(v19 + 8);
          v22 = *(const void **)v19;
          if ( *(_QWORD *)(v5 + 8) != v21
            || (v39 = s2,
                v38 = *(_QWORD *)(a1 + 48),
                v36 = *(_QWORD *)(v19 + 8),
                ptrd = *(void **)v19,
                v27 = sub_9B48C0(*(const void **)v5, *(const void **)v19, v36),
                v22 = ptrd,
                v21 = v36,
                v19 = v38,
                v20 = v39,
                v27) )
          {
            if ( v48.m128i_i64[0] != v21
              || (v35 = v19, v21) && (ptrc = v20, v23 = memcmp(v22, v20, v21), v20 = ptrc, v19 = v35, v23) )
            {
              sub_FC70B0((__int64)v40, *(_QWORD *)(a1 + 8), *(_DWORD *)(v19 + 32), 1361);
              sub_AEC220(v40, **(_BYTE ***)(a1 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL));
              sub_AEA040((__int64)v40);
              sub_13FD190(
                a1,
                **(_BYTE ***)(a1 + 48),
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL),
                s2,
                v48.m128i_i64[0],
                v5,
                ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL) << 32)
              | *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL));
              v20 = s2;
            }
          }
        }
      }
      if ( v20 != v49 )
        free(v20);
      if ( v44 != v46 )
        free(v44);
      v12 = s1;
      if ( s1 != v43 )
        goto LABEL_14;
    }
LABEL_15:
    v13 = v3[1];
    if ( v13 != -8 && v13 )
    {
      ++v3;
    }
    else
    {
      v14 = v3 + 2;
      do
      {
        do
        {
          v15 = *v14;
          v3 = v14++;
        }
        while ( !v15 );
      }
      while ( v15 == -8 );
    }
  }
}
