unsigned __int64 __fastcall sub_790380(_QWORD *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v9; // eax
  _BYTE *v10; // r15
  unsigned int v11; // r14d
  char *v12; // rax
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rbx
  size_t v17; // r8
  char *v18; // rax
  unsigned __int64 v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rsi
  const char *v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rdi
  char *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  void *v40; // rdi
  size_t v41; // [rsp+8h] [rbp-90h]
  void *src[2]; // [rsp+10h] [rbp-88h] BYREF
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  __int128 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 4);
  v47 = __readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v7));
  v9 = unpack_dd(src);
  v10 = src[0];
  dest = nullptr;
  v11 = v9;
  v44 = 0;
  v12 = (char *)src[0];
  do
  {
    if ( v12 >= src[1] )
      return v47 - __readfsqword(0x28u);
    ++v12;
  }
  while ( *(v12 - 1) );
  src[0] = v12;
  if ( v10 )
  {
    v15 = v12 - v10;
    v14 = v15 == 0;
    v16 = v15;
    v17 = v15 - 1;
    v18 = nullptr;
    if ( !v14 )
    {
      v41 = v17;
      v18 = (char *)qvector_reserve(&dest, 0, v16, 1);
      dest = v18;
      v17 = v41;
    }
    *(_QWORD *)&v44 = v16;
    v18[v16 - 1] = 0;
    memmove(dest, v10, v17);
    if ( a3 != (a4 ^ 1) )
    {
      if ( a1 + 740 == (_QWORD *)sub_78DD30((__int64)(a1 + 739), (const char *)dest) )
      {
        v19 = a1[737];
        if ( v11 >= v19 )
        {
          v20 = a1[737];
          if ( (unsigned int)v19 < v11 )
          {
            v21 = a1[746];
            do
            {
              v22 = a1[745];
              if ( a1[747] < (unsigned __int64)(v21 + 1) )
              {
                v23 = qvector_reserve(a1 + 745, v22, v21 + 1, 4);
                a1[745] = v23;
                v21 = a1[746];
                v22 = v23;
              }
              *(_DWORD *)(v22 + 4 * v21) = v20++;
              v21 = a1[746] + 1LL;
              a1[746] = v21;
            }
            while ( v20 < v11 );
            v19 = a1[737];
          }
          v28 = v11 + 1;
          if ( v28 != v19 )
          {
            v45 = 0;
            v46 = 0;
            if ( v28 < v19 )
            {
              v38 = v11 + 1;
              do
              {
                v39 = a1[736] + 24 * v38;
                v40 = *(void **)v39;
                if ( *(_QWORD *)v39 )
                {
                  *(_QWORD *)(v39 + 8) = 0;
                  qfree(v40);
                }
                ++v38;
              }
              while ( v38 < v19 );
            }
            else
            {
              v29 = a1[736];
              v30 = a1[738];
              v31 = a1 + 736;
              if ( (unsigned __int64)&v45 < v29 || (unsigned __int64)&v45 >= v29 + 24 * v30 )
              {
                if ( v30 < v28 )
                {
                  a1[736] = qvector_reserve(v31, v29, v11 + 1, 24);
                  v19 = a1[737];
                }
                if ( v19 < v28 )
                {
                  v36 = 24 * v19;
                  do
                  {
                    ++v19;
                    v37 = v36 + a1[736];
                    v36 += 24;
                    *(_QWORD *)v37 = 0;
                    *(_OWORD *)(v37 + 8) = 0;
                  }
                  while ( v28 != v19 );
                }
              }
              else
              {
                if ( v30 < v28 )
                {
                  a1[736] = qvector_reserve(v31, v29, v11 + 1, 24);
                  v19 = a1[737];
                }
                if ( v19 < v28 )
                {
                  v32 = 24 * v19;
                  do
                  {
                    ++v19;
                    v33 = v32 + a1[736];
                    v32 += 24;
                    *(_QWORD *)v33 = 0;
                    *(_OWORD *)(v33 + 8) = 0;
                  }
                  while ( v28 != v19 );
                }
              }
            }
            a1[737] = v28;
          }
          goto LABEL_33;
        }
        v34 = (char *)a1[745];
        v35 = &v34[4 * a1[746]];
        if ( v34 != v35 )
        {
          while ( v11 != *(_DWORD *)v34 )
          {
            v34 += 4;
            if ( v35 == v34 )
              goto LABEL_59;
          }
          if ( v35 != v34 )
          {
            memmove(v34, v34 + 4, v35 - v34 - 4);
            --a1[746];
LABEL_33:
            sub_78F560((__int64)a1, v11, (__int64)&dest);
LABEL_34:
            if ( dest )
            {
              *(_QWORD *)&v44 = 0;
              qfree(dest);
            }
            return v47 - __readfsqword(0x28u);
          }
        }
LABEL_59:
        if ( !under_debugger )
          interr(1723);
      }
      else if ( !under_debugger )
      {
        interr(1722);
      }
LABEL_63:
      BUG();
    }
    if ( (unsigned __int64)v11 >= a1[737] )
    {
      if ( !under_debugger )
        interr(1720);
      goto LABEL_63;
    }
    v24 = a1[736] + 24LL * v11;
    v25 = *(_QWORD *)(v24 + 8);
    if ( (_QWORD)v44 )
    {
      v26 = (const char *)dest;
      v27 = haystack;
      if ( !v25 )
        goto LABEL_20;
    }
    else
    {
      v26 = haystack;
      if ( !v25 )
        goto LABEL_21;
    }
    v27 = *(const char **)v24;
LABEL_20:
    if ( strcmp(v27, v26) )
    {
      if ( !under_debugger )
        interr(1721);
      goto LABEL_63;
    }
LABEL_21:
    sub_790080((__int64)a1, v11);
    goto LABEL_34;
  }
  return v47 - __readfsqword(0x28u);
}

