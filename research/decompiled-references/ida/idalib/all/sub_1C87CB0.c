__int64 __fastcall sub_1C87CB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  int *v5; // rax
  int v6; // r14d
  int v7; // r13d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v15[72]; // [rsp+10h] [rbp-48h] BYREF

  sub_15F3080((__int64)v15, *a1);
  if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
  {
    v4 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v4 = 32;
    v5 = (int *)(a2 + v4);
    v6 = *v5;
    v7 = v5[1];
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  sub_BF6C80(&v14, *(_QWORD *)(*a1 + 232));
  v8 = v14;
  v9 = *a1;
  *(_DWORD *)(v9 + 224) = v14 ^ v7 & (v6 ^ v14);
  v10 = *a1;
  *(_DWORD *)(v10 + 1952) = v6;
  *(_DWORD *)(v10 + 1956) = v7;
  v12 = sub_1C87B20(a1, a2, v8, v9, v11, a3, a4);
  sub_15F30C0((__int64)v15);
  return v12;
}
