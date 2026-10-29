void __fastcall sub_23A620(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int *v10; // rsi
  __int64 v11; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 48 * v2;
      do
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v1 + 32);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v1 + 40);
            v7 = (*(_DWORD *)(v5 + 8))-- == 1;
            if ( v7 )
              sub_15D7BC0(v6, v5);
          }
          v8 = *(_QWORD *)(v1 + 16);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v1 + 24);
            v7 = (*(_DWORD *)(v8 + 8))-- == 1;
            if ( v7 )
              sub_15D7BC0(v9, v8);
          }
          v10 = *(unsigned int **)v1;
          if ( !*(_QWORD *)v1 )
            break;
          v11 = *(_QWORD *)(v1 + 8);
          v1 += 48;
          sub_234C20((__int64 *)(v11 + 648), v10);
          if ( v4 == v1 )
          {
            v1 = *a1;
            goto LABEL_13;
          }
        }
        v1 += 48;
      }
      while ( v4 != v1 );
      v1 = *a1;
    }
LABEL_13:
    sub_186B220((void *)(v1 - 8));
  }
}

