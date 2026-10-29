void __fastcall sub_784720(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // r12
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = (__int64 *)a1[7];
  *a1 = &off_1C54648;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[4 * v3];
      do
      {
        v8 = v2[2];
        if ( v8 )
        {
          v9 = v2[3];
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v8);
        }
        v5 = *v2;
        if ( *v2 )
        {
          v6 = v2[1];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v2 += 4;
      }
      while ( v2 != v4 );
      v2 = (__int64 *)a1[7];
    }
    sub_186B220(v2 - 1);
  }
  v10 = a1[5];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[4];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x40u);
}

