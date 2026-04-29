__int64 __fastcall sub_278DE0(int **a1)
{
  unsigned int v1; // r13d
  int *v2; // rax
  int *v3; // rbx
  __int64 tinfo_size; // rax
  unsigned __int64 v5; // rax
  int *v6; // rdx
  int *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  v1 = 0;
  v2 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = *((int **)v2 + 1);
      if ( v2 != v3 )
      {
        while ( 1 )
        {
LABEL_4:
          if ( v3[11] >= 0 )
          {
            tinfo_size = get_tinfo_size();
            if ( tinfo_size != -1 )
            {
              v5 = v3[11] + tinfo_size;
              if ( (int)v1 < v5 )
                v1 = v5;
            }
          }
          if ( (*(_QWORD *)v3 & 2) != 0 )
            goto LABEL_11;
          v6 = *((int **)v3 + 2);
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
            v8 = (int *)(*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL);
            v9 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 2) == 0 )
            {
              while ( *((int **)v8 + 2) == v3 )
              {
                v3 = v8;
                v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
                v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v9 & 2) != 0 )
                {
                  v3 = (int *)v10;
                  if ( *a1 != (int *)v10 )
                    goto LABEL_4;
                  return v1;
                }
                v8 = (int *)v10;
              }
            }
            v3 = v8;
            if ( *a1 == v8 )
              return v1;
          }
          else
          {
            do
            {
              v3 = v6;
              v6 = *((int **)v6 + 1);
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
LABEL_11:
            if ( *a1 == v3 )
              return v1;
          }
        }
      }
    }
  }
  return v1;
}
