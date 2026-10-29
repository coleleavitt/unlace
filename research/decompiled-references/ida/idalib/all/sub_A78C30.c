unsigned __int64 __fastcall sub_A78C30(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v15[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (*a2 & 0x8000) == 0 )
  {
    v4 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
LABEL_3:
    v5 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    sub_F5DD00(v5, a2, a3, v4);
    v6 = v5;
    v7 = v5 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A6A720(a1 + 8, v6);
    return v7;
  }
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v4 = sub_A78C30(a1, a2, 0);
    goto LABEL_3;
  }
  ptr[0] = v15;
  ptr[1] = (void *)0x2000000000LL;
  sub_F5DED0(ptr, a1, a2);
  v13 = 0;
  v9 = sub_2223360(a1 + 432, ptr, &v13, &off_2B40F00);
  if ( v9 && (v10 = v9 - 40) != 0 )
  {
    v7 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v11 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    sub_F5DDF0(v11, a2);
    sub_2223210(a1 + 432, v11 + 40, v13, &off_2B40F00);
    v12 = v11;
    v7 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A6A720(a1 + 8, v12);
  }
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return v7;
}
