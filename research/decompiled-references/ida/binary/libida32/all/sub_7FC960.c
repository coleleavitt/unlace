__int64 __fastcall sub_7FC960(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx

  v4 = 0;
  *(_QWORD *)(a1 + 72) = a2;
  v5 = 1;
  v6 = *(_QWORD *)a2;
  *(_OWORD *)(a2 + 56) = 0;
  do
  {
    if ( v6 == v5 )
      goto LABEL_4;
    ++v4;
    v5 *= 2;
  }
  while ( v4 != 64 );
  v12 = 1;
  if ( v6 > 1 )
  {
    do
      v12 *= 2LL;
    while ( v12 < v6 );
    *(_QWORD *)a2 = v12;
    v4 = 0;
    v13 = 1;
    do
    {
      ++v4;
      v13 *= 2;
    }
    while ( v13 && v13 != v12 );
LABEL_4:
    v7 = (1LL << v4) - 1;
    goto LABEL_5;
  }
  *(_QWORD *)a2 = 1;
  v7 = 0;
  v4 = 0;
LABEL_5:
  *(_QWORD *)(a2 + 72) = v4;
  v8 = 64;
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 80) = v7;
  v10 = 1;
  do
  {
    if ( v9 == v10 )
    {
      if ( v9 < 0x4000 )
        v9 = 0x4000;
      goto LABEL_10;
    }
    v10 *= 2;
    --v8;
  }
  while ( v8 );
  v14 = 1;
  if ( v9 <= 1 )
  {
    v9 = 0x4000;
LABEL_10:
    *(_QWORD *)(a2 + 24) = v9;
    return 0;
  }
  do
    v14 *= 2LL;
  while ( v14 < v9 );
  v15 = 0x4000;
  if ( v14 >= 0x4000 )
    v15 = v14;
  *(_QWORD *)(a2 + 24) = v15;
  return 0;
}

