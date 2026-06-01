void __fastcall sub_1BC8280(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  char *v4; // rdi
  char *v5; // rdi
  char *v6; // rdi
  char *v7; // rdi
  char *v8; // rdi
  char *v9; // rdi

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + 648LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      v3 -= 81;
      v4 = (char *)v3[68];
      if ( v4 != (char *)(v3 + 70) )
        free(v4);
      operator delete(v3[65], 8LL * *((unsigned int *)v3 + 134), 8);
      v5 = (char *)v3[55];
      if ( v5 != (char *)(v3 + 57) )
        free(v5);
      operator delete(v3[52], 8LL * *((unsigned int *)v3 + 108), 8);
      v6 = (char *)v3[42];
      if ( v6 != (char *)(v3 + 44) )
        free(v6);
      operator delete(v3[39], 8LL * *((unsigned int *)v3 + 82), 8);
      v7 = (char *)v3[29];
      if ( v7 != (char *)(v3 + 31) )
        free(v7);
      operator delete(v3[26], 8LL * *((unsigned int *)v3 + 56), 8);
      v8 = (char *)v3[16];
      if ( v8 != (char *)(v3 + 18) )
        free(v8);
      operator delete(v3[13], 8LL * *((unsigned int *)v3 + 30), 8);
      v9 = (char *)v3[3];
      if ( v9 != (char *)(v3 + 5) )
        free(v9);
      operator delete(*v3, 8LL * *((unsigned int *)v3 + 4), 8);
    }
    while ( v3 != v2 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}
