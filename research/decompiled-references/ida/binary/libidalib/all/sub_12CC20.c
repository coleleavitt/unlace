__int64 __fastcall sub_12CC20(int a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int16 v6; // [rsp+Ch] [rbp-1Ch] BYREF
  __int16 v7; // [rsp+Eh] [rbp-1Ah] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v6 = getinf();
  v7 = (unsigned int)getinf() >> 16;
  if ( a1 == 2 )
  {
    sub_12A230(&unk_252CC0);
    return 0;
  }
  if ( a1 > 2 )
  {
    if ( a1 == 4 )
    {
      sub_12C9C0();
      return 0;
    }
    goto LABEL_10;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (unsigned int)sub_18C660(1054, (unsigned int)&v7, v1, v2, v3, v4) )
      {
        getinf();
        setinf();
      }
      return 0;
    }
LABEL_10:
    v8 = 1;
    sub_9E360();
    return 0;
  }
  if ( (unsigned int)sub_18C660(1053, (unsigned int)&v6, v1, v2, v3, v4) )
  {
    getinf();
    setinf();
  }
  return 0;
}

