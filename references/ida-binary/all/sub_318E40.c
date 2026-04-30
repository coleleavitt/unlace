__int64 __fastcall rs_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  const char *v11; // r15
  size_t v12; // rax
  size_t v13; // r14
  void *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v29 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
    v6 = xmmword_8CDAC8;
    if ( (_QWORD)xmmword_8CDAC8 != v2 )
    {
      v27 = 0;
      v28 = 0;
      if ( v2 < (unsigned __int64)xmmword_8CDAC8 )
      {
        v19 = v2;
        do
        {
          v20 = (__int64 *)(qword_8CDAC0 + 24 * v19);
          v21 = *v20;
          if ( *v20 )
          {
            v20[1] = 0;
            qfree(v21, (const char *)a2);
          }
          ++v19;
        }
        while ( v19 < v6 );
      }
      else if ( (unsigned __int64)&v27 < qword_8CDAC0
             || (unsigned __int64)&v27 >= qword_8CDAC0 + 24LL * *((_QWORD *)&xmmword_8CDAC8 + 1) )
      {
        if ( *((_QWORD *)&xmmword_8CDAC8 + 1) < v2 )
        {
          v24 = qvector_reserve(&qword_8CDAC0, qword_8CDAC0, v2, 24);
          v6 = xmmword_8CDAC8;
          qword_8CDAC0 = v24;
        }
        if ( v6 < v2 )
        {
          v22 = 24 * v6;
          do
          {
            ++v6;
            v23 = v22 + qword_8CDAC0;
            v22 += 24;
            *(_QWORD *)v23 = 0;
            *(_OWORD *)(v23 + 8) = 0;
          }
          while ( v2 != v6 );
        }
      }
      else
      {
        if ( *((_QWORD *)&xmmword_8CDAC8 + 1) < v2 )
        {
          v25 = qvector_reserve(&qword_8CDAC0, qword_8CDAC0, v2, 24);
          v6 = xmmword_8CDAC8;
          qword_8CDAC0 = v25;
        }
        if ( v6 < v2 )
        {
          v8 = 24 * v6;
          do
          {
            ++v6;
            v9 = v8 + qword_8CDAC0;
            v8 += 24;
            *(_QWORD *)v9 = 0;
            *(_OWORD *)(v9 + 8) = 0;
          }
          while ( v2 != v6 );
        }
      }
      *(_QWORD *)&xmmword_8CDAC8 = v2;
      v2 = *(_QWORD *)(a2 + 8);
    }
    v10 = 0;
    if ( v2 )
    {
      do
      {
        v16 = *(_QWORD *)(a1 + 184) + 24LL * *(_QWORD *)(*(_QWORD *)a2 + 8 * v10);
        v17 = (__int64 *)(qword_8CDAC0 + 24 * v10);
        if ( *(_QWORD *)(v16 + 8)
          && (v11 = *(const char **)v16) != nullptr
          && (v12 = strlen(*(const char **)v16), (v13 = v12) != 0) )
        {
          v14 = (void *)*v17;
          v15 = v12 + 1;
          if ( v17[2] < v12 + 1 )
          {
            v26 = v12 + 1;
            v18 = qvector_reserve(v17, *v17, v15, 1);
            v15 = v26;
            *v17 = v18;
            v14 = (void *)v18;
          }
          v17[1] = v15;
          memmove(v14, v11, v13);
          *(_BYTE *)(*v17 + v13) = 0;
        }
        else
        {
          v17[1] = 0;
        }
        ++v10;
      }
      while ( v10 < *(_QWORD *)(a2 + 8) );
    }
    return 0;
  }
  if ( !v2 )
    return 0;
  v4 = (_QWORD *)operator new(0x18u);
  v4[1] = 0;
  v4[2] = 0;
  *v4 = &rs_chooser_t::enter;
  sub_4797E0(v4, 4, 0);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 == 1 )
    return 0;
  memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v5 - 8);
  --*(_QWORD *)(a2 + 8);
  return 2;
}
