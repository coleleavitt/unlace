unsigned __int64 __fastcall reanalyze_function(unsigned __int64 *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[0] = a2;
  v5[1] = a3;
  sub_5CC490(
    *(_QWORD *)(qword_2CCB598 + 1672),
    a1,
    (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))sub_5C41F0,
    (__int64)v5,
    a4);
  return v6 - __readfsqword(0x28u);
}
