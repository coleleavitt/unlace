/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B6D0
// Address: 0x000000000008B6D0

//----- (000000000008B6D0) ----------------------------------------------------
__int64 __fastcall sub_8B6D0(_QWORD *a1, const char *a2, int a3)
{
  const char **v3; // rbp
  pthread_mutex_t *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 i; // rbx
  char *v9; // rdi
  char *v10; // rax
  char *v11; // r12
  const char *v12; // rax
  __int64 v13; // r15
  pthread_mutex_t *v15; // [rsp+8h] [rbp-60h]
  void *ptr[3]; // [rsp+10h] [rbp-58h] BYREF
  const char *v17[8]; // [rsp+28h] [rbp-40h] BYREF

  LODWORD(v3) = a3;
  v17[1] = (const char *)__readfsqword(0x28u);
  v5 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( !(_DWORD)v3 )
  {
    v3 = (const char **)a1[3];
    if ( v3 )
    {
      v6 = a1[4];
      if ( v6 )
      {
        v15 = v5;
        v7 = 1;
        for ( i = 0; ; i += 3 )
        {
          v9 = (char *)v3[i];
          if ( v9 )
          {
            v3[i + 1] = nullptr;
            qfree(v9);
            v3[i] = nullptr;
            v3[i + 2] = nullptr;
          }
          if ( v7 >= v6 )
            break;
          v3 = (const char **)a1[3];
          ++v7;
        }
        v3 = (const char **)a1[3];
        v5 = v15;
      }
      a1[4] = 0;
      qfree(v3);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  LOBYTE(v3) = 1;
  if ( a2 )
  {
    v10 = qstrdup(a2);
    v11 = v10;
    if ( v10 )
    {
      v12 = qstrtok(v10, ":", v17);
      v13 = (__int64)(a1 + 3);
      v3 = v17;
      while ( v12 )
      {
        if ( *v12 )
        {
          sub_37F60((__int64)ptr, v12);
          sub_4AA20(v13, ptr);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            ptr[2] = nullptr;
          }
        }
        v12 = qstrtok(nullptr, ":", v17);
      }
      qfree(v11);
      LOBYTE(v3) = 1;
    }
    else
    {
      LODWORD(v3) = 0;
    }
  }
  qmutex_unlock(v5);
  return (unsigned int)v3;
}
