unsigned __int64 __fastcall sub_8BA2B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+3h] [rbp-35h] BYREF
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v7[0] = __readfsqword(0x28u);
  v3 = pack_dd(v6, v7, v2) - (_QWORD)v6;
  if ( v3 )
    sub_8B3AA0(a2, v6, v3);
  v4 = pack_dd(v6, v7, *(unsigned __int8 *)(a1 + 16)) - (_QWORD)v6;
  if ( v4 )
    sub_8B3AA0(a2, v6, v4);
  return v7[0] - __readfsqword(0x28u);
}

