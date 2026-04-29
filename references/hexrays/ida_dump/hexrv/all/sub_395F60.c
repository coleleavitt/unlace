__int64 __fastcall sub_395F60(__int64 a1, __int32 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r12
  unsigned int v7; // ebp
  char *v8; // r14
  void *v9; // rax
  __int64 v10; // rax
  const void *v12; // r15
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // rbp
  size_t v16; // r15
  __int64 v17; // rdx
  unsigned __int64 *v18; // rbp
  const char *v19; // rdi
  unsigned __int64 *v20; // rsi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  void *v24; // rax
  char *s2; // [rsp+10h] [rbp-A0h]
  size_t v27; // [rsp+18h] [rbp-98h]
  unsigned __int64 *v28; // [rsp+20h] [rbp-90h]
  char *s1; // [rsp+28h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-80h]
  __m128i v31; // [rsp+48h] [rbp-68h] BYREF
  __m128i v32; // [rsp+58h] [rbp-58h]
  unsigned __int64 v33; // [rsp+70h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)n = 0;
  s1 = nullptr;
  v4 = *(_QWORD *)(v3 + 64);
  v5 = *(unsigned __int64 **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_4;
  v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v6 )
  {
    v10 = 24;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_4;
  while ( 1 )
  {
    v10 = v6 + 24;
    if ( *(_DWORD *)(v6 + 24) > a2 )
    {
      v6 = *(_QWORD *)(v6 + 8);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v6 + 24) >= a2 )
      break;
    v6 = *(_QWORD *)(v6 + 16);
LABEL_18:
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_4;
  }
  if ( v5 != (unsigned __int64 *)v6 )
  {
LABEL_27:
    v12 = *(const void **)(v10 + 8);
    if ( v12 )
    {
      v13 = strlen(*(const char **)(v10 + 8));
      v14 = v13;
      if ( v13 )
      {
        v15 = v13 + 1;
        s1 = (char *)qvector_reserve(&s1, 0, v13 + 1, 1);
        n[0] = v15;
        memmove(s1, v12, v14);
        s1[v14] = 0;
        v16 = n[0];
        if ( n[0] )
        {
          s2 = (char *)qalloc_or_throw(n[0]);
          memcpy(s2, s1, v16);
          v7 = sub_382D10((__int64)&s1, (__int64)"Please enter new label");
          if ( !(_BYTE)v7 )
            goto LABEL_37;
          v27 = n[0];
          if ( !n[0] )
          {
            if ( *s2 )
              goto LABEL_34;
LABEL_38:
            if ( s2 )
            {
              qfree(s2);
              v8 = s1;
              goto LABEL_23;
            }
LABEL_22:
            v8 = s1;
            goto LABEL_23;
          }
          v8 = s1;
          if ( !strcmp(s1, s2) )
            goto LABEL_38;
          v5 = (unsigned __int64 *)v6;
          if ( v27 == 1 )
          {
LABEL_34:
            if ( *(_QWORD *)v4 == v6 )
              goto LABEL_38;
LABEL_35:
            sub_3431B0((unsigned __int64 **)v4, (__int64 *)v6);
LABEL_36:
            sub_2B1970(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
              **(_QWORD **)(a1 + 32),
              *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL),
              *(_QWORD **)(a1 + 32));
            sub_38A3A0(a1, 1u, v17);
LABEL_37:
            v7 = 1;
            goto LABEL_38;
          }
LABEL_8:
          if ( !strncmp(v8, "LABEL_", 6u) )
          {
            sub_2B0270((__int64)"AUTOHIDE NONE\nSorry, cannot use LABEL_ prefix for user-defined labels");
            v7 = 0;
            goto LABEL_38;
          }
          v28 = *(unsigned __int64 **)v4;
          if ( *(_QWORD *)v4 && *(_QWORD *)(v4 + 8) )
          {
            v18 = *(unsigned __int64 **)(*(_QWORD *)v4 + 8LL);
LABEL_42:
            while ( v28 != v18 )
            {
              do
              {
                v19 = ::s1;
                if ( v18[5] )
                  v19 = (const char *)v18[4];
                if ( !strcmp(v19, v8) )
                {
                  sub_2B0270((__int64)"AUTOHIDE NONE\nSorry, label '%s' is already in use", v8);
                  v7 = 0;
                  goto LABEL_38;
                }
              }
              while ( (*v18 & 2) != 0 );
              v20 = (unsigned __int64 *)v18[2];
              if ( (*(_BYTE *)v20 & 2) != 0 )
              {
                v21 = (unsigned __int64 *)(*v18 & 0xFFFFFFFFFFFFFFFCLL);
                v22 = *v21;
                if ( (*v21 & 2) == 0 )
                {
                  while ( v18 == (unsigned __int64 *)v21[2] )
                  {
                    v18 = v21;
                    v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
                    v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v22 & 2) != 0 )
                    {
                      v18 = (unsigned __int64 *)v23;
                      goto LABEL_42;
                    }
                    v21 = (unsigned __int64 *)v23;
                  }
                }
                v18 = v21;
              }
              else
              {
                do
                {
                  v18 = v20;
                  v20 = (unsigned __int64 *)v20[1];
                }
                while ( (*(_BYTE *)v20 & 2) == 0 );
              }
            }
          }
          if ( v5 == v28 )
          {
            v24 = (void *)qalloc_or_throw(v27);
            v31.m128i_i64[1] = (__int64)memcpy(v24, s1, v27);
            v31.m128i_i32[0] = a2;
            v32 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
            sub_342A20((__m128i *)v4, &v31);
            if ( v31.m128i_i64[1] )
            {
              v32.m128i_i64[0] = 0;
              qfree(v31.m128i_i64[1]);
            }
          }
          else if ( v5 + 4 != (unsigned __int64 *)&s1 )
          {
            v9 = (void *)v5[4];
            if ( v5[6] < v27 )
            {
              v9 = (void *)qvector_reserve(v5 + 4, v9, v27, 1);
              v5[4] = (unsigned __int64)v9;
            }
            v5[5] = v27;
            memmove(v9, v8, v27 - 1);
            *(_BYTE *)(v5[4] + v27 - 1) = 0;
          }
          goto LABEL_36;
        }
      }
    }
    v5 = (unsigned __int64 *)v6;
  }
LABEL_4:
  v7 = sub_382D10((__int64)&s1, (__int64)"Please enter new label");
  if ( !(_BYTE)v7 )
  {
    v7 = 1;
    goto LABEL_22;
  }
  v8 = s1;
  v27 = n[0];
  if ( n[0] && *s1 )
  {
    s2 = nullptr;
    if ( n[0] != 1 )
      goto LABEL_8;
    v6 = (unsigned __int64)v5;
    if ( v5 != *(unsigned __int64 **)v4 )
      goto LABEL_35;
  }
LABEL_23:
  if ( v8 )
  {
    n[0] = 0;
    qfree(v8);
  }
  return v7;
}
