void __fastcall sub_ABDB30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // eax

  v5 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v6 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v5;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v5);
  if ( v6 )
  {
    v10 = *(unsigned int *)(v6 - 4);
    if ( v9 )
      *(_DWORD *)(v9 - 4) = 0;
    sub_B6E740(v7);
    if ( (_DWORD)v10 )
    {
      v11 = 8 * v10;
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + v12);
        v12 += 8;
        v14 = sub_B645B0(*(_QWORD *)(a1 + 16), v13);
        sub_AB9E50(a1, v8, v14);
      }
      while ( v11 != v12 );
    }
  }
  else
  {
    if ( v9 )
      *(_DWORD *)(v9 - 4) = 0;
    sub_B6E740(v7);
  }
  sub_ABDA50((_QWORD *)a1, v8);
}

