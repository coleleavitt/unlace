unsigned __int64 __fastcall sub_6F9380(_QWORD *a1)
{
  __int16 v2; // ax
  __int16 v3; // dx
  __int64 v4; // rax
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  a1[2] = 0;
  a1[5] = 0;
  *((_WORD *)a1 + 28) = 0;
  a1[8] = 0;
  netnode_check(&v5, "$ type parser", 0, 0);
  if ( v5 != -1 )
  {
    sub_7BEA80(&v5, *a1, a1 + 1, -2, 83);
    sub_7BEA80(&v5, *a1, a1 + 4, -3, 83);
    if ( (unsigned __int8)sub_7BEFD0(&v5, *a1, &v6, -4, 65) )
    {
      v2 = v6;
      *((_BYTE *)a1 + 56) = (v6 & 0x400) != 0;
      v3 = v2;
      v4 = v2 & 0xF;
      *((_BYTE *)a1 + 57) = (v3 & 0x800) != 0;
      if ( (unsigned __int64)(v4 - 1) > 3 )
        v4 = 0;
      a1[8] = v4;
    }
  }
  return v7 - __readfsqword(0x28u);
}
