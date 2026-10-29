__int64 __fastcall sub_1766F60(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  int v11; // ecx
  __int64 v12; // rax
  int *v13; // rax
  int v14; // edx
  int v15; // r15d
  __int64 v16; // rax
  int v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  unsigned int v19; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v20[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_175C980(a1, *(_QWORD *)(a2 + 24), 0, a3);
  if ( v7 == 1 )
    return 1;
  v8 = *a1;
  v9 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v9 || (result = a2, *(_QWORD *)(a2 + 24) != v10) )
  {
    v11 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v11 - 22) <= 9 )
    {
      return sub_1929BB0(v8, 0, *(_DWORD *)(a2 + 4), v11, v9, v10, 0);
    }
    else
    {
      sub_15F3080((__int64)v20, *a1);
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
      {
        v12 = 48;
        if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
          v12 = 32;
        v13 = (int *)(a2 + v12);
        v14 = *v13;
        v15 = v13[1];
      }
      else
      {
        v15 = 0;
        v14 = 0;
      }
      v17 = v14;
      sub_BF6C80(&v19, *(_QWORD *)(*a1 + 232));
      *(_DWORD *)(*a1 + 224) = v19 ^ v15 & (v19 ^ v17);
      v16 = *a1;
      *(_DWORD *)(v16 + 1956) = v15;
      *(_DWORD *)(v16 + 1952) = v17;
      v18 = sub_1929BB0(*a1, 0, *(_DWORD *)(a2 + 4), (*(_WORD *)(a2 + 2) >> 3) & 0x3F, v9, v10, 0);
      sub_15F30C0((__int64)v20);
      return v18;
    }
  }
  return result;
}
