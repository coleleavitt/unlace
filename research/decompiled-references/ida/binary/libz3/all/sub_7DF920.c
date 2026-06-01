__int64 __fastcall sub_7DF920(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // r13
  __int64 result; // rax
  __int64 **v4; // r12
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 *v14; // rbx
  __int64 *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // r14
  __int64 *v21; // rbx
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi

  v1 = 0x7FFFFFFF8LL;
  v2 = *(__int64 **)(a1 + 8);
  result = *v2;
  if ( *v2 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v4 = *(__int64 ***)(result + v1);
  if ( v4 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 *)v5[4];
      if ( v6 )
      {
        v7 = &v6[*((unsigned int *)v6 - 1)];
        if ( v6 >= v7 )
          goto LABEL_13;
        do
        {
          while ( 1 )
          {
            v8 = *v6;
            if ( *v6 )
            {
              v9 = v5[3];
              v10 = (*(_DWORD *)(v8 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v6 >= v7 )
              goto LABEL_12;
          }
          sub_15D7BC0(v9, v8);
          ++v6;
        }
        while ( v6 < v7 );
LABEL_12:
        v6 = (__int64 *)v5[4];
        if ( v6 )
LABEL_13:
          sub_186B220(v6 - 1);
      }
      v11 = *v5;
      if ( *v5 )
      {
        v12 = v5[1];
        v10 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v12, v11);
      }
      sub_186B220(v5);
    }
    v13 = v4[1];
    if ( v13 )
    {
      v14 = (__int64 *)v13[4];
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
              v17 = v13[3];
              v10 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v10 )
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
        v14 = (__int64 *)v13[4];
        if ( v14 )
LABEL_27:
          sub_186B220(v14 - 1);
      }
      v18 = *v13;
      if ( *v13 )
      {
        v19 = v13[1];
        v10 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v19, v18);
      }
      sub_186B220(v13);
    }
    v20 = v4[2];
    if ( v20 )
    {
      v21 = (__int64 *)v20[1];
      if ( v21 )
      {
        v22 = &v21[*((unsigned int *)v21 - 1)];
        if ( v21 >= v22 )
          goto LABEL_41;
        do
        {
          while ( 1 )
          {
            v23 = *v21;
            if ( *v21 )
            {
              v24 = *v20;
              v10 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v21 >= v22 )
              goto LABEL_40;
          }
          sub_15D7BC0(v24, v23);
          ++v21;
        }
        while ( v21 < v22 );
LABEL_40:
        v21 = (__int64 *)v20[1];
        if ( v21 )
LABEL_41:
          sub_186B220(v21 - 1);
      }
      sub_186B220(v20);
    }
    sub_186B220(v4);
    result = *v2;
    *(_QWORD *)(*v2 + v1) = 0;
  }
  --*(_DWORD *)(result - 4);
  return result;
}

