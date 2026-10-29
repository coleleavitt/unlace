__int64 __fastcall sub_188A210(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp-10h] [rbp-28h]

  v8 = a3;
  v9 = sub_A7A9D0(*(_QWORD *)(a1 + 248), a2, a3, a4, a5, a6);
  sub_1889AD0(a1, *(unsigned int *)(a2 + 24), v9, (v8 & 0xFFFFFFFD) == 1, v8, 2, a7, a8, 0, 1);
  return v11;
}
