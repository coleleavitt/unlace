unsigned __int64 __fastcall sub_3F8370(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        double a6)
{
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rbp
  unsigned __int64 result; // rax
  unsigned int v13; // [rsp+8h] [rbp-40h]
  int v14; // [rsp+Ch] [rbp-3Ch]

  v7 = a5;
  v8 = *(_QWORD *)(a1 + 832);
  v13 = *(_DWORD *)(v8 + 632);
  v14 = *(_DWORD *)(v8 + 428);
  v9 = sub_3F6740(a1, a3, a2, v13, 1, a6);
  v10 = sub_3F6740(a1, a4, a2, v13, 1, a6);
  v11 = sub_3F56D0(a1, 0xCu, a2, v9, v10, v7, 0);
  result = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(result + 80) == 8 && v7 == v14 )
    result = sub_3F51B0(a1);
  if ( *(_WORD *)(a1 + 48) == 14
    && a2 == 7
    && *(_BYTE *)(a1 + 65) == 1
    && *(_BYTE *)(a1 + 105) == 1
    && *(_BYTE *)(a1 + 145) == 5 )
  {
    return sub_3F5110(a1, v11, 2u);
  }
  return result;
}
