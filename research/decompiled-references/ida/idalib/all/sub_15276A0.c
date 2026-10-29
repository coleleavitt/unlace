__int64 __fastcall sub_15276A0(__int64 a1)
{
  int *v1; // rbp
  int v3; // eax
  unsigned int v4; // r12d
  __int64 v5; // r15
  __int16 v6; // ax
  unsigned int v7; // r13d
  __int64 *v8; // rdi
  __int16 v9; // ax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 *v12; // rdi
  __int64 v14; // [rsp+8h] [rbp-40h]

  v1 = (int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
    v3 = *(_DWORD *)(a1 + 16);
  v5 = 0;
  *(_DWORD *)(a1 + 40) = v3;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v6 - 7) > 0xCu && v6 != 1 )
    v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v7;
  sub_14634E0(v8, v1);
  v9 = *(_WORD *)(a1 + 32);
  v10 = 0;
  if ( (unsigned __int16)(v9 - 7) > 0xCu && v9 != 1 )
    v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 16);
  v12 = *(__int64 **)(a1 + 8);
  v14 = v10;
  *(_DWORD *)(a1 + 40) = v11;
  sub_14634E0(v12, v1);
  return sub_17E0120(*(_QWORD *)(a1 + 96), v5, v14, v4, v7, v11);
}
