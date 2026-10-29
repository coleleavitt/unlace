__int64 __fastcall sub_8A8D40(__int64 a1, unsigned int a2)
{
  __int64 v3; // r10
  __int64 *v5; // rcx
  __int64 v6; // r8
  unsigned int i; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  unsigned int v11; // r9d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  int v16; // r11d
  _DWORD *v17; // rsi
  int v18; // r9d
  unsigned int v19; // esi
  __int64 v20; // r12
  unsigned int v21; // r11d
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi

  v3 = *(_QWORD *)(a1 + 8);
  v5 = (__int64 *)(v3 + 16LL * a2);
  v6 = *v5;
  if ( *v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v6 - 4); *((_DWORD *)v14 + 3) = -1 )
    {
      while ( 1 )
      {
        v8 = v6 + 40LL * i;
        v9 = *(unsigned int *)(v8 + 32);
        if ( (_DWORD)v9 != -1 )
        {
          v10 = *((_DWORD *)v5 + 3);
          v11 = *(_DWORD *)(v8 + 36);
          *(_DWORD *)(v8 + 32) = -1;
          *(_DWORD *)(v8 + 36) = v10;
          v12 = 3 * v9;
          v13 = *(_QWORD *)(a1 + 24);
          --*((_DWORD *)v5 + 2);
          v14 = (__int64 *)(v13 + 8 * v12);
          *((_DWORD *)v5 + 3) = i;
          v15 = *v14;
          v16 = *((_DWORD *)v14 + 3);
          v17 = (_DWORD *)(*v14 + 8LL * v11);
          *v17 = -1;
          v17[1] = v16;
          LODWORD(v17) = *((_DWORD *)v14 + 2);
          *((_DWORD *)v14 + 3) = v11;
          v18 = (_DWORD)v17 - 1;
          *((_DWORD *)v14 + 2) = (_DWORD)v17 - 1;
          v19 = 2 * ((_DWORD)v17 - 1);
          if ( v15 )
          {
            v20 = *(unsigned int *)(v15 - 4);
            if ( v19 < (unsigned int)v20 )
            {
              v21 = *((_DWORD *)v14 + 4);
              if ( !v21 )
                break;
            }
          }
        }
        if ( ++i >= *(_DWORD *)(v6 - 4) )
          goto LABEL_8;
      }
      v24 = 0;
      do
      {
        if ( *(_DWORD *)(v15 + 8 * v24) != -1 )
        {
          if ( v21 != (_DWORD)v24 )
          {
            *(_QWORD *)(v15 + 8LL * v21) = *(_QWORD *)(v15 + 8 * v24);
            *(_DWORD *)(*(_QWORD *)(v3 + 16LL * *(unsigned int *)(v15 + 8 * v24))
                      + 40LL * *(unsigned int *)(v15 + 8 * v24 + 4)
                      + 36) = v21;
          }
          ++v21;
        }
        ++v24;
      }
      while ( v24 != v20 );
      *(_DWORD *)(v15 - 4) = v18;
      ++i;
    }
  }
LABEL_8:
  result = *(_QWORD *)(a1 + 16);
  if ( !result || (v23 = *(unsigned int *)(result - 4), (_DWORD)v23 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 16));
    result = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = a2;
  }
  else
  {
    *(_DWORD *)(result + 4 * v23) = a2;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

