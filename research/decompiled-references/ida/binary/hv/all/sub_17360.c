unsigned __int64 __fastcall sub_17360(__int64 a1, __int64 a2)
{
  int v2; // ebx
  void *v3; // r15
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbp
  char *v14; // rax
  void *v15; // rdi
  const char *v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-A0h]
  void *v20; // [rsp+18h] [rbp-98h] BYREF
  __int128 v21; // [rsp+20h] [rbp-90h]
  void *src; // [rsp+38h] [rbp-78h] BYREF
  __int64 v23; // [rsp+40h] [rbp-70h]
  unsigned __int64 v24; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int128 v26; // [rsp+60h] [rbp-50h]
  unsigned __int64 v27; // [rsp+70h] [rbp-40h]

  v2 = 0;
  v19 = a1;
  v27 = __readfsqword(0x28u);
  v21 = 0;
  v20 = nullptr;
  while ( sub_95D00(&v20, a2) >= 0 )
  {
    ++v2;
    if ( (unsigned __int64)v21 > 1 && *(_BYTE *)v20 != 59 )
    {
      sub_656B0(&src, v20, 1);
      if ( v23 )
      {
        v26 = 0;
        ptr = nullptr;
        ptr = (void *)sub_96080(&ptr, 0, 5, 1);
        *(_QWORD *)&v26 = 5;
        strcpy((char *)ptr, "perm");
        v3 = ptr;
        v4 = src;
        ptr = nullptr;
        v5 = *((_QWORD *)&v26 + 1);
        v26 = 0;
        v18 = v5;
        v6 = v23;
        if ( v24 < v23 + 1 )
        {
          src = (void *)sub_96080(&src, src, v23 + 1, 24);
          v4 = src;
          v6 = v23;
        }
        memmove(v4 + 3, v4, 24 * v6);
        *v4 = v3;
        v7 = ptr;
        *(__m128 *)(v4 + 1) = _mm_loadh_ps((const double *)&v18);
        ++v23;
        if ( v7 )
        {
          *(_QWORD *)&v26 = 0;
          j__free(v7);
        }
        if ( (unsigned int)sub_239C0(v19, &src) )
        {
          v17 = haystack;
          if ( (_QWORD)v21 )
            LODWORD(v17) = (_DWORD)v20;
          sub_708D0((unsigned int)"this error occurred on the line #%d: %s\n", v2, (_DWORD)v17, v8, v9, v10);
          sub_96FA0(1);
        }
        v11 = (char *)src;
        if ( src )
        {
          v12 = v23;
          if ( v23 )
          {
            v13 = 0;
            do
            {
              v14 = &v11[24 * v13];
              v15 = *(void **)v14;
              if ( *(_QWORD *)v14 )
              {
                *((_QWORD *)v14 + 1) = 0;
                j__free(v15);
                v11 = (char *)src;
              }
              ++v13;
            }
            while ( v12 != v13 );
          }
          v23 = 0;
          j__free(v11);
        }
      }
      else if ( src )
      {
        j__free(src);
      }
    }
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    j__free(v20);
  }
  return v27 - __readfsqword(0x28u);
}

