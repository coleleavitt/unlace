void __fastcall sub_376420(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 24 * v2;
      do
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v1 + 8);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v1 + 16);
            if ( (*(_DWORD *)(v5 + 8))-- == 1 )
              break;
          }
          v1 += 24;
          if ( v4 == v1 )
            goto LABEL_8;
        }
        sub_15D7BC0(v6, v5);
        v1 += 24;
      }
      while ( v4 != v1 );
LABEL_8:
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

