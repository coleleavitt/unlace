unsigned __int64 __fastcall sub_80E530(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v7[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  sub_80AD70(a2, (const void *)a1, 6u);
  v2 = pack_dd(v6, v7, *(unsigned int *)(a1 + 8)) - (_QWORD)v6;
  if ( v2 )
    sub_80AD70(a2, v6, v2);
  sub_80AD70(a2, (const void *)(a1 + 12), 6u);
  v3 = pack_dq(v6, v8, *(_QWORD *)(a1 + 24)) - (_QWORD)v6;
  if ( v3 )
    sub_80AD70(a2, v6, v3);
  v4 = pack_dq(v6, v8, *(_QWORD *)(a1 + 32)) - (_QWORD)v6;
  if ( v4 )
    sub_80AD70(a2, v6, v4);
  return v8[0] - __readfsqword(0x28u);
}
