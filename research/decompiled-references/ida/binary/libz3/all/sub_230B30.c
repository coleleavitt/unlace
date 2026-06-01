__int64 (__fastcall **__fastcall sub_230B30(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rdi

  result = &off_1C4C1A8;
  *a1 = &off_1C4C1A8;
  v3 = a1[4];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[3];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = &v4[3 * v5];
      do
      {
        v9 = v4[1];
        v10 = *v4;
        if ( v9 )
        {
          v8 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v8 )
          {
            sub_15D7BC0(v10, v9);
            v10 = *v4;
          }
        }
        v7 = v4[2];
        if ( v7 )
        {
          v8 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v10, v7);
        }
        v4 += 3;
      }
      while ( v4 != v6 );
      v4 = (__int64 *)a1[3];
    }
    return (__int64 (__fastcall **)())sub_186B220(v4 - 1);
  }
  return result;
}

