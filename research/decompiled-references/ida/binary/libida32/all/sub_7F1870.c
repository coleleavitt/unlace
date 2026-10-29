__int64 __fastcall sub_7F1870(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int16 v8; // cx
  _QWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+10h] [rbp-28h]
  char v12; // [rsp+14h] [rbp-24h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v6 = *(_QWORD *)(a2 + 80);
  if ( !v6 )
    return v6;
  if ( *(int *)(a1 + 776) > 8 )
    return 0;
  v8 = *(_WORD *)(a2 + 41);
  v10[0] = a1;
  v10[1] = a2;
  v11 = a3;
  v12 = 0;
  v6 = sub_7F1590((__int64)v10, v6, a3, v8, 0, a6);
  if ( v6 && (debug & 4) != 0 )
    sub_383DA0();
  *a4 = v12;
  return v6;
}

