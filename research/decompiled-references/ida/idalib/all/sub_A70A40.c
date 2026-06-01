unsigned __int64 __fastcall sub_A70A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // [rsp+8h] [rbp-E0h]
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a3;
  v4 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    if ( v4
      && ((v6 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL), (*(_QWORD *)(a2 + 80) & 4) != 0)
        ? (v7 = v6[1])
        : (v7 = *v6),
          v3 != v7) )
    {
      ptr[0] = v17;
      ptr[1] = (void *)0x2000000000LL;
      sub_9B7040((__int64)ptr, a2);
      sub_9B7040((__int64)ptr, SHIDWORD(a2));
      sub_9B7040((__int64)ptr, v3);
      sub_9B7040((__int64)ptr, SHIDWORD(v3));
      v15 = 0;
      v11 = sub_2223360(a1 + 600, ptr, &v15, &off_2B41160);
      if ( !v11 || (v12 = v11 - 24) == 0 )
      {
        v13 = sub_A6FFD0((__int64 *)(a1 + 2352), 56, 4u);
        sub_F5D9D0(v13, 53, a2, v3, 1);
        sub_2223210(a1 + 600, v13 + 24, v15, &off_2B41160);
        sub_A6A720(a1 + 8, v13);
        v12 = v13;
      }
      result = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( ptr[0] != v17 )
      {
        v14 = result;
        free(ptr[0]);
        return v14;
      }
    }
    else
    {
      return v5 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  else
  {
    if ( !v4 )
    {
      v9 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
        v3 = v9[1];
      else
        v3 = *v9;
    }
    v10 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    sub_F5D9D0(v10, 53, a2, v3, 0);
    *(_QWORD *)(a2 + 48) = v10;
    sub_A6A720(a1 + 8, v10);
    return v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  return result;
}
