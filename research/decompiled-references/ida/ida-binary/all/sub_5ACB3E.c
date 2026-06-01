__int64 __fastcall sub_5ACB3E(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h] BYREF
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-18h]
  unsigned int i; // [rsp+34h] [rbp-Ch]
  unsigned __int64 v12; // [rsp+38h] [rbp-8h]

  sub_5AD090(a2, 16);
  if ( !sub_5AAC71(a1, (__int64)".text", 1u, &v8, &v7) || !v7 )
    return 0;
  v4 = sub_5986B0(a2, 0);
  sub_5ADF07(v4, 0, 16);
  v12 = v8;
  v9 = 4096;
  v5 = sub_598413(&v7, &v9);
  v10 = *v5 + v12;
  while ( v12 < v10 )
  {
    for ( i = 0; i <= 0xF; ++i )
    {
      v6 = (_BYTE *)sub_5986B0(a2, i);
      *v6 ^= *(_BYTE *)(i + v12);
    }
    v12 += 16LL;
  }
  return 1;
}
