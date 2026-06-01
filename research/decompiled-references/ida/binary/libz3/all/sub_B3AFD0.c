__int64 (__fastcall **__fastcall sub_B3AFD0(_QWORD *a1))()
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v7; // rdi
  __int64 v8; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v10; // rdi

  v2 = (__int64 *)a1[10];
  *a1 = off_1C57010;
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
          v5 = a1[9];
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
    v2 = (__int64 *)a1[10];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[6];
  if ( v7 )
    sub_186B220(v7);
  v8 = a1[5];
  result = off_1C56ED0;
  *a1 = off_1C56ED0;
  if ( v8 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v8 - 8));
  v10 = a1[4];
  if ( v10 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v10 - 8));
  return result;
}

