__int64 __fastcall sub_114990(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rbp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 4 )
    return 0;
  v3 = *(_DWORD **)(a1 + 8);
  if ( *v3 != 20 )
    return 0;
  if ( (unsigned __int8)sub_11B8C0(v3 + 12, v4, 0) && v4[0] == 0x3FFFFFFF )
  {
    *a2 = v3 + 8;
    return 1;
  }
  if ( !(unsigned __int8)sub_11B8C0(v3 + 8, v4, 0) || v4[0] != 0x3FFFFFFF )
    return 0;
  *a2 = v3 + 12;
  return 1;
}
