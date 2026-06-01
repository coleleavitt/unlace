void __fastcall sub_15C1160(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  void **v4; // rbp
  void **v5; // r13
  void *v6; // rdi

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)*v1;
    if ( *v1 )
    {
      do
      {
        v3 = (_QWORD *)*v2;
        v4 = (void **)(v2 + 2049);
        v5 = (void **)(v2 + 1);
        do
        {
          while ( 1 )
          {
            v4 -= 4;
            if ( *v4 == v4 + 2 )
              break;
            free(*v4);
            if ( v5 == v4 )
              goto LABEL_6;
          }
        }
        while ( v5 != v4 );
LABEL_6:
        v6 = v2;
        v2 = v3;
        operator delete(v6, 0x4008u);
      }
      while ( v3 );
    }
    operator delete(v1, 0x10u);
  }
}
