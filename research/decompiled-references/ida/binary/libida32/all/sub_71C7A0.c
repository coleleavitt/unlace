__int64 __fastcall sub_71C7A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  unsigned int *v7; // rbx
  __int128 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)qfileexist(a1, a2) )
    off_2C57CC0(7u, 0, v2, v3, v4, v5);
  v13[0] = a1;
  v7 = (unsigned int *)operator new(0x18u);
  sub_71AD90((__int64)v7, v13, 1, 0);
  if ( !sub_71ADB0(v7) || (v8 = &xmmword_2CA2700, (unsigned int)sub_71AED0(v7, 0, 0x2Du, (__int64)&xmmword_2CA2700)) )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    if ( strcmp(byte_2CA2713, aBTreeV2_0) && strcmp(byte_2CA2713, aBTreeV16CPol19) )
    {
      if ( v7 )
      {
        sub_71ABB0(v7);
        operator delete(v7, 0x18u);
      }
      off_2C57CC0(0xCu, 0, v9, v10, v11, v12);
    }
    byte_2CA2712 = 0;
    LOBYTE(v8) = (unsigned int)sub_71B040(v7, 0, 0x2Du, (__int64)&xmmword_2CA2700) == 0;
  }
  if ( v7 )
  {
    sub_71ABB0(v7);
    operator delete(v7, 0x18u);
  }
  return (unsigned int)v8;
}

