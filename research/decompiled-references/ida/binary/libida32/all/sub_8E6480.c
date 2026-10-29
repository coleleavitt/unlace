__int64 __fastcall sub_8E6480(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r9d
  bool v6; // r10
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx

  v4 = a1[6];
  v6 = a2 == 1 && v4 - 3 <= 2;
  if ( a3 && (a4 & 1) == 0 )
    goto LABEL_3;
  if ( v4 == 1 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL << a1[1];
LABEL_4:
    v8 = 1LL << a1[2];
    v9 = v8 + v7;
    if ( a4 )
    {
      v10 = 0;
      if ( a1[4] != 3 )
        goto LABEL_6;
      goto LABEL_18;
    }
    v11 = 4 * v9;
    if ( !v6 )
      return v11 + 128;
    return ((v8 + 63) & 0xFFFFFFFFFFFFFFC0LL) + 128 + v11;
  }
  v13 = a1[2];
  v8 = 1LL << v13;
  if ( a4 && a1[4] == 3 )
  {
    v9 = 1LL << v13;
LABEL_18:
    v14 = *a1;
    v10 = 0;
    if ( *a1 )
    {
      if ( v14 > 0x11 )
        LOBYTE(v14) = 17;
      v10 = 1LL << v14;
    }
LABEL_6:
    v11 = 4 * (v10 + v9);
    if ( !v6 )
      return (-(__int64)(v4 < 7) & 0xFFFFFFFFFFFDB900LL) + 149376 + v11;
    return ((v8 + 63) & 0xFFFFFFFFFFFFFFC0LL) + 128 + v11;
  }
  v11 = 4LL << v13;
  return ((v8 + 63) & 0xFFFFFFFFFFFFFFC0LL) + 128 + v11;
}

