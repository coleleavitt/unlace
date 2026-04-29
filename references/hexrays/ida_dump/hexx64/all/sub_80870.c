unsigned __int64 __fastcall sub_80870(__int64 a1, __int64 *a2, __int64 a3)
{
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  _BYTE v8[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v9[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v10[0] = __readfsqword(0x28u);
  v3 = pack_dq(v8, v10, *(_QWORD *)a1 + 1 - a3) - (_QWORD)v8;
  if ( v3 )
    sub_7BEC0(a2, v8, v3);
  v4 = pack_dd(v8, v9, *(unsigned int *)(a1 + 8)) - (_QWORD)v8;
  if ( v4 )
    sub_7BEC0(a2, v8, v4);
  v5 = pack_dd(v8, v9, *(unsigned int *)(a1 + 12)) - (_QWORD)v8;
  if ( v5 )
    sub_7BEC0(a2, v8, v5);
  v6 = pack_dd(v8, v9, (unsigned int)(*(_DWORD *)(a1 + 16) + 1)) - (_QWORD)v8;
  if ( v6 )
    sub_7BEC0(a2, v8, v6);
  return v10[0] - __readfsqword(0x28u);
}
