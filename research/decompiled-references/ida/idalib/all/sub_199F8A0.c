__int64 __fastcall sub_199F8A0(_DWORD **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  int v9; // eax

  v7 = (unsigned int)(**a1 + 1);
  if ( (unsigned int)v7 >= (unsigned int)sub_B76070(*a2, (__int64)a2, a3, a4) )
    return 1;
  LOBYTE(v9) = sub_F611E0(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 120) + 8 * v7) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
                 (__int64)a2,
                 1,
                 v4,
                 v5,
                 v6);
  return v9 ^ 1u;
}
