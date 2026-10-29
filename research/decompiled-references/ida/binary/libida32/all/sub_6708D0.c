void __fastcall sub_6708D0(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbx
  _QWORD *v5; // rbp
  void *v6; // rdi

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)v2[i];
        if ( v5 )
        {
          v6 = (void *)v5[1];
          if ( v6 )
          {
            v5[2] = 0;
            qfree(v6);
          }
          operator delete(v5, 0x28u);
          v2 = *(_QWORD **)(a1 + 40);
        }
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  *(_DWORD *)(a1 + 104) = -1;
  *(_BYTE *)(a1 + 136) = 0;
}

