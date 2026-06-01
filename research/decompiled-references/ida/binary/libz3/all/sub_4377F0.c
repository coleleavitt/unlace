void __fastcall sub_4377F0(__int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r13
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  void *v13; // rdi
  void *v14; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = &v2[2 * *(unsigned int *)(a1 + 16)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_25;
    }
    while ( v3 != v2 )
    {
      v4 = (__int64 *)v2[1];
      if ( v4 )
      {
        v5 = (__int64 *)v4[3];
        if ( v5 )
        {
          v6 = &v5[*((unsigned int *)v5 - 1)];
          if ( v5 >= v6 )
            goto LABEL_15;
          do
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = v4[2];
                v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v5 >= v6 )
                goto LABEL_14;
            }
            sub_15D7BC0(v8, v7);
            ++v5;
          }
          while ( v5 < v6 );
LABEL_14:
          v5 = (__int64 *)v4[3];
          if ( v5 )
LABEL_15:
            sub_186B220(v5 - 1);
        }
        v10 = *v4;
        if ( *v4 )
        {
          v11 = v4[1];
          v9 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v11, v10);
        }
        sub_186B220(v4);
      }
      v12 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v12;
        if ( *v12 > 1u )
          break;
        v12 += 2;
        if ( v3 == v12 )
          goto LABEL_25;
      }
    }
  }
LABEL_25:
  v13 = *(void **)(a1 + 32);
  if ( v13 )
    sub_186B220(v13);
  v14 = *(void **)(a1 + 8);
  if ( v14 )
    sub_186B220(v14);
}

