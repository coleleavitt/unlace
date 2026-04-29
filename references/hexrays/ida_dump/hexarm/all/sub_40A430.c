__int64 __fastcall sub_40A430(__int64 a1, const char *a2, char a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rbp
  char *v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r12
  char *v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // r8
  char *v17; // rax
  char *v18; // rsi
  char v19; // al
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  char *haystack; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v4 = sub_40A200(a1, a2);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( a3 )
    return v5;
  haystack = nullptr;
  v7 = nullptr;
  v22 = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (char *)qvector_reserve(&haystack, 0, v8 + 1, 1);
    *(_QWORD *)&v22 = v9;
    haystack = v11;
    memmove(v11, a2, v10);
    haystack[v10] = 0;
    v12 = v22;
    v7 = haystack;
    v13 = (int)v22 - 3;
    if ( (_QWORD)v22 )
    {
      v14 = strstr(haystack, "32");
      if ( v14 )
      {
        if ( v14 - v7 == v13 )
          goto LABEL_12;
        v15 = strstr(v7, "64");
        if ( !v15 )
        {
          if ( v13 != -1 )
            goto LABEL_10;
          v16 = 0;
          goto LABEL_27;
        }
      }
      else
      {
        if ( v13 == -1 )
        {
          v16 = 0;
          goto LABEL_28;
        }
        v15 = strstr(v7, "64");
        if ( !v15 )
          goto LABEL_10;
      }
      if ( v13 != v15 - v7 )
        goto LABEL_10;
LABEL_12:
      if ( !v13 )
      {
        if ( v7 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v7);
          haystack = nullptr;
          *((_QWORD *)&v22 + 1) = 0;
        }
        v18 = nullptr;
LABEL_18:
        v19 = sub_40A200(a1, v18);
        v7 = haystack;
        if ( v19 )
        {
          if ( haystack )
          {
            *(_QWORD *)&v22 = 0;
            qfree(haystack);
          }
          return 1;
        }
        goto LABEL_10;
      }
      v16 = v13 + 1;
      if ( v12 < v13 + 1 )
      {
        v17 = v7;
        if ( *((_QWORD *)&v22 + 1) < v16 )
        {
          v17 = (char *)qvector_reserve(&haystack, v7, v13 + 1, 1);
          v12 = v22;
          v16 = v13 + 1;
          haystack = v17;
        }
        v20 = v16;
        memset(&v17[v12], 0, v16 - v12);
        v7 = haystack;
        *(_QWORD *)&v22 = v20;
        goto LABEL_17;
      }
LABEL_27:
      if ( v12 == v16 )
      {
LABEL_17:
        v7[v13] = 0;
        v18 = haystack;
        goto LABEL_18;
      }
LABEL_28:
      *(_QWORD *)&v22 = v16;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( v7 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v7);
  }
  return v5;
}
