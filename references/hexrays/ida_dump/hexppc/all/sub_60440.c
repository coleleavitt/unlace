__int64 __fastcall sub_60440(__int64 *a1, int a2, int a3)
{
  char v3; // bp
  int v4; // r12d
  __int64 v6; // r10
  unsigned __int64 v7; // rdi
  __int64 *v8; // r11
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // ecx

  if ( !a3 )
    return 0;
  v3 = a2;
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(50311);
LABEL_22:
    BUG();
  }
  v4 = a2 + a3 - 1;
  if ( a2 > v4 )
  {
    if ( !under_debugger )
      sub_37EEE0(50312);
    goto LABEL_22;
  }
  sub_603A0(a1, v4);
  v6 = a2 >> 6;
  v7 = v4 >> 6;
  v8 = (__int64 *)(*a1 + 8 * v6);
  v9 = a2 & 0x3F;
  v10 = v4 & 0x3F;
  v11 = 1LL << v3;
  v12 = *v8;
  v13 = v6 + 1;
  v14 = 63;
  if ( v6 == v7 )
  {
    v25 = 0;
    if ( v10 < v9 )
      return v25;
    v14 = v10;
  }
  v15 = 0;
  do
  {
    ++v9;
    v15 |= v11;
    v11 *= 2;
  }
  while ( v14 >= v9 );
  v16 = v12 | v15;
  *v8 = v16;
  LOBYTE(v16) = v16 != v12;
  if ( v13 < v7 )
  {
    do
    {
      v17 = (_QWORD *)(*a1 + 8 * v13);
      v18 = *v17 == -1;
      *v17 = -1;
      LOBYTE(v9) = !v18;
      ++v13;
      LODWORD(v16) = v9 | v16;
    }
    while ( v7 != v13 );
    goto LABEL_9;
  }
  if ( v7 == v13 )
  {
LABEL_9:
    v19 = 0;
    v20 = 1;
    v21 = 0;
    do
    {
      ++v19;
      v21 |= v20;
      v20 *= 2;
    }
    while ( v10 >= v19 );
    v22 = (__int64 *)(*a1 + 8 * v7);
    v23 = *v22;
    v24 = *v22 | v21;
    v18 = *v22 == v24;
    *v22 = v24;
    LOBYTE(v23) = !v18;
    return (unsigned int)v23 | (unsigned int)v16;
  }
  return (unsigned int)v16;
}
