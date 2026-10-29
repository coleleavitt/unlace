void __fastcall sub_166A670(__int64 a1, char a2, __int64 a3, int a4)
{
  __int32 v5; // r12d
  _BYTE v6[32]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 *v7[11]; // [rsp+20h] [rbp-98h] BYREF
  char v8; // [rsp+78h] [rbp-40h]
  char v9; // [rsp+84h] [rbp-34h]

  v5 = a3;
  if ( (a2 & 4) != 0 && !*(_DWORD *)(a1 + 1064) )
  {
    sub_168B9F0(v6, a1 + 8, a3, 7267, 0);
    if ( v8 )
    {
      sub_AE9DF0(v7, (__int64)"vtordisp", 1u);
    }
    else
    {
      if ( !v9 )
      {
LABEL_6:
        sub_15F7200(v6);
        goto LABEL_3;
      }
      sub_1669EA0((__int64)v6, (__int64)"vtordisp");
    }
    if ( v8 )
    {
      sub_AE9DF0(v7, (__int64)"stack empty", 1u);
    }
    else if ( v9 )
    {
      sub_1669EA0((__int64)v6, (__int64)"stack empty");
    }
    goto LABEL_6;
  }
LABEL_3:
  sub_1667600(a1 + 1056, v5, a2, nullptr, 0, a4);
}
