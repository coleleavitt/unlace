__int64 __fastcall sub_10DB810(void *a1, size_t a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v6; // r10d
  size_t v12; // rbx
  size_t v13; // rax
  size_t v14; // rcx
  char *v15; // r8
  int v16; // eax
  char v17; // al
  size_t v18; // rbx
  size_t v19; // rax
  size_t v20; // rbp
  char *v21; // rcx
  int v22; // eax
  bool v23; // zf
  char *v24; // [rsp+8h] [rbp-70h]
  char *v25; // [rsp+8h] [rbp-70h]
  size_t v26; // [rsp+10h] [rbp-68h]
  void *s1; // [rsp+20h] [rbp-58h] BYREF
  size_t v28; // [rsp+28h] [rbp-50h]
  unsigned int v29[16]; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0;
  *a6 = 0;
  s1 = a1;
  *a5 = 0;
  v28 = a2;
  *a4 = 0;
  *a3 = 0;
  if ( !a2 )
    return v6;
  if ( (unsigned __int8)sub_2247880(&s1, 10, v29) || *(_QWORD *)v29 != v29[0] )
    return 0;
  *a3 = v29[0];
  v12 = v28;
  if ( !v28 )
    return 1;
  v13 = j__strlen(".");
  v6 = 0;
  v14 = v13;
  if ( v12 >= v13 )
  {
    v15 = (char *)s1;
    if ( !v13 || (v24 = (char *)s1, v26 = v13, v16 = memcmp(s1, ".", v13), v15 = v24, v14 = v26, v6 = 0, !v16) )
    {
      s1 = &v15[v14];
      v28 = v12 - v14;
      v17 = sub_2247880(&s1, 10, v29);
      v6 = 0;
      if ( !v17 && *(_QWORD *)v29 == v29[0] )
      {
        v18 = v28;
        *a4 = v29[0];
        if ( v18 )
        {
          v19 = j__strlen(".");
          v20 = v19;
          if ( v18 >= v19 )
          {
            v21 = (char *)s1;
            if ( !v19 || (v25 = (char *)s1, v22 = memcmp(s1, ".", v19), v21 = v25, !v22) )
            {
              s1 = &v21[v20];
              v28 = v18 - v20;
              if ( !(unsigned __int8)sub_2247880(&s1, 10, v29) && *(_QWORD *)v29 == v29[0] )
              {
                v23 = v28 == 0;
                *a5 = v29[0];
                if ( !v23 )
                  *a6 = 1;
                return 1;
              }
            }
          }
          return 0;
        }
        return 1;
      }
    }
  }
  return v6;
}
