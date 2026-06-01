__int64 __fastcall sub_235330(__int64 a1)
{
  __int64 v1; // r12
  __int64 *v2; // r13
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // r14
  __int64 *v19; // r14
  __int64 *v20; // rdi
  void *v21; // rbx

  v1 = 0x7FFFFFFF8LL;
  v2 = *(__int64 **)(a1 + 8);
  result = *v2;
  if ( *v2 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v4 = *(_QWORD **)(result + v1);
  if ( v4 )
  {
    v5 = v4[5];
    if ( v5 )
    {
      v6 = *(unsigned int *)(v5 - 4);
      if ( (_DWORD)v6 )
      {
        v7 = v5 + 48 * v6;
        do
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(v5 + 32);
            if ( v8 )
            {
              v9 = *(_QWORD *)(v5 + 40);
              v10 = (*(_DWORD *)(v8 + 8))-- == 1;
              if ( v10 )
                sub_15D7BC0(v9, v8);
            }
            v11 = *(_QWORD *)(v5 + 16);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v5 + 24);
              v10 = (*(_DWORD *)(v11 + 8))-- == 1;
              if ( v10 )
                sub_15D7BC0(v12, v11);
            }
            v13 = *(unsigned int **)v5;
            if ( !*(_QWORD *)v5 )
              break;
            v14 = *(_QWORD *)(v5 + 8);
            v5 += 48;
            sub_234C20((__int64 *)(v14 + 648), v13);
            if ( v5 == v7 )
              goto LABEL_15;
          }
          v5 += 48;
        }
        while ( v5 != v7 );
LABEL_15:
        v5 = v4[5];
      }
      sub_186B220((void *)(v5 - 8));
    }
    v15 = v4[3];
    if ( v15 && (v16 = v4[4], v10 = *(_DWORD *)(v15 + 8) == 1, --*(_DWORD *)(v15 + 8), v10) )
    {
      sub_15D7BC0(v16, v15);
      v17 = (__int64 *)v4[2];
      if ( v17 )
        goto LABEL_20;
    }
    else
    {
      v17 = (__int64 *)v4[2];
      if ( v17 )
      {
LABEL_20:
        v18 = *((unsigned int *)v17 - 1);
        if ( (_DWORD)v18 )
        {
          v19 = &v17[4 * v18];
          do
          {
            v20 = v17;
            v17 += 4;
            sub_234F80(v20);
          }
          while ( v17 != v19 );
          v17 = (__int64 *)v4[2];
        }
        sub_186B220(v17 - 1);
      }
    }
    v21 = (void *)v4[1];
    if ( v21 )
    {
      sub_1695230(v4[1]);
      sub_186B220(v21);
    }
    sub_186B220(v4);
    result = *v2;
    *(_QWORD *)(*v2 + v1) = 0;
  }
  --*(_DWORD *)(result - 4);
  return result;
}

