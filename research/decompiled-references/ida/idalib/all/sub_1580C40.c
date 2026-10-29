void __fastcall sub_1580C40(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void *v5; // rdi
  void **v6; // rbx
  void **v7; // r12
  __int64 v8; // rax

  if ( a1 <= a2 && a2 <= a1 + 14848 )
  {
    v8 = *(unsigned int *)(a1 + 14976);
    *(_DWORD *)(a1 + 14976) = v8 + 1;
    *(_QWORD *)(a1 + 8 * v8 + 14848) = a2;
  }
  else if ( a2 )
  {
    v2 = *(_QWORD **)(a2 + 528);
    v3 = &v2[8 * (unsigned __int64)*(unsigned int *)(a2 + 536)];
    if ( v2 != v3 )
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
          if ( v2 == v3 )
            goto LABEL_7;
        }
      }
      while ( v2 != v3 );
LABEL_7:
      v3 = *(_QWORD **)(a2 + 528);
    }
    if ( v3 != (_QWORD *)(a2 + 544) )
      free(v3);
    v5 = *(void **)(a2 + 416);
    if ( v5 != (void *)(a2 + 432) )
      free(v5);
    v6 = (void **)(a2 + 384);
    v7 = (void **)(a2 + 64);
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 -= 4;
        if ( v7 == v6 )
          goto LABEL_15;
      }
      v6 -= 4;
    }
    while ( v7 != v6 );
LABEL_15:
    operator delete((void *)a2, 0x3A0u);
  }
}
