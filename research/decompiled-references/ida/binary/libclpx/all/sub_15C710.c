void __fastcall sub_15C710(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v6; // rbp
  int v7; // ecx
  char *v8; // r8
  int v9; // edi
  int v10; // edx
  int v11; // eax
  char *v12; // rbx
  char *v13; // rax
  int v14; // edi
  char *v15; // r12
  __int64 v16; // rbx
  __int64 i; // rbp
  __int64 v18; // rcx

  v4 = a2 - a1;
  if ( a2 - a1 > 64 )
  {
    v6 = a1 + 4;
    if ( !a3 )
    {
      v15 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v7 = *((_DWORD *)a1 + 1);
      --a3;
      v8 = &a1[4 * (v4 >> 3)];
      v9 = *((_DWORD *)a2 - 1);
      v10 = *(_DWORD *)a1;
      v11 = *(_DWORD *)v8;
      if ( v7 >= *(_DWORD *)v8 )
      {
        if ( v7 >= v9 )
        {
          if ( v11 >= v9 )
          {
LABEL_24:
            *(_DWORD *)a1 = v11;
            *(_DWORD *)v8 = v10;
            v7 = *(_DWORD *)a1;
            v10 = *((_DWORD *)a2 - 1);
            goto LABEL_7;
          }
LABEL_16:
          *(_DWORD *)a1 = v9;
          *((_DWORD *)a2 - 1) = v10;
          v7 = *(_DWORD *)a1;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v11 < v9 )
          goto LABEL_24;
        if ( v7 < v9 )
          goto LABEL_16;
      }
      *(_DWORD *)a1 = v7;
      *((_DWORD *)a1 + 1) = v10;
      v10 = *((_DWORD *)a2 - 1);
LABEL_7:
      v12 = v6;
      v13 = a2;
      while ( 1 )
      {
        v14 = *(_DWORD *)v12;
        v15 = v12;
        if ( *(_DWORD *)v12 < v7 )
          goto LABEL_13;
        v13 -= 4;
        if ( v7 < v10 )
        {
          do
          {
            v13 -= 4;
            v10 = *(_DWORD *)v13;
          }
          while ( *(_DWORD *)v13 > v7 );
        }
        if ( v12 >= v13 )
          break;
        *(_DWORD *)v12 = v10;
        *(_DWORD *)v13 = v14;
        v10 = *((_DWORD *)v13 - 1);
        v7 = *(_DWORD *)a1;
LABEL_13:
        v12 += 4;
      }
      sub_15C710(v12, a2, a3);
      v4 = v12 - a1;
      if ( v12 - a1 <= 64 )
        return;
      a2 = v12;
      if ( !a3 )
      {
LABEL_19:
        v16 = v4 >> 2;
        for ( i = ((v4 >> 2) - 2) >> 1; ; --i )
        {
          std::__adjust_heap<int *,long,int,__gnu_cxx::__ops::_Iter_less_iter>(a1, i, v16, *(unsigned int *)&a1[4 * i]);
          if ( !i )
            break;
        }
        do
        {
          v15 -= 4;
          v18 = *(unsigned int *)v15;
          *(_DWORD *)v15 = *(_DWORD *)a1;
          std::__adjust_heap<int *,long,int,__gnu_cxx::__ops::_Iter_less_iter>(a1, 0, (v15 - a1) >> 2, v18);
        }
        while ( v15 - a1 > 4 );
        return;
      }
    }
  }
}

