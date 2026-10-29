__int64 sub_12AB80()
{
  char *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int16 v4; // ax
  __int64 v5; // rdx
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  const char *v14; // rbx
  _WORD v15[4]; // [rsp+14h] [rbp-CCh] BYREF
  int v16; // [rsp+1Ch] [rbp-C4h]
  __int64 v17; // [rsp+20h] [rbp-C0h]
  __int64 v18; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-B0h]
  __int128 v20; // [rsp+38h] [rbp-A8h]
  void *src; // [rsp+50h] [rbp-90h]
  size_t n[3]; // [rsp+58h] [rbp-88h]
  void *v23; // [rsp+70h] [rbp-70h] BYREF
  __int128 v24; // [rsp+78h] [rbp-68h]
  char s[24]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp-38h]

  v0 = byte_1D6B90;
  v26 = __readfsqword(0x28u);
  v15[0] = (unsigned __int8)getinf_flag();
  v15[1] = (unsigned __int8)getinf_flag();
  v15[2] = (unsigned __int8)getinf_flag();
  v15[3] = (unsigned __int8)getinf_flag();
  v17 = (char)getinf();
  v19 = 0;
  v20 = 0;
  v18 = (unsigned __int8)getinf();
  do
  {
    if ( *v0 == -1 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v24 = 0;
    src = nullptr;
    v23 = nullptr;
    *(_OWORD *)n = 0;
    print_strlit_type();
    v1 = v20;
    v2 = v19;
    if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v20 + 1) )
    {
      v19 = qvector_reserve();
      v1 = v20;
      v2 = v19;
    }
    v3 = v2 + 24 * v1;
    *(_QWORD *)v3 = 0;
    *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)0LL);
    *(_QWORD *)&v20 = v20 + 1;
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    ++v0;
  }
  while ( &byte_1D6B90[9] != v0 );
  v4 = getinf();
  if ( HIBYTE(v4) )
    LOBYTE(v4) = -1;
  v5 = 0;
  while ( byte_1D6B90[v5] != (_BYTE)v4 )
  {
    if ( ++v5 == 9 )
    {
      LODWORD(v5) = 0;
      break;
    }
  }
  v16 = v5;
  if ( !getinf_buf() )
    s[0] = 0;
  v23 = nullptr;
  v24 = 0;
  v6 = strlen(s);
  v7 = v6 + 1;
  v8 = v6;
  v23 = (void *)qvector_reserve();
  *(_QWORD *)&v24 = v7;
  memmove(v23, s, v8);
  *((_BYTE *)v23 + v8) = 0;
  src = (void *)getinf();
  if ( (unsigned int)sub_18C660(
                       1059,
                       (unsigned int)sub_12D410,
                       0,
                       (unsigned int)v15,
                       (unsigned int)&v23,
                       (unsigned int)&v18) )
  {
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf();
    setinf();
    setinf();
    v14 = s1;
    if ( (_QWORD)v24 )
      v14 = (const char *)v23;
    if ( v14 )
    {
      strlen(v14);
      setinf_buf();
    }
    setinf();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  v9 = v19;
  if ( v19 )
  {
    v10 = v20;
    if ( (_QWORD)v20 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v9 + 24 * v11);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = v19;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return 1;
}

