__int64 __fastcall sub_22093E0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // r13d
  void *v5; // rbp
  unsigned int v7; // eax
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-40h]
  void *v10; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-30h]

  v11 = *(_DWORD *)(a2 + 8);
  if ( v11 > 0x40 )
    sub_2205510((__int64)&v10, (const void **)a2);
  else
    v10 = *(void **)a2;
  sub_22059A0((unsigned __int64 *)&v10, a3);
  v4 = v11;
  v5 = v10;
  v9 = v11;
  v8 = v10;
  if ( (int)sub_2205DB0((unsigned __int64 *)&v8, (unsigned __int64 *)a3) >= 0 )
  {
    *(_DWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  v7 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  if ( v7 > 0x40 )
  {
    sub_2205470(a1, -1, 1);
  }
  else
  {
    *(_QWORD *)a1 = -1;
    sub_CF8100((unsigned __int64 *)a1);
  }
  if ( v4 <= 0x40 || !v5 )
    return a1;
  operator delete[](v5);
  return a1;
}
