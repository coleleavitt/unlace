void __fastcall sub_F7AA0(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned int *v4; // rax
  unsigned __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  if ( a2 )
  {
    v3 = a1[1];
    if ( v3 < a1[3] )
    {
      v4 = (unsigned int *)(*a1 + 12 * v3);
      v5 = v4[1];
      v6 = v4[1];
      if ( a2 > v5 )
      {
        while ( 1 )
        {
          v8 = a2 - v5;
          v9 = v4[2];
          v4[1] = 0;
          if ( v9 > v8 )
            break;
          v4[2] = 0;
          v7 = a1[1] + 1LL;
          a1[1] = v7;
          a2 = v8 - v9;
          if ( !a2 || v7 >= a1[3] )
            return;
          v4 = (unsigned int *)(*a1 + 12 * v7);
          v5 = v4[1];
          v6 = v4[1];
          if ( v5 >= a2 )
            goto LABEL_14;
        }
        v4[2] = v9 - v8;
        if ( (int)v9 - (int)v8 < a3 )
        {
          v10 = a1[1] + 1LL;
          if ( v10 < a1[3] )
          {
            v4[4] += v9 - v8;
            v10 = a1[1] + 1LL;
          }
          a1[1] = v10;
        }
      }
      else
      {
LABEL_14:
        v4[1] = v6 - a2;
      }
    }
  }
}

