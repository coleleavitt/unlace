__int64 __fastcall sub_8A1720(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  int v3; // eax
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  _OWORD *v7; // r12
  _BYTE v9[96]; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v2 = *a1;
  v11 = __readfsqword(0x28u);
  v3 = unpack_dd(a1);
  if ( v3 > 3 )
  {
    if ( (debug & 0x200) != 0 )
      sub_3879F0();
    return (unsigned int)-1;
  }
  v4 = v3;
  if ( v3 > 1 )
  {
    v5 = v1 - v2;
    if ( v5 > 0x10 )
    {
      v6 = v5 - 16;
      memset(v9, 0, 0x58u);
      MD5Init(v9);
      MD5Update(v9, v2, v6);
      v7 = (_OWORD *)(v6 + v2);
      MD5Final(&v10, v9);
      if ( v10 - *v7 == 0 )
      {
        a1[1] = (__int64)v7;
        return v4;
      }
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
    }
    return (unsigned int)-1;
  }
  return v4;
}
