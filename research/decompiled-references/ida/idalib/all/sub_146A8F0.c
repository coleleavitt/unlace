void __fastcall sub_146A8F0(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // rbx
  void **v3; // r12

  v1 = *(_QWORD **)(a1 + 24);
  v2 = &v1[2 * *(unsigned int *)(a1 + 32)];
  *(_QWORD *)a1 = &off_2BB3280;
  if ( v1 != v2 )
  {
    do
    {
      v2 -= 2;
      v3 = (void **)v2[1];
      if ( v3 )
      {
        if ( *v3 != v3 + 2 )
          free(*v3);
        operator delete(v3, 0x70u);
      }
    }
    while ( v1 != v2 );
    v2 = *(_QWORD **)(a1 + 24);
  }
  if ( v2 != (_QWORD *)(a1 + 40) )
    free(v2);
}
