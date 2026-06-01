__int64 __fastcall sub_7AFC70(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a1 != 8 )
    return set_qerrno(61, a2);
  sub_7AF7C0(*(int **)(a1 + 8), a2);
  return 0;
}

