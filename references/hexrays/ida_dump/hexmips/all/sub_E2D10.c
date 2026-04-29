__int64 __fastcall sub_E2D10(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rbp
  int v4; // r13d
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  __int64 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[1] + 757LL) & 1) != 0 )
    return 0;
  v3 = *(_QWORD *)(a1[2] + 776LL);
  if ( (unsigned __int8)sub_60680((_QWORD *)(v3 + 112)) )
    return 0;
  sub_E19A0((__int64)v5, *(_QWORD *)(*a1 + 8LL), 1);
  v1 = sub_60580(v5, (_QWORD *)(v3 + 112));
  if ( !(_BYTE)v1 || (v4 = sub_60760(v5, 0), v4 != (unsigned int)sub_60760((_QWORD *)(v3 + 96), 0)) )
  {
    if ( v6 )
    {
      v7 = 0;
      qfree(v6);
    }
    qfree(v5[0]);
    return 0;
  }
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
  }
  qfree(v5[0]);
  return v1;
}
