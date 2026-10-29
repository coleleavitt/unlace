__int64 __fastcall sub_20FD90(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, int *a6)
{
  int v6; // ebx
  __int64 v7; // r10
  int v8; // r11d
  __int64 result; // rax
  _QWORD *v10; // r10
  int v11; // r8d
  int *v12; // r10
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  int v19; // r13d
  int v20; // r13d
  _QWORD *v21; // r8

  v6 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v7 = *a4;
    v8 = 0x7FFFFFFF;
    result = *(unsigned int *)(a1 + 4 * v7);
    if ( (_DWORD)result != 0x7FFFFFFF )
    {
      v8 = 0;
      if ( (int)result >= 0 )
        v8 = *(_DWORD *)(a1 + 4 * v7);
    }
    v10 = (_QWORD *)(a2 + 8 * v7);
    *(_QWORD *)(a3 + 8LL * (int)result) = *v10;
    *v10 = 0;
  }
  else
  {
    v8 = 0;
    result = 0x7FFFFFFF;
  }
  v11 = a5 >> 1;
  if ( v11 )
  {
    v12 = &a4[v6];
    v13 = (__int64)&a4[2 * (v11 - 1) + 2 + v6];
    do
    {
      v14 = *v12;
      v15 = v12[1];
      v16 = *(int *)(a1 + 4 * v14);
      v17 = *(int *)(a1 + 4 * v15);
      v18 = (_QWORD *)(a2 + 8 * v14);
      v19 = *(_DWORD *)(a1 + 4 * v15);
      *(_QWORD *)(a3 + 8 * v16) = *v18;
      if ( (int)v16 <= (int)v17 )
        v19 = v16;
      if ( (int)result > v19 )
        result = (unsigned int)v19;
      v20 = v17;
      if ( (int)v16 >= (int)v17 )
        v20 = v16;
      v21 = (_QWORD *)(a2 + 8 * v15);
      if ( v8 < v20 )
        v8 = v20;
      v12 += 2;
      *(_QWORD *)(a3 + 8 * v17) = *v21;
      *v18 = 0;
      *v21 = 0;
    }
    while ( (int *)v13 != v12 );
  }
  *a6 = v8;
  return result;
}

