unsigned __int64 __fastcall sub_2049340(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v2 = v1;
  if ( (_DWORD)v1 == -1 )
    v2 = 0;
  return __PAIR64__(v2, HIDWORD(v1));
}
