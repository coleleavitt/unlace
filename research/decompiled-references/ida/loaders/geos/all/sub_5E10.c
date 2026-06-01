__int64 __fastcall sub_5E10(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  int v6; // r13d
  const char *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-198h] BYREF
  __int16 v12; // [rsp+1Ch] [rbp-17Ch]
  int v13; // [rsp+60h] [rbp-138h] BYREF
  __int16 v14; // [rsp+64h] [rbp-134h]
  __int16 v15; // [rsp+88h] [rbp-110h]
  unsigned __int64 v16; // [rsp+168h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  if ( qlread(a3, &v13, 256) != 256 )
    return 0;
  v5 = 256;
  if ( v13 == 1406092743 )
  {
    if ( v14 )
      return 0;
    v6 = 1;
    v5 = 200;
  }
  else
  {
    if ( v13 != 1405175239 )
      return 0;
    v6 = 2;
    if ( v15 != 1 )
      return 0;
  }
  qlseek(a3, v5, 0);
  if ( qlread(a3, &v11, 88) != 88 )
    return 0;
  v8 = "Library";
  if ( v12 != 2 )
  {
    v8 = "Driver";
    if ( v12 != 3 )
    {
      v8 = "Application";
      if ( v12 != 1 )
        v8 = "Unknown type";
    }
  }
  sub_3130(a1, (__int64)"GEOS%d %s", v6, v8);
  v9 = *a2;
  if ( (unsigned __int64)a2[2] <= 6 )
  {
    v10 = qvector_reserve(a2, v9, 7, 1);
    *a2 = v10;
    v9 = v10;
  }
  a2[1] = 7;
  *(_DWORD *)v9 = 1635018093;
  *(_WORD *)(v9 + 4) = 25456;
  *(_BYTE *)(*a2 + 6) = 0;
  return 1;
}

