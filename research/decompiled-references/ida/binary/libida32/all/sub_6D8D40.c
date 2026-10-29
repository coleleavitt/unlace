unsigned __int64 __fastcall sub_6D8D40(_QWORD *a1)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  a1[2] = 0;
  a1[5] = 0;
  *((_WORD *)a1 + 28) = 0;
  a1[8] = 0;
  netnode_check(&v5, "$ type parser", 0, 0);
  if ( v5 != -1 )
  {
    sub_79B6F0(&v5, *a1, a1 + 1, 4294967294LL, 83);
    sub_79B6F0(&v5, *a1, a1 + 4, 4294967293LL, 83);
    if ( (unsigned __int8)sub_79BBD0(&v5, *a1, &v6, 4294967292LL, 65) )
    {
      v2 = v6;
      *((_BYTE *)a1 + 56) = (v6 & 0x400) != 0;
      *((_BYTE *)a1 + 57) = (v2 & 0x800) != 0;
      v3 = v2 & 0xF;
      v4 = 0;
      if ( (unsigned int)(v3 - 1) <= 3 )
        v4 = v3;
      a1[8] = v4;
    }
  }
  return v7 - __readfsqword(0x28u);
}

