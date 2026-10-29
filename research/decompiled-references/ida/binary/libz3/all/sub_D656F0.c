__int64 __fastcall sub_D656F0(_QWORD *a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  int *v8; // rax
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rbx
  __int64 result; // rax

  v8 = *(int **)(a2 + 24);
  v9 = a1[1];
  if ( v8 )
    v10 = *v8;
  else
    v10 = -1;
  v11 = sub_15D2D60(v9, v10, 42, 0, 0, a3, (__int64)a4, 0);
  if ( !v11 )
    return sub_D63FA0(a1, 0, a3, a4, a5);
  ++*(_DWORD *)(v11 + 8);
  result = sub_D63FA0(a1, v11, a3, a4, a5);
  if ( (*(_DWORD *)(v11 + 8))-- == 1 )
    return sub_15D7BC0(v9, v11);
  return result;
}

