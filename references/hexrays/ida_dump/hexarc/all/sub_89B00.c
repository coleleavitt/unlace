unsigned __int64 __fastcall sub_89B00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v6[0] = __readfsqword(0x28u);
  sub_88FC0((__int64)a2, 2, "va_adaptor.va_ids");
  sub_798E0(a2, (unsigned int **)(a1 + 24));
  sub_88FC0((__int64)a2, 2, "va_adaptor.last_fixed");
  v2 = pack_dd(&v5, v6, (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  sub_79160(a2, (__int64)&v5, v2 - (_QWORD)&v5);
  sub_88FC0((__int64)a2, 2, "va_adaptor.flags");
  v3 = pack_dd(&v5, v6, *(unsigned int *)(a1 + 52));
  sub_79160(a2, (__int64)&v5, v3 - (_QWORD)&v5);
  return v6[0] - __readfsqword(0x28u);
}
