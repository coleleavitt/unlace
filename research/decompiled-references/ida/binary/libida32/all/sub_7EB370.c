unsigned __int64 __fastcall sub_7EB370(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  size_t v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // rax
  _BYTE v10[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v11[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v12[6]; // [rsp+18h] [rbp-30h] BYREF

  v12[0] = __readfsqword(0x28u);
  sub_7E7BD0(a2, (const void *)a1, 6u);
  v2 = pack_dd(v10, v11, *(unsigned int *)(a1 + 8)) - (_QWORD)v10;
  if ( v2 )
    sub_7E7BD0(a2, v10, v2);
  sub_7E7BD0(a2, (const void *)(a1 + 12), 6u);
  v5 = pack_dq(v10, v12, *(_QWORD *)(a1 + 24), v3, v4) - (_QWORD)v10;
  if ( v5 )
    sub_7E7BD0(a2, v10, v5);
  v8 = pack_dq(v10, v12, *(_QWORD *)(a1 + 32), v6, v7) - (_QWORD)v10;
  if ( v8 )
    sub_7E7BD0(a2, v10, v8);
  return v12[0] - __readfsqword(0x28u);
}

