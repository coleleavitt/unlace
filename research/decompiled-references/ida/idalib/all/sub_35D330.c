unsigned __int64 __fastcall sub_35D330(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 final_alignment; // rbp
  unsigned int radix; // eax
  _BYTE v8[136]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  final_alignment = get_final_alignment(a4);
  radix = get_radix(a3, 0);
  btoa64(v8, 136, final_alignment, radix);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v8, 31);
  return v9 - __readfsqword(0x28u);
}
