void __fastcall sub_352710(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v4; // r12
  void *v5; // r14
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[5 * v2];
      do
      {
        while ( 1 )
        {
          v5 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v1 + 1);
          sub_182CBA0(v5, v1 + 3);
          if ( !*v1 )
            break;
          v6 = (void *)(*v1 - 8LL);
          v1 += 5;
          sub_186B220(v6);
          if ( v1 == v4 )
          {
            v1 = *a1;
            goto LABEL_7;
          }
        }
        v1 += 5;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
LABEL_7:
    sub_186B220(v1 - 1);
  }
}

