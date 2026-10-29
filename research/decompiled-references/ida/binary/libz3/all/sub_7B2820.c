__int64 __fastcall sub_7B2820(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-28h]
  _BYTE v8[32]; // [rsp+8h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(a1 + 24) + 3904LL;
  sub_17F9A60(v8, "sat");
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned __int8 *)(v2 + 289);
  if ( (_BYTE)v3 )
  {
    v6 = sub_1859630(v7, "override_incremental", v8, 0);
    v2 = *(_QWORD *)(a1 + 24);
    v3 = v6 ^ 1;
  }
  v4 = sub_11B5060(v2) | v3;
  sub_18572D0(v8);
  return v4;
}

