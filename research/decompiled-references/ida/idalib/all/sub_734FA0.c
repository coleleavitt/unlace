__int64 __fastcall sub_734FA0(__int64 a1, char a2)
{
  __int16 v3; // bx
  _QWORD *v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // rsi
  unsigned __int16 *v7; // rbx
  int v8; // r12d
  __int64 v9; // rdx
  unsigned __int16 *v10; // rsi

  v3 = *(_WORD *)(a1 + 1634);
  sub_737CE0(a1, 1);
  byte_2CCC4C2 = 0;
  v4 = *(_QWORD **)(a1 + 8);
  *(_WORD *)(a1 + 1634) = 0;
  if ( a2 )
    v5 = sub_7338B0(v4, 2);
  else
    v5 = sub_7338B0(v4, 0);
  v6 = (unsigned int)v3;
  v7 = (unsigned __int16 *)(a1 + 1640);
  v8 = 0;
  sub_737E40(a1, v6);
  if ( *(__int16 *)(a1 + 1634) > 0 )
  {
    do
    {
      v9 = *v7;
      v10 = v7;
      ++v8;
      v7 += 16;
      sub_737D90(a1, v10, v9);
    }
    while ( v8 < *(__int16 *)(a1 + 1634) );
  }
  return v5;
}
