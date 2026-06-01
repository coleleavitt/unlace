__int64 __fastcall sub_19F5190(unsigned __int64 *a1)
{
  if ( *a1 == a1[2] )
    return 0;
  *a1 = *(_QWORD *)(*a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  return 1;
}
