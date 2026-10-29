void __fastcall sub_455720(_QWORD *a1)
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
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[11 * v2];
      do
      {
        v5 = (__int64 *)v1[10];
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
                v8 = v1[9];
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
          v5 = (__int64 *)v1[10];
          if ( v5 )
LABEL_12:
            sub_186B220(v5 - 1);
        }
        v10 = v1[6];
        if ( v10 )
        {
          v11 = v1[7];
          v9 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v11, v10);
        }
        v12 = v1[4];
        if ( v12 )
        {
          v13 = v1[5];
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v13, v12);
        }
        v14 = (__int64 *)v1[3];
        if ( v14 )
        {
          v15 = &v14[*((unsigned int *)v14 - 1)];
          if ( v14 >= v15 )
            goto LABEL_27;
          do
          {
            while ( 1 )
            {
              v16 = *v14;
              if ( *v14 )
              {
                v17 = v1[2];
                v9 = (*(_DWORD *)(v16 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v14 >= v15 )
                goto LABEL_26;
            }
            sub_15D7BC0(v17, v16);
            ++v14;
          }
          while ( v14 < v15 );
LABEL_26:
          v14 = (__int64 *)v1[3];
          if ( v14 )
LABEL_27:
            sub_186B220(v14 - 1);
        }
        v1 += 11;
      }
      while ( v1 != v4 );
      v1 = (_QWORD *)*a1;
    }
    sub_186B220(v1 - 1);
  }
}

