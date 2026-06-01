__int64 __fastcall sub_6A96D0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = *a1;
  v5 = __readfsqword(0x28u);
  v4 = sub_3B90A0(*(_QWORD **)(v2 + 1480), a2);
  return sub_79B3A0(&v4, *a1, 4294967291LL, 65) & 1;
}

