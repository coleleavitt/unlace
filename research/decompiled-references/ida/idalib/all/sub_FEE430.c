bool __fastcall sub_FEE430(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *a1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( !v3 )
      break;
    v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) == 0 || !v2 )
      goto LABEL_5;
  }
  v2 = 0;
LABEL_5:
  v4 = *a2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
      break;
    v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) == 0 || !v4 )
      return v2 == v4;
  }
  return v2 == 0;
}
