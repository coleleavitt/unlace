__int64 __fastcall sub_95C10(__int64 a1)
{
  __m128i *v1; // rbp
  const char *v3; // rax
  const char *v4; // r12
  size_t v5; // rax
  size_t v6; // r13
  _DWORD *v7; // r12
  const char *v8; // r14
  void (__fastcall *v9)(_QWORD *); // rdx
  void (__fastcall *v10)(_QWORD *); // rax
  _QWORD *v11; // r15
  __int64 v12; // r13
  void *v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi
  char *v18; // rax
  const char *v19; // r12
  char *v20; // rax
  size_t v21; // rax
  size_t v22; // r13
  char *v24; // rdi
  size_t v25; // r14
  char *v26; // r14
  char *v27; // rax
  char *v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  const char *v31; // rsi
  unsigned __int64 v32; // r13
  char *v33; // r15
  void *v34; // rdi
  size_t v35; // r14
  size_t v36; // r12
  size_t v37; // r15
  char *v38; // r8
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  char *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  char *s2a; // [rsp+0h] [rbp-98h]
  char *s2; // [rsp+0h] [rbp-98h]
  char *s2d; // [rsp+0h] [rbp-98h]
  char *s2c; // [rsp+0h] [rbp-98h]
  char *s2b; // [rsp+0h] [rbp-98h]
  char *v52; // [rsp+8h] [rbp-90h]
  __m128i v53; // [rsp+10h] [rbp-88h] BYREF
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __int128 v55; // [rsp+28h] [rbp-70h]
  char needle[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v57; // [rsp+50h] [rbp-48h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( *(char *)(a1 + 213) >= 0 )
  {
    if ( *(_QWORD *)(a1 + 216) )
    {
      v1 = &v53;
      v53 = 0;
      if ( !sub_945B0((__int64 *)a1, &v53, 27)
        || (v3 = (const char *)sub_95B40((__int64 *)a1, v53.m128i_i64), (v4 = v3) == nullptr) )
      {
LABEL_28:
        *(_DWORD *)(a1 + 212) |= 0x8000u;
        sub_84A10(v1);
        return *(_QWORD *)(a1 + 176);
      }
      v5 = strlen(v3);
      v6 = v5;
      if ( v5 )
      {
        v34 = *(void **)(a1 + 176);
        v35 = v5 + 1;
        if ( *(_QWORD *)(a1 + 192) < v5 + 1 )
        {
          v44 = qvector_reserve(a1 + 176, *(_QWORD *)(a1 + 176), v35, 1);
          *(_QWORD *)(a1 + 176) = v44;
          v34 = (void *)v44;
        }
        *(_QWORD *)(a1 + 184) = v35;
        memmove(v34, v4, v6);
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + v6) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 184) = 0;
      }
      v7 = *(_DWORD **)(a1 + 216);
      v57 = 61;
      *(__m128i *)needle = _mm_load_si128((const __m128i *)&xmmword_AB200);
      if ( v7 )
      {
        v8 = src;
        if ( *((_QWORD *)v7 + 13) )
          v8 = *((const char **)v7 + 12);
        if ( !v7[2] )
        {
          v9 = **(void (__fastcall ***)(_QWORD *))v7;
          if ( v9 == sub_15E30 )
          {
            v10 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v7 + 16LL);
            if ( v10 == sub_15D70 )
            {
              v11 = *((_QWORD **)v7 + 16);
              *(_QWORD *)v7 = &off_C71D8;
              if ( v11 )
              {
                v12 = v11[2];
                while ( v12 )
                {
                  sub_80300(*(_QWORD **)(v12 + 24));
                  v13 = (void *)v12;
                  v12 = *(_QWORD *)(v12 + 16);
                  operator delete(v13, 0x30u);
                }
                operator delete(v11, 0x30u);
              }
              v14 = *((_QWORD *)v7 + 19);
              while ( v14 )
              {
                v15 = (_QWORD *)v14;
                sub_80A30(*(_QWORD **)(v14 + 24));
                v16 = *(_QWORD *)(v14 + 32);
                v14 = *(_QWORD *)(v14 + 16);
                if ( v16 )
                {
                  v15[5] = 0;
                  qfree(v16);
                }
                operator delete(v15, 0x48u);
              }
              v17 = *((_QWORD *)v7 + 12);
              if ( v17 )
              {
                *((_QWORD *)v7 + 13) = 0;
                qfree(v17);
              }
              operator delete(v7, 0xC0u);
            }
            else
            {
              v10(v7);
            }
          }
          else
          {
            v9(v7);
          }
        }
LABEL_24:
        v18 = strstr(v8, needle);
        if ( !v18 )
          goto LABEL_28;
        v19 = v18 + 17;
        v20 = strchr(v18 + 17, 32);
        if ( !v20 )
          v20 = (char *)&v19[strlen(v19)];
        s = nullptr;
        v21 = v20 - v19;
        v55 = 0;
        v22 = v21;
        if ( !v21 )
          goto LABEL_28;
        v24 = nullptr;
        v25 = v21 + 1;
        if ( v21 != -1 )
        {
          s = (char *)qvector_reserve(&s, 0, v21 + 1, 1);
          v24 = s;
        }
        *(_QWORD *)&v55 = v25;
        memmove(v24, v19, v22);
        s[v22] = 0;
        v26 = s;
        if ( !(_QWORD)v55 )
          goto LABEL_38;
        v27 = strchr(s, 61);
        v28 = v27;
        if ( !v27 )
          goto LABEL_38;
        s2a = v27 + 1;
        v29 = strlen(v27 + 1);
        v30 = *(_QWORD *)(a1 + 184);
        v31 = s2a;
        v32 = v29;
        if ( v29 )
        {
          if ( !v30 || (s2 = (char *)(v30 - 1), v30 - 1 < v29) || (v33 = *(char **)(a1 + 176), strncmp(v33, v31, v29)) )
          {
LABEL_38:
            if ( v26 )
            {
              *(_QWORD *)&v55 = 0;
              qfree(v26);
            }
            goto LABEL_28;
          }
          v41 = 1;
          v42 = nullptr;
          if ( v32 < (unsigned __int64)s2 )
          {
            s2b = &s2[-v32];
            memmove(v33, &v33[v32], (size_t)s2b);
            v42 = s2b;
            v33 = *(char **)(a1 + 176);
            v41 = (unsigned __int64)(s2b + 1);
          }
          if ( *(_QWORD *)(a1 + 192) < v41 )
          {
            s2c = (char *)v41;
            v52 = v42;
            v46 = qvector_reserve(a1 + 176, v33, v41, 1);
            *(_QWORD *)(a1 + 176) = v46;
            v42 = v52;
            v33 = (char *)v46;
            v41 = (unsigned __int64)s2c;
          }
          *(_QWORD *)(a1 + 184) = v41;
          v36 = v28 - v26;
          v42[(_QWORD)v33] = 0;
          v30 = *(_QWORD *)(a1 + 184);
          if ( !v30 )
            goto LABEL_57;
        }
        else
        {
          v36 = v28 - v26;
          if ( !v30 )
          {
LABEL_57:
            v39 = v36 + 1;
            if ( *(_QWORD *)(a1 + 192) >= v36 + 1 )
            {
              v43 = *(_QWORD *)(a1 + 176);
              *(_QWORD *)(a1 + 184) = v39;
              *(_BYTE *)(v43 + v36) = 0;
LABEL_51:
              memmove(*(void **)(a1 + 176), v26, v36);
              v26 = s;
              goto LABEL_38;
            }
            v45 = a1 + 176;
            v38 = (char *)v36;
            v37 = 0;
            goto LABEL_62;
          }
        }
        v37 = v30 - 1;
        v38 = (char *)(v36 + v37);
        v39 = v36 + v37 + 1;
        if ( *(_QWORD *)(a1 + 192) >= v39 )
        {
          v40 = *(_QWORD *)(a1 + 176);
          goto LABEL_49;
        }
        v45 = a1 + 176;
LABEL_62:
        s2d = v38;
        v40 = qvector_reserve(v45, *(_QWORD *)(a1 + 176), v39, 1);
        *(_QWORD *)(a1 + 176) = v40;
        v38 = s2d;
LABEL_49:
        *(_QWORD *)(a1 + 184) = v39;
        v38[v40] = 0;
        if ( v37 )
          memmove((void *)(*(_QWORD *)(a1 + 176) + v36), *(const void **)(a1 + 176), v37);
        goto LABEL_51;
      }
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr(30459);
    }
    v8 = (const char *)40848;
    goto LABEL_24;
  }
  return *(_QWORD *)(a1 + 176);
}
