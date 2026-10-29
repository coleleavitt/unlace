void __fastcall sub_1EDF3B0(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v6; // r12
  unsigned int v7; // edi
  unsigned int v8; // r8d
  char *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // ecx
  char *v15; // rbp
  char *v16; // rax
  int v17; // edi
  char *v18; // r13
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // edx

  v4 = a2 - a1;
  if ( a2 - a1 > 128 )
  {
    v6 = a1 + 8;
    if ( !a3 )
    {
      v18 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      --a3;
      v7 = *((_DWORD *)a2 - 2);
      v8 = *(_DWORD *)a1;
      v9 = &a1[8 * (v4 >> 4)];
      v10 = *((_DWORD *)a1 + 2);
      v11 = *(_DWORD *)v9;
      if ( v10 >= *(_DWORD *)v9 )
      {
        if ( v10 >= v7 )
        {
          if ( v11 >= v7 )
          {
LABEL_23:
            *(_DWORD *)a1 = v11;
            v26 = *((_DWORD *)v9 + 1);
            *(_DWORD *)v9 = v8;
            v27 = *((_DWORD *)a1 + 1);
            *((_DWORD *)a1 + 1) = v26;
            *((_DWORD *)v9 + 1) = v27;
            v10 = *(_DWORD *)a1;
            goto LABEL_7;
          }
LABEL_16:
          *(_DWORD *)a1 = v7;
          v21 = *((_DWORD *)a2 - 1);
          *((_DWORD *)a2 - 2) = v8;
          v22 = *((_DWORD *)a1 + 1);
          *((_DWORD *)a1 + 1) = v21;
          *((_DWORD *)a2 - 1) = v22;
          v10 = *(_DWORD *)a1;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v11 < v7 )
          goto LABEL_23;
        if ( v10 < v7 )
          goto LABEL_16;
      }
      v12 = *((_DWORD *)a1 + 1);
      v13 = *((_DWORD *)a1 + 3);
      *(_DWORD *)a1 = v10;
      *((_DWORD *)a1 + 2) = v8;
      *((_DWORD *)a1 + 1) = v13;
      *((_DWORD *)a1 + 3) = v12;
LABEL_7:
      v14 = *((_DWORD *)a2 - 2);
      v15 = v6;
      v16 = a2;
      while ( 1 )
      {
        v17 = *(_DWORD *)v15;
        v18 = v15;
        if ( *(_DWORD *)v15 < v10 )
          goto LABEL_13;
        v16 -= 8;
        if ( v10 < v14 )
        {
          do
          {
            v16 -= 8;
            v14 = *(_DWORD *)v16;
          }
          while ( *(_DWORD *)v16 > v10 );
        }
        if ( v15 >= v16 )
          break;
        *(_DWORD *)v15 = v14;
        v19 = *((_DWORD *)v16 + 1);
        *(_DWORD *)v16 = v17;
        v20 = *((_DWORD *)v15 + 1);
        *((_DWORD *)v15 + 1) = v19;
        v14 = *((_DWORD *)v16 - 2);
        *((_DWORD *)v16 + 1) = v20;
        v10 = *(_DWORD *)a1;
LABEL_13:
        v15 += 8;
      }
      sub_1EDF3B0(v15, a2, a3);
      v4 = v15 - a1;
      if ( v15 - a1 <= 128 )
        return;
      a2 = v15;
      if ( !a3 )
      {
LABEL_19:
        v23 = v4 >> 3;
        v24 = ((v4 >> 3) - 2) >> 1;
        sub_1EA8600((__int64)a1, v24, v4 >> 3, *(_QWORD *)&a1[8 * v24]);
        do
        {
          --v24;
          sub_1EA8600((__int64)a1, v24, v23, *(_QWORD *)&a1[8 * v24]);
        }
        while ( v24 );
        do
        {
          v18 -= 8;
          v25 = *(_QWORD *)v18;
          *(_DWORD *)v18 = *(_DWORD *)a1;
          *((_DWORD *)v18 + 1) = *((_DWORD *)a1 + 1);
          sub_1EA8600((__int64)a1, 0, (v18 - a1) >> 3, v25);
        }
        while ( v18 - a1 > 8 );
        return;
      }
    }
  }
}
