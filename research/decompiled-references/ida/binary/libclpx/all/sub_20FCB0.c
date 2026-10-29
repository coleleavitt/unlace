__int64 __fastcall sub_20FCB0(__int64 a1, __int64 *a2, __int64 a3, int *a4, int a5, int *a6)
{
  int v6; // ebx
  int v7; // r11d
  __int64 result; // rax
  __int64 v9; // xmm0_8
  int v10; // r8d
  int *v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // ebx

  v6 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v7 = 0x7FFFFFFF;
    result = *(unsigned int *)(a1 + 4LL * *a4);
    if ( (_DWORD)result != 0x7FFFFFFF )
    {
      v7 = 0;
      if ( (int)result >= 0 )
        v7 = *(_DWORD *)(a1 + 4LL * *a4);
    }
    v9 = *a2++;
    *(_QWORD *)(a3 + 8LL * (int)result) = v9;
    *(a2 - 1) = 0;
  }
  else
  {
    v7 = 0;
    result = 0x7FFFFFFF;
  }
  v10 = a5 >> 1;
  if ( v10 )
  {
    v11 = &a4[v6];
    v12 = (__int64)&a4[2 * (v10 - 1) + 2 + v6];
    do
    {
      v13 = *(int *)(a1 + 4LL * *v11);
      v14 = *(int *)(a1 + 4LL * v11[1]);
      *(_QWORD *)(a3 + 8 * v13) = *a2;
      v15 = v14;
      *(_QWORD *)(a3 + 8 * v14) = a2[1];
      if ( (int)v13 <= (int)v14 )
        v15 = v13;
      *a2 = 0;
      a2[1] = 0;
      if ( (int)result > v15 )
        result = (unsigned int)v15;
      v16 = v14;
      if ( (int)v13 >= (int)v14 )
        v16 = v13;
      if ( v7 < v16 )
        v7 = v16;
      v11 += 2;
      a2 += 2;
    }
    while ( (int *)v12 != v11 );
  }
  *a6 = v7;
  return result;
}

