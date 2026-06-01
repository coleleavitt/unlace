void __fastcall sub_400A10(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( v2 )
    {
      sub_2B4F40(v2 + 6);
      sub_3FCDF0(v2[4], v2[5]);
      v5 = (_QWORD *)v2[2];
      if ( v5 )
      {
        v6 = *((unsigned int *)v5 - 1);
        if ( (_DWORD)v6 )
        {
          v7 = &v5[7 * v6];
          do
          {
            while ( 1 )
            {
              sub_2B4F40(v5 + 5);
              v8 = v5[2];
              if ( v8 )
              {
                v9 = v5[3];
                if ( (*(_DWORD *)(v8 + 8))-- == 1 )
                  break;
              }
              v5 += 7;
              if ( v5 == v7 )
                goto LABEL_10;
            }
            sub_15D7BC0(v9, v8);
            v5 += 7;
          }
          while ( v5 != v7 );
LABEL_10:
          v5 = (_QWORD *)v2[2];
        }
        sub_186B220(v5 - 1);
      }
      sub_186B220(v2);
    }
    *a1 = a2;
  }
}

