bool __fastcall sub_651F30(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int *v8; // r12
  bool result; // al
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *a1;
  v10[1] = __readfsqword(0x28u);
  v10[0] = 0;
  sub_6141A0(v6, 26, v10, 8u, a5);
  result = LODWORD(v10[0]) - a2 < (unsigned int)(HIDWORD(v10[0]) - a2)
        && (v7 = (__int64)(a1 + 194), (v8 = sub_4EEBF0(v7)) != nullptr)
        && *sub_4EEB90(v7, 0xFFFFFFFF) - a2 >= *v8 - a2;
  return result;
}

