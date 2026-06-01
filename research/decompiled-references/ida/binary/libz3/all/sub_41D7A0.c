void __fastcall sub_41D7A0(__int64 **a1)
{
  __int64 *v1; // rbp
  _QWORD *v2; // r13
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    sub_2B4F40(v1 + 6);
    sub_3FCDF0(v1[4], v1[5]);
    v2 = (_QWORD *)v1[2];
    if ( v2 )
    {
      v3 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)v3 )
      {
        v4 = &v2[7 * v3];
        do
        {
          v5 = (__int64 *)v2[6];
          if ( v5 )
          {
            v6 = &v5[*((unsigned int *)v5 - 1)];
            if ( v5 >= v6 )
              goto LABEL_13;
            do
            {
              while ( 1 )
              {
                v7 = *v5;
                if ( *v5 )
                {
                  v8 = v2[5];
                  v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                  if ( v9 )
                    break;
                }
                if ( ++v5 >= v6 )
                  goto LABEL_12;
              }
              sub_15D7BC0(v8, v7);
              ++v5;
            }
            while ( v5 < v6 );
LABEL_12:
            v5 = (__int64 *)v2[6];
            if ( v5 )
LABEL_13:
              sub_186B220(v5 - 1);
          }
          v10 = v2[2];
          if ( v10 )
          {
            v11 = v2[3];
            v9 = (*(_DWORD *)(v10 + 8))-- == 1;
            if ( v9 )
              sub_15D7BC0(v11, v10);
          }
          v2 += 7;
        }
        while ( v2 != v4 );
        v2 = (_QWORD *)v1[2];
      }
      sub_186B220(v2 - 1);
    }
    sub_186B220(v1);
  }
}

