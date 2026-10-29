__int64 __fastcall sub_1A8A720(__int64 *a1, unsigned int a2, _QWORD *a3, __int64 *a4, __m128 a5, __m128 a6)
{
  _BYTE v9[32]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int8 *v10; // [rsp+30h] [rbp-98h] BYREF
  char v11; // [rsp+88h] [rbp-40h]
  char v12; // [rsp+94h] [rbp-34h]

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 13) & 0x10) == 0 )
  {
    sub_168B9F0((__int64)v9, a1, a2, 0x1105u, 0);
    if ( v11 )
    {
      sub_AE9DF0(&v10, (__int64)"@throw", 1u);
      sub_15F7200(v9);
    }
    else
    {
      if ( v12 )
        sub_1A8A4A0((__int64)v9, (__int64)"@throw");
      sub_15F7200(v9);
    }
  }
  if ( a3 )
    return sub_1A894D0(a1, a2, a3, a5, a6);
  if ( a4 )
  {
    while ( (*((_BYTE *)a4 + 9) & 4) == 0 )
    {
      a4 = (__int64 *)*a4;
      if ( !a4 )
        goto LABEL_7;
    }
    return sub_1A894D0(a1, a2, a3, a5, a6);
  }
LABEL_7:
  sub_168B9F0((__int64)v9, a1, a2, 0x1353u, 0);
  sub_15F7200(v9);
  return 1;
}
