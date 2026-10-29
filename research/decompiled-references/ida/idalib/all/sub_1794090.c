__int64 __fastcall sub_1794090(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // r13d
  __int64 v6; // rbp
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // r13d
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int i; // eax
  __int64 *v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v6 = *a1;
  v8 = sub_101AC30((_DWORD *)a2 + 2);
  v9 = *a2;
  v10 = v3 - 1;
  v11 = 1;
  v12 = v8 ^ 0xFF51AFD7ED558CCDLL;
  v13 = 0x9DDFEA08EB382D69LL * (v12 ^ (8LL * (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)) + 8));
  v14 = 0;
  for ( i = v10
          & (-348639895
           * (((unsigned int)((0x9DDFEA08EB382D69LL * (v13 ^ v12 ^ (v13 >> 47))) >> 32) >> 15)
            ^ (-348639895 * (v13 ^ v12 ^ (v13 >> 47))))); ; i = v10 & v18 )
  {
    v16 = (__int64 *)(v6 + 16LL * i);
    v17 = *v16;
    if ( *v16 == v9 && *((_DWORD *)v16 + 2) == *((_DWORD *)a2 + 2) )
    {
      *a3 = v16;
      return 1;
    }
    if ( v17 == -4096 )
      break;
    if ( v17 == -8192 && !*((_DWORD *)v16 + 2) && !v14 )
      v14 = v6 + 16LL * i;
LABEL_10:
    v18 = v11 + i;
    ++v11;
  }
  if ( *((_DWORD *)v16 + 2) )
    goto LABEL_10;
  if ( !v14 )
    v14 = v6 + 16LL * i;
  *a3 = v14;
  return 0;
}
