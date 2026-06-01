__int64 __fastcall sub_7D8660(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi
  void *v9; // rdi

  result = (__int64)&off_1C54950;
  v3 = (__int64 *)a1[9];
  *a1 = &off_1C54950;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[8];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[9];
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[5];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = (void *)a1[2];
  if ( v9 )
    return sub_186B220(v9);
  return result;
}

