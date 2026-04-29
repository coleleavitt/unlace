__int64 __fastcall sub_5FC80(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 i; // rax
  __int64 v8; // rdx
  unsigned int v9; // r11d

  v2 = a1[1];
  v3 = a2[1];
  if ( v3 < v2 )
  {
    a1[1] = v3;
    v2 = v3;
  }
  v4 = v2 >> 6;
  v5 = *a1;
  v6 = *a2;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = *(_QWORD *)(v5 + 8 * i);
      if ( (v8 & ~*(_QWORD *)(v6 + 8 * i)) != 0 )
        *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)(v6 + 8 * i) & v8;
    }
  }
  sub_5F880(a1);
  return v9;
}
