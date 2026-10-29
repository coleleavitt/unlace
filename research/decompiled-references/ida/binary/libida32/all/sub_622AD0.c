__int64 __fastcall sub_622AD0(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = pack_dd(a2, a3, *a1);
  v5 = pack_dd(v4, a3, a1[1] - *a1);
  return pack_dq(v5, a3, *((_QWORD *)a1 + 1), v6, v7) - a2;
}

