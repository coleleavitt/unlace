void __fastcall sub_230DA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi

  *a1 = &off_1C4C1A8;
  v2 = a1[4];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[3];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[3 * v4];
      do
      {
        v8 = v3[1];
        v9 = *v3;
        if ( v8 )
        {
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
          {
            sub_15D7BC0(v9, v8);
            v9 = *v3;
          }
        }
        v6 = v3[2];
        if ( v6 )
        {
          v7 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v6);
        }
        v3 += 3;
      }
      while ( v3 != v5 );
      v3 = (__int64 *)a1[3];
    }
    sub_186B220(v3 - 1);
  }
  operator delete(a1, 0x28u);
}

