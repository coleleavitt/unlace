unsigned __int64 __fastcall sub_67F950(__int64 a1, __int64 *a2, char a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r12
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  void *v13; // rdi
  char *v14; // rbx
  char v15; // al
  char *v16; // rdx
  __int64 v17; // r14
  __int64 i; // r12
  char *v19; // rax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v25; // [rsp+18h] [rbp-40h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a3 == 84 )
  {
    ptr = nullptr;
    v25 = 0;
    v5 = *(_QWORD *)(qword_2CA1698 + 1648);
    v6 = node2ea(a4);
    v7 = sub_67D5A0(v5, (__int64 *)&ptr, &v23, v6);
    if ( v7 > 0 )
    {
      v8 = 0;
      v9 = 96LL * (unsigned int)v7;
      do
      {
        sub_67F4D0((__int64 *)((char *)ptr + v8), a2);
        v8 += 96;
      }
      while ( v8 != v9 );
    }
    v10 = (char *)ptr;
    if ( ptr )
    {
      v11 = v25;
      if ( (_QWORD)v25 )
      {
        v12 = 0;
        do
        {
          v14 = &v10[96 * v12];
          v15 = v14[89];
          if ( v15 == 2 )
          {
            v16 = *((char **)v14 + 3);
            if ( v16 )
            {
              v17 = *((_QWORD *)v14 + 4);
              if ( v17 )
              {
                for ( i = 0; i != v17; ++i )
                {
                  v19 = &v16[40 * i];
                  v20 = *(void **)v19;
                  if ( *(_QWORD *)v19 )
                  {
                    *((_QWORD *)v19 + 1) = 0;
                    qfree(v20);
                    v16 = *((char **)v14 + 3);
                  }
                }
              }
              *((_QWORD *)v14 + 4) = 0;
              qfree(v16);
            }
          }
          else if ( v15 == 1 )
          {
            v21 = *((void **)v14 + 7);
            if ( v21 )
            {
              *((_QWORD *)v14 + 8) = 0;
              qfree(v21);
            }
            v22 = *((void **)v14 + 3);
            if ( v22 )
            {
              *((_QWORD *)v14 + 4) = 0;
              qfree(v22);
            }
          }
          v13 = *(void **)v14;
          v14[89] = 0;
          if ( v13 )
          {
            *((_QWORD *)v14 + 1) = 0;
            qfree(v13);
          }
          ++v12;
          v10 = (char *)ptr;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v10);
    }
  }
  return v26 - __readfsqword(0x28u);
}

