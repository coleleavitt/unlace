__int64 __fastcall sub_765200(__int64 a1, const char *a2, size_t a3)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  v5 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -88;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(v5, v7, v6 + 1, 1);
    *v5 = v9;
    v7 = v9;
    v6 = v5[1];
  }
  *(_BYTE *)(v7 + v6) = -88;
  ++v5[1];
  ++*(_DWORD *)(a1 + 200);
  if ( !a3 )
    a3 = strlen(a2);
  sub_764370(a1, a3);
  sub_764370(a1, WORD1(a3));
  result = sub_76C1D0(*(_QWORD *)(a1 + 192), a2, a3);
  *(_DWORD *)(a1 + 200) += a3;
  return result;
}

