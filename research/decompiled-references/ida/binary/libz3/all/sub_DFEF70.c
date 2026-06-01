void __fastcall sub_DFEF70(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  void (__fastcall ***v4)(void *); // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi

  v2 = (void (__fastcall ***)(void *))a1[110];
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 12))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
    a1[110] = 0;
  }
  v4 = (void (__fastcall ***)(void *))a1[108];
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v3 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
    a1[108] = 0;
    sub_DFED30(a1);
  }
  if ( a1[37] )
  {
    v5 = a1[95];
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 - 4) )
        sub_DFD590((__int64)a1, 0);
    }
  }
  v6 = a1[106];
  if ( v6 )
  {
    v7 = v6 + 24LL * *(unsigned int *)(v6 - 4);
    if ( v7 != v6 )
    {
      while ( 1 )
      {
        v8 = a1[108];
        v6 += 24;
        *(_DWORD *)(v6 - 4) = 0;
        if ( !v8 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
        if ( v7 == v6 )
          return;
      }
      if ( v7 != v6 )
      {
        if ( (((_BYTE)v7 - (_BYTE)v6) & 8) == 0 || (*(_DWORD *)(v6 + 20) = 0, v6 += 24, v7 != v6) )
        {
          do
          {
            *(_DWORD *)(v6 + 20) = 0;
            v6 += 48;
            *(_DWORD *)(v6 - 4) = 0;
          }
          while ( v7 != v6 );
        }
      }
    }
  }
}

