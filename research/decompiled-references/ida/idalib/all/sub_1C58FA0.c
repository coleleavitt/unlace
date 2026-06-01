__int64 __fastcall sub_1C58FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  int *v10; // rbp
  __int64 i; // r12
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rsi

  v7 = operator new(0x28u);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v7;
  LODWORD(v7) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 32) = v7;
  LODWORD(v7) = *(_DWORD *)a2;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)v9 = v7;
  *(_QWORD *)(v9 + 8) = a3;
  if ( v8 )
    *(_QWORD *)(v9 + 24) = sub_1C58FA0(a1, v8, v9, a4);
  v10 = *(int **)(a2 + 16);
  if ( v10 )
  {
    for ( i = v9; ; i = v12 )
    {
      v12 = operator new(0x28u);
      *(_DWORD *)(v12 + 32) = v10[8];
      v13 = *v10;
      *(_QWORD *)(v12 + 16) = 0;
      *(_DWORD *)v12 = v13;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(i + 16) = v12;
      *(_QWORD *)(v12 + 8) = i;
      v14 = *((_QWORD *)v10 + 3);
      if ( v14 )
      {
        *(_QWORD *)(v12 + 24) = sub_1C58FA0(a1, v14, v12, a4);
        v10 = *((int **)v10 + 2);
        if ( !v10 )
          return v9;
      }
      else
      {
        v10 = *((int **)v10 + 2);
        if ( !v10 )
          return v9;
      }
    }
  }
  return v9;
}
