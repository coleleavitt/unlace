__int64 __fastcall sub_3F8F20(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5, unsigned __int8 a6)
{
  int dtype_size; // ebp
  __int64 v11; // rbp
  __int64 v12; // [rsp+0h] [rbp-48h]
  int v14; // [rsp+Ch] [rbp-3Ch]

  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  sub_3F55F0(a1, 8u, a5);
  v12 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size(a3);
  if ( !sub_11E2E0(8u) || *(_DWORD *)(v12 + 80) != 8 || (unsigned int)(a5 - 8) > 0x107 || dtype_size != 4 )
    return sub_1D6180(a1, a2, a3, a4, a5, a6);
  v11 = sub_1D6180(a1, a2, a3, a4, v14, a6);
  sub_1D6180(a1, a3, 7u, v14, a5, 0);
  return v11;
}
