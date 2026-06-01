void __fastcall sub_919280(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  *a1 = &off_1C55CD0;
  v2 = a1[15];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = 16LL * (unsigned int)(v3 - 1);
      v5 = *(_QWORD *)(a1[1] + 104LL);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v2 + v4 + 8);
        if ( v6 && (v7 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v7) )
        {
          v4 -= 16;
          sub_15D7BC0(v5, v6);
          if ( v4 == -16 )
            break;
        }
        else
        {
          v4 -= 16;
          if ( v4 == -16 )
            break;
        }
        v2 = a1[15];
      }
    }
  }
  v8 = a1[16];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[15];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (void *)a1[12];
  if ( v10 )
    sub_186B220(v10);
  v11 = (void *)a1[9];
  if ( v11 )
    sub_186B220(v11);
  v12 = (void *)a1[6];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[5];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[4];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[3];
          v7 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_28;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_28:
    v14 = (__int64 *)a1[4];
    if ( v14 )
LABEL_29:
      sub_186B220(v14 - 1);
  }
  operator delete(a1, 0x90u);
}

