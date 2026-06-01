__int64 __fastcall sub_7AE440(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_7AE370(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 8) = qlgetc(v2);
  return 0;
}

