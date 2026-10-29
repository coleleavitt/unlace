__int64 __fastcall sub_1767120(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int *v4; // rax
  int v5; // r14d
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v11[72]; // [rsp+10h] [rbp-48h] BYREF

  sub_15F3080((__int64)v11, *a1);
  if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
  {
    v3 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v3 = 32;
    v4 = (int *)(a2 + v3);
    v5 = *v4;
    v6 = v4[1];
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  sub_BF6C80(&v10, *(_QWORD *)(*a1 + 232));
  *(_DWORD *)(*a1 + 224) = v10 ^ v6 & (v5 ^ v10);
  v7 = *a1;
  *(_DWORD *)(v7 + 1952) = v5;
  *(_DWORD *)(v7 + 1956) = v6;
  v8 = sub_1766F60(a1, a2, a3);
  sub_15F30C0((__int64)v11);
  return v8;
}
