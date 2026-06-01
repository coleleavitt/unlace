__int64 __fastcall sub_522910(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  FILE *v3; // rax
  FILE *v4; // rbx

  v2 = 0;
  v3 = (FILE *)qfopen(a2, "w");
  if ( v3 )
  {
    v4 = v3;
    LOBYTE(v2) = qfwrite(v3, *(void **)(a1 + 32)) == (*(_QWORD *)(a1 + 40) == 0) + *(_QWORD *)(a1 + 40) - 1LL;
    qfclose(v4);
  }
  return v2;
}
