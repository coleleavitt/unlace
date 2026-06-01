void __fastcall sub_2224700(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v3; // rdi
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi

  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    v1 = *(_QWORD **)a1;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  else
  {
    v3 = *(void **)(a1 + 16);
    if ( v3 != (void *)(a1 + 40) )
      free(v3);
    v4 = *(_QWORD **)a1;
    v5 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 10;
          v6 = (_QWORD *)v5[1];
          if ( v6 == v5 + 3 )
            break;
          free(v6);
          if ( v4 == v5 )
            goto LABEL_10;
        }
      }
      while ( v4 != v5 );
LABEL_10:
      v5 = *(_QWORD **)a1;
    }
    if ( v5 != (_QWORD *)(a1 + 16) )
      free(v5);
  }
}
