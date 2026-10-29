__int64 __fastcall sub_3B3080(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  _QWORD *v6; // rbp
  void *v8; // rdi

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 - 4);
    v5 = v4 + 8 * result;
    if ( v4 >= v5 )
      return sub_186B220((void *)(v4 - 8));
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD **)v4;
        if ( (*(_DWORD *)(*(_QWORD *)v4 + 32LL))-- == 1 )
          break;
        v4 += 8LL;
        if ( v4 >= v5 )
          goto LABEL_11;
      }
      v8 = (void *)v6[9];
      if ( v8 )
        sub_186B220(v8);
      v4 += 8LL;
      sub_3B2C00((__int64)(v6 + 2));
      result = sub_186B220(v6);
    }
    while ( v4 < v5 );
LABEL_11:
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
      return sub_186B220((void *)(v4 - 8));
  }
  return result;
}

