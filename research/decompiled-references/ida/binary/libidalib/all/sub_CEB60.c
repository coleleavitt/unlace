__int64 __fastcall sub_CEB60(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rbp
  __int64 v3; // rdi

  v1 = *(__int64 **)(a1 + 48);
  v2 = &v1[*(_QWORD *)(a1 + 56)];
  while ( v2 != v1 )
  {
    v3 = *v1++;
    sub_CEA20(qword_252590 + (v3 << 8));
  }
  return 1;
}

