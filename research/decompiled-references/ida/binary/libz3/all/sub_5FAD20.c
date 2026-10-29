__int64 __fastcall sub_5FAD20(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = (__int64)&off_1C52768;
  *a1 = &off_1C52768;
  v3 = (void *)a1[12];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = (void *)a1[9];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = (__int64 *)a1[8];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      return sub_186B220(v5 - 1);
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[7];
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = (__int64 *)a1[8];
    if ( v5 )
      return sub_186B220(v5 - 1);
  }
  return result;
}

