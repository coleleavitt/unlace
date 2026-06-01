unsigned __int64 __fastcall sub_3949C0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  size_t v11; // r12
  const char *v12; // rsi
  char *i; // r15
  size_t v14; // rcx
  size_t v15; // rax
  _BYTE *v16; // rdx
  char *v17; // r15
  int v18; // eax
  char *v19; // rcx
  char *v20; // rax
  const char *v21; // rdx
  char v22; // cl
  void *v23; // rdi
  char *dest; // [rsp+10h] [rbp-4B8h]
  size_t v27; // [rsp+20h] [rbp-4A8h]
  _BYTE *src; // [rsp+28h] [rbp-4A0h]
  size_t v29; // [rsp+30h] [rbp-498h]
  size_t v30; // [rsp+38h] [rbp-490h]
  void *ptr; // [rsp+60h] [rbp-468h] BYREF
  __int128 v34; // [rsp+68h] [rbp-460h]
  char s1[1023]; // [rsp+80h] [rbp-448h] BYREF
  char v36; // [rsp+47Fh] [rbp-49h] BYREF
  _BYTE v37[8]; // [rsp+480h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+488h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v11 = strlen(a4);
  v29 = 0;
  v27 = strlen(a5);
  if ( a6 )
    v29 = strlen(a6);
  v30 = 0;
  if ( a7 )
    v30 = strlen(a7);
  ptr = nullptr;
  v34 = 0;
  while ( get_extra_cmt(&ptr, a2, a3) >= 0 )
  {
    v12 = haystack;
    if ( (_QWORD)v34 )
      v12 = (const char *)ptr;
    qstrncpy(s1, v12, 1024);
    for ( i = s1; *i == 32; ++i )
      ;
    if ( v11 && !strncmp(i, a4, v11) )
    {
      if ( v11 != v27 )
      {
        dest = &i[v27];
        v14 = strlen(&i[v11]);
        v15 = v14 + 1;
        v16 = (_BYTE *)(v37 - &i[v27]);
        if ( v14 + 1 >= (unsigned __int64)v16 )
        {
          v15 = (size_t)(v16 - 1);
          v14 = (size_t)(v16 - 2);
        }
        src = (_BYTE *)v14;
        memmove(dest, &i[v11], v15);
        src[(_QWORD)dest] = 0;
      }
      __memcpy_chk();
      v17 = &i[strlen(i)];
      if ( v29 && v29 < v17 - s1 && (v18 = strcmp(&v17[-v29], a6), v19 = &v17[-v29], !v18) )
      {
        if ( s1 < &v17[-v29] )
        {
          while ( *(v19 - 1) == 32 )
          {
            if ( --v19 == s1 )
              goto LABEL_39;
          }
        }
        if ( v19 >= v37 )
        {
          if ( !under_debugger )
            interr(519);
LABEL_45:
          BUG();
        }
LABEL_39:
        *v19 = 0;
        if ( !v30 )
          goto LABEL_21;
        v17 = v19;
      }
      else
      {
        if ( !v30 )
        {
LABEL_21:
          update_extra_cmt(a2, a3, s1);
          goto LABEL_22;
        }
        if ( v17 >= v37 )
        {
          if ( !under_debugger )
            interr(518);
          goto LABEL_45;
        }
      }
      v20 = v17 + 1;
      *v17 = 32;
      if ( v17 + 1 >= v37 || v20 == &v36 )
      {
LABEL_25:
        v36 = 0;
      }
      else
      {
        v21 = a7;
        while ( 1 )
        {
          v22 = *v21++;
          *v20 = v22;
          if ( !v22 )
            break;
          if ( ++v20 == &v36 )
            goto LABEL_25;
        }
      }
      goto LABEL_21;
    }
LABEL_22:
    ++a3;
  }
  v23 = ptr;
  *(_BYTE *)(a1 + 69) = 0;
  if ( v23 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v23);
  }
  return v38 - __readfsqword(0x28u);
}

