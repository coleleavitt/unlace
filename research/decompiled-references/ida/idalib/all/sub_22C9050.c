void __fastcall sub_22C9050(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  char v4; // r9
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-18h] BYREF
  int v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+Ch] [rbp-Ch]

  v3 = *(_DWORD *)(a1 + 120);
  v4 = *(_BYTE *)(a1 + 140);
  if ( a3 || v3 != *(_DWORD *)(a1 + 136) || !v4 )
  {
    v6 = *(_DWORD *)(a1 + 136);
    v7 = v4;
    v5 = off_2C712D0;
    sub_2212590(a1 + 144, a1, v3, (__int64)&v5, a2);
  }
}
