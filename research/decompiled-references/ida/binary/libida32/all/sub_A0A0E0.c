_BYTE *__fastcall sub_A0A0E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _BYTE *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _BYTE *i; // rdx
  __int64 j; // rbp
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  _BYTE *v19; // r14
  _BYTE *v20; // r15
  __int64 v21; // rdx
  _BYTE *k; // rdx
  _QWORD v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_BYTE *)sub_220C370(360LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v9 + 360 * v8;
    for ( i = &result[360 * v12]; i != result; *((_DWORD *)result - 88) = -1 )
    {
      *result = -1;
      result += 360;
      *((_DWORD *)result - 89) = -1;
    }
    for ( j = v9; v13 != j; j += 360 )
    {
      v16 = *(_DWORD *)(j + 8);
      if ( v16 == -1 )
      {
        if ( *(_DWORD *)(j + 4) != -1 || *(_BYTE *)j != 0xFF )
        {
LABEL_10:
          sub_9FDB50((__int64 *)a1, (char *)j, v23);
          v17 = v23[0];
          *(_DWORD *)(v23[0] + 8LL) = *(_DWORD *)(j + 8);
          *(_DWORD *)(v17 + 4) = *(_DWORD *)(j + 4);
          *(_BYTE *)v17 = *(_BYTE *)j;
          v18 = v23[0];
          *(_QWORD *)(v23[0] + 16LL) = v23[0] + 32LL;
          *(_QWORD *)(v18 + 24) = 0x100000000LL;
          if ( *(_DWORD *)(j + 24) )
            sub_9F9CF0(v18 + 16, (__int64 *)(j + 16));
          ++*(_DWORD *)(a1 + 8);
          v19 = *(_BYTE **)(j + 16);
          v20 = &v19[328 * *(unsigned int *)(j + 24)];
          if ( v19 != v20 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 328;
                if ( v20[320] )
                  break;
                sub_9E5FF0((__int64)(v20 + 16));
                if ( v19 == v20 )
                  goto LABEL_15;
              }
              sub_9E5FA0((__int64)(v20 + 200));
              sub_9E5FF0((__int64)(v20 + 16));
            }
            while ( v19 != v20 );
LABEL_15:
            v20 = *(_BYTE **)(j + 16);
          }
          if ( v20 != (_BYTE *)(j + 32) )
            free(v20);
        }
      }
      else if ( v16 != -2 || *(_DWORD *)(j + 4) != -2 || *(_BYTE *)j != 0xFE )
      {
        goto LABEL_10;
      }
    }
    return (_BYTE *)operator delete();
  }
  else
  {
    v21 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[360 * v21]; k != result; *((_DWORD *)result - 88) = -1 )
    {
      *result = -1;
      result += 360;
      *((_DWORD *)result - 89) = -1;
    }
  }
  return result;
}

