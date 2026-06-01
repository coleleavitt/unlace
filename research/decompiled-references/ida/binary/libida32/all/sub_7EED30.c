unsigned int *__fastcall sub_7EED30(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int *v5; // rbx
  char v6; // al
  __int64 v7; // r12

  while ( 1 )
  {
    v4 = sub_79E220(a1, a2, a3);
    v5 = (unsigned int *)v4;
    if ( !v4 )
      break;
    v6 = *(_BYTE *)(v4 + 4);
    if ( v6 != 12 && v6 != 24 )
      break;
    v7 = sub_79E760(a1, v5);
    if ( !v7 )
      break;
    qfree(v5);
    sub_7EFCE0(a1, v7);
    *(_QWORD *)(a3 + 8) = 0;
  }
  return v5;
}

