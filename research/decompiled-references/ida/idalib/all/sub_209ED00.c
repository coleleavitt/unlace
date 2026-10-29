unsigned __int64 __fastcall sub_209ED00(char *a1, char *a2, char *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  char *v5; // rbx
  __int64 v6; // r10
  char *v7; // rcx
  char *v8; // rsi
  __int64 v9; // r8
  int v10; // edx
  int v11; // r11d
  __int64 v12; // r11
  __int64 v13; // rdx
  char *v14; // rcx
  char *v15; // rsi
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r11
  char *v20; // rdx
  char *v21; // rax
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rcx

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v3 = (a3 - a1) >> 4;
  v4 = (a2 - a1) >> 4;
  v5 = &a1[a3 - a2];
  if ( v4 == v3 - v4 )
  {
    v20 = a2;
    v21 = a1;
    do
    {
      v22 = *(_DWORD *)v20;
      v23 = *(_DWORD *)v21;
      v21 += 16;
      v20 += 16;
      *((_DWORD *)v21 - 4) = v22;
      v24 = *((_QWORD *)v20 - 1);
      *((_DWORD *)v20 - 4) = v23;
      v25 = *((_QWORD *)v21 - 1);
      *((_QWORD *)v21 - 1) = v24;
      *((_QWORD *)v20 - 1) = v25;
    }
    while ( a2 != v21 );
    return (unsigned __int64)&a1[((a2 - 16 - a1) & 0xFFFFFFFFFFFFFFF0LL) + 16];
  }
  else
  {
    v6 = v3 - v4;
    if ( v4 >= v3 - v4 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = &a1[16 * v4];
      if ( v6 > 0 )
      {
        v8 = a1;
        v9 = 0;
        do
        {
          v10 = *(_DWORD *)v8;
          v11 = *(_DWORD *)v7;
          ++v9;
          v8 += 16;
          v7 += 16;
          *((_DWORD *)v8 - 4) = v11;
          v12 = *((_QWORD *)v7 - 1);
          *((_DWORD *)v7 - 4) = v10;
          v13 = *((_QWORD *)v8 - 1);
          *((_QWORD *)v8 - 1) = v12;
          *((_QWORD *)v7 - 1) = v13;
        }
        while ( v6 != v9 );
        a1 += 16 * v6;
      }
      if ( !(v3 % v4) )
        break;
      v6 = v4;
      v4 -= v3 % v4;
      while ( 1 )
      {
        v3 = v6;
        v6 -= v4;
        if ( v4 < v6 )
          break;
LABEL_12:
        v14 = &a1[16 * v3];
        a1 = &v14[-16 * v6];
        if ( v4 > 0 )
        {
          v15 = &v14[-16 * v6];
          v16 = 0;
          do
          {
            v15 -= 16;
            v14 -= 16;
            v17 = *(_DWORD *)v15;
            ++v16;
            *(_DWORD *)v15 = *(_DWORD *)v14;
            v18 = *((_QWORD *)v15 + 1);
            *(_DWORD *)v14 = v17;
            *((_QWORD *)v15 + 1) = *((_QWORD *)v14 + 1);
            *((_QWORD *)v14 + 1) = v18;
          }
          while ( v4 != v16 );
          a1 -= 16 * v4;
        }
        v4 = v3 % v6;
        if ( !(v3 % v6) )
          return (unsigned __int64)v5;
      }
    }
    return (unsigned __int64)v5;
  }
}
