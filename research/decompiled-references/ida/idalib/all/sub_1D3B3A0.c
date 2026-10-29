void __fastcall sub_1D3B3A0(__int64 a1, int *a2, unsigned __int8 a3, unsigned int a4, unsigned __int64 *a5)
{
  int v8; // eax
  _DWORD *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  _DWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi

  v8 = *a2;
  if ( a3 )
  {
    v12 = a2 + 2;
    v13 = (__int64)&a2[6 * v8 + 2];
    if ( a2 + 2 != (int *)v13 )
    {
      while ( (*v12 & 0x7FFFFFFF) != 9 )
      {
        v14 = (__int64)v12;
        v12 += 6;
        if ( sub_F1D570(v14) )
        {
          if ( (_DWORD *)v13 == v12 )
          {
LABEL_10:
            v8 = *a2;
            goto LABEL_2;
          }
          return;
        }
        if ( (_DWORD *)v13 == v12 )
          goto LABEL_10;
      }
      if ( sub_1D36810(*((_QWORD *)v12 + 1), (unsigned int)v12[1]) )
        return;
      v8 = *a2;
    }
  }
LABEL_2:
  if ( v8 )
  {
    v9 = a2 + 2;
    v10 = (__int64)&a2[6 * (v8 - 1) + 8];
    do
    {
      v11 = (__int64)v9;
      v9 += 6;
      sub_1D3A850(*(_QWORD *)(a1 + 248), v11, a3, a4, a5);
    }
    while ( (_DWORD *)v10 != v9 );
  }
}
