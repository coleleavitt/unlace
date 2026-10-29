__int64 __fastcall sub_8A8EC0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r10
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rcx
  __int64 v8; // r8
  unsigned int i; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r9d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  int v18; // r11d
  _DWORD *v19; // rsi
  int v20; // r9d
  unsigned int v21; // esi
  __int64 v22; // r12
  unsigned int v23; // r11d
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi

  v3 = *(_QWORD *)(a1 + 1480);
  v4 = (_DWORD *)(*(_QWORD *)(a1 + 1600) + 4LL * *a2);
  v5 = *(_QWORD *)(a1 + 1592) + 232LL * (unsigned int)*v4;
  *(_BYTE *)(v5 + 3) &= 0x1Fu;
  *v4 = -1;
  v6 = *a2;
  v7 = (__int64 *)(v3 + 16 * v6);
  v8 = *v7;
  if ( *v7 )
  {
    for ( i = 0; i < *(_DWORD *)(v8 - 4); *((_DWORD *)v16 + 3) = -1 )
    {
      while ( 1 )
      {
        v10 = v8 + 40LL * i;
        v11 = *(unsigned int *)(v10 + 32);
        if ( (_DWORD)v11 != -1 )
        {
          v12 = *((_DWORD *)v7 + 3);
          v13 = *(_DWORD *)(v10 + 36);
          *(_DWORD *)(v10 + 32) = -1;
          *(_DWORD *)(v10 + 36) = v12;
          v14 = 3 * v11;
          v15 = *(_QWORD *)(a1 + 1496);
          --*((_DWORD *)v7 + 2);
          v16 = (__int64 *)(v15 + 8 * v14);
          *((_DWORD *)v7 + 3) = i;
          v17 = *v16;
          v18 = *((_DWORD *)v16 + 3);
          v19 = (_DWORD *)(*v16 + 8LL * v13);
          *v19 = -1;
          v19[1] = v18;
          LODWORD(v19) = *((_DWORD *)v16 + 2);
          *((_DWORD *)v16 + 3) = v13;
          v20 = (_DWORD)v19 - 1;
          *((_DWORD *)v16 + 2) = (_DWORD)v19 - 1;
          v21 = 2 * ((_DWORD)v19 - 1);
          if ( v17 )
          {
            v22 = *(unsigned int *)(v17 - 4);
            if ( v21 < (unsigned int)v22 )
            {
              v23 = *((_DWORD *)v16 + 4);
              if ( !v23 )
                break;
            }
          }
        }
        if ( ++i >= *(_DWORD *)(v8 - 4) )
          goto LABEL_8;
      }
      v26 = 0;
      do
      {
        if ( *(_DWORD *)(v17 + 8 * v26) != -1 )
        {
          if ( v23 != (_DWORD)v26 )
          {
            *(_QWORD *)(v17 + 8LL * v23) = *(_QWORD *)(v17 + 8 * v26);
            *(_DWORD *)(*(_QWORD *)(v3 + 16LL * *(unsigned int *)(v17 + 8 * v26))
                      + 40LL * *(unsigned int *)(v17 + 8 * v26 + 4)
                      + 36) = v23;
          }
          ++v23;
        }
        ++v26;
      }
      while ( v26 != v22 );
      *(_DWORD *)(v17 - 4) = v20;
      ++i;
    }
  }
LABEL_8:
  result = *(_QWORD *)(a1 + 1488);
  if ( !result || (v25 = *(unsigned int *)(result - 4), (_DWORD)v25 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 1488));
    result = *(_QWORD *)(a1 + 1488);
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v6;
  }
  else
  {
    *(_DWORD *)(result + 4 * v25) = v6;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

