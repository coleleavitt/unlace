__int64 __fastcall sub_3ED4D0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]

  if ( !*a2
    || (*(_BYTE *)(a3 + 4) & 1) == 0
    && *(_DWORD *)a3 == 1
    && (*(_BYTE *)(a3 + 20) & 1) == 0
    && *(_DWORD *)(a3 + 16) == 1 )
  {
    return sub_27B950(a1, a4, a2);
  }
  if ( a3 == a4 )
  {
    v6 = a4 + 16;
    v8 = 0;
    v9 = 0;
    sub_1831650(a1, a2, a4 + 16);
    sub_1831650(a1, a2 + 4, a4);
    *(_BYTE *)(a4 + 4) &= ~1u;
    *(_DWORD *)a4 = 0;
    sub_182CBA0(a1, &v8);
    if ( *(int *)(a4 + 16) >= 0 )
      goto LABEL_5;
  }
  else
  {
    sub_1831650(a1, a2, a3 + 16);
    v6 = a4 + 16;
    sub_1831650(a1, a2 + 4, a3);
    if ( *(int *)(a4 + 16) >= 0 )
      goto LABEL_5;
  }
  sub_1831620(a1, a4);
  sub_1831620(a1, v6);
LABEL_5:
  v8 = 0;
  v9 = 0;
  sub_1832C70(a1, a4, v6, &v8);
  if ( (v8 & 0x100000000LL) != 0 || (_DWORD)v8 != 1 )
  {
    sub_1833EB0(a1, a4, &v8, a4);
    sub_1833EB0(a1, v6, &v8, v6);
  }
  return sub_182CBA0(a1, &v8);
}

