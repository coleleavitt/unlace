__int64 __fastcall sub_3F9450(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned int a4, int a5, double a6)
{
  unsigned int *v7; // rax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // rax
  int v14; // [rsp+10h] [rbp-48h]
  unsigned int v15; // [rsp+14h] [rbp-44h]
  signed int v17; // [rsp+1Ch] [rbp-3Ch]

  v7 = *(unsigned int **)(a1 + 832);
  if ( v7[20] == 8 && v7[120] == a5 )
    return 0;
  v17 = v7[107];
  v15 = v7[158];
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL);
  v14 = sub_3F6740(a1, v7[16], a2, v15, 1, a6);
  v9 = sub_3F6740(a1, a4, a2, v15, 1, a6);
  v10 = sub_3F56D0(a1, 2u, a2, v14, v9, a5, v8);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 && a5 == (__int64)v17 )
    sub_3F51B0(a1);
  if ( v10 && a2 != a3 )
  {
    v12 = sub_3F8F20(a1, a2, a3, a5, a5, 1u);
    *(_DWORD *)(v12 + 4) |= 0x10000u;
  }
  return v10;
}
