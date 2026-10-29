__int64 __fastcall sub_4094A0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, char a7, char a8)
{
  char v11; // r10
  int v13; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v14[11]; // [rsp+20h] [rbp-58h] BYREF

  v14[3] = __readfsqword(0x28u);
  v11 = a7;
  v13 = 0;
  if ( !a8 )
  {
    if ( a4 )
    {
      sub_409130(v14, a1, &v13, a4, a6, a7);
      sub_122C80(a2, (unsigned __int8 *)v14);
      sub_11A960((__int64)v14);
      v11 = a7;
      if ( !a5 )
        return 1;
    }
    else if ( !a5 )
    {
      return 1;
    }
    sub_409130(v14, a1, &v13, a5, a6, v11);
    sub_122C80(a3, (unsigned __int8 *)v14);
    sub_11A960((__int64)v14);
    return 1;
  }
  if ( !a6 )
  {
    if ( a4 )
    {
      sub_409030(v14, a1, &v13, a4, a7);
      sub_122C80(a2, (unsigned __int8 *)v14);
      sub_11A960((__int64)v14);
      v11 = a7;
    }
    if ( a5 )
    {
      sub_409030(v14, a1, &v13, a5, v11);
      sub_122C80(a3, (unsigned __int8 *)v14);
      sub_11A960((__int64)v14);
    }
    return 1;
  }
  return 0;
}
