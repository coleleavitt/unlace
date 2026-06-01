unsigned __int64 __fastcall sub_B8B690(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned __int64 v9; // rbx

  v9 = sub_B6C590(112, a1, a2, 0);
  sub_B8B540(v9, (__int64)a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v9 + 104) = *(_QWORD *)(v9 + 104) & 0xFFFFFFFFFFFFFFFBLL
                        | (4LL * (((*(_BYTE *)(a1[290] + 21LL) >> 1) ^ 1) & 1));
  return v9;
}

