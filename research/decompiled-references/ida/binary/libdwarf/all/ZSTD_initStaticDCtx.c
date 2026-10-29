__int64 __fastcall ZSTD_initStaticDCtx(__int64 a1, unsigned __int64 a2)
{
  if ( (a1 & 7) != 0 || a2 <= 0x176E7 )
    return 0;
  sub_616F0(a1);
  *(_QWORD *)(a1 + 30168) = a2;
  *(_QWORD *)(a1 + 30240) = (char *)&loc_176E8 + a1;
  return a1;
}

