void __fastcall sub_DF67D0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  bool v5; // zf
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 *v9; // rax

  v3 = *a1;
  v4 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 7) != 0 )
  {
    v6 = *(__int64 **)v4;
    v7 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( *(_QWORD *)v4 != v7 )
    {
      while ( (unsigned __int64)*v6 <= 1 )
      {
        if ( (__int64 *)v7 == ++v6 )
          goto LABEL_7;
      }
      if ( (__int64 *)v7 != v6 )
      {
        v8 = *v6;
        if ( *v6 )
          goto LABEL_20;
        while ( 1 )
        {
          v9 = v6 + 1;
          if ( (__int64 *)v7 == v6 + 1 )
            break;
          while ( 1 )
          {
            v8 = *v9;
            v6 = v9;
            if ( (unsigned __int64)*v9 > 1 )
              break;
            if ( (__int64 *)v7 == ++v9 )
              goto LABEL_7;
          }
          if ( (__int64 *)v7 == v9 )
            break;
LABEL_20:
          v5 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(a2, v8);
        }
      }
    }
LABEL_7:
    if ( v3 > 7 )
    {
      if ( *(_QWORD *)v4 )
        sub_186B220(*(void **)v4);
      sub_186B220((void *)v4);
    }
  }
  else if ( v3 > 7 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(a2, v4);
  }
  *a1 = 0;
}

