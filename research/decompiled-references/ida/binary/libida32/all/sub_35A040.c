unsigned __int64 __fastcall sub_35A040(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int final_alignment; // ebp
  unsigned int radix; // eax
  _BYTE v8[136]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  final_alignment = get_final_alignment(a4);
  radix = get_radix(a3, 0);
  btoa32(v8, 136, final_alignment, radix);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v8, 31);
  return v9 - __readfsqword(0x28u);
}

