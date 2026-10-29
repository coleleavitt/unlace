void __fastcall sub_696CC0(__int64 a1)
{
  unsigned int *v1; // r12
  unsigned int *v2; // rbp
  unsigned int *v3; // rbx
  __int64 v4; // rdi

  v1 = *(unsigned int **)(a1 + 40);
  if ( v1 )
  {
    v2 = *(unsigned int **)v1;
    v3 = (unsigned int *)(*(_QWORD *)v1 + 8LL * v1[2]);
    if ( *(unsigned int **)v1 != v3 )
    {
      do
      {
        while ( 1 )
        {
          v4 = *((_QWORD *)v3 - 1);
          v3 -= 2;
          if ( !v4 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          *(_QWORD *)v3 = 0;
          if ( v2 == v3 )
          {
            v3 = *(unsigned int **)v1;
            goto LABEL_6;
          }
        }
      }
      while ( v2 != v3 );
      v3 = *(unsigned int **)v1;
    }
LABEL_6:
    if ( v3 != v1 + 4 )
      free(v3);
    operator delete(v1, 0x50u);
  }
}

