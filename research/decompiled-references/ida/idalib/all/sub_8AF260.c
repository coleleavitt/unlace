__int64 __fastcall sub_8AF260(__int64 a1, __int64 *a2, __int64 a3, const char **a4, __int64 a5)
{
  __int64 v7; // rdi
  const char *v8; // rdx
  const char *v9; // rdi
  bool v10; // zf
  const char *v11; // rdi
  int i; // eax
  unsigned __int8 v13; // al
  int v14; // r9d
  size_t v15; // rax
  size_t v16; // r8
  void *v17; // rdi
  size_t v18; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  const char *v22; // r15
  void *v23; // rdi
  __int64 v24; // rax
  size_t v27; // [rsp+18h] [rbp-50A0h]
  size_t v28; // [rsp+18h] [rbp-50A0h]
  unsigned __int8 v29; // [rsp+27h] [rbp-5091h]
  size_t v30; // [rsp+28h] [rbp-5090h]
  _BYTE v31[4]; // [rsp+30h] [rbp-5088h] BYREF
  char v32; // [rsp+34h] [rbp-5084h] BYREF
  __int64 v33; // [rsp+2058h] [rbp-3060h]
  int v34; // [rsp+2064h] [rbp-3054h]
  char s[4104]; // [rsp+4070h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+5078h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 32);
  v8 = haystack;
  v36 = __readfsqword(0x28u);
  if ( a4[1] )
    v8 = *a4;
  sub_8AC5D0(v7, (__int64)"Attempting to match path \"%s\"\n", v8);
  v9 = haystack;
  if ( a4[1] )
    v9 = *a4;
  v29 = qfileexist(v9, "Attempting to match path \"%s\"\n");
  if ( v29 )
  {
    if ( a4 != (const char **)a2 )
    {
      v21 = (unsigned __int64)a4[1];
      if ( v21 > 1 )
      {
        v22 = *a4;
        v23 = (void *)*a2;
        if ( a2[2] < v21 )
        {
          v24 = qvector_reserve(a2, *a2, a4[1], 1);
          *a2 = v24;
          v23 = (void *)v24;
        }
        a2[1] = v21;
        memmove(v23, v22, v21 - 1);
        *(_BYTE *)(*a2 + v21 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return sub_8AEE90(a1, (__int64)a4, a5, a3);
  }
  else
  {
    v10 = a4[1] == nullptr;
    v11 = haystack;
    v33 = 0;
    v34 = 0;
    if ( !v10 )
      v11 = *a4;
    for ( i = qfindfirst(v11, v31, 0); !i; i = qfindnext(v31) )
    {
      qdirname(s);
      qmakepath((unsigned int)s, 4096, (unsigned int)s, (unsigned int)&v32, 0, v14);
      v15 = strlen(s);
      v16 = v15;
      if ( v15 )
      {
        v17 = (void *)*a2;
        v18 = v15 + 1;
        if ( a2[2] < v15 + 1 )
        {
          v30 = v15;
          v28 = v15 + 1;
          v20 = qvector_reserve(a2, *a2, v18, 1);
          *a2 = v20;
          v16 = v30;
          v17 = (void *)v20;
          v18 = v28;
        }
        a2[1] = v18;
        v27 = v16;
        memmove(v17, s, v16);
        *(_BYTE *)(*a2 + v27) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      v13 = sub_8AEE90(a1, (__int64)a2, a5, a3);
      if ( v13 )
      {
        v29 = v13;
        break;
      }
    }
    qfindclose(v31);
    return v29;
  }
}
