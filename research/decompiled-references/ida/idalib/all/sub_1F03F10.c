__int64 *__fastcall sub_1F03F10(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // r10d
  unsigned int i; // eax
  __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r12d
  int v26; // ecx
  char *v27; // rax
  char *v28; // rsi
  int v29; // r13d
  char v30; // di
  int v31; // ebx
  char *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rdx
  const char *v36; // rdi
  unsigned int v37; // r14d
  int v39; // eax
  __int64 v40; // rdx
  unsigned __int64 *v41; // rsi
  int v42; // [rsp+8h] [rbp-130h]
  __int64 *v43; // [rsp+8h] [rbp-130h]
  int v44; // [rsp+10h] [rbp-128h]
  int v45; // [rsp+14h] [rbp-124h]
  _QWORD *v46; // [rsp+28h] [rbp-110h]
  char *v48; // [rsp+40h] [rbp-F8h] BYREF
  char *v49; // [rsp+48h] [rbp-F0h] BYREF
  __m128i si128; // [rsp+50h] [rbp-E8h] BYREF
  int v51; // [rsp+60h] [rbp-D8h]
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-B0h]

  *a1 = (__int64)(a1 + 2);
  a1[1] = 0x400000000LL;
  v8 = *(_QWORD *)(a2 + 8);
  if ( (v8 & 4) != 0 )
  {
    if ( !*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
      goto LABEL_3;
LABEL_47:
    sub_1F03D90((char *)a2, a2, (__int64)a3, a4, a5, a6);
    goto LABEL_3;
  }
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    goto LABEL_47;
LABEL_3:
  if ( (*(_QWORD *)a2 & 2) != 0 && *(_DWORD *)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL) + 8) > 4u )
    sub_1EF8A50((unsigned __int64 *)a2);
  sub_1EAAB80((__int64)ptr, *a3);
  v9 = sub_1EACC10(a3[1]);
  if ( v9 )
    v51 = v9 - 1;
  else
    v51 = 0;
  si128 = _mm_load_si128((const __m128i *)ptr);
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = &v53;
  v10 = sub_1EADE10((__int64)&si128);
  sub_9B7040((__int64)ptr, v10);
  sub_9B7040((__int64)ptr, v51);
  v44 = sub_2287CD0(ptr[0], 4LL * LODWORD(ptr[1]));
  if ( ptr[0] != &v53 )
    free(ptr[0]);
  v11 = sub_1EB4020((unsigned __int64 *)a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 24);
    v42 = *(_DWORD *)(v11 + 40);
    if ( v42 )
    {
      v14 = (unsigned int)(37 * v51);
      v15 = sub_1EADE10((__int64)&si128);
      v16 = 1;
      for ( i = (v42 - 1) & (((0xBF58476D1CE4E5B9LL * (v14 | (v15 << 32))) >> 31) ^ (484763065 * v14));
            ;
            i = (v42 - 1) & v19 )
      {
        v18 = v13 + 72LL * i;
        if ( si128.m128i_i32[0] == *(_DWORD *)v18
          && si128.m128i_i64[1] == *(_QWORD *)(v18 + 8)
          && v51 == *(_DWORD *)(v18 + 16) )
        {
          break;
        }
        if ( *(_DWORD *)v18 == -1 && *(_QWORD *)(v18 + 8) == 1 && *(_DWORD *)(v18 + 16) == -1 )
          goto LABEL_20;
        v19 = v16 + i;
        ++v16;
      }
      if ( v18 != *(_QWORD *)(v12 + 24) + 72LL * *(unsigned int *)(v12 + 40) )
        sub_1ECCD50(a1, (__int64 *)(v18 + 24));
    }
  }
LABEL_20:
  ptr[1] = nullptr;
  v53 = 0;
  ptr[0] = a1;
  v54 = 0;
  v20 = sub_1EB4020((unsigned __int64 *)a2);
  v21 = (_QWORD *)sub_1EAA820((_QWORD *)a2, v20 != 0);
  v46 = v22;
  while ( v46 != v21 )
  {
    while ( 1 )
    {
      v23 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 4LL * (v44 & (unsigned int)(*(_DWORD *)(v23 + 8) - 1)));
      if ( (_DWORD)v24 )
      {
        v25 = 0;
        v48 = (char *)(*(_QWORD *)(v23 + 24) + v24);
        v26 = *(unsigned __int16 *)v48;
        v27 = v48 + 2;
        v48 += 2;
        v45 = v26;
        v43 = (__int64 *)(v23 + 32);
        if ( v26 )
        {
          while ( 1 )
          {
            v28 = v27 + 4;
            v29 = *(_DWORD *)v27;
            v48 = v27 + 4;
            if ( v27 == (char *)-4LL )
            {
LABEL_38:
              v36 = "malformed uleb128, extends past end";
LABEL_31:
              sub_2221C70(v36, 1);
            }
            v30 = v27[4];
            v31 = 0;
            v32 = v27 + 4;
            v33 = 0;
            v34 = v30 & 0x7F;
            while ( 1 )
            {
              v35 = v34 << v33;
              ++v32;
              v33 += 7;
              v31 += v35;
              if ( v30 >= 0 )
                break;
              if ( !v32 )
                goto LABEL_38;
              v30 = *v32;
              v34 = *v32 & 0x7F;
              if ( v33 > 0x3E )
              {
                if ( v33 == 63 )
                {
                  if ( v34 != (v30 & 1) )
                  {
LABEL_30:
                    v36 = "uleb128 too big for uint64";
                    goto LABEL_31;
                  }
                }
                else if ( (*v32 & 0x7F) != 0 )
                {
                  goto LABEL_30;
                }
              }
            }
            v48 = &v28[(_DWORD)v32 - (_DWORD)v28];
            v37 = sub_1EA7E80(&v48);
            if ( v44 == v29 )
            {
              v49 = v48;
              v39 = sub_1EF5660(v43, &v49);
              if ( v39 == si128.m128i_i32[0] && v40 == si128.m128i_i64[1] && *(_DWORD *)v49 == v51 )
                break;
            }
            v27 = &v48[v37 + v31];
            ++v25;
            v48 = v27;
            if ( v45 == v25 )
              goto LABEL_36;
          }
          v41 = (unsigned __int64 *)&v48[v31];
          if ( v41 )
            break;
        }
      }
LABEL_36:
      if ( v46 == ++v21 )
        goto LABEL_37;
    }
    ++v21;
    sub_1EE1CA0(v43, v41, v37, (__int64 *)ptr);
  }
LABEL_37:
  operator delete(ptr[1], 8LL * v54, 8);
  return a1;
}
