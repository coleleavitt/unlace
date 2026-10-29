void __fastcall sub_166A570(__int64 a1, unsigned __int32 a2, int a3, char a4)
{
  _BYTE v6[32]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 *v7[11]; // [rsp+20h] [rbp-98h] BYREF
  char v8; // [rsp+78h] [rbp-40h]
  char v9; // [rsp+84h] [rbp-34h]

  if ( (a3 & 4) != 0 && !*(_DWORD *)(a1 + 1784) )
  {
    sub_168B9F0(v6, a1 + 8, a2, 7267, 0);
    if ( v8 )
    {
      sub_AE9DF0(v7, (__int64)"strict_gs_check", 1u);
    }
    else
    {
      if ( !v9 )
      {
LABEL_6:
        sub_15F7200(v6);
        goto LABEL_3;
      }
      sub_1669EA0((__int64)v6, (__int64)"strict_gs_check");
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
  sub_1667B40(a1 + 1776, a2, a3, nullptr, 0, a4);
}
