__int64 __fastcall sub_3D1F00(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  const char *v8; // r15
  unsigned int v9; // eax
  const char *v10; // rcx
  __int64 v11; // r8
  void *v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  __m128i *v15; // rbx
  __int64 v16; // rax
  size_t v18; // rax
  __int64 v19; // r8
  size_t v20; // r10
  __int64 v21; // r11
  size_t v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // [rsp+7h] [rbp-71h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  const char *v28; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+10h] [rbp-68h]
  size_t na; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  void *v32; // [rsp+20h] [rbp-58h] BYREF
  __m128i v33; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v3 = a2[1];
  v4 = a1[1];
  v34 = __readfsqword(0x28u);
  v5 = a2;
  LODWORD(v32) = -1;
  if ( v3 >= v4 )
  {
    if ( v4 < v3 )
    {
      a2 = (_QWORD *)*a1;
      v23 = a1[2];
      if ( (unsigned __int64)&v32 < *a1 || &v32 >= (_QWORD *)((char *)a2 + 4 * v23) )
      {
        if ( v23 >= v3 || (v25 = qvector_reserve(a1, a2, v3, 4), v4 = a1[1], *a1 = v25, a2 = (_QWORD *)v25, v4 < v3) )
        {
          while ( 1 )
          {
            *((_DWORD *)a2 + v4++) = -1;
            if ( v3 == v4 )
              break;
            a2 = (_QWORD *)*a1;
          }
        }
      }
      else if ( v23 >= v3 || (v24 = qvector_reserve(a1, a2, v3, 4), v4 = a1[1], *a1 = v24, a2 = (_QWORD *)v24, v4 < v3) )
      {
        while ( 1 )
        {
          *((_DWORD *)a2 + v4++) = -1;
          if ( v3 == v4 )
            break;
          a2 = (_QWORD *)*a1;
        }
      }
      a1[1] = v3;
      goto LABEL_4;
    }
  }
  else
  {
    a1[1] = v3;
  }
  if ( v3 )
  {
LABEL_4:
    v26 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = 144 * v6 + *v5;
      if ( *(_QWORD *)(v7 + 48) )
      {
        v8 = *(const char **)(v7 + 40);
        if ( v8 )
        {
          if ( *v8 == 5 )
          {
            v9 = v8[1];
            v10 = v8 + 1;
            v11 = -1;
            v12 = (void *)v9;
            if ( v9 <= 0x7F )
            {
              while ( v9 - 48 <= 9 )
              {
                v13 = 0;
                if ( v11 >= 0 )
                  v13 = 10 * v11;
                ++v10;
                v11 = (char)((_BYTE)v12 - 48) + v13;
                v9 = *v10;
                v12 = (void *)v9;
                if ( v9 > 0x7F )
                  goto LABEL_13;
              }
              if ( (_BYTE)v12 == 46 )
                ++v10;
LABEL_13:
              if ( !*v10 )
              {
                v32 = nullptr;
                v33 = 0;
LABEL_15:
                v14 = v32;
                if ( v11 >= 0 )
                {
                  v26 = 1;
                  *(_DWORD *)(*a1 + 4 * v6) = v11 - 1;
                  v12 = v32;
                  v15 = (__m128i *)(*v5 + 144 * v6);
                  v14 = (void *)v15[2].m128i_i64[1];
                  v16 = v15[3].m128i_i64[1];
                  v15[2].m128i_i64[1] = (__int64)v32;
                  v15[3] = _mm_loadu_si128(&v33);
                  v32 = v14;
                  v33.m128i_i64[1] = v16;
                }
                if ( v14 )
                {
                  v33.m128i_i64[0] = 0;
                  qfree(v14, (const char *)a2, v12);
                }
                goto LABEL_19;
              }
            }
            na = v11;
            v32 = nullptr;
            v28 = v10;
            v33 = 0;
            v22 = strlen(v10);
            v8 = v28;
            v19 = na;
            v20 = v22;
            v21 = v22 + 1;
          }
          else
          {
LABEL_22:
            v32 = nullptr;
            v33 = 0;
            v18 = strlen(v8);
            v19 = -1;
            v20 = v18;
            v21 = v18 + 1;
          }
          v31 = v19;
          n = v20;
          v27 = v21;
          a2 = v8;
          v32 = (void *)qvector_reserve(&v32, 0, v21, 1);
          v33.m128i_i64[0] = v27;
          memmove(v32, v8, n);
          v11 = v31;
          *((_BYTE *)v32 + n) = 0;
          goto LABEL_15;
        }
      }
      else
      {
        v8 = &s1;
        if ( &s1 )
          goto LABEL_22;
      }
LABEL_19:
      if ( v3 == ++v6 )
        return v26;
    }
  }
  return 0;
}
