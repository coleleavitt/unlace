__int64 __fastcall sub_CD5B0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rdi

  v1 = *(_QWORD **)(a1 + 48);
  v2 = &v1[*(_QWORD *)(a1 + 56)];
  while ( v2 != v1 )
  {
    v3 = 232LL * *v1++;
    sub_CD470(qword_251410 + v3);
  }
  return 1;
}

