bool __fastcall sub_11BB60(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD v4[6]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v5[5]; // [rsp+30h] [rbp-48h] BYREF
  char v6; // [rsp+58h] [rbp-20h]
  _QWORD *v7; // [rsp+60h] [rbp-18h]
  unsigned __int64 v8; // [rsp+68h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v4[5] = a2;
  v4[0] = &off_4B1220;
  v2 = 1;
  memset(&v4[1], 0, 24);
  v4[4] = a1;
  if ( a2 == *(_QWORD *)(a1 + 24) )
  {
    memset(&v5[1], 0, 32);
    v6 = 0;
    v5[0] = &off_4B10B8;
    v7 = v4;
    v2 = sub_119D40((_BYTE *)a1, (__int64)v5);
  }
  return v2 == 0;
}
