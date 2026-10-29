__int64 __fastcall sub_6D77F0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbx
  void *v8; // rax
  char **v9; // r15
  const char *v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  const char *v13; // r14
  char *v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  size_t v21; // r13
  __m128 v22; // xmm0
  size_t v24; // rax
  size_t v25; // r12
  size_t v26; // rbx
  void *v27; // rax
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = (__int64)a3;
  if ( !strchr(a3, 32) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( v3 )
    {
      v24 = strlen((const char *)v3);
      v25 = v24 + 1;
      v26 = v24;
      v27 = (void *)qvector_reserve(a1, 0, v24 + 1, 1);
      *(_QWORD *)(a1 + 8) = v25;
      *(_QWORD *)a1 = v27;
      memmove(v27, (const void *)v3, v26);
      *(_BYTE *)(*(_QWORD *)a1 + v26) = 0;
    }
    return a1;
  }
  v28 = 0;
  v4 = 0;
  v29 = 0;
  if ( v3 )
  {
    v5 = strlen((const char *)v3);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(&v28, 0, v5 + 1, 1);
    *(_QWORD *)&v29 = v6;
    v28 = (__int64)v8;
    memmove(v8, (const void *)v3, v7);
    *(_BYTE *)(v28 + v7) = 0;
    v4 = v29;
    v3 = v28;
  }
  v9 = &off_2B37C80;
  v10 = "(anonymous struct)::";
  while ( 2 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v4 )
      {
        v12 = v4 - 1;
        if ( v4 - 1 < v11 )
          break;
        v13 = (const char *)v3;
      }
      else
      {
        if ( v11 )
          break;
        v12 = 0;
        v13 = haystack;
      }
      v14 = strstr(&v13[v11], v10);
      if ( !v14 )
        break;
      v11 = v14 - v13;
      if ( v14 - v13 == -1 )
        break;
      v15 = v9[1];
      if ( v11 < v12 && v15 != (_BYTE *)&dword_0 + 2 )
      {
        v16 = (unsigned __int64)&v15[v11 - 2];
        v17 = v11;
        if ( v16 < v12 )
        {
          v21 = v12 - v16;
          memmove((void *)(v3 + v11), (const void *)(v3 + v16), v21);
          v17 = v11 + v21;
          v3 = v28;
        }
        if ( *((_QWORD *)&v29 + 1) < v17 + 1 )
        {
          v28 = qvector_reserve(&v28, v3, v17 + 1, 1);
          v3 = v28;
        }
        *(_QWORD *)&v29 = v17 + 1;
        *(_BYTE *)(v3 + v17) = 0;
        v4 = v29;
        v3 = v28;
      }
      if ( v4 )
      {
        v18 = v4 + 1;
        v19 = v4 - 1;
        if ( *((_QWORD *)&v29 + 1) >= (unsigned __int64)(v4 + 1) )
          goto LABEL_19;
      }
      else
      {
        if ( *((_QWORD *)&v29 + 1) > 1u )
        {
          *(_QWORD *)&v29 = 2;
          v19 = 0;
          *(_BYTE *)(v3 + 1) = 0;
          goto LABEL_21;
        }
        v19 = 0;
        v4 = 1;
        v18 = 2;
      }
      v28 = qvector_reserve(&v28, v3, v18, 1);
      v3 = v28;
LABEL_19:
      *(_QWORD *)&v29 = v18;
      *(_BYTE *)(v3 + v4) = 0;
      if ( v11 < v19 )
      {
        v20 = v19;
        v19 = v11;
        memmove((void *)(v11 + v28 + 1), (const void *)(v11 + v28), v20 - v11);
      }
LABEL_21:
      *(_BYTE *)(v28 + v19) = 36;
      v10 = *v9;
      v4 = v29;
      v3 = v28;
    }
    v9 += 2;
    if ( v9 != (char **)&unk_2B37CD0 )
    {
      v10 = *v9;
      continue;
    }
    break;
  }
  v22 = _mm_loadh_ps((const double *)&v29 + 1);
  *(_QWORD *)a1 = v3;
  *(__m128 *)(a1 + 8) = v22;
  return a1;
}
