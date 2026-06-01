void __fastcall sub_569A30(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int *a8,
        _DWORD **a9)
{
  int v10; // eax
  __int64 v11; // rsi
  unsigned __int64 v12; // r11
  unsigned int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int *v17; // rax

  if ( a3 < a4 )
  {
    v10 = *a8;
    v11 = 32LL * a3;
    v12 = 32 * (a3 + (unsigned __int64)(a4 - 1 - a3) + 1);
    do
    {
      while ( **a9 != v10 )
      {
        v13 = (unsigned int *)(v11 + *a1);
        v11 += 32;
        v14 = *((_QWORD *)v13 + 1) & (*(_QWORD *)(a5 + *v13) >> v13[1]);
        v15 = (unsigned int)*a7;
        v16 = v15 + 1;
        v17 = (unsigned int *)(*a2 + 32 * v15);
        *a7 = v16;
        *(_QWORD *)(a6 + *v17) = (v14 << v17[1]) | *((_QWORD *)v17 + 2) & *(_QWORD *)(a6 + *v17);
        v10 = *a8 + 1;
        *a8 = v10;
        if ( v12 == v11 )
          return;
      }
      ++v10;
      v11 += 32;
      ++*a9;
      *a8 = v10;
    }
    while ( v11 != v12 );
  }
}

