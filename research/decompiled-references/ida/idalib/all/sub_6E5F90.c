__int64 __fastcall sub_6E5F90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 v13; // r13
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned int v19; // r13d
  __int64 v20; // rax
  char *v21; // r14
  size_t v22; // rax
  size_t v23; // r15
  __int64 v24; // rax
  char *v25; // r13
  __int64 v26; // r12
  __int64 v27; // r14
  const char *v28; // rsi
  __int64 v29; // rcx
  double v30; // xmm4_8
  double v31; // xmm5_8
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r12
  char *v35; // r13
  size_t v36; // rax
  size_t v37; // r14
  unsigned int *v38; // r12
  char v39; // al
  char *v40; // rdi
  size_t v41; // rdx
  char *v42; // rdi
  size_t v43; // r15
  char *v44; // rax
  unsigned int *v45; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v46; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v47; // [rsp+0h] [rbp-A8h]
  size_t v48; // [rsp+0h] [rbp-A8h]
  __int64 v49; // [rsp+18h] [rbp-90h] BYREF
  char *s1; // [rsp+20h] [rbp-88h] BYREF
  __int128 v51; // [rsp+28h] [rbp-80h]
  char *s[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v53[11]; // [rsp+50h] [rbp-58h] BYREF

  v53[3] = __readfsqword(0x28u);
  result = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      v13 = *v12;
      if ( *v12 )
      {
        v15 = *v12;
        s1 = nullptr;
        v51 = 0;
        v17 = sub_F6A860(v15);
        v18 = v17;
        if ( v17 )
        {
          v19 = *(_DWORD *)(v17 + 20);
          s[0] = *(char **)(v17 + 32);
          v20 = sub_F22BD0(s, 0);
          if ( v20 )
          {
            v49 = *(_QWORD *)(v20 + 40);
            sub_B86A00(s, &v49);
            v21 = s[0];
            if ( s[0] )
            {
              v22 = strlen(s[0]);
              v23 = v22;
              if ( v22 )
              {
                v40 = s1;
                v41 = v22 + 1;
                if ( *((_QWORD *)&v51 + 1) < v22 + 1 )
                {
                  v48 = v22 + 1;
                  v44 = (char *)qvector_reserve(&s1, s1, v41, 1);
                  v41 = v48;
                  s1 = v44;
                  v40 = v44;
                }
                *(_QWORD *)&v51 = v41;
                memmove(v40, v21, v23);
                s1[v23] = 0;
                v21 = s[0];
              }
              else
              {
                *(_QWORD *)&v51 = 0;
              }
              if ( v21 == (char *)v53 )
                goto LABEL_12;
            }
            else
            {
              *(_QWORD *)&v51 = 0;
            }
            operator delete(v21, v53[0] + 1LL);
          }
LABEL_12:
          v45 = (unsigned int *)(v18 + 48);
          v24 = v19;
          goto LABEL_13;
        }
        v33 = sub_F63270(v13);
        v34 = v33;
        if ( !v33 || (*(_BYTE *)(v33 + 28) & 0x7Fu) - 60 > 1 )
        {
          v25 = s1;
          result = 0;
LABEL_34:
          if ( v25 )
          {
            v46 = result;
            *(_QWORD *)&v51 = 0;
            qfree(v25);
            return v46;
          }
          return result;
        }
        v49 = *(_QWORD *)(v33 + 40);
        sub_B86A00(s, &v49);
        v35 = s[0];
        if ( s[0] )
        {
          v36 = strlen(s[0]);
          v37 = v36;
          if ( v36 )
          {
            v42 = s1;
            v43 = v36 + 1;
            if ( *((_QWORD *)&v51 + 1) < v36 + 1 )
            {
              s1 = (char *)qvector_reserve(&s1, s1, v43, 1);
              v42 = s1;
            }
            *(_QWORD *)&v51 = v43;
            memmove(v42, v35, v37);
            s1[v37] = 0;
            v35 = s[0];
          }
          else
          {
            *(_QWORD *)&v51 = 0;
          }
          if ( v35 == (char *)v53 )
            goto LABEL_32;
        }
        else
        {
          *(_QWORD *)&v51 = 0;
        }
        operator delete(v35, v53[0] + 1LL);
LABEL_32:
        v38 = *(unsigned int **)(v34 + 168);
        v24 = *v38;
        v45 = v38 + 2;
LABEL_13:
        v25 = s1;
        if ( v24 )
        {
          if ( (unsigned __int64)v51 > 1 )
          {
            v26 = *(_QWORD *)(a1 + 96);
            v27 = v26 + 24LL * *(_QWORD *)(a1 + 104);
            if ( v26 != v27 )
            {
              while ( 1 )
              {
                v28 = haystack;
                if ( *(_QWORD *)(v26 + 8) )
                  v28 = *(const char **)v26;
                if ( !strcmp(v25, v28) )
                  break;
                v26 += 24;
                if ( v27 == v26 )
                  goto LABEL_24;
              }
              if ( v26 != v27 )
              {
                v32 = *v45 & 0x7FFFFFFF;
                if ( v32 != 9 )
                {
LABEL_23:
                  if ( v32 == 1 && (*((_QWORD *)v45 + 1) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
                  {
                    sub_6E4130(&v49, a1, *((_QWORD *)v45 + 1), v29, 0.0, a5, a6, a7, v30, v31, a10, a11);
                    v39 = 0;
                    if ( (_BYTE)v49 )
                    {
                      if ( a2 )
                        sub_6D5330(a2, (__int64)&v49, 0, 0xAu);
                      v39 = 1;
                    }
                    v47 = v39;
                    clear_tinfo_t(&v49);
                    v25 = s1;
                    result = v47;
                    goto LABEL_34;
                  }
                  goto LABEL_24;
                }
                if ( v45[1] )
                {
                  v45 = *((unsigned int **)v45 + 1);
                  v32 = *v45 & 0x7FFFFFFF;
                  goto LABEL_23;
                }
              }
            }
          }
        }
LABEL_24:
        result = 0;
        goto LABEL_34;
      }
    }
  }
  return result;
}
