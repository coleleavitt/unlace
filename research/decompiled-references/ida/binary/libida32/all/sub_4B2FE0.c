const char *__fastcall sub_4B2FE0(__int64 a1, unsigned int a2, const char *a3)
{
  const char *v4; // rbx
  char *v5; // rax
  char *v6; // rbp
  char *v7; // r15
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // r12
  const char *v13; // rsi
  size_t v14; // rbp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = a3;
  v5 = strchr(a3, 95);
  if ( v5 )
  {
    v6 = v5;
    v7 = v5;
    if ( v4 != v5 )
    {
      while ( 1 )
      {
        v8 = *++v7;
        if ( !(_BYTE)v8 )
          break;
        if ( !strchr("_.@0123456789", v8) )
        {
          v10 = sub_4EE820(a1 + 1552, a2);
          if ( v10 )
          {
            ptr = nullptr;
            v16 = 0;
            v11 = sub_4F9200(a1, &ptr, v10, 0);
            v12 = ptr;
            if ( v11 > 0 )
            {
              v13 = (const char *)ptr;
              if ( !(_QWORD)v16 )
                v13 = haystack;
              v14 = v6 - v4;
              if ( !strncmp(v4, v13, v14) && v12[v14] == 46 )
                v4 += v14 + 1;
            }
            if ( v12 )
            {
              *(_QWORD *)&v16 = 0;
              qfree(v12);
            }
          }
          return v4;
        }
      }
    }
  }
  return v4;
}

