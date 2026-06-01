__int64 __fastcall sub_3877D0(__int64 a1, char a2)
{
  _BYTE *v2; // rbx
  __int64 v3; // rbp
  char v5[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  v2 = &off_2B25B40;
  do
  {
    v3 = *(_QWORD *)v2;
    sub_593F40(v5);
    if ( a2 )
    {
      if ( batch[0] )
        qunlink(v5);
    }
    else if ( (unsigned __int8)qfileexist(v5, 4096) )
    {
      return v3;
    }
    v2 += 8;
  }
  while ( v2 != algn_2B25B58 );
  return 0;
}
