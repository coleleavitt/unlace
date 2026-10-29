void __fastcall sub_3D38B0(char *a1, __int64 a2)
{
  __int64 v3; // rcx
  char *v4; // r12
  __int64 v5; // rbx
  char *i; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // ecx
  unsigned int *v9; // rdx
  char *v10; // rax
  char *v11; // rsi

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      for ( i = a1 + 8; (char *)a2 != i; *(_QWORD *)a1 = v7 )
      {
        while ( 1 )
        {
          v7 = *(unsigned int **)i;
          v8 = **(_DWORD **)i;
          if ( v8 < **(_DWORD **)a1 )
            break;
          v9 = *((unsigned int **)i - 1);
          v10 = i - 8;
          if ( v8 >= *v9 )
          {
            *(_QWORD *)i = v7;
          }
          else
          {
            do
            {
              *((_QWORD *)v10 + 1) = v9;
              v11 = v10;
              v9 = *((unsigned int **)v10 - 1);
              v10 -= 8;
            }
            while ( v8 < *v9 );
            *(_QWORD *)v11 = v7;
          }
          i += 8;
          if ( (char *)a2 == i )
            return;
        }
        if ( i - a1 <= 8 )
        {
          if ( i - a1 == 8 )
            *(_QWORD *)i = *(_QWORD *)a1;
        }
        else
        {
          memmove(a1 + 8, a1, i - a1);
        }
        i += 8;
      }
    }
  }
  else
  {
    v3 = (a2 - (__int64)a1) >> 4;
    v4 = &a1[8 * v3];
    v5 = (8 * v3) >> 3;
    sub_3D38B0(a1, v4);
    sub_3D38B0(v4, a2);
    sub_3D3710(a1, v4, a2, v5, (a2 - (__int64)v4) >> 3);
  }
}

