const char *__fastcall sub_17C430(__int64 a1, const char *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  size_t v11; // rbp
  const char *v12; // rbp
  int v13; // eax
  _BYTE *v14; // rbp
  char v15; // al
  void *v16; // rdi
  size_t v17; // rdx
  __int64 v19; // rax
  char v20; // [rsp+0h] [rbp-468h]
  size_t v21; // [rsp+8h] [rbp-460h]
  const char *v22; // [rsp+18h] [rbp-450h] BYREF
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v24; // [rsp+428h] [rbp-40h]

  v24 = __readfsqword(0x28u);
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
            v4 = (__int64)(a2 + 6);
            v7 = strchr(a2 + 6, 10);
            if ( !v7 )
              sub_91F70((__int64)"message box: TITLE error at %s", v4, v5, v6, v8, v9, v20);
            qstrncpy();
            v10 = strlen(s);
            v11 = v10;
            if ( v10 )
            {
              v16 = *(void **)a1;
              v17 = v10 + 1;
              if ( *(_QWORD *)(a1 + 16) < v10 + 1 )
              {
                v21 = v10 + 1;
                v19 = qvector_reserve();
                v17 = v21;
                *(_QWORD *)a1 = v19;
                v16 = (void *)v19;
              }
              *(_QWORD *)(a1 + 8) = v17;
              memmove(v16, s, v11);
              *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 8) = 0;
            }
            a2 = v7 + 1;
          }
          if ( strncmp(a2, "ICON ", 5u) )
            break;
          v12 = a2 + 5;
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
              sub_92120((__int64)"message box: ICON error at %s", a2 + 5);
              return v12;
            }
            *(_DWORD *)(a1 + 24) = 4;
            a2 += 11;
          }
        }
        if ( strncmp(a2, "AUTOHIDE ", 9u) )
          break;
        v12 = a2 + 9;
        v13 = strncmp(a2 + 9, "NONE", 4u);
        if ( v13 )
        {
          if ( !strncmp(a2 + 9, "DATABASE", 8u) )
          {
            v14 = a2 + 17;
            v13 = 1;
          }
          else if ( !strncmp(a2 + 9, "REGISTRY", 8u) )
          {
            v14 = a2 + 17;
            v13 = 2;
          }
          else
          {
            if ( strncmp(a2 + 9, "SESSION", 7u) )
              goto LABEL_20;
            v14 = a2 + 16;
            v13 = 3;
          }
        }
        else
        {
          v14 = a2 + 13;
        }
        *(_DWORD *)(a1 + 84) = v13;
        v15 = *v14;
        if ( *v14 == 42 )
        {
          *(_BYTE *)(a1 + 88) = 1;
          v15 = *++v14;
        }
        v12 = v14 + 1;
        if ( v15 != 10 )
        {
LABEL_20:
          sub_92120((__int64)"message box: AUTOHIDE error at %s", v12);
          return v12;
        }
        a2 = v12;
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
    if ( !(unsigned __int8)sub_17BA60((__int64 *)(a1 + 96), nullptr, (__int64)a2, &v22) )
      break;
    a2 = v22;
  }
  sub_92120((__int64)"message box: HELP error at %s", a2);
  return a2;
}

