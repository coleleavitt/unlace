void __fastcall sub_A0B130(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rdi

  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    v1 = *(_QWORD **)a1;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  else if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(_QWORD **)a1;
    if ( v3 != *(_QWORD **)a1 )
    {
      do
      {
        v5 = (_QWORD *)v4[9];
        v6 = (_QWORD *)v4[8];
        if ( v5 != v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = (_QWORD *)v6[1];
              if ( v7 == v6 + 3 )
                break;
              operator delete(v7);
              v6 += 5;
              if ( v5 == v6 )
                goto LABEL_10;
            }
            v6 += 5;
          }
          while ( v5 != v6 );
LABEL_10:
          v6 = (_QWORD *)v4[8];
        }
        if ( v6 )
          operator delete(v6);
        v8 = (_QWORD *)v4[4];
        if ( v8 != v4 + 6 )
          operator delete(v8);
        v9 = (__int64)(v4 + 1);
        v4 += 11;
        sub_A0AD20(v9);
      }
      while ( v3 != v4 );
      v4 = *(_QWORD **)a1;
    }
    if ( v4 )
      operator delete(v4);
  }
}
