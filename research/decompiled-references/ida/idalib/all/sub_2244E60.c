__int64 __fastcall sub_2244E60(__int64 *a1, const void *a2, size_t a3, int a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // r12d
  unsigned int v7; // ebx
  __int64 v8; // r10
  __int64 v9; // rbp
  _QWORD *v10; // r9
  __int64 v11; // r13
  __int64 *v14; // r11
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  const void *v20; // [rsp+0h] [rbp-50h]
  __int64 *v21; // [rsp+8h] [rbp-48h]
  int v22; // [rsp+14h] [rbp-3Ch]

  v4 = *((unsigned int *)a1 + 2);
  if ( !(_DWORD)v4 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  v6 = v4 - 1;
  v7 = a4 & (v4 - 1);
  v8 = v7;
  v9 = *a1;
  v10 = *(_QWORD **)(*a1 + 8LL * v7);
  if ( v10 )
  {
    v11 = 8 * v4 + 8;
    if ( a3 )
    {
      v14 = a1;
      v15 = 1;
      while ( 1 )
      {
        if ( v10 != (_QWORD *)-8LL && a4 == *(_DWORD *)(v9 + 4 * v8 + v11) && a3 == *v10 )
        {
          v22 = a4;
          v21 = v14;
          v20 = a2;
          v16 = memcmp(a2, (char *)v10 + *((unsigned int *)v14 + 5), a3);
          a2 = v20;
          v14 = v21;
          a4 = v22;
          if ( !v16 )
            break;
        }
        v17 = v15 + v7;
        ++v15;
        v7 = v6 & v17;
        v8 = v7;
        v10 = *(_QWORD **)(v9 + 8LL * v7);
        if ( !v10 )
          return 0xFFFFFFFFLL;
      }
    }
    else
    {
      v18 = 1;
      while ( v10 == (_QWORD *)-8LL || *(_DWORD *)(v9 + 4 * v8 + v11) != a4 || *v10 )
      {
        v19 = v18 + v7;
        ++v18;
        v7 = v6 & v19;
        v8 = v7;
        v10 = *(_QWORD **)(v9 + 8LL * v7);
        if ( !v10 )
          return 0xFFFFFFFFLL;
      }
    }
    return v7;
  }
  return result;
}
