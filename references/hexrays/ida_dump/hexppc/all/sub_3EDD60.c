unsigned __int64 __fastcall sub_3EDD60(__int64 a1, int a2, int a3, int a4, unsigned int a5, double a6)
{
  char v7; // al
  char v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  int dtype_size; // eax
  int v20; // eax
  int v22; // eax
  char v23; // [rsp+0h] [rbp-80h]
  int v26; // [rsp+10h] [rbp-70h]
  unsigned __int8 v27; // [rsp+18h] [rbp-68h]
  unsigned int v28; // [rsp+1Ch] [rbp-64h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v28 = a5;
  v32 = __readfsqword(0x28u);
  v29[1] = 0;
  v29[0] = 0xFFFFFFFF00000000LL;
  v7 = sub_3EDA80(a1, (__int64)v29, &v28);
  v8 = v28;
  v9 = *(_QWORD *)(a1 + 832);
  v23 = v7;
  v10 = v28 & 2;
  if ( v7 == 1 || (v28 & 2) != 0 || *(_DWORD *)(v9 + 80) != 4 )
  {
    v11 = *(_QWORD *)(v9 + 4464);
    if ( !v11 )
      sub_3E6800(a6, a1, (__int64)v29);
    v27 = v28 & 1;
    v12 = *(int *)(*(_QWORD *)(v9 + 4456) + 4 * v11 - 4);
    *(_QWORD *)(v9 + 4464) = v11 - 1;
    sub_1D2C40(a1, 2u, 7u, a3, v12, v8 & 1);
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(_QWORD *)(v13 + 4464);
    if ( !v14 )
      sub_3E6800(a6, a1, 2);
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 4456) + 4 * v14 - 4);
    *(_QWORD *)(v13 + 4464) = v14 - 1;
    v26 = v15;
    sub_1D2C40(a1, 2u, 7u, a4, v15, v27);
    v16 = *(_QWORD *)(a1 + 832);
    v17 = *(_QWORD *)(v16 + 4464);
    if ( !v17 )
      sub_3E6800(a6, a1, 2);
    v18 = *(_DWORD *)(*(_QWORD *)(v16 + 4456) + 4 * v17 - 4);
    *(_QWORD *)(v16 + 4464) = v17 - 1;
    dtype_size = get_dtype_size(7);
    sub_1D2710(a1, 0xEu, dtype_size, v12, v26, v18, 0);
    if ( v23 )
    {
      v30 = 0x800000001LL;
      v31 = v18;
      sub_1D2850(a1, 4, (unsigned __int8 *)&v30, nullptr, (unsigned __int8 *)v29);
      sub_119360((__int64)&v30);
    }
    else if ( v10 )
    {
      sub_3EA390(a1, 11, v18, a2, 7u);
    }
    else
    {
      v20 = get_dtype_size(7);
      sub_1D2710(a1, 4u, v20, v18, 0x3BEA45E214ADDC55LL, a2, 0);
    }
  }
  else
  {
    v22 = get_dtype_size(2);
    sub_1D2710(a1, 0xEu, v22, a3, a4, a2, 0);
  }
  sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
  sub_119360((__int64)v29);
  return v32 - __readfsqword(0x28u);
}
