__int64 __fastcall sub_3F56D0(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v11; // eax
  __int64 v12; // rbp
  int v14; // eax
  int v15; // [rsp+Ch] [rbp-4Ch]
  __int64 v16; // [rsp+10h] [rbp-48h]
  int dtype_size; // [rsp+18h] [rbp-40h]

  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  sub_3F55F0(a1, a2, a6);
  v16 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size(a3);
  if ( sub_11E2E0(a2) && *(_DWORD *)(v16 + 80) == 8 && (unsigned int)(a6 - 8) <= 0x107 && dtype_size == 4 )
  {
    v14 = get_dtype_size(a3);
    v12 = sub_1D5D50(a1, a2, v14, a4, a5, v15, a7);
    sub_1D6180(a1, 2u, 7u, v15, a6, 0);
  }
  else
  {
    v11 = get_dtype_size(a3);
    v12 = sub_1D5D50(a1, a2, v11, a4, a5, a6, a7);
  }
  sub_3F1070(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 8), v12);
  return v12;
}
