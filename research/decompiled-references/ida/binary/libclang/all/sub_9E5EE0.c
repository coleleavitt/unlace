__int64 __fastcall sub_9E5EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v6, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)v6, 3);
  if ( (_BYTE)v4 )
    v4 = sub_922E70(a1, a2, (__int64)v6);
  sub_A1C0C0(v6);
  return v4;
}

