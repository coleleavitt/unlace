void __fastcall sub_212DB80(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = v3[3];
        v5 = v3[2];
        if ( v4 != v5 )
        {
          do
          {
            if ( *(_DWORD *)(v5 + 32) > 0x40u )
            {
              v6 = *(void **)(v5 + 24);
              if ( v6 )
                operator delete[](v6);
            }
            v5 += 40;
          }
          while ( v4 != v5 );
          v5 = v3[2];
        }
        if ( !v5 )
          break;
        v3 += 6;
        operator delete((void *)v5);
        if ( v2 == v3 )
          goto LABEL_10;
      }
      v3 += 6;
    }
    while ( v2 != v3 );
LABEL_10:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3);
}
