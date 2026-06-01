__int64 __fastcall sub_87DDA0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  int v3; // eax
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbx
  _OWORD *v6; // r12
  _BYTE v8[96]; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v9; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v2 = *a1;
  v10 = __readfsqword(0x28u);
  v3 = unpack_dd(a1);
  if ( v3 > 3 )
  {
    if ( (debug & 0x200) != 0 )
      sub_383DA0();
    return (unsigned int)-1;
  }
  v4 = v3;
  if ( v3 > 1 )
  {
    v5 = v1 - v2;
    if ( v5 > 0x10 )
    {
      memset(v8, 0, 0x58u);
      MD5Init(v8);
      MD5Update();
      v6 = (_OWORD *)(v5 - 16 + v2);
      MD5Final(&v9, v8);
      if ( v9 - *v6 == 0 )
      {
        a1[1] = (__int64)v6;
        return v4;
      }
      if ( (debug & 0x200) != 0 )
        sub_383DA0();
    }
    return (unsigned int)-1;
  }
  return v4;
}

