unsigned __int64 __fastcall sub_236B50(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  char *v9; // rsi
  __int64 i; // rbx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  char *v28; // r12
  void *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v31; // [rsp+8h] [rbp-1050h]
  char s1[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v33; // [rsp+1028h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( !dword_8CC5F0 )
    return v33 - __readfsqword(0x28u);
  v9 = byte_9 + 5;
  v31 = 0;
  v30 = 0;
  sub_20CEA0(dbg, 14, qword_8CC4C8 != 0, &v30);
  if ( (dword_8BA5B0 & 0x8000) != 0 && qword_8CC4C8 )
  {
    v9 = s1;
    getinf_buf(97, s1, 4096);
    for ( i = qword_8CC4B8; (int *)i != &dword_8CC4A8; i = std::_Rb_tree_increment(i) )
    {
      v21 = &::s1;
      if ( *(_QWORD *)(i + 48) )
        v21 = *(const char **)(i + 40);
      v9 = (char *)v21;
      if ( strcasecmp(s1, v21) )
        sub_22DC00((__int64)v21, (__m128)0LL, a2, a3, a4, v26, v27, a7, a8, (__int64)v21, v22, v23, v24, v25, v30);
    }
    sub_22B090(qword_8CC4B0, v9);
    qword_8CC4B8 = (__int64)&dword_8CC4A8;
    qword_8CC4B0 = nullptr;
    qword_8CC4C0 = (__int64)&dword_8CC4A8;
    qword_8CC4C8 = 0;
  }
  v11 = v30;
  v12 = v31;
  v13 = v30;
  if ( !(_QWORD)v31 )
  {
    if ( !v30 )
      return v33 - __readfsqword(0x28u);
    v17 = v30;
    goto LABEL_25;
  }
  if ( !(32LL * (_QWORD)v31) )
  {
    v17 = v30;
    if ( !v30 )
      return v33 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  do
  {
    if ( *(_DWORD *)v13 )
    {
      v14 = qword_8CC430;
      v15 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
      if ( qword_8CC430 != v15 )
      {
        while ( *(_DWORD *)v13 != *(_DWORD *)v14 )
        {
          v14 += 256;
          if ( v15 == v14 )
            goto LABEL_18;
        }
        if ( v14 && v14 + 8 != v13 + 8 )
        {
          v16 = *(_QWORD *)(v13 + 16);
          if ( v16 > 1 )
          {
            v28 = *(char **)(v13 + 8);
            v29 = *(void **)(v14 + 8);
            if ( *(_QWORD *)(v14 + 24) < v16 )
            {
              v29 = (void *)qvector_reserve(v14 + 8, *(_QWORD *)(v14 + 8), *(_QWORD *)(v13 + 16), 1);
              *(_QWORD *)(v14 + 8) = v29;
            }
            *(_QWORD *)(v14 + 16) = v16;
            v9 = v28;
            memmove(v29, v28, v16 - 1);
            *(_BYTE *)(*(_QWORD *)(v14 + 8) + v16 - 1) = 0;
            v12 = v31;
            v11 = v30;
          }
          else
          {
            *(_QWORD *)(v14 + 16) = 0;
          }
        }
      }
    }
LABEL_18:
    v13 += 32;
    v17 = v11;
  }
  while ( v13 != v11 + 32 * v12 );
  if ( v11 )
  {
    if ( !v12 )
    {
LABEL_25:
      *(_QWORD *)&v31 = 0;
      qfree(v17, v9);
      return v33 - __readfsqword(0x28u);
    }
LABEL_21:
    v18 = 0;
    do
    {
      v19 = v17 + 32 * v18;
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        *(_QWORD *)(v19 + 16) = 0;
        qfree(v20, v9);
        v17 = v30;
      }
      ++v18;
    }
    while ( v18 != v12 );
    goto LABEL_25;
  }
  return v33 - __readfsqword(0x28u);
}
