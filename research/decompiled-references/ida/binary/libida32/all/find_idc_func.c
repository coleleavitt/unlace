__int64 __fastcall find_idc_func(__int64 *a1, const char *a2, int a3)
{
  unsigned __int64 v4; // r13
  char *v5; // r14
  int v6; // r12d
  __int64 v7; // rax
  const char *v8; // r15
  unsigned int v9; // ebx
  size_t v11; // rax
  size_t v12; // rbx
  size_t v13; // rbp
  void *v14; // rdi
  __int64 v15; // rax
  size_t n; // [rsp+8h] [rbp-50h]
  void *v17; // [rsp+10h] [rbp-48h]

  if ( a2 )
  {
    v17 = qword_2CAA770;
    qmutex_lock(qword_2CAA770);
    n = strlen(a2);
    v4 = unk_2C52600;
    if ( unk_2C52600 )
    {
      v5 = off_2C52608;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(const char **)&v5[40 * v7];
        if ( !strncmp(a2, v8, n) && --a3 < 0 )
          break;
        v7 = ++v6;
        if ( v6 >= v4 )
          goto LABEL_7;
      }
      if ( a1 )
      {
        if ( v8 && (v11 = strlen(v8), (v12 = v11) != 0) )
        {
          v13 = v11 + 1;
          v14 = (void *)*a1;
          if ( a1[2] < v11 + 1 )
          {
            v15 = qvector_reserve(a1, *a1, v13, 1);
            *a1 = v15;
            v14 = (void *)v15;
          }
          a1[1] = v13;
          memmove(v14, v8, v12);
          *(_BYTE *)(*a1 + v12) = 0;
        }
        else
        {
          a1[1] = 0;
        }
      }
      v9 = 1;
    }
    else
    {
LABEL_7:
      v9 = 0;
    }
    qmutex_unlock(v17);
  }
  else
  {
    return 0;
  }
  return v9;
}

