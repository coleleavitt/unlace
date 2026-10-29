__int64 __fastcall sub_195D190(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  int v5; // r12d
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int16 v13; // cx
  __int16 v14; // cx
  int v15; // r8d
  int v16; // ecx
  unsigned __int64 v17; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_194C930(a1, *(void ***)(a2 + 24), a3, a4);
  if ( !v4 )
    return 1;
  v5 = (int)v4;
  v6 = (unsigned __int16 *)sub_BFA3B0(a2);
  v7 = sub_1944E10(a1, v6, a3, a4);
  if ( v7 == 1 )
    return 1;
  v9 = *(_DWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 36);
  v11 = *a1;
  v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v13 = *(_WORD *)v12;
  v17 = v12;
  v14 = v13 & 0x1FF;
  if ( v14 == 19 )
  {
    v15 = *(_DWORD *)(v12 + 4);
    v16 = v12 + 24;
    return sub_19AB130(v11, v5, v9, v16, v15, v10, v9 == 0);
  }
  if ( v14 == 103 )
  {
    v15 = *(_DWORD *)(v12 + 16);
    v16 = v12 + 48;
    return sub_19AB130(v11, v5, v9, v16, v15, v10, v9 == 0);
  }
  return sub_19AB130(v11, v5, v9, (unsigned int)&v17, 1, v10, v9 == 0);
}
