/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FE20
// Address: 0x000000000042FE20

//----- (000000000042FE20) ----------------------------------------------------
__int64 __fastcall sub_42FE20(__int64 a1)
{
  char v1; // r12
  void **v2; // rbp
  _BYTE *v3; // rax
  void *v4; // rsi
  void **v5; // rbp
  _BYTE *v6; // rax
  void *v7; // rsi
  void *v9; // rax
  void *v10; // rax

  v1 = 112;
  if ( *(_DWORD *)(a1 + 216) != 1 )
    v1 = -32;
  v2 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = v1;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v9 = sub_481540((__int64)v2, v4, (unsigned __int64)(v3 + 1), 1u);
    *v2 = v9;
    v4 = v9;
    v3 = v2[1];
  }
  v3[(_QWORD)v4] = v1;
  v2[1] = (char *)v2[1] + 1;
  v5 = *(void ***)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 212) = -81;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < v6 + 1 )
  {
    v10 = sub_481540((__int64)v5, v7, (unsigned __int64)(v6 + 1), 1u);
    *v5 = v10;
    v7 = v10;
    v6 = v5[1];
  }
  v6[(_QWORD)v7] = -81;
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
