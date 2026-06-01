unsigned __int64 __fastcall sub_BDA7C0(__int64 a1, unsigned int *a2, __m128 a3, __m128 a4, __m128 a5)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // r12
  unsigned int **v12; // r14
  __int64 v13; // rax
  unsigned int **v14; // r13
  unsigned int v15; // ebp
  unsigned int v16; // edx
  unsigned int v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // edx
  unsigned int v20; // ebp
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // edx

  sub_B32540(a1, a2);
  result = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !result )
    return result;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)result )
    return result;
  result = *(unsigned int *)(result + 4);
  if ( (unsigned int)result > 0xD )
    return result;
  v7 = -8247;
  if ( _bittest64(&v7, result) )
    return result;
  sub_B6F650(*(_QWORD *)(a1 + 16));
  result = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !result )
    return result;
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 != *(_DWORD *)result )
    return result;
  v9 = *a2;
  result = *(unsigned int *)(result + 4);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  v11 = *(__int64 **)(v10 + 8 * v9);
  switch ( (_DWORD)result )
  {
    case 1:
      v22 = sub_B39350(*(_QWORD *)(v10 + 8LL * **((unsigned int **)a2 + 4)), v8);
      do
      {
        v23 = v22;
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v22);
      }
      while ( v23 != v22 );
      return sub_BDA6A0((_QWORD *)a1, v22, v11, a3, a4, a5);
    case 4:
      v17 = sub_B39350(*(_QWORD *)(v10 + 8LL * **((unsigned int **)a2 + 4)), v8);
      sub_BD6A00((_QWORD *)a1, v17, a3, a4, a5);
      v18 = v17;
      do
      {
        v19 = v18;
        v18 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v18);
      }
      while ( v19 != v18 );
      return sub_BD8A70((_QWORD *)a1, v18, a3, a4, a5);
    case 2:
      sub_BD5750(a1, *(_QWORD **)(v10 + 8 * v9), a3, a4, a5);
      v20 = sub_B39350((__int64)v11, *(_DWORD *)(a1 + 8));
      sub_BD6A00((_QWORD *)a1, v20, a3, a4, a5);
      v18 = v20;
      do
      {
        v21 = v18;
        v18 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v18);
      }
      while ( v21 != v18 );
      return sub_BD8A70((_QWORD *)a1, v18, a3, a4, a5);
    case 5:
      v12 = (unsigned int **)(a2 + 8);
      v13 = 2LL * a2[6];
      v14 = (unsigned int **)&a2[v13 + 8];
      if ( v13 * 4 )
      {
        while ( 1 )
        {
          v15 = sub_B39350(*(_QWORD *)(v10 + 8LL * **v12), v8);
          do
          {
            v16 = v15;
            v15 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v15);
          }
          while ( v16 != v15 );
          ++v12;
          sub_BD6CC0((_QWORD *)a1, v15, (__int64)v11, a3, a4, a5);
          sub_BD6A00((_QWORD *)a1, v15, a3, a4, a5);
          if ( v14 == v12 )
            break;
          v8 = *(_DWORD *)(a1 + 8);
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
        }
      }
      return sub_BD5490(a1, v11, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
  }
  return result;
}

