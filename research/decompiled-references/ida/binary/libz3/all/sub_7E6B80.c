void __fastcall sub_7E6B80(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // r13
  __int64 v4; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi

  v2 = (__int64 *)a1[2];
  if ( v2 )
  {
    v3 = &v2[2 * *((unsigned int *)v2 - 1)];
    if ( v3 != v2 )
    {
      v4 = a2[1];
      do
      {
        while ( 1 )
        {
          v14 = *v2;
          v15 = 2 * *((_DWORD *)v2 + 2);
          if ( *v2 )
            ++*(_DWORD *)(v14 + 8);
          v16 = (__int64 *)(8LL * v15 + v4);
          v17 = *v16;
          if ( *v16 )
          {
            v18 = *a2;
            v13 = (*(_DWORD *)(v17 + 8))-- == 1;
            if ( v13 )
            {
              sub_15D7BC0(v18, v17);
              v16 = (__int64 *)(a2[1] + 8LL * v15);
            }
          }
          *v16 = v14;
          v7 = v15 ^ 1;
          v8 = sub_15EC2C0(*a1, *v2);
          v9 = v8;
          if ( v8 )
            ++*(_DWORD *)(v8 + 8);
          v4 = a2[1];
          v10 = 8LL * v7;
          v11 = *(_QWORD *)(v4 + v10);
          if ( v11 )
          {
            v12 = *a2;
            v13 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v13 )
              break;
          }
          v2 += 2;
          *(_QWORD *)(v4 + v10) = v8;
          if ( v3 == v2 )
            return;
        }
        sub_15D7BC0(v12, v11);
        v4 = a2[1];
        v2 += 2;
        *(_QWORD *)(v4 + v10) = v9;
      }
      while ( v3 != v2 );
    }
  }
}

