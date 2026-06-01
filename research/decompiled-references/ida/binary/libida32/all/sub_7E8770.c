unsigned __int64 __fastcall sub_7E8770(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  size_t v4; // rax
  _BYTE v6[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v7[0] = __readfsqword(0x28u);
  sub_7E7BD0(a2, (const void *)(a1 + 9), 6u);
  v4 = pack_dq(v6, v7, *(_QWORD *)(a1 + 16), v2, v3) - (_QWORD)v6;
  if ( v4 )
    sub_7E7BD0(a2, v6, v4);
  return v7[0] - __readfsqword(0x28u);
}

