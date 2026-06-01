__int64 (__fastcall **__fastcall sub_CD0360(_QWORD *a1))()
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v7; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = (__int64 *)a1[6];
  *a1 = &off_1C59570;
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
          v5 = a1[5];
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
    v2 = (__int64 *)a1[6];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[2];
  result = &off_1C59548;
  *a1 = &off_1C59548;
  if ( v7 )
    return (__int64 (__fastcall **)())sub_186B220(v7);
  return result;
}

