__int64 __fastcall sub_CA7F50(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v6 = a3;
  v7[0] = a4;
  if ( a2 == 13 )
    return sub_CA7DB0(a1, 0x4B7u, &v6, v7, a5);
  else
    return sub_CA7DB0(a1, 0x4B8u, &v6, v7, a5);
}
