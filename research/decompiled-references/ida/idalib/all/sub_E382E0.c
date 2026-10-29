unsigned __int64 __fastcall sub_E382E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 *i; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 v17; // [rsp+8h] [rbp-40h]
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = sub_A51060(a2);
  v18[1] = v3;
  v18[0] = v2;
  v17 = sub_A4F310(v18);
  v4 = sub_A510A0(a2);
  v5 = v17;
  v7 = (__int64 *)(v4 + 8 * v6);
  if ( v7 != (__int64 *)v4 )
  {
    for ( i = (__int64 *)v4; v7 != i; ++i )
    {
      while ( 1 )
      {
        v9 = *i;
        v10 = sub_A72040(a1, v5);
        if ( !v10 )
          break;
        v5 = *(_QWORD *)(v10 + 32);
LABEL_4:
        if ( v7 == ++i )
          return v5;
      }
      v15 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 49 > 2 )
      {
        v5 = sub_A7A9D0((__int64)a1, v15, v11, v12, v13, v14);
        goto LABEL_4;
      }
      v5 = *(_QWORD *)(v15 + 48);
    }
  }
  return v5;
}
