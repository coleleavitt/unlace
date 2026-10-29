void __fastcall sub_2FDBC0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // r13
  void *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  void *v8; // r14
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = &v1[13 * v2];
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 6);
        sub_182CBA0(v4, v1 + 8);
        v5 = v1[5];
        if ( v5 )
        {
          v6 = *(unsigned int *)(v5 - 4);
          if ( (_DWORD)v6 )
          {
            v7 = v5 + 32 * v6;
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v5);
              v9 = v5 + 16;
              v5 += 32;
              sub_182CBA0(v8, v9);
            }
            while ( v5 != v7 );
            v5 = v1[5];
          }
          sub_186B220((void *)(v5 - 8));
        }
        v10 = (__int64 *)v1[4];
        if ( v10 )
        {
          v11 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v11 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v12 = *v10;
              if ( *v10 )
              {
                v13 = v1[3];
                v14 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( ++v10 >= v11 )
                goto LABEL_17;
            }
            sub_15D7BC0(v13, v12);
            ++v10;
          }
          while ( v10 < v11 );
LABEL_17:
          v10 = (__int64 *)v1[4];
          if ( v10 )
LABEL_18:
            sub_186B220(v10 - 1);
        }
        v15 = v1[1];
        if ( v15 )
        {
          v16 = v1[2];
          v14 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v16, v15);
        }
        v1 += 13;
      }
      while ( v3 != v1 );
      v1 = (_QWORD *)*a1;
    }
    sub_186B220(v1 - 1);
  }
}

