__int64 __fastcall sub_209E610(__int64 a1, char ***a2, __int64 a3)
{
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-58h] BYREF
  int v6; // [rsp+8h] [rbp-50h]
  __int128 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  char v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v11 = a1;
  v7 = 0;
  v5 = &off_2BEBEE0;
  v6 = 2;
  v9 = 0;
  v10 = 1;
  v8 = 0;
  sub_227B8B0(&v5, 0, 0, 0);
  sub_209E260((__int64)&v5, a2, 0, a3, ((1LL << *(_DWORD *)(a3 + 24)) & 0xEB) == 0 ? 0x5F : 0);
  v5 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v5);
}
