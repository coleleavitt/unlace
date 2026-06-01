__int64 __fastcall sub_E80C50(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned int v3; // r15d
  int v4; // ebx
  __int64 v5; // rsi
  unsigned __int8 *v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 *v10; // rbp
  __int64 v11; // r14
  unsigned __int8 *v12; // rax
  int v13; // ebx
  int v14; // edx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = v1 + *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)v1 >> 5;
  v4 = v1 & 0x1F;
  if ( v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    v4 = 0;
    v6 = (unsigned __int8 *)(v2 - 1);
    do
    {
      v7 = *v6--;
      v4 = v7 | (2 * v4);
    }
    while ( v6 != (unsigned __int8 *)(v2 - 2 - v5) );
    v2 += ~v5;
  }
  v8 = *(unsigned int *)(a1 + 184);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v8) = v4;
  v9 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v9;
  if ( v3 )
  {
    v10 = (unsigned __int8 *)(v2 - 33);
    v11 = v2 - 32LL * (v3 - 1) - 65;
    do
    {
      v12 = v10 + 32;
      v13 = 0;
      do
      {
        v14 = *v12--;
        v13 = v14 | (2 * v13);
      }
      while ( v12 != v10 );
      if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
      {
        sub_22134E0(a1 + 176, a1 + 192, v9 + 1, 4);
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4LL * *(unsigned int *)(a1 + 184)) = v13;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v9) = v13;
      }
      v10 -= 32;
      v9 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
      *(_DWORD *)(a1 + 184) = v9;
    }
    while ( (unsigned __int8 *)v11 != v10 );
  }
  *(_QWORD *)(a1 + 32) = 0;
  return sub_2263F90(*(_QWORD *)(a1 + 176), 4 * v9);
}

