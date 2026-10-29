__int64 __fastcall sub_88B8E0(__int64 a1, __int64 *a2, __int64 a3, const char **a4, __int64 a5)
{
  _DWORD *v7; // rdi
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
  char v25; // [rsp+0h] [rbp-50B8h]
  size_t v28; // [rsp+18h] [rbp-50A0h]
  size_t v29; // [rsp+18h] [rbp-50A0h]
  unsigned __int8 v30; // [rsp+27h] [rbp-5091h]
  size_t v31; // [rsp+28h] [rbp-5090h]
  _BYTE v32[4]; // [rsp+30h] [rbp-5088h] BYREF
  char v33; // [rsp+34h] [rbp-5084h] BYREF
  __int64 v34; // [rsp+2058h] [rbp-3060h]
  int v35; // [rsp+2064h] [rbp-3054h]
  char s[4104]; // [rsp+4070h] [rbp-1048h] BYREF
  unsigned __int64 v37; // [rsp+5078h] [rbp-40h]

  v7 = *(_DWORD **)(a1 + 32);
  v8 = haystack;
  v37 = __readfsqword(0x28u);
  if ( a4[1] )
    v8 = *a4;
  sub_888C60(v7, (__int64)"Attempting to match path \"%s\"\n", v8);
  v9 = haystack;
  if ( a4[1] )
    v9 = *a4;
  v30 = qfileexist(v9, "Attempting to match path \"%s\"\n");
  if ( v30 )
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
    return sub_88B510(a1, (__int64)a4, a5, a3);
  }
  else
  {
    v10 = a4[1] == nullptr;
    v11 = haystack;
    v34 = 0;
    v35 = 0;
    if ( !v10 )
      v11 = *a4;
    for ( i = qfindfirst(v11, v32, 0); !i; i = qfindnext(v32) )
    {
      qdirname(s);
      qmakepath((int)s, 4096, (int)s, (int)&v33, 0, v14, v25);
      v15 = strlen(s);
      v16 = v15;
      if ( v15 )
      {
        v17 = (void *)*a2;
        v18 = v15 + 1;
        if ( a2[2] < v15 + 1 )
        {
          v31 = v15;
          v29 = v15 + 1;
          v20 = qvector_reserve(a2, *a2, v18, 1);
          *a2 = v20;
          v16 = v31;
          v17 = (void *)v20;
          v18 = v29;
        }
        a2[1] = v18;
        v28 = v16;
        memmove(v17, s, v16);
        *(_BYTE *)(*a2 + v28) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      v13 = sub_88B510(a1, (__int64)a2, a5, a3);
      if ( v13 )
      {
        v30 = v13;
        break;
      }
    }
    qfindclose(v32);
    return v30;
  }
}

