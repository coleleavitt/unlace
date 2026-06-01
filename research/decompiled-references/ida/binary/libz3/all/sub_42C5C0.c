void __fastcall sub_42C5C0(_QWORD *a1)
{
  _QWORD *v1; // r13
  __int64 v2; // rax
  _QWORD *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[9 * v2];
      do
      {
        v5 = (void *)v1[6];
        if ( v5 )
          sub_186B220(v5);
        v6 = (void *)v1[3];
        if ( v6 )
          sub_186B220(v6);
        v7 = (__int64 *)v1[2];
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = v1[1];
                if ( (*(_DWORD *)(v9 + 8))-- == 1 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_15;
            }
            sub_15D7BC0(v10, v9);
            ++v7;
          }
          while ( v7 < v8 );
LABEL_15:
          v7 = (__int64 *)v1[2];
          if ( v7 )
LABEL_16:
            sub_186B220(v7 - 1);
        }
        v1 += 9;
      }
      while ( v1 != v4 );
      v1 = (_QWORD *)*a1;
    }
    sub_186B220(v1 - 1);
  }
}

