void __fastcall sub_4D8660(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi

  v2 = a1 + 48;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 96) = -1;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v4, a2);
  }
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_QWORD *)(a1 + 104) = 12;
  *(_QWORD *)(a1 + 112) = -1;
  *(_QWORD *)(a1 + 120) = -1;
}
