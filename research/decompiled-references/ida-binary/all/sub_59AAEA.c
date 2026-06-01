__int64 __fastcall sub_59AAEA(unsigned int *a1)
{
  __int64 v3; // rbx
  _QWORD v4[2]; // [rsp+10h] [rbp-130h] BYREF
  char v5[264]; // [rsp+20h] [rbp-120h] BYREF
  signed int v6; // [rsp+128h] [rbp-18h]
  unsigned __int8 v7; // [rsp+12Fh] [rbp-11h]

  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, char *, _QWORD, const char *))(*(_QWORD *)a1 + 72LL))(
         a1,
         v5,
         a1[2],
         "auxv") != 1 )
    return 0;
  v6 = sub_599CE4(v5, 0, 0);
  if ( v6 < 0 )
    return 0;
  v7 = 0;
  while ( sub_599D45(v6, (char *)v4, 0x10u) == 16 && v4[0] )
  {
    if ( v4[0] <= 0x21u )
    {
      v3 = v4[1];
      *(_QWORD *)sub_59C148(a1 + 52, v4[0]) = v3;
      v7 = 1;
    }
  }
  sub_599BF6(v6);
  return v7;
}
