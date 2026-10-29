unsigned __int64 __fastcall sub_6F95A0(_QWORD *a1)
{
  char v1; // al
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_6F94D0(a1, (__int64)(a1 + 1), -2);
  sub_6F94D0(a1, (__int64)(a1 + 4), -3);
  v1 = *((_BYTE *)a1 + 57);
  v2 = a1[8] & 0xFLL;
  if ( *((_BYTE *)a1 + 56) )
  {
    if ( !v1 )
    {
      v2 |= 0x400uLL;
      goto LABEL_11;
    }
    v3 = 1024;
    goto LABEL_10;
  }
  if ( v1 )
  {
    v3 = 0;
LABEL_10:
    v2 |= v3 | 0x800;
    goto LABEL_11;
  }
  if ( v2 )
  {
LABEL_11:
    v5 = *a1;
    v7 = -1;
    sub_7BF040(&v7, v5, "$ type parser", 0);
    v6 = *a1;
    v8 = v2;
    sub_7BE7C0(&v7, v6, -4, &v8, 8, 65);
    return v9 - __readfsqword(0x28u);
  }
  netnode_check(&v8, "$ type parser", 0, 0);
  if ( v8 != -1 )
    sub_7BE850(&v8, *a1, -4, 65);
  return v9 - __readfsqword(0x28u);
}
