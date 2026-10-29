unsigned __int64 __fastcall sub_3FBD20(__int64 a1, int a2, int a3, unsigned __int8 a4, double a5)
{
  unsigned int v7; // r15d
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r14d
  int *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // ebp
  int v14; // eax
  int v16; // ecx
  signed int v17; // edx
  __int64 v18; // rax
  int dtype_size; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+Ch] [rbp-7Ch]
  _DWORD v22[4]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v23[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v24[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a4 != 2 && a4 != 7 )
  {
    if ( !under_debugger )
      sub_383060(0xCBF2u, a5);
    BUG();
  }
  v7 = a4;
  dtype_size = get_dtype_size();
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(_DWORD *)(v8 + 380);
  v10 = sub_3F9DC0(a1, 2, *(_DWORD *)(v8 + 460), a5);
  v11 = *(int **)(a1 + 832);
  if ( v11[117] == v10 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    v17 = 8;
    if ( (v16 & 0x1018) != 0x1010 )
    {
      if ( (v16 & 0x1008) == 0 || (v17 = 2, (v16 & 0x1018) == 0x1008) )
        v17 = 4;
    }
    sub_3F7E20(a1, 2u, a4, v11[118], v10, v11[115], v17);
    v18 = *(_QWORD *)(a1 + 832);
    v10 = *(_DWORD *)(v18 + 460);
    v21 = *(_DWORD *)(v18 + 464);
  }
  else
  {
    v21 = v11[116];
  }
  v12 = a4;
  v13 = (a4 != 2) + 7;
  sub_1D6840(a1, v12, v13, v9, v9, 0);
  sub_1D6840(a1, v7, v13, v10, v10, 0);
  v14 = get_dtype_size();
  sub_1D6310(a1, 0xEu, v14, v9, v10, v21, 0);
  v22[2] = v21;
  v22[0] = 1;
  v22[1] = get_dtype_size();
  v23[0] = 1;
  v24[0] = 1;
  v23[1] = dtype_size;
  v23[2] = a2;
  v24[1] = dtype_size;
  v24[2] = a3;
  sub_1D6450(a1, 11, (unsigned __int8 *)v22, nullptr, (unsigned __int8 *)v23);
  if ( a2 != a3 )
    sub_1D6450(a1, 10, (unsigned __int8 *)v22, nullptr, (unsigned __int8 *)v24);
  sub_11CDA0((__int64)v24);
  sub_11CDA0((__int64)v23);
  sub_11CDA0((__int64)v22);
  return v25 - __readfsqword(0x28u);
}
