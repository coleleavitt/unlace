__int64 __fastcall sub_6C1660(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdi

  v2 = *(void **)(a1 + 48);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    v5 = (__int64 *)v4[12];
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 >= v6 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 )
          {
            v8 = v4[11];
            if ( (*(_DWORD *)(v7 + 8))-- == 1 )
              break;
          }
          if ( ++v5 >= v6 )
            goto LABEL_11;
        }
        sub_15D7BC0(v8, v7);
        ++v5;
      }
      while ( v5 < v6 );
LABEL_11:
      v5 = (__int64 *)v4[12];
      if ( v5 )
LABEL_12:
        sub_186B220(v5 - 1);
    }
    v10 = v4[10];
    if ( v10 )
      sub_186B220((void *)(v10 - 8));
    return sub_186B220(v4);
  }
  return result;
}

