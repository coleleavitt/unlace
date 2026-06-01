__int64 __fastcall dwarf_get_frame_instruction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _QWORD v14[3]; // [rsp+0h] [rbp-18h] BYREF

  v14[1] = __readfsqword(0x28u);
  v14[0] = 0;
  return dwarf_get_frame_instruction_a(a1, a2, a3, a4, a5, a6, a7, (__int64)v14, a8, a9, a10, a11, a12, a13);
}

