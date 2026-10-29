__int64 __fastcall sub_73BBC0(__int64 a1, char a2)
{
  __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  _QWORD *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rsi
  unsigned int *v11; // rbx
  int v12; // r12d
  __int64 v13; // rdx
  unsigned int *v14; // rsi

  v3 = *(_WORD *)(a1 + 1634);
  sub_744F90(a1, 1);
  byte_2CCC5CA = 0;
  v8 = *(_QWORD **)(a1 + 8);
  *(_WORD *)(a1 + 1634) = 0;
  if ( a2 )
    v9 = sub_738AF0(v8, 2, v4, v5, v6, v7);
  else
    v9 = sub_738AF0(v8, 0, v4, v5, v6, v7);
  v10 = (unsigned int)v3;
  v11 = (unsigned int *)(a1 + 1640);
  v12 = 0;
  sub_7450E0(a1, v10);
  if ( *(__int16 *)(a1 + 1634) > 0 )
  {
    do
    {
      v13 = *v11;
      v14 = v11;
      ++v12;
      v11 += 8;
      sub_745040(a1, v14, v13);
    }
    while ( v12 < *(__int16 *)(a1 + 1634) );
  }
  return v9;
}
