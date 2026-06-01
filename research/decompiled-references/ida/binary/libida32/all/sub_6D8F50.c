unsigned __int64 __fastcall sub_6D8F50(_QWORD *a1)
{
  char v1; // al
  int v2; // ebp
  int v3; // eax
  __int64 v5; // rsi
  __int64 v6; // rsi
  int v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_6D8E70(a1, (__int64)(a1 + 1), 0xFFFFFFFE);
  sub_6D8E70(a1, (__int64)(a1 + 4), 0xFFFFFFFD);
  v1 = *((_BYTE *)a1 + 57);
  v2 = a1[8] & 0xF;
  if ( *((_BYTE *)a1 + 56) )
  {
    if ( !v1 )
    {
      v2 |= 0x400u;
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
    sub_79BC40(&v7, v5, "$ type parser", 0);
    v6 = *a1;
    v8 = v2;
    sub_79B440(&v7, v6, 4294967292LL, &v8, 4, 65);
    return v9 - __readfsqword(0x28u);
  }
  netnode_check(&v8, "$ type parser", 0, 0);
  if ( v8 != -1 )
    sub_79B4D0(&v8, *a1, 4294967292LL, 65);
  return v9 - __readfsqword(0x28u);
}

