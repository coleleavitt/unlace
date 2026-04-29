_BYTE *__fastcall sub_11B730(_BYTE *a1, int a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != a2 )
  {
    v6 = a2;
    memset(&v3[1], 0, 32);
    v4 = 0;
    v3[0] = &off_4B1180;
    v5 = 0;
    sub_119D40(a1, (__int64)v3);
    return (_BYTE *)v5;
  }
  return a1;
}
