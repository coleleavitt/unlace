__int64 __fastcall sub_65FA30(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = pack_dd(a1, a2, *a3);
  v5 = pack_dd(v4, a2, a3[1] - *a3);
  v6 = pack_dd(v5, a2, a3[2] + 1) + 1;
  *(_BYTE *)(v6 - 1) = *((_BYTE *)a3 + 12);
  return v6 - a1;
}

