__int64 (__fastcall **__fastcall sub_3EC1A0(_QWORD *a1))()
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v11; // rdi

  v2 = (__int64 *)a1[16];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[15];
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[16];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[14];
  a1[8] = &off_1C62200;
  if ( v7 )
    sub_186B220(v7);
  v8 = (void *)a1[11];
  if ( v8 )
    sub_186B220(v8);
  v9 = (void *)a1[7];
  result = &off_1C62200;
  a1[1] = &off_1C62200;
  if ( v9 )
    result = (__int64 (__fastcall **)())sub_186B220(v9);
  v11 = (void *)a1[4];
  if ( v11 )
    return (__int64 (__fastcall **)())sub_186B220(v11);
  return result;
}

