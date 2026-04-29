__int64 __fastcall sub_E16D0(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r13d
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[1] + 757LL) & 1) != 0 )
    return 0;
  v3 = *(_QWORD *)(a1[2] + 768LL);
  if ( (unsigned __int8)sub_63F80((_QWORD *)(v3 + 112)) )
    return 0;
  sub_DF4F0((__int64)v7, *(_QWORD **)(*a1 + 8LL), 1, v4, v5);
  v1 = sub_63E80(v7, (_QWORD *)(v3 + 112));
  if ( !(_BYTE)v1 || (v6 = sub_64060(v7, 0), v6 != (unsigned int)sub_64060((_QWORD *)(v3 + 96), 0)) )
  {
    if ( v8 )
    {
      v9 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  if ( v8 )
  {
    v9 = 0;
    qfree();
  }
  qfree();
  return v1;
}
