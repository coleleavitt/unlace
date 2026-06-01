__int64 __fastcall sub_17494F0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int16 *v9; // rbp
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  __int16 *v14; // rdi
  __int64 i; // rdx
  unsigned __int16 *v16; // rax
  int v17; // r11d
  unsigned __int16 v18; // cx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int16 v21; // r10
  __int64 v22; // rcx
  __int64 j; // rdx
  int v24; // r13d
  __int64 v25; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (__int16 *)*a1;
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
  result = sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    a1[1] = 0;
    v12 = 16LL * v8;
    v13 = *((unsigned int *)a1 + 4);
    v14 = &v9[(unsigned __int64)v12 / 2];
    for ( i = result + 16 * v13; i != result; *(_WORD *)(result - 16) = -1 )
      result += 16;
    if ( v14 != v9 )
    {
      v16 = (unsigned __int16 *)v9;
      v17 = v13 - 1;
      do
      {
        while ( 1 )
        {
          v18 = *v16;
          if ( (unsigned __int16)(*v16 + 2) > 1u )
            break;
          v16 += 8;
          if ( v14 == (__int16 *)v16 )
            return operator delete(v9, v12, 8);
        }
        if ( !(_DWORD)v13 )
        {
          LOWORD(dword_0) = 0;
          BUG();
        }
        v19 = v17 & (37 * v18);
        v20 = *a1 + 16LL * v19;
        v21 = *(_WORD *)v20;
        if ( v18 != *(_WORD *)v20 )
        {
          v24 = 1;
          v25 = 0;
          if ( v21 != -1 )
          {
            while ( 1 )
            {
              if ( !v25 && v21 == -2 )
                v25 = v20;
              v19 = v17 & (v24 + v19);
              v20 = *a1 + 16LL * v19;
              v21 = *(_WORD *)v20;
              if ( v18 == *(_WORD *)v20 )
                break;
              if ( v21 == -1 )
              {
                if ( v25 )
                  v20 = v25;
                break;
              }
              ++v24;
            }
          }
        }
        *(_WORD *)v20 = v18;
        v22 = *((_QWORD *)v16 + 1);
        v16 += 8;
        *(_QWORD *)(v20 + 8) = v22;
        ++*((_DWORD *)a1 + 2);
      }
      while ( v14 != (__int16 *)v16 );
    }
    return operator delete(v9, v12, 8);
  }
  else
  {
    a1[1] = 0;
    for ( j = result + 16LL * *((unsigned int *)a1 + 4); j != result; *(_WORD *)(result - 16) = -1 )
      result += 16;
  }
  return result;
}
