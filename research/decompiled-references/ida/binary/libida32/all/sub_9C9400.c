void __fastcall sub_9C9400(__int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 8;
        v4 = (_QWORD *)v3[3];
        if ( v4 == v3 + 5 )
          break;
        operator delete(v4);
        if ( v3 == v2 )
          goto LABEL_4;
      }
    }
    while ( v3 != v2 );
LABEL_4:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}

