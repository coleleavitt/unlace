void __fastcall sub_41C860(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  void *v16; // rdi

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( (_QWORD *)v3 == v2 )
        goto LABEL_30;
    }
    while ( (_QWORD *)v3 != v2 )
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[6];
        if ( v5 )
        {
          v6 = v4[7];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v8 = (__int64 *)v4[5];
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 >= v9 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v10 = *v8;
              if ( *v8 )
              {
                v11 = v4[4];
                v7 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v8 >= v9 )
                goto LABEL_17;
            }
            sub_15D7BC0(v11, v10);
            ++v8;
          }
          while ( v8 < v9 );
LABEL_17:
          v8 = (__int64 *)v4[5];
          if ( v8 )
LABEL_18:
            sub_186B220(v8 - 1);
        }
        v12 = v4[3];
        if ( v12 )
          sub_186B220((void *)(v12 - 8));
        v13 = v4[1];
        if ( v13 )
        {
          v14 = v4[2];
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v14, v13);
        }
        sub_186B220(v4);
      }
      v15 = v2 + 2;
      if ( (_QWORD *)v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v15;
        if ( *v15 > 1u )
          break;
        v15 += 2;
        if ( (_QWORD *)v3 == v15 )
          goto LABEL_30;
      }
    }
  }
LABEL_30:
  v16 = *(void **)(a1 + 24);
  if ( v16 )
    sub_186B220(v16);
  if ( *(_QWORD *)a1 )
    sub_186B220(*(void **)a1);
}

