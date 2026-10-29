__int64 __fastcall sub_63FCD0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = pack_dq(a2, a3, *a1);
  v5 = pack_dq(v4, a3, a1[1] - *a1);
  return pack_dq(v5, a3, a1[2]) - a2;
}
