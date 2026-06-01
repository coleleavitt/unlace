__int64 (__fastcall **__fastcall sub_54A770(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  unsigned int v2; // r14d
  _QWORD *v4; // rbx
  unsigned int v5; // r15d
  __int64 (__fastcall *v6)(); // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  void *v12; // rdi

  result = &off_1C50940;
  v2 = 0;
  v4 = (_QWORD *)a1[7];
  *a1 = &off_1C50940;
  if ( v4 )
  {
LABEL_2:
    while ( 2 )
    {
      if ( v2 >= *((_DWORD *)v4 - 1) )
      {
LABEL_15:
        v10 = *((unsigned int *)v4 - 1);
        v11 = &v4[v10];
        if ( (_DWORD)v10 )
        {
          do
          {
            while ( *v4 )
            {
              v12 = (void *)(*v4++ - 8LL);
              sub_186B220(v12);
              if ( v11 == v4 )
              {
                v4 = (_QWORD *)a1[7];
                goto LABEL_19;
              }
            }
            ++v4;
          }
          while ( v11 != v4 );
          v4 = (_QWORD *)a1[7];
        }
LABEL_19:
        result = (__int64 (__fastcall **)())sub_186B220(v4 - 1);
      }
      else
      {
        while ( 1 )
        {
          v5 = 0;
          result = (__int64 (__fastcall **)())v4[v2];
          if ( result )
            break;
          if ( ++v2 >= *((_DWORD *)v4 - 1) )
            goto LABEL_15;
        }
        do
        {
          while ( 1 )
          {
            if ( v5 >= *((_DWORD *)result - 1) )
            {
LABEL_7:
              ++v2;
              if ( v4 )
                goto LABEL_2;
              goto LABEL_8;
            }
            v6 = result[v5];
            if ( !v6 )
              break;
            ++v5;
            (**(void (__fastcall ***)(__int64 (__fastcall *)()))v6)(v6);
            sub_186B220(v6);
            v4 = (_QWORD *)a1[7];
            result = (__int64 (__fastcall **)())v4[v2];
            if ( !result )
              goto LABEL_7;
          }
          result = (__int64 (__fastcall **)())v4[v2];
          ++v5;
        }
        while ( result );
        ++v2;
        if ( v4 )
          continue;
      }
      break;
    }
  }
LABEL_8:
  v7 = a1[5];
  if ( v7 )
  {
    v8 = a1[6];
    if ( (*(_DWORD *)(v7 + 8))-- == 1 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v8, v7);
  }
  return result;
}

