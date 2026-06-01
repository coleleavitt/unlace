__int64 __fastcall sub_21568B0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + 48;
  sub_21546A0(a1, a2);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (*)()))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".text",
    5,
    a1,
    sub_2154A70);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64)))(**(_QWORD **)(a1 + 8)
                                                                                                  + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".data",
    5,
    a1,
    sub_2154A80);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64 *, __int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".section",
    8,
    a1,
    sub_2156860);
  (*(void (__fastcall **)(_QWORD, char *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".size",
    5,
    a1,
    sub_2154E00);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64)))(**(_QWORD **)(a1 + 8)
                                                                                                  + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".type",
    5,
    a1,
    sub_2155310);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64)))(**(_QWORD **)(a1 + 8)
                                                                                                  + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".ident",
    6,
    a1,
    sub_2154AF0);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".weak",
    5,
    a1,
    sub_2154BE0);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".local",
    6,
    a1,
    sub_2154BE0);
  (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
    *(_QWORD *)(a1 + 8),
    ".internal",
    9,
    a1,
    sub_2154BE0);
  return (*(__int64 (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))(**(_QWORD **)(a1 + 8) + 16LL))(
           *(_QWORD *)(a1 + 8),
           ".hidden",
           7,
           a1,
           sub_2154BE0);
}
