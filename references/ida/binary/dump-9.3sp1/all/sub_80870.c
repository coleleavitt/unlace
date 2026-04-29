unsigned __int64 __fastcall sub_80870(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = pack_dq() - (_QWORD)v7;
  if ( v2 )
    sub_7BEC0(a2, v7, v2);
  v3 = pack_dd() - (_QWORD)v7;
  if ( v3 )
    sub_7BEC0(a2, v7, v3);
  v4 = pack_dd() - (_QWORD)v7;
  if ( v4 )
    sub_7BEC0(a2, v7, v4);
  v5 = pack_dd() - (_QWORD)v7;
  if ( v5 )
    sub_7BEC0(a2, v7, v5);
  return v8 - __readfsqword(0x28u);
}
