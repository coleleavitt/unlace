__int64 __fastcall sub_21965A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  size_t v4; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 8LL * a3);
  v4 = 16;
  if ( !*(_BYTE *)(v3 + 15) )
    v4 = strlen(*(const char **)(*(_QWORD *)(a2 + 80) + 8LL * a3));
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 16) &= ~1u;
  return a1;
}
