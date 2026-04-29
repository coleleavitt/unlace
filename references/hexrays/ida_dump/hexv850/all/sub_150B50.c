__int64 __fastcall sub_150B50(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned __int8 *v6; // r12
  unsigned __int8 v7[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 6 )
    return 0;
  if ( *(_QWORD *)(a1 + 32) != 1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)v4 != 4 )
    return 0;
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 != 19 || !v5 )
    return 0;
  v6 = (unsigned __int8 *)(v5 + 8);
  if ( (unsigned __int8)sub_14BA10((__int64)(v5 + 8)) )
  {
    v6 = (unsigned __int8 *)(v5 + 12);
  }
  else if ( !(unsigned __int8)sub_14BA10((__int64)(v5 + 12)) )
  {
    return 0;
  }
  v2 = sub_150AA0(*(_QWORD *)(a2 + 8));
  if ( (_BYTE)v2 )
  {
    sub_11EE80((__int64)v7, v6);
    sub_1205C0(*(_QWORD *)(a1 + 24), v7);
    sub_1181E0((__int64)v7);
    return v2;
  }
  return 0;
}
