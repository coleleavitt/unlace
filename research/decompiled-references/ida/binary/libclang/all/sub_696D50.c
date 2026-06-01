__int64 __fastcall sub_696D50(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  char *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rdi

  v2 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)a1 = &off_49F5010;
  v3 = &v2[13 * *(unsigned int *)(a1 + 24)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*(v3 - 3);
      v5 = (_QWORD *)*(v3 - 2);
      v3 -= 13;
      v6 = v4;
      if ( v5 != v4 )
      {
        do
        {
          v7 = (char *)v6[3];
          if ( v7 != (char *)(v6 + 5) )
            operator delete(v7, v6[5] + 1LL);
          v6 += 8;
        }
        while ( v5 != v6 );
        v4 = (_QWORD *)v3[10];
      }
      if ( v4 )
        operator delete(v4, v3[12] - (_QWORD)v4);
      v8 = (void *)v3[7];
      if ( v8 )
        operator delete(v8, v3[9] - (_QWORD)v8);
      v9 = (_QWORD *)v3[3];
      if ( v9 != v3 + 5 )
        operator delete(v9, v3[5] + 1LL);
    }
    while ( v2 != v3 );
    v3 = *(_QWORD **)(a1 + 16);
  }
  if ( v3 != (_QWORD *)(a1 + 32) )
    free(v3);
  return sub_C65020(a1);
}

