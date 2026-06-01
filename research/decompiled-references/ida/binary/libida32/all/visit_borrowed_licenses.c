__int64 __fastcall visit_borrowed_licenses(__int64 (__fastcall ***a1)(_QWORD, __int64, char *))
{
  char v2; // al
  char *v3; // rdi
  char *v4; // r12
  char *i; // rbx
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned int v8; // r13d
  char *v9; // rbx
  void *v10; // rdi
  char *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 j; // rbp
  char *v15; // r15
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v21; // [rsp+0h] [rbp-70h]
  __int64 v22; // [rsp+8h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v25; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v25 = 0;
  ptr = nullptr;
  v2 = sub_880B40(&ptr);
  v3 = (char *)ptr;
  if ( !v2 || (v4 = (char *)ptr + 280 * v25, v4 == ptr) )
  {
    v8 = 0;
  }
  else
  {
    for ( i = (char *)ptr + 24; ; i += 280 )
    {
      v6 = *((_QWORD *)i - 3);
      v7 = v6 + 112LL * *((_QWORD *)i - 2);
      if ( v7 != v6 )
        break;
LABEL_30:
      if ( v4 == i + 256 )
      {
        v3 = (char *)ptr;
        v8 = 0;
        goto LABEL_9;
      }
    }
    while ( 1 )
    {
      v8 = (**a1)(a1, v6, i);
      if ( v8 )
        break;
      v6 += 112;
      if ( v7 == v6 )
        goto LABEL_30;
    }
    v3 = (char *)ptr;
  }
LABEL_9:
  if ( v3 )
  {
    v23 = v25;
    if ( (_QWORD)v25 )
    {
      v22 = 0;
      v21 = 0;
      do
      {
        v9 = &v3[v22];
        v10 = *(void **)&v3[v22 + 256];
        if ( v10 )
        {
          *((_QWORD *)v9 + 33) = 0;
          qfree(v10);
        }
        v11 = *(char **)v9;
        if ( *(_QWORD *)v9 )
        {
          v12 = *((_QWORD *)v9 + 1);
          if ( v12 )
          {
            v13 = 0;
            for ( j = 0; j != v12; ++j )
            {
              v15 = &v11[v13];
              v16 = *(void **)&v11[v13 + 88];
              if ( v16 )
              {
                *((_QWORD *)v15 + 12) = 0;
                qfree(v16);
              }
              v17 = *((void **)v15 + 7);
              if ( v17 )
              {
                *((_QWORD *)v15 + 8) = 0;
                qfree(v17);
              }
              v18 = *((void **)v15 + 4);
              if ( v18 )
              {
                *((_QWORD *)v15 + 5) = 0;
                qfree(v18);
              }
              v19 = *((void **)v15 + 1);
              if ( v19 )
              {
                *((_QWORD *)v15 + 2) = 0;
                qfree(v19);
              }
              v11 = *(char **)v9;
              v13 += 112;
            }
          }
          *((_QWORD *)v9 + 1) = 0;
          qfree(v11);
        }
        ++v21;
        v3 = (char *)ptr;
        v22 += 280;
      }
      while ( v23 != v21 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v3);
  }
  return v8;
}

