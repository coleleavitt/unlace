__int64 __fastcall sub_229B350(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char *v4; // rbx
  char *v5; // rax
  size_t v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // rcx
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  int v11; // ebx
  __int128 v12; // rax
  unsigned int v13; // esi
  __int8 v14; // al
  _DWORD *v15; // rdx
  _DWORD *v16; // rsi
  __int64 result; // rax
  char *s1; // [rsp+0h] [rbp-160h]
  __int64 v19; // [rsp+10h] [rbp-150h]
  char *v20; // [rsp+18h] [rbp-148h]
  size_t v21; // [rsp+20h] [rbp-140h]
  __m128i v22; // [rsp+48h] [rbp-118h]
  __int128 v23; // [rsp+68h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-E8h]
  __int128 v25; // [rsp+80h] [rbp-E0h]
  __int64 v26; // [rsp+90h] [rbp-D0h]
  __int64 v27; // [rsp+98h] [rbp-C8h]
  __m128i v28[2]; // [rsp+A8h] [rbp-B8h] BYREF
  int v29; // [rsp+D0h] [rbp-90h]
  char v30; // [rsp+118h] [rbp-48h]

  v2 = 16 * a2;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v19 = a1 + v2;
  if ( a1 != a1 + v2 )
  {
    v3 = a1;
    while ( 1 )
    {
      v4 = *(char **)v3;
      v20 = *(char **)v3;
      v21 = *(_QWORD *)(v3 + 8);
      if ( v21 != 4 )
        break;
      v5 = "rdm";
      v6 = (*(_DWORD *)v4 != 1634559090) + 3LL;
      if ( *(_DWORD *)v4 != 1634559090 )
        v5 = *(char **)v3;
      s1 = v5;
      if ( !(_BYTE)byte_2D0B970 )
        goto LABEL_37;
LABEL_7:
      v7 = *(&xmmword_2D0B980 + 1);
      v8 = xmmword_2D0B980;
      if ( xmmword_2D0B980 == *(&xmmword_2D0B980 + 1)
        && (sub_229A550(), v7 = *(&xmmword_2D0B980 + 1),
                           v8 = xmmword_2D0B980,
                           xmmword_2D0B980 == *(&xmmword_2D0B980 + 1)) )
      {
LABEL_13:
        if ( !v21 )
          goto LABEL_27;
        if ( *v4 != 43 )
          goto LABEL_27;
        sub_2298BC0(v28, v20, v21);
        if ( !v30 )
          goto LABEL_27;
        v11 = v29;
        if ( !(_BYTE)byte_2D0B970 && __cxa_guard_acquire(&byte_2D0B970) )
        {
          *(_OWORD *)&xmmword_2D0B980 = 0;
          qword_2D0B990 = 0;
          __cxa_atexit((void (*)(void *))sub_2297EF0, &xmmword_2D0B980, &off_2B25620);
          __cxa_guard_release(&byte_2D0B970);
        }
        v12 = *(_OWORD *)&xmmword_2D0B980;
        if ( xmmword_2D0B980 == *(&xmmword_2D0B980 + 1) )
        {
          sub_229A550();
          v12 = *(_OWORD *)&xmmword_2D0B980;
          if ( xmmword_2D0B980 == *(&xmmword_2D0B980 + 1) )
            goto LABEL_27;
        }
        while ( !*(_BYTE *)(v12 + 28) || v11 != *(_DWORD *)(v12 + 24) )
        {
          *(_QWORD *)&v12 = v12 + 32;
          if ( (_QWORD)v12 == *((_QWORD *)&v12 + 1) )
            goto LABEL_27;
        }
        v22 = _mm_loadu_si128((const __m128i *)(v12 + 16));
        v13 = v22.m128i_u32[2];
        v14 = v22.m128i_i8[12];
      }
      else
      {
        if ( v6 )
        {
          v9 = v8;
          while ( 1 )
          {
            v10 = v9;
            if ( v6 == v9[1] && !memcmp(s1, (const void *)*v9, v6) )
              break;
            v9 += 4;
            if ( v7 == v9 )
              goto LABEL_13;
          }
        }
        else
        {
          while ( 1 )
          {
            v10 = v8;
            if ( !v8[1] )
              break;
            v8 += 4;
            if ( v7 == v8 )
              goto LABEL_13;
          }
        }
        v13 = *((_DWORD *)v10 + 6);
        v14 = *((_BYTE *)v10 + 28);
      }
      if ( v14 )
        sub_2299030((__int64)&v23, v13);
LABEL_27:
      v3 += 16;
      if ( v19 == v3 )
        goto LABEL_28;
    }
    s1 = *(char **)v3;
    v6 = *(_QWORD *)(v3 + 8);
    if ( (_BYTE)byte_2D0B970 )
      goto LABEL_7;
LABEL_37:
    if ( __cxa_guard_acquire(&byte_2D0B970) )
    {
      *(_OWORD *)&xmmword_2D0B980 = 0;
      qword_2D0B990 = 0;
      __cxa_atexit((void (*)(void *))sub_2297EF0, &xmmword_2D0B980, &off_2B25620);
      __cxa_guard_release(&byte_2D0B970);
    }
    goto LABEL_7;
  }
LABEL_28:
  if ( !(_BYTE)byte_2D0B970 && __cxa_guard_acquire(&byte_2D0B970) )
  {
    *(_OWORD *)&xmmword_2D0B980 = 0;
    qword_2D0B990 = 0;
    __cxa_atexit((void (*)(void *))sub_2297EF0, &xmmword_2D0B980, &off_2B25620);
    __cxa_guard_release(&byte_2D0B970);
  }
  v16 = *(&xmmword_2D0B980 + 1);
  v15 = xmmword_2D0B980;
  if ( xmmword_2D0B980 != *(&xmmword_2D0B980 + 1)
    || (sub_229A550(),
        v16 = *(&xmmword_2D0B980 + 1),
        v15 = xmmword_2D0B980,
        result = 0,
        xmmword_2D0B980 != *(&xmmword_2D0B980 + 1)) )
  {
    result = 0;
    do
    {
      if ( *((_BYTE *)v15 + 28) )
      {
        if ( ((1LL << v15[6]) & *((_QWORD *)&v23 + (v15[6] >> 6))) != 0 )
          result |= 1LL << v15[5];
      }
      v15 += 8;
    }
    while ( v15 != v16 );
  }
  return result;
}
