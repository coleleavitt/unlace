void __fastcall sub_8EAAE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int *v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rdi

  v1 = *(_QWORD *)(a1 + 8928);
  if ( !v1 )
    return;
  v3 = *(unsigned int *)(v1 - 4);
  v4 = v1 + 16 * v3;
  if ( v4 != v1 )
  {
    do
    {
      v5 = *(unsigned int **)v1;
      if ( *(_QWORD *)v1 )
      {
        if ( *((char *)v5 + 7) >= 0 )
          sub_8E8AA0((_QWORD *)a1, *(unsigned int **)v1);
        sub_AA3E20(v5, *(_QWORD *)(a1 + 104));
        ++*(_DWORD *)(a1 + 60);
      }
      v1 += 16;
    }
    while ( v4 != v1 );
    v1 = *(_QWORD *)(a1 + 8928);
    if ( !v1 )
      return;
    v3 = *(unsigned int *)(v1 - 4);
  }
  if ( (_DWORD)v3 )
  {
    v6 = v1 + 16 * v3;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v1 + 8);
        if ( !v7 )
          break;
        v1 += 16;
        sub_186B220((void *)(v7 - 8));
        if ( v1 == v6 )
        {
          v1 = *(_QWORD *)(a1 + 8928);
          goto LABEL_15;
        }
      }
      v1 += 16;
    }
    while ( v6 != v1 );
    v1 = *(_QWORD *)(a1 + 8928);
  }
LABEL_15:
  *(_DWORD *)(v1 - 4) = 0;
}

