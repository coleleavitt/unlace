__int64 __fastcall sub_1F45060(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 *v13; // r15
  _QWORD *v14; // rbp
  _DWORD *v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v6 = *(unsigned int *)(v4 + 24);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_DWORD *)(v7 + 8 * v6);
  v9 = (unsigned int)(*(_DWORD *)(v4 + 24) + 1);
  *(_DWORD *)(v4 + 24) = v6 + 2;
  v10 = 0;
  sub_B7A190(a2, *(_QWORD *)(v7 + 8 * v9) != 0);
  result = *(unsigned int *)(a2 + 72);
  if ( (_DWORD)result )
  {
    do
    {
      while ( 1 )
      {
        v12 = a1[2];
        v13 = (__int64 *)(a2 + 8LL * v10 + 88);
        v14 = *(_QWORD **)(v12 + 8);
        v15 = (_DWORD *)(v12 + 24);
        v16 = (__int64 *)(v12 + 32);
        v17 = *(_QWORD *)(v12 + 16);
        if ( v8 == v10 )
          break;
        v18 = sub_1EE13A0((__int64)v14, v17, v16, v15);
        ++v10;
        result = sub_1EDB980(v14, v18, v19, v20, v21, v22);
        *v13 = result;
        if ( *(_DWORD *)(a2 + 72) <= v10 )
          return result;
      }
      v23 = sub_1EE13A0((__int64)v14, v17, v16, v15);
      v10 = v8 + 1;
      result = sub_1EDB980(v14, v23, v24, v25, v26, v27);
      *(_DWORD *)(a2 + 76) = v8;
      *v13 = result;
    }
    while ( *(_DWORD *)(a2 + 72) > (unsigned int)(v8 + 1) );
  }
  return result;
}
