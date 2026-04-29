unsigned __int64 __fastcall sub_90E00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v6[0] = __readfsqword(0x28u);
  sub_908D0((unsigned __int8 *)a1, (__int64)a2);
  v2 = pack_dd(&v5, v6, (unsigned int)(*(_DWORD *)(a1 + 16) + 1));
  sub_7F760(a2, (__int64)&v5, v2 - (_QWORD)&v5);
  v3 = pack_dd(&v5, v6, (unsigned int)(*(_DWORD *)(a1 + 20) + 1));
  sub_7F760(a2, (__int64)&v5, v3 - (_QWORD)&v5);
  return v6[0] - __readfsqword(0x28u);
}
