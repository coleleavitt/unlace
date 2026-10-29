// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1C33650(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 i; // rdx
  __int64 v16; // rax
  unsigned __int8 v17; // dl
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r11
  __int64 v21; // r13
  int v22; // r14d
  unsigned int j; // ecx
  __int64 v24; // rdi
  unsigned __int8 v25; // bl
  __int64 k; // rdx
  unsigned int v27; // ecx

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 24 * v8;
    v14 = v9 + 24 * v8;
    for ( i = result + 24 * v12; i != result; result += 24 )
    {
      *(_QWORD *)result = 0;
      *(_BYTE *)(result + 8) &= ~1u;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *(_BYTE *)(v16 + 8);
        if ( ((v17 & 1) != 0 || *(_QWORD *)v16) && ((v17 & 1) != 0 || *(_QWORD *)v16 != -1) )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v16;
            byte_8[0] = *(_BYTE *)(v16 + 8);
            BUG();
          }
          v19 = v18 - 1;
          v20 = *a1;
          v21 = 0;
          v22 = 1;
          for ( j = (v18 - 1) & (*(_QWORD *)v16 ^ (*(_QWORD *)v16 >> 9)); ; j = v19 & v27 )
          {
            v24 = v20 + 24LL * j;
            v25 = *(_BYTE *)(v24 + 8);
            if ( ((v25 ^ v17) & 1) == 0 && *(_QWORD *)v16 == *(_QWORD *)v24 )
              break;
            if ( (v25 & 1) == 0 && !*(_QWORD *)v24 )
            {
              if ( v21 )
                v24 = v21;
              break;
            }
            if ( (*(_BYTE *)(v24 + 8) & 1) == 0 && *(_QWORD *)v24 == -1 && !v21 )
              v21 = v20 + 24LL * j;
            v27 = v22 + j;
            ++v22;
          }
          *(_QWORD *)v24 = *(_QWORD *)v16;
          *(_BYTE *)(v24 + 8) = *(_BYTE *)(v16 + 8);
          *(_QWORD *)(v24 + 16) = *(_QWORD *)(v16 + 16);
          ++*((_DWORD *)a1 + 2);
        }
        v16 += 24;
      }
      while ( v14 != v16 );
    }
    return operator delete(v9, v13, 8);
  }
  else
  {
    a1[1] = 0;
    for ( k = result + 24LL * *((unsigned int *)a1 + 4); k != result; result += 24 )
    {
      *(_QWORD *)result = 0;
      *(_BYTE *)(result + 8) &= ~1u;
    }
  }
  return result;
}
