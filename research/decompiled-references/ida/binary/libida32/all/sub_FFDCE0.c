__int64 __fastcall sub_FFDCE0(__int64 a1, int a2, bool *a3)
{
  __int64 v5; // rax

  if ( a3 )
    *a3 = a2 == 0;
  if ( !a2 )
    return 0;
  v5 = sub_FFDBE0(a1, a2);
  return sub_FFC3D0(a1, v5, HIDWORD(v5), a3);
}

