unsigned __int64 __fastcall sub_1505190(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi

  v2 = *a1;
  if ( (v2 & 1) != 0 )
    return (((v2 >> 1) & ~(-1LL << (v2 >> 58))) >> a2) & 1;
  else
    return (*(_QWORD *)(*(_QWORD *)v2 + 8LL * (a2 >> 6)) >> a2) & 1LL;
}
