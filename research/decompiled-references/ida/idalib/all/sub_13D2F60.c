__int64 __fastcall sub_13D2F60(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rbp

  v4 = *(_QWORD *)(a1 + 112) + *a2;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_DWORD *)a3 = sub_13D1500(a1, v4, 1);
  *(_WORD *)(a3 + 16) = *((_WORD *)a2 + 4);
  *(_WORD *)(a3 + 18) |= *((_WORD *)a2 + 5);
  *(_DWORD *)(a3 + 4) = a2[1];
  *(_QWORD *)(a1 + 152) = v4 + a2[1];
  return v4;
}
