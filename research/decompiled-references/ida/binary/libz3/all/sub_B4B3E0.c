__int64 __fastcall sub_B4B3E0(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  const double *v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  unsigned int v12; // ebx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 *v21; // [rsp+8h] [rbp-40h]

  sub_9671F0(a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 8840);
  result = *(_QWORD *)(v4 + 8656);
  v7 = *(const double **)(result + 8LL * **(unsigned int **)(v5 + 8LL * a2));
  v8 = *(_QWORD *)v7;
  if ( !*(_WORD *)(*(_QWORD *)v7 + 4LL) )
  {
    if ( (v9 = sub_15F0200(a1 + 56), !*(_WORD *)(v8 + 4))
      && (v10 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) != nullptr
      && v9 == *v10
      && v10[1] == 1
      || (result = sub_15F0200(a1 + 56), !*(_WORD *)(v8 + 4))
      && (v11 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) != nullptr
      && (_DWORD)result == *v11
      && v11[1] == 2 )
    {
      v21 = *((__int64 **)v7 + 14);
      v12 = sub_B39350((__int64)v21, *(_DWORD *)(a1 + 8));
      do
      {
        v15 = v12;
        v16 = v12;
        v12 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v12);
      }
      while ( v16 != v12 );
      v17 = *(_QWORD *)(a1 + 232);
      v20 = *(_QWORD *)(v17 + 8 * v15);
      v18 = sub_15F0BB0((int)a1 + 56, *(_QWORD *)(*(_QWORD *)v7 + 16LL), v17, v20, v13, v14);
      v19 = *(_QWORD *)(v20 + 8);
      if ( a3 )
      {
        if ( !v19 )
          return sub_B48E80(a1, v21, v18);
        result = *(_QWORD *)v19;
        if ( v18 != *(_QWORD *)(*(_QWORD *)v19 + 16LL) )
          return sub_B48E80(a1, v21, v18);
      }
      else if ( v19 )
      {
        result = *(_QWORD *)v19;
        if ( v18 == *(_QWORD *)(*(_QWORD *)v19 + 16LL) )
          return sub_B4A170(a1, v19, v7);
      }
      else
      {
        return sub_B4A7F0(a1, v12, (__int64)v7);
      }
    }
  }
  return result;
}

