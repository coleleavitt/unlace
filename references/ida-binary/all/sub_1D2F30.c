void __fastcall sub_1D2F30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  void *v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  void *v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[3] = (void *)__readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v3 + 1) )
  {
    v9[1] = (void *)0x100000001LL;
    v4 = (_BYTE *)operator new[](1u);
    *v4 = 0;
    v9[0] = v4;
    sub_1CAEC0((__int64)v9, a2);
    v5 = v9[0];
    sub_1D2D00(a1, 2 * *(_DWORD *)(a1 + 12) + 1);
    v6 = *(unsigned int *)(a1 + 12);
    v7 = v6 + 1;
    v8 = *(_QWORD *)a1 + 16 * v6;
    *(_DWORD *)(a1 + 12) = v7;
    sub_1CAEC0(v8, (__int64)v9);
    *(_BYTE *)(a1 + 17) = 0;
    if ( v5 )
      operator delete[](v5);
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v3 + 1;
    sub_1CAEC0(*(_QWORD *)a1 + 16 * v3, a2);
    *(_BYTE *)(a1 + 17) = 0;
  }
}
