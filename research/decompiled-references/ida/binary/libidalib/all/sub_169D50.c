unsigned __int64 __fastcall sub_169D50(__int64 *a1)
{
  int v1; // r9d
  _BYTE _0[88]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  sub_15DFF0(a1 + 34, a1[111], 0, 1);
  sub_169320((__int64)_0, (int)a1, 7, 0, -32768, v1);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 256))(a1, 2, 1);
  sub_169C90((__int64)_0);
  return vars58 - __readfsqword(0x28u);
}

