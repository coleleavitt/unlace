void __fastcall set_visible_segm(__int64 a1, char a2)
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx

  if ( a1 )
  {
    v2 = *(_WORD *)(a1 + 44);
    v3 = v2 & 0xFFFB;
    v4 = v2 | 4;
    if ( !a2 )
      v3 = v4;
    *(_WORD *)(a1 + 44) = v3;
    update_segm(a1);
    invalidate_visea_cache();
  }
}
