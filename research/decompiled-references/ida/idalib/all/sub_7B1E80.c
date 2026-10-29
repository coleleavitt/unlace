unsigned __int64 __fastcall sub_7B1E80(_QWORD *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rax
  _BYTE *v10; // r15
  unsigned __int64 v11; // r14
  char *v12; // rax
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rbx
  size_t v17; // r8
  char *v18; // rax
  unsigned __int64 v19; // r12
  int v20; // ebx
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
  unsigned __int64 v34; // rdx
  char *v35; // rdi
  char *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  void *v42; // rdi
  size_t v43; // [rsp+8h] [rbp-90h]
  void *src[2]; // [rsp+10h] [rbp-88h] BYREF
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  __int128 v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+40h] [rbp-58h] BYREF
  __int128 v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 4);
  v49 = __readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v7));
  v9 = unpack_dq(src);
  v10 = src[0];
  dest = nullptr;
  v11 = v9;
  v46 = 0;
  v12 = (char *)src[0];
  do
  {
    if ( v12 >= src[1] )
      return v49 - __readfsqword(0x28u);
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
      v43 = v17;
      v18 = (char *)qvector_reserve(&dest, 0, v16, 1);
      dest = v18;
      v17 = v43;
    }
    *(_QWORD *)&v46 = v16;
    v18[v16 - 1] = 0;
    memmove(dest, v10, v17);
    if ( a3 != (a4 ^ 1) )
    {
      if ( a1 + 744 == (_QWORD *)sub_7AE3D0((__int64)(a1 + 743), (const char *)dest) )
      {
        v19 = a1[741];
        if ( v11 >= v19 )
        {
          v20 = a1[741];
          if ( (int)v19 < v11 )
          {
            v21 = a1[750];
            do
            {
              v22 = a1[749];
              if ( a1[751] < (unsigned __int64)(v21 + 1) )
              {
                v23 = qvector_reserve(a1 + 749, v22, v21 + 1, 4);
                a1[749] = v23;
                v21 = a1[750];
                v22 = v23;
              }
              *(_DWORD *)(v22 + 4 * v21) = v20++;
              v21 = a1[750] + 1LL;
              a1[750] = v21;
            }
            while ( v20 < v11 );
            v19 = a1[741];
          }
          v28 = v11 + 1;
          if ( v11 + 1 != v19 )
          {
            v47 = 0;
            v48 = 0;
            if ( v11 + 1 < v19 )
            {
              v40 = v11 + 1;
              do
              {
                v41 = a1[740] + 24 * v40;
                v42 = *(void **)v41;
                if ( *(_QWORD *)v41 )
                {
                  *(_QWORD *)(v41 + 8) = 0;
                  qfree(v42);
                }
                ++v40;
              }
              while ( v40 < v19 );
            }
            else
            {
              v29 = a1[740];
              v30 = a1[742];
              v31 = a1 + 740;
              if ( (unsigned __int64)&v47 < v29 || (unsigned __int64)&v47 >= v29 + 24 * v30 )
              {
                if ( v30 < v28 )
                {
                  a1[740] = qvector_reserve(v31, v29, v11 + 1, 24);
                  v19 = a1[741];
                }
                if ( v19 < v28 )
                {
                  v37 = 24 * v19;
                  do
                  {
                    v38 = v37 + a1[740];
                    v37 += 24;
                    *(_QWORD *)v38 = 0;
                    *(_OWORD *)(v38 + 8) = 0;
                    v39 = v19++;
                  }
                  while ( v11 != v39 );
                }
              }
              else
              {
                if ( v30 < v28 )
                {
                  a1[740] = qvector_reserve(v31, v29, v11 + 1, 24);
                  v19 = a1[741];
                }
                if ( v19 < v28 )
                {
                  v32 = 24 * v19;
                  do
                  {
                    v33 = v32 + a1[740];
                    v32 += 24;
                    *(_QWORD *)v33 = 0;
                    *(_OWORD *)(v33 + 8) = 0;
                    v34 = v19++;
                  }
                  while ( v11 != v34 );
                }
              }
            }
            a1[741] = v28;
          }
          goto LABEL_33;
        }
        v35 = (char *)a1[749];
        v36 = &v35[4 * a1[750]];
        if ( v35 != v36 )
        {
          while ( (_DWORD)v11 != *(_DWORD *)v35 )
          {
            v35 += 4;
            if ( v36 == v35 )
              goto LABEL_59;
          }
          if ( v36 != v35 )
          {
            memmove(v35, v35 + 4, v36 - v35 - 4);
            --a1[750];
LABEL_33:
            sub_7B02D0(a1, v11, (__int64)&dest);
LABEL_34:
            if ( dest )
            {
              *(_QWORD *)&v46 = 0;
              qfree(dest);
            }
            return v49 - __readfsqword(0x28u);
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
    if ( v11 >= a1[741] )
    {
      if ( !under_debugger )
        interr(1720);
      goto LABEL_63;
    }
    v24 = a1[740] + 24 * v11;
    v25 = *(_QWORD *)(v24 + 8);
    if ( (_QWORD)v46 )
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
    sub_7B1B60((__int64)a1, v11);
    goto LABEL_34;
  }
  return v49 - __readfsqword(0x28u);
}
