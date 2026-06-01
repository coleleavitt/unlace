__int64 __fastcall sub_3E4560(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v12; // [rsp+408h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD, _QWORD, __int64))print_argloc)(
          v11,
          1024,
          a1 + 104,
          0,
          0,
          a7) )
    v11[0] = 0;
  sub_3E3770((__int64 *)(a1 + 216), v11, 1, a2);
  return sub_3E4010(a1, (const char *)(a1 + 104), 1u, v7, v8, v9);
}
