void __fastcall CoinWarmStartBasis::compressRows(CoinWarmStartBasis *this, int a2, int *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ebp
  bool v6; // cc
  __int64 v7; // rsi
  const int *v8; // rax
  int v9; // r15d
  int v10; // r8d
  int v11; // ebx
  __int64 v12; // rax
  int v13; // esi
  int v14; // r15d
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  char v20; // bp
  _BYTE *v21; // rax
  int v22; // r11d
  int v23; // r12d
  char v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  char v28; // r10
  _BYTE *v29; // rax
  __int64 v30; // rcx
  const int *v31; // rax
  int v32; // [rsp+8h] [rbp-38h]
  int v33; // [rsp+Ch] [rbp-34h]

  v3 = a2 - 1;
  if ( v3 >= 0 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = v3;
    v6 = a3[v3] < v4;
    v7 = v3;
    if ( v6 )
    {
LABEL_7:
      v9 = *a3;
      v33 = v5 + 1;
      v10 = *a3 + 1;
      if ( v5 )
      {
        v11 = a3[1];
        if ( v11 == v10 )
        {
          v12 = 1;
          while ( 1 )
          {
            v13 = v12;
            v10 = a3[v12] + 1;
            if ( (unsigned int)(v5 - 1) + 1LL == v12 )
              break;
            v11 = a3[++v12];
            if ( v11 != v10 )
              goto LABEL_17;
          }
        }
        else
        {
          v13 = 0;
          while ( 1 )
          {
LABEL_17:
            if ( v10 < v11 )
            {
              v22 = 2 * v10;
              v32 = v10;
              v23 = v9 - v10;
              v24 = 2 * (v9 - v10);
              do
              {
                v25 = *((_QWORD *)this + 4);
                v26 = v10 >> 2;
                v27 = (v10 + v23) >> 2;
                ++v10;
                LODWORD(v26) = *(char *)(v25 + v26);
                v28 = (v24 + v22) & 6;
                v29 = (_BYTE *)(v25 + v27);
                LOBYTE(v25) = v22;
                v22 += 2;
                *v29 = ((((int)v26 >> (v25 & 6)) & 3) << v28) | *v29 & ~(3 << v28);
              }
              while ( v10 != v11 );
              v9 = v10 + v9 - v32;
            }
            v30 = ++v13;
            v10 = a3[v30] + 1;
            if ( v13 >= v5 )
              break;
            v11 = a3[v30 + 1];
            if ( v11 == v10 )
            {
              v31 = &a3[v30 + 2];
              while ( 1 )
              {
                ++v13;
                v10 = *(v31 - 1) + 1;
                if ( v13 == v5 )
                  goto LABEL_26;
                v11 = *v31++;
                if ( v11 != v10 )
                  goto LABEL_17;
              }
            }
          }
LABEL_26:
          v4 = *((_DWORD *)this + 3);
        }
      }
      if ( v10 < v4 )
      {
        v14 = v9 - v10;
        v15 = 2 * v10;
        do
        {
          v16 = *((_QWORD *)this + 4);
          v17 = v10 + v14;
          v18 = v10++ >> 2;
          v19 = *(char *)(v16 + v18);
          v20 = (2 * v14 + v15) & 6;
          v21 = (_BYTE *)(v16 + (v17 >> 2));
          LOBYTE(v16) = v15;
          v15 += 2;
          *v21 = (((v19 >> (v16 & 6)) & 3) << v20) | *v21 & ~(3 << v20);
          v4 = *((_DWORD *)this + 3);
        }
        while ( v4 > v10 );
      }
      *((_DWORD *)this + 3) = v4 - v33;
    }
    else
    {
      v8 = &a3[v7 - 1];
      while ( --v5 != -1 )
      {
        --v8;
        if ( v8[1] < v4 )
          goto LABEL_7;
      }
    }
  }
}

