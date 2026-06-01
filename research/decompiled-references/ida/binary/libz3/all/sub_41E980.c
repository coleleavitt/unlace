void __fastcall sub_41E980(_QWORD *a1)
{
  _QWORD *v1; // r13
  __int64 v2; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[7 * v2];
      do
      {
        v5 = (__int64 *)v1[6];
        if ( v5 )
        {
          v6 = &v5[*((unsigned int *)v5 - 1)];
          if ( v5 >= v6 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = v1[5];
                v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v5 >= v6 )
                goto LABEL_11;
            }
            sub_15D7BC0(v8, v7);
            ++v5;
          }
          while ( v5 < v6 );
LABEL_11:
          v5 = (__int64 *)v1[6];
          if ( v5 )
LABEL_12:
            sub_186B220(v5 - 1);
        }
        v10 = v1[2];
        if ( v10 )
        {
          v11 = v1[3];
          v9 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v11, v10);
        }
        v1 += 7;
      }
      while ( v1 != v4 );
      v1 = (_QWORD *)*a1;
    }
    sub_186B220(v1 - 1);
  }
}

