__int64 (__fastcall **__fastcall sub_CCCBC0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 *v2; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = &off_1C74C90;
  v2 = (__int64 *)a1[5];
  *a1 = &off_1C74C90;
  if ( v2 )
  {
    v4 = &v2[2 * *((unsigned int *)v2 - 1)];
    if ( v4 == v2 )
      return (__int64 (__fastcall **)())sub_186B220(v2 - 1);
    do
    {
      while ( 1 )
      {
        v7 = *v2;
        v8 = a1[4];
        if ( *v2 )
        {
          v6 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v6 )
          {
            result = (__int64 (__fastcall **)())sub_15D7BC0(v8, v7);
            v8 = a1[4];
          }
        }
        v5 = v2[1];
        if ( v5 )
        {
          v6 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v6 )
            break;
        }
        v2 += 2;
        if ( v4 == v2 )
          goto LABEL_11;
      }
      result = (__int64 (__fastcall **)())sub_15D7BC0(v8, v5);
      v2 += 2;
    }
    while ( v4 != v2 );
LABEL_11:
    v2 = (__int64 *)a1[5];
    if ( v2 )
      return (__int64 (__fastcall **)())sub_186B220(v2 - 1);
  }
  return result;
}

