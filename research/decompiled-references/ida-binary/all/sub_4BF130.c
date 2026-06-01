const char *__fastcall sub_4BF130(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v12; // rbp
  char *v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  size_t v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  char *v32; // rbp
  char v33; // al
  void *v34; // rdi
  size_t v35; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  char v44; // [rsp+0h] [rbp-468h]
  size_t v45; // [rsp+8h] [rbp-460h]
  const char *v46; // [rsp+18h] [rbp-450h] BYREF
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v48; // [rsp+428h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( !strncmp(a2, "TITLE ", 6u) )
          {
            v12 = a2 + 6;
            v13 = strchr(a2 + 6, 10);
            v14 = v13;
            if ( !v13 )
              sub_16B930((__int64)"message box: TITLE error at %s", v12);
            v15 = v13 - v12 + 1;
            if ( v15 > 0x400 )
              v15 = 1024;
            qstrncpy(s, v12, v15);
            v16 = strlen(s);
            v17 = v16;
            if ( v16 )
            {
              v34 = *(void **)a1;
              v35 = v16 + 1;
              if ( *(_QWORD *)(a1 + 16) < v16 + 1 )
              {
                v45 = v16 + 1;
                v37 = qvector_reserve(a1, *(_QWORD *)a1, v35, 1);
                v35 = v45;
                *(_QWORD *)a1 = v37;
                v34 = (void *)v37;
              }
              *(_QWORD *)(a1 + 8) = v35;
              memmove(v34, s, v17);
              *(_BYTE *)(*(_QWORD *)a1 + v17) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 8) = 0;
            }
            a2 = v14 + 1;
          }
          if ( strncmp(a2, "ICON ", 5u) )
            break;
          v18 = (__int64)(a2 + 5);
          if ( !strncmp(a2 + 5, "NONE\n", 5u) )
          {
            *(_DWORD *)(a1 + 24) = 0;
            a2 += 10;
          }
          else if ( !strncmp(a2 + 5, "INFO\n", 5u) )
          {
            *(_DWORD *)(a1 + 24) = 1;
            a2 += 10;
          }
          else if ( !strncmp(a2 + 5, "QUESTION\n", 9u) )
          {
            *(_DWORD *)(a1 + 24) = 2;
            a2 += 14;
          }
          else if ( !strncmp(a2 + 5, "WARNING\n", 8u) )
          {
            *(_DWORD *)(a1 + 24) = 3;
            a2 += 13;
          }
          else
          {
            if ( strncmp(a2 + 5, "ERROR\n", 6u) )
            {
              sub_169630(
                (int)"message box: ICON error at %s",
                (__int64)(a2 + 5),
                v19,
                v20,
                v21,
                v22,
                a3,
                a4,
                a5,
                a6,
                v23,
                v24,
                a9,
                a10,
                v44);
              return (const char *)v18;
            }
            *(_DWORD *)(a1 + 24) = 4;
            a2 += 11;
          }
        }
        if ( strncmp(a2, "AUTOHIDE ", 9u) )
          break;
        v18 = (__int64)(a2 + 9);
        v25 = strncmp(a2 + 9, "NONE", 4u);
        if ( v25 )
        {
          if ( !strncmp(a2 + 9, "DATABASE", 8u) )
          {
            v32 = (char *)(a2 + 17);
            v25 = 1;
          }
          else if ( !strncmp(a2 + 9, "REGISTRY", 8u) )
          {
            v32 = (char *)(a2 + 17);
            v25 = 2;
          }
          else
          {
            if ( strncmp(a2 + 9, "SESSION", 7u) )
              goto LABEL_22;
            v32 = (char *)(a2 + 16);
            v25 = 3;
          }
        }
        else
        {
          v32 = (char *)(a2 + 13);
        }
        *(_DWORD *)(a1 + 84) = v25;
        v33 = *v32;
        if ( *v32 == 42 )
        {
          *(_BYTE *)(a1 + 88) = 1;
          v33 = *++v32;
        }
        v18 = (__int64)(v32 + 1);
        if ( v33 != 10 )
        {
LABEL_22:
          sub_169630(
            (int)"message box: AUTOHIDE error at %s",
            v18,
            v26,
            v27,
            v28,
            v29,
            a3,
            a4,
            a5,
            a6,
            v30,
            v31,
            a9,
            a10,
            v44);
          return (const char *)v18;
        }
        a2 = (const char *)v18;
      }
      if ( *a2 == 64 )
        break;
      if ( !strncmp(a2, "HIDECANCEL\n", 0xBu) )
      {
        *(_BYTE *)(a1 + 120) = 1;
        a2 += 11;
      }
      else
      {
        if ( strncmp(a2, "RICHTEXT\n", 9u) )
          return a2;
        *(_BYTE *)(a1 + 121) = 1;
        a2 += 9;
      }
    }
    if ( !(unsigned __int8)sub_4BEC10((__int64 *)(a1 + 96), nullptr, (__int64)a2, &v46) )
      break;
    a2 = v46;
  }
  sub_169630(
    (int)"message box: HELP error at %s",
    (__int64)a2,
    v38,
    v39,
    v40,
    v41,
    a3,
    a4,
    a5,
    a6,
    v42,
    v43,
    a9,
    a10,
    v44);
  return a2;
}
