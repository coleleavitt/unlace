__int64 __fastcall sub_614250(
        __int64 *a1,
        void *a2,
        __int64 a3,
        unsigned __int64 a4,
        const char *a5,
        __int64 *a6,
        double a7,
        double a8)
{
  __int64 v12; // rdi
  __int64 *opinfo; // rax
  _QWORD v16[43]; // [rsp+0h] [rbp-158h] BYREF

  v12 = *a1;
  v16[35] = __readfsqword(0x28u);
  if ( (unsigned int)sub_60AA20(v12, a2, a5, a6, 0) && (get_tinfo_property(*a6, 2) & 0xF) != 0xC )
    return 2;
  opinfo = (__int64 *)get_opinfo(v16, a2, 0, a3);
  return sub_613380(a1, (unsigned __int64)a2, a3, opinfo, a4, a7, a8, (__int64)a5, a6);
}
