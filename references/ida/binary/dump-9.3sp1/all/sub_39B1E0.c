__int64 __fastcall sub_39B1E0(__int64 a1, __int32 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r12
  unsigned int v7; // ebp
  char *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rax
  const void *v15; // r15
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  size_t v22; // r15
  __int64 v23; // rdx
  unsigned __int64 *v24; // rbp
  const char *v25; // rdi
  __int64 *v26; // rax
  unsigned __int64 v27; // rdi
  void *v28; // rax
  char *s2; // [rsp+10h] [rbp-A0h]
  size_t v31; // [rsp+18h] [rbp-98h]
  unsigned __int64 *v32; // [rsp+20h] [rbp-90h]
  char *s1; // [rsp+28h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-80h]
  __m128i v35; // [rsp+48h] [rbp-68h] BYREF
  __m128i v36; // [rsp+58h] [rbp-58h]
  unsigned __int64 v37; // [rsp+70h] [rbp-40h]

  v37 = __readfsqword(0x28u);
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
    v13 = 24;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_4;
  while ( 1 )
  {
    v13 = v6 + 24;
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
    v15 = *(const void **)(v13 + 8);
    if ( v15 )
    {
      v16 = strlen(*(const char **)(v13 + 8));
      v17 = v16;
      if ( v16 )
      {
        v18 = v16 + 1;
        v19 = (__int64)v15;
        s1 = (char *)qvector_reserve((__int64)&s1, 0, v16 + 1, 1);
        n[0] = v18;
        memmove(s1, v15, v17);
        s1[v17] = 0;
        v22 = n[0];
        if ( n[0] )
        {
          s2 = (char *)qalloc_or_throw(n[0], v19, v20, v21);
          memcpy(s2, s1, v22);
          v7 = sub_387F90((__int64)&s1, (__int64)"Please enter new label");
          if ( !(_BYTE)v7 )
            goto LABEL_37;
          v31 = n[0];
          if ( !n[0] )
          {
            if ( *s2 )
              goto LABEL_34;
LABEL_38:
            if ( s2 )
            {
              qfree((__int64)s2);
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
          if ( v31 == 1 )
          {
LABEL_34:
            if ( *(_QWORD *)v4 == v6 )
              goto LABEL_38;
LABEL_35:
            sub_348430((unsigned __int64 **)v4, (__int64 *)v6);
LABEL_36:
            sub_2B6570(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
              **(_QWORD **)(a1 + 32),
              *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL),
              *(_QWORD **)(a1 + 32));
            sub_38F620(a1, 1u, v23);
LABEL_37:
            v7 = 1;
            goto LABEL_38;
          }
LABEL_8:
          v9 = (__int64)"LABEL_";
          if ( !strncmp(v8, "LABEL_", 6u) )
          {
            sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot use LABEL_ prefix for user-defined labels");
            v7 = 0;
            goto LABEL_38;
          }
          v32 = *(unsigned __int64 **)v4;
          if ( *(_QWORD *)v4 && *(_QWORD *)(v4 + 8) )
          {
            v24 = *(unsigned __int64 **)(*(_QWORD *)v4 + 8LL);
LABEL_42:
            while ( v32 != v24 )
            {
              do
              {
                v25 = ::s1;
                if ( v24[5] )
                  v25 = (const char *)v24[4];
                if ( !strcmp(v25, v8) )
                {
                  sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, label '%s' is already in use", v8);
                  v7 = 0;
                  goto LABEL_38;
                }
              }
              while ( (*v24 & 2) != 0 );
              v9 = v24[2];
              if ( (*(_BYTE *)v9 & 2) != 0 )
              {
                v26 = (__int64 *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                v9 = *v26;
                if ( (*v26 & 2) == 0 )
                {
                  while ( v24 == (unsigned __int64 *)v26[2] )
                  {
                    v24 = (unsigned __int64 *)v26;
                    v27 = v9 & 0xFFFFFFFFFFFFFFFCLL;
                    v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v9 & 2) != 0 )
                    {
                      v24 = (unsigned __int64 *)v27;
                      goto LABEL_42;
                    }
                    v26 = (__int64 *)v27;
                  }
                }
                v24 = (unsigned __int64 *)v26;
              }
              else
              {
                do
                {
                  v24 = (unsigned __int64 *)v9;
                  v9 = *(_QWORD *)(v9 + 8);
                }
                while ( (*(_BYTE *)v9 & 2) == 0 );
              }
            }
          }
          if ( v5 == v32 )
          {
            v28 = (void *)qalloc_or_throw(v31, v9, v10, v11);
            v35.m128i_i64[1] = (__int64)memcpy(v28, s1, v31);
            v35.m128i_i32[0] = a2;
            v36 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
            sub_347CA0((__m128i *)v4, &v35);
            if ( v35.m128i_i64[1] )
            {
              v36.m128i_i64[0] = 0;
              qfree(v35.m128i_i64[1]);
            }
          }
          else if ( v5 + 4 != (unsigned __int64 *)&s1 )
          {
            v12 = (void *)v5[4];
            if ( v5[6] < v31 )
            {
              v12 = (void *)qvector_reserve((__int64)(v5 + 4), (__int64)v12, v31, 1);
              v5[4] = (unsigned __int64)v12;
            }
            v5[5] = v31;
            memmove(v12, v8, v31 - 1);
            *(_BYTE *)(v5[4] + v31 - 1) = 0;
          }
          goto LABEL_36;
        }
      }
    }
    v5 = (unsigned __int64 *)v6;
  }
LABEL_4:
  v7 = sub_387F90((__int64)&s1, (__int64)"Please enter new label");
  if ( !(_BYTE)v7 )
  {
    v7 = 1;
    goto LABEL_22;
  }
  v8 = s1;
  v31 = n[0];
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
    qfree((__int64)v8);
  }
  return v7;
}
