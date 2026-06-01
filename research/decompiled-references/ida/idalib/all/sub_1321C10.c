void __fastcall sub_1321C10(__int64 a1, __int64 a2, char *a3, _BYTE *a4, size_t a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  unsigned __int8 *v11[15]; // [rsp+0h] [rbp-78h] BYREF

  v8 = sub_13217C0(a1, a4, a5, "false", 5);
  if ( v9 != 4 )
  {
    if ( v9 != 5 || *(_DWORD *)v8 != 1936482662 || *(_BYTE *)(v8 + 4) != 101 )
      goto LABEL_3;
    v10 = 0;
LABEL_11:
    *a3 = v10;
    return;
  }
  if ( *(_DWORD *)v8 == 1702195828 )
  {
    v10 = 1;
    goto LABEL_11;
  }
LABEL_3:
  if ( a2 )
  {
    sub_FC70B0((__int64)v11, a2, 0, 304);
    sub_AEC220(v11, a4, a5);
    sub_12FA2D0(v11, (__int64)"a boolean");
    sub_AEA040((__int64)v11);
  }
  else
  {
    *a3 = 0;
  }
}
