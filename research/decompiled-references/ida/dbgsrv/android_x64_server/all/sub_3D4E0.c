/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D4E0
// Address: 0x000000000003D4E0

//----- (000000000003D4E0) ----------------------------------------------------
char __fastcall sub_3D4E0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  char result; // al
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx

  if ( a3 == 1 )
  {
    v5 = a1[1];
    v6 = 56 * ((a1[2] - v5) >> 3) - 1;
    if ( a1[2] == v5 )
      v6 = a1[2] - v5;
    v7 = a1[4] + a1[5];
    if ( v6 == v7 )
    {
      sub_496D0((__int64)a1);
      v5 = a1[1];
      v7 = a1[5] + a1[4];
    }
    v8 = a1 + 5;
    v9 = *(_QWORD *)(v5 + 8 * (v7 / 0x38)) + 72 * (v7 % 0x38);
    *(_QWORD *)v9 = 0xFFFFFFFFLL;
    *(_QWORD *)(v9 + 8) = -1;
    *(_BYTE *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 20) = 0;
    result = copy_debug_event(v9, a2);
  }
  else
  {
    v11 = a1[4];
    if ( !v11 )
    {
      sub_48AB0((__int64)a1);
      v11 = a1[4];
    }
    v12 = v11 / 0x38;
    v13 = a1[1];
    v14 = 0;
    v15 = *(_QWORD *)(v13 + 8 * (v11 / 0x38));
    v16 = v15 + 72 * (v11 % 0x38);
    if ( a1[2] != v13 )
      v14 = v16;
    if ( v14 == v15 )
      v14 = *(_QWORD *)(v13 + 8 * v12 - 8) + 4032LL;
    *(_QWORD *)(v14 - 72) = 0xFFFFFFFFLL;
    *(_QWORD *)(v14 - 64) = -1;
    *(_BYTE *)(v14 - 56) = 0;
    *(_DWORD *)(v14 - 52) = 0;
    result = copy_debug_event(v14 - 72, a2);
    --a1[4];
    v8 = a1 + 5;
  }
  ++*v8;
  return result;
}
