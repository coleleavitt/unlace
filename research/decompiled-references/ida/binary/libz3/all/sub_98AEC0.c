char *__fastcall sub_98AEC0(char *a1, char *a2, char *a3)
{
  char *v4; // r11
  char *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r14
  char *v15; // rcx
  char *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r14
  char *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx

  if ( a1 == a2 )
    return a3;
  v4 = a1;
  if ( a2 == a3 )
    return a1;
  v6 = a1;
  v7 = (a3 - a1) >> 4;
  v8 = (a2 - a1) >> 4;
  if ( v8 == v7 - v8 )
  {
    v21 = a2;
    do
    {
      v22 = *(_QWORD *)v21;
      v23 = *(_QWORD *)v4;
      v4 += 16;
      v21 += 16;
      *((_QWORD *)v4 - 2) = v22;
      LODWORD(v22) = *((_DWORD *)v21 - 2);
      *((_QWORD *)v21 - 2) = v23;
      LODWORD(v23) = *((_DWORD *)v4 - 2);
      *((_DWORD *)v4 - 2) = v22;
      *((_DWORD *)v21 - 2) = v23;
    }
    while ( a2 != v4 );
    return a2;
  }
  else
  {
    v9 = v7 - v8;
    if ( v8 >= (__int64)(v7 - v8) )
      goto LABEL_12;
    while ( 1 )
    {
      v10 = &v6[16 * v8];
      if ( v9 > 0 )
      {
        v11 = v6;
        v12 = 0;
        do
        {
          v13 = *(_QWORD *)v11;
          v14 = *(_QWORD *)v10;
          ++v12;
          v11 += 16;
          v10 += 16;
          *((_QWORD *)v11 - 2) = v14;
          LODWORD(v14) = *((_DWORD *)v10 - 2);
          *((_QWORD *)v10 - 2) = v13;
          LODWORD(v13) = *((_DWORD *)v11 - 2);
          *((_DWORD *)v11 - 2) = v14;
          *((_DWORD *)v10 - 2) = v13;
        }
        while ( v9 != v12 );
        v6 += 16 * v9;
      }
      if ( !(v7 % v8) )
        break;
      v9 = v8;
      v8 -= v7 % v8;
      while ( 1 )
      {
        v7 = v9;
        v9 -= v8;
        if ( v8 < v9 )
          break;
LABEL_12:
        v15 = &v6[16 * v7];
        v6 = &v15[-16 * v9];
        if ( v8 > 0 )
        {
          v16 = &v15[-16 * v9];
          v17 = 0;
          do
          {
            v18 = *((_QWORD *)v16 - 2);
            v19 = *((_QWORD *)v15 - 2);
            ++v17;
            v16 -= 16;
            v15 -= 16;
            *(_QWORD *)v16 = v19;
            LODWORD(v19) = *((_DWORD *)v15 + 2);
            *(_QWORD *)v15 = v18;
            LODWORD(v18) = *((_DWORD *)v16 + 2);
            *((_DWORD *)v16 + 2) = v19;
            *((_DWORD *)v15 + 2) = v18;
          }
          while ( v8 != v17 );
          v6 -= 16 * v8;
        }
        v8 = v7 % v9;
        if ( !(v7 % v9) )
          return &v4[a3 - a2];
      }
    }
    return &v4[a3 - a2];
  }
}

