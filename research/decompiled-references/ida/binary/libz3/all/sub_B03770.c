__int64 __fastcall sub_B03770(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  void *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdx
  void *v11; // r14
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  _QWORD *v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-50h]
  unsigned int i; // [rsp+14h] [rbp-44h]

  v1 = *(_QWORD *)(a1 + 64);
  for ( i = 0; v1; v1 = *(_QWORD *)(a1 + 64) )
  {
    if ( i >= *(_DWORD *)(v1 - 4) )
      break;
    v2 = 48LL * i + v1;
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 )
    {
      if ( *v3 )
        sub_186B220((void *)(*v3 - 8LL));
      sub_186B220(v3);
    }
    v4 = *(_QWORD **)(v2 + 8);
    if ( v4 )
    {
      if ( *v4 )
        sub_186B220((void *)(*v4 - 8LL));
      sub_186B220(v4);
    }
    v5 = *(_QWORD **)(v2 + 16);
    if ( v5 )
    {
      v6 = v5 + 10;
      sub_182EF00(v5[23], v5 + 24);
      sub_182EF00(v5[20], v5 + 21);
      sub_182EF00(v5[16], v5 + 17);
      sub_182EF00(v5[12], v5 + 13);
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v6 - 2);
        sub_182CBA0(v7, v6);
        v8 = *(v6 - 3);
        v9 = v8;
        if ( v8 )
        {
          v10 = *(unsigned int *)(v8 - 4);
          if ( (_DWORD)v10 )
          {
            v22 = v8 + 40 * v10;
            do
            {
              v11 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v8 + 8);
              v12 = v8 + 24;
              v8 += 40;
              sub_182CBA0(v11, v12);
            }
            while ( v22 != v8 );
            v9 = *(v6 - 3);
          }
          sub_186B220((void *)(v9 - 8));
        }
        v6 -= 5;
      }
      while ( v6 != v5 );
      sub_186B220(v6);
    }
    v13 = *(_QWORD **)(v2 + 24);
    if ( v13 )
    {
      if ( *v13 )
        sub_186B220((void *)(*v13 - 8LL));
      sub_186B220(v13);
    }
    v14 = *(_QWORD **)(v2 + 32);
    if ( v14 )
    {
      if ( *v14 )
        sub_186B220((void *)(*v14 - 8LL));
      sub_186B220(v14);
    }
    v15 = *(_QWORD **)(v2 + 40);
    if ( v15 )
    {
      v16 = v15[1];
      if ( v16 )
        sub_186B220((void *)(v16 - 8));
      sub_186B220(v15);
    }
    ++i;
  }
  v17 = *(_QWORD *)(a1 + 688);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v18 = *(_QWORD *)(a1 + 696);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = *(_QWORD *)(a1 + 816);
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v20 = *(_QWORD *)(a1 + 824);
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  return a1;
}

