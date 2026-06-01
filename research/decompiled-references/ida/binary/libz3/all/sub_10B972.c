void __fastcall sub_10B972(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbp
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rdi
  void (__fastcall ***v9)(void *); // rbp

  v1 = 0;
  v2 = (__int64 *)a1[13];
  if ( v2 )
    v1 = *((unsigned int *)v2 - 1);
  v4 = &v2[v1];
  while ( v2 < v4 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v6 = a1[12];
      v7 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v7 )
        sub_15D7BC0(v6, v5);
    }
    ++v2;
  }
  v8 = a1[13];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void (__fastcall ***)(void *))a1[7];
  if ( v9 )
  {
    v7 = (*((_DWORD *)v9 + 2))-- == 1;
    if ( v7 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  sub_14B63F0(a1 + 5);
  sub_18572D0(a1 + 1);
}

