__int64 __fastcall sub_18310(__int64 a1)
{
  const char *v1; // rcx
  const char *v2; // rdx
  __int64 *v3; // rbx
  _QWORD *v4; // r15
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r15
  char *v11; // r12
  void *v12; // rdi
  char *v13; // rdi
  __int64 v14; // r13
  __int64 i; // rbx
  char *v16; // r14
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  unsigned __int8 v22; // [rsp+7h] [rbp-99h]
  __int64 v23; // [rsp+8h] [rbp-98h]
  __int64 v24; // [rsp+10h] [rbp-90h]
  __int64 v25; // [rsp+18h] [rbp-88h]
  void *dest; // [rsp+28h] [rbp-78h] BYREF
  void *v27; // [rsp+30h] [rbp-70h] BYREF
  __int128 v28; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v30; // [rsp+58h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v27 = nullptr;
  ptr = nullptr;
  v28 = 0;
  v30 = 0;
  sub_CF40((char **)&ptr);
  v1 = s1;
  if ( (_QWORD)v30 )
    v1 = (const char *)ptr;
  v2 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  v3 = sub_18150((__int64)&v27, &dest, v2, v1);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    j__free(ptr);
  }
  if ( !v3 || (v4 = dest, dest == (void *)(*v3 + 112 * v3[1])) )
  {
    v22 = 0;
  }
  else
  {
    v5 = *((void **)dest + 11);
    if ( v5 )
    {
      *((_QWORD *)dest + 12) = 0;
      j__free(v5);
    }
    v6 = (void *)v4[7];
    if ( v6 )
    {
      v4[8] = 0;
      j__free(v6);
    }
    v7 = (void *)v4[4];
    if ( v7 )
    {
      v4[5] = 0;
      j__free(v7);
    }
    v8 = (void *)v4[1];
    if ( v8 )
    {
      v4[2] = 0;
      j__free(v8);
    }
    memmove(v4, v4 + 14, *v3 + 112 * v3[1]-- - (_QWORD)v4 - 112);
    sub_16CA0((__int64 *)&v27);
    v22 = 1;
  }
  v9 = (char *)v27;
  if ( v27 )
  {
    v23 = v28;
    if ( (_QWORD)v28 )
    {
      v24 = 0;
      v10 = 0;
      do
      {
        v11 = &v9[v10];
        v12 = *(void **)&v9[v10 + 256];
        if ( v12 )
        {
          *((_QWORD *)v11 + 33) = 0;
          j__free(v12);
        }
        v13 = *(char **)v11;
        if ( *(_QWORD *)v11 )
        {
          v14 = *((_QWORD *)v11 + 1);
          if ( v14 )
          {
            v25 = 0;
            for ( i = 0; i != v14; ++i )
            {
              v16 = &v13[v25];
              v17 = *(void **)&v13[v25 + 88];
              if ( v17 )
              {
                *((_QWORD *)v16 + 12) = 0;
                j__free(v17);
              }
              v18 = *((void **)v16 + 7);
              if ( v18 )
              {
                *((_QWORD *)v16 + 8) = 0;
                j__free(v18);
              }
              v19 = *((void **)v16 + 4);
              if ( v19 )
              {
                *((_QWORD *)v16 + 5) = 0;
                j__free(v19);
              }
              v20 = *((void **)v16 + 1);
              if ( v20 )
              {
                *((_QWORD *)v16 + 2) = 0;
                j__free(v20);
              }
              v25 += 112;
              v13 = *(char **)v11;
            }
          }
          *((_QWORD *)v11 + 1) = 0;
          j__free(v13);
        }
        ++v24;
        v9 = (char *)v27;
        v10 += 280;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v28 = 0;
    j__free(v9);
  }
  return v22;
}

