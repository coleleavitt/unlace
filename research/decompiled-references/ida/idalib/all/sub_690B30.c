unsigned __int64 __fastcall sub_690B30(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v6[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v7[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *a1;
  v7[0] = __readfsqword(0x28u);
  v3 = pack_dq(v6, v7, v2 + 1) - (_QWORD)v6;
  if ( v3 )
    sub_68FA20(a2, v6, v3);
  v4 = pack_dq(v6, v7, a1[1] + 1) - (_QWORD)v6;
  if ( v4 )
    sub_68FA20(a2, v6, v4);
  return v7[0] - __readfsqword(0x28u);
}
