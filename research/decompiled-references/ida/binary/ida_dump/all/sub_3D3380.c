__int64 __fastcall sub_3D3380(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rbx
  int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v4 = a2;
  v5 = a1[262];
  v19 = a2;
  if ( a2 < 0 )
  {
    v16 = (_QWORD *)a1[261];
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_2:
    while ( v3 >= v5 )
    {
      v7 = a1[263];
      if ( v7 >= v5 + 1 )
      {
        v6 = a1[261];
      }
      else
      {
        v8 = qvector_reserve();
        v9 = a1[262];
        v10 = a1[263];
        a1[263] = v7;
        v11 = (__int64 *)a1[261];
        v6 = v8;
        v12 = v9 - 1;
        if ( v12 >= 0 )
        {
          v13 = v8;
          do
          {
            v14 = *v11;
            v13 += 8;
            ++v11;
            *(_QWORD *)(v13 - 8) = v14;
          }
          while ( v12-- != 0 );
        }
        qfree();
        a1[261] = v6;
        a1[263] = v10;
      }
      *(_QWORD *)(v6 + 8LL * a1[262]) = 0;
      v5 = a1[262] + 1LL;
      a1[262] = v5;
    }
    v16 = (_QWORD *)a1[261];
    if ( !v16[v19] )
      return (unsigned int)v4;
    v5 = a1[262];
LABEL_13:
    v17 = &v16[v5];
    if ( v16 != v17 )
    {
      v4 = 0;
      while ( *v16 )
      {
        ++v16;
        ++v4;
        if ( v17 == v16 )
        {
          v3 = v4;
          v19 = v4;
          goto LABEL_2;
        }
      }
      return (unsigned int)v4;
    }
    v19 = 0;
    v3 = 0;
    v4 = 0;
  }
}
