__int64 __fastcall sub_A8920(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r13
  __int64 v10; // r13
  _BYTE v11[65544]; // [rsp+10h] [rbp-10038h] BYREF
  unsigned __int64 v12; // [rsp+10018h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 344LL) = sub_A8550(a2);
  v2 = sub_A8550(a2);
  if ( v2 <= 0xFFF )
  {
    v10 = v2;
    if ( v2 )
      qlread();
    v11[v10] = 0;
    sub_9C320(a1 + 24, v11);
  }
  v3 = sub_A8550(a2);
  v4 = v3;
  if ( v3 <= 0xFFFF )
  {
    if ( v3 )
      qlread();
    v11[v4] = 0;
    sub_9C320(a1 + 48, v11);
  }
  v5 = sub_A8550(a2);
  v6 = v5;
  if ( v5 <= 0xFFF )
  {
    if ( v5 )
      qlread();
    v11[v6] = 0;
    sub_9C320(a1 + 72, v11);
  }
  v7 = sub_A8550(a2);
  v8 = v7;
  if ( v7 <= 0xFF )
  {
    if ( v7 )
      qlread();
    v11[v8] = 0;
    sub_9C320(a1 + 96, v11);
  }
  qlread();
  *(_DWORD *)(a1 + 128) = (unsigned __int16)unpack_dw();
  qlread();
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL) = 0;
  return 1;
}

