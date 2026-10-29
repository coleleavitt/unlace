bool __fastcall sub_3BD760(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbp
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (a3 & 0x600) != 0x400 )
    return 0;
  v3 = a3 & 0xF0000000;
  if ( v3 == 0x10000000 )
  {
    v5 = sub_3BA340(a1, a2);
  }
  else if ( v3 == 0x20000000 )
  {
    v5 = sub_3BA450(a1, a2);
  }
  else
  {
    if ( v3 )
      return 0;
    sub_3BA160(a1, v6, a2);
    v5 = v6[0];
  }
  if ( v5 < (unsigned int)sub_614FB0(*a1, 23) )
    return 0;
  return (unsigned int)sub_614FB0(*a1, 24) >= v5;
}

