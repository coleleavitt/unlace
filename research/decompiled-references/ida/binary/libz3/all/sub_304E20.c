void __fastcall sub_304E20(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 *v4; // r12
  void *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[7 * v2];
      do
      {
        while ( 1 )
        {
          v5 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v1 + 2);
          sub_182CBA0(v5, v1 + 4);
          v6 = *v1;
          if ( *v1 )
          {
            v7 = v1[1];
            if ( (*(_DWORD *)(v6 + 8))-- == 1 )
              break;
          }
          v1 += 7;
          if ( v1 == v4 )
            goto LABEL_8;
        }
        sub_15D7BC0(v7, v6);
        v1 += 7;
      }
      while ( v1 != v4 );
LABEL_8:
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

