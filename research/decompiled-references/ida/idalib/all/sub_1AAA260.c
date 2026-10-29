void __fastcall sub_1AAA260(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+8h] [rbp-60h]
  char v10; // [rsp+Ch] [rbp-5Ch]
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  char v13; // [rsp+40h] [rbp-28h]
  char v14; // [rsp+48h] [rbp-20h]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 && a3 )
  {
    v12 = a3;
    v8 = (__int64 *)a1;
    v9 = a2;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 && *(_BYTE *)(a1 + 288) != 20 )
    {
      v14 = 1;
      sub_1AA3BD0(&v8, a2, v5, v6, v7);
    }
    sub_1AA9FD0(a1, (void **)(unsigned int)a2, (__int64)&v8, v6, v7, a4);
  }
}
