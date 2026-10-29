unsigned __int64 __fastcall reanalyze_function(char *a1, int a2, int a3, char a4)
{
  _DWORD v5[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[0] = a2;
  v5[1] = a3;
  sub_5B1640(
    *(_QWORD *)(qword_2CA1698 + 1480),
    a1,
    (void (__fastcall *)(_QWORD, _QWORD, __int64))sub_5A9CA0,
    (__int64)v5,
    a4);
  return v6 - __readfsqword(0x28u);
}

