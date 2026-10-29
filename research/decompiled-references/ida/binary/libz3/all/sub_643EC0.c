void __fastcall sub_643EC0(__int64 a1)
{
  char *v2; // r15
  __int64 v3; // r13
  char *v4; // rbx
  char *v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // rdx
  char *v10; // rax
  char *v11; // rsi
  char *v12; // r14
  __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rax
  char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  char *v20; // rax
  unsigned int v21; // ecx
  char *v22; // rsi
  char *v23; // rsi

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = 8LL * *((unsigned int *)v2 - 1);
    v4 = &v2[v3];
    if ( v2 != &v2[v3] )
    {
      v5 = v2 + 8;
      _BitScanReverse64(&v6, v3 >> 3);
      sub_643A80(*(__m128i **)(a1 + 24), &v2[v3], 2LL * (int)v6);
      if ( (unsigned __int64)v3 > 0x80 )
      {
        v12 = v2 + 128;
        do
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)v5;
            v14 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
            if ( *(_DWORD *)(*(_QWORD *)v2 + 8LL) < v14 )
              break;
            v15 = *((_QWORD *)v5 - 1);
            v16 = v5 - 8;
            if ( *(_DWORD *)(v15 + 8) >= v14 )
            {
              *(_QWORD *)v5 = v13;
            }
            else
            {
              do
              {
                *((_QWORD *)v16 + 1) = v15;
                v17 = v16;
                v15 = *((_QWORD *)v16 - 1);
                v16 -= 8;
              }
              while ( *(_DWORD *)(v15 + 8) < v14 );
              *(_QWORD *)v17 = v13;
            }
            v5 += 8;
            if ( v12 == v5 )
              goto LABEL_24;
          }
          if ( v5 - v2 <= 8 )
          {
            if ( v5 - v2 == 8 )
              *(_QWORD *)v5 = *(_QWORD *)v2;
          }
          else
          {
            memmove(v2 + 8, v2, v5 - v2);
          }
          v5 += 8;
          *(_QWORD *)v2 = v13;
        }
        while ( v12 != v5 );
        do
        {
LABEL_24:
          while ( 1 )
          {
            v18 = *(_QWORD *)v12;
            v19 = *((_QWORD *)v12 - 1);
            v20 = v12 - 8;
            v21 = *(_DWORD *)(*(_QWORD *)v12 + 8LL);
            if ( *(_DWORD *)(v19 + 8) < v21 )
              break;
            v23 = v12;
            v12 += 8;
            *(_QWORD *)v23 = v18;
            if ( v4 == v12 )
              goto LABEL_14;
          }
          do
          {
            *((_QWORD *)v20 + 1) = v19;
            v22 = v20;
            v19 = *((_QWORD *)v20 - 1);
            v20 -= 8;
          }
          while ( *(_DWORD *)(v19 + 8) < v21 );
          v12 += 8;
          *(_QWORD *)v22 = v18;
        }
        while ( v4 != v12 );
      }
      else if ( v3 != 8 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *(_QWORD *)v5;
            v8 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
            if ( *(_DWORD *)(*(_QWORD *)v2 + 8LL) < v8 )
              break;
            v9 = *((_QWORD *)v5 - 1);
            v10 = v5 - 8;
            if ( *(_DWORD *)(v9 + 8) >= v8 )
            {
              *(_QWORD *)v5 = v7;
            }
            else
            {
              do
              {
                *((_QWORD *)v10 + 1) = v9;
                v11 = v10;
                v9 = *((_QWORD *)v10 - 1);
                v10 -= 8;
              }
              while ( *(_DWORD *)(v9 + 8) < v8 );
              *(_QWORD *)v11 = v7;
            }
            v5 += 8;
            if ( v4 == v5 )
              goto LABEL_14;
          }
          if ( v5 - v2 <= 8 )
          {
            if ( v5 - v2 == 8 )
              *(_QWORD *)v5 = *(_QWORD *)v2;
          }
          else
          {
            memmove(v2 + 8, v2, v5 - v2);
          }
          v5 += 8;
          *(_QWORD *)v2 = v7;
        }
        while ( v4 != v5 );
      }
    }
  }
LABEL_14:
  *(_BYTE *)(a1 + 16) = 0;
}

