__int64 __fastcall sub_3E7A80(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // r14
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( a3[17] != *(_DWORD *)(a1 + 84) )
    return 0;
  if ( *a3 != 12 )
  {
    if ( *a3 == 13
      && (unsigned __int8)sub_3E5DC0(v9, (__int64)(a3 + 8), (__int64)(a3 + 12), **(_DWORD **)(a1 + 536), 0, a4) )
    {
      goto LABEL_6;
    }
    return 0;
  }
  v7 = (__int64)(a3 + 8);
  v8 = (__int64)(a3 + 12);
  if ( !(unsigned __int8)sub_3E3D30(v9, (__int64)(a3 + 8), (__int64)(a3 + 12))
    && !(unsigned __int8)sub_3E3D30(v9, v8, v7)
    && !(unsigned __int8)sub_3E5DC0(v9, v7, v8, **(_DWORD **)(a1 + 536), 1, a4) )
  {
    return 0;
  }
LABEL_6:
  v5 = v9[0];
  sub_1181E0(a2);
  *(_BYTE *)a2 = 6;
  v6 = 8 * *(_DWORD *)(a1 + 84);
  if ( (unsigned __int64)v6 <= 0x3F )
    v5 &= ~(-1LL << v6);
  *(_QWORD *)(a2 + 8) = v5;
  return 1;
}
