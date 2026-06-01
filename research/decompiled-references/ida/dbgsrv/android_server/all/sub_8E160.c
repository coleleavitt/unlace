/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E160
// Address: 0x000000000008E160

//----- (000000000008E160) ----------------------------------------------------
void __fastcall sub_8E160(__int64 a1, unsigned __int64 a2)
{
  _BYTE s[8]; // [xsp+8h] [xbp-1E8h] BYREF
  void *v5; // [xsp+10h] [xbp-1E0h]
  __int64 v6; // [xsp+18h] [xbp-1D8h]
  void *ptr; // [xsp+30h] [xbp-1C0h]
  __int64 v8; // [xsp+38h] [xbp-1B8h]
  __int64 v9; // [xsp+40h] [xbp-1B0h]
  __int64 v10; // [xsp+48h] [xbp-1A8h]
  __int64 v11; // [xsp+50h] [xbp-1A0h]
  __int64 v12; // [xsp+58h] [xbp-198h]
  __int64 v13; // [xsp+60h] [xbp-190h]
  int v14; // [xsp+68h] [xbp-188h]
  __int128 v15; // [xsp+70h] [xbp-180h]
  __int128 v16; // [xsp+80h] [xbp-170h]
  int v17; // [xsp+90h] [xbp-160h]
  __int128 v18; // [xsp+98h] [xbp-158h]
  __int128 v19; // [xsp+A8h] [xbp-148h]
  int v20; // [xsp+B8h] [xbp-138h]
  __int128 v21; // [xsp+C0h] [xbp-130h]
  __int128 v22; // [xsp+D0h] [xbp-120h]
  int v23; // [xsp+E0h] [xbp-110h]
  __int128 v24; // [xsp+E8h] [xbp-108h]
  __int128 v25; // [xsp+F8h] [xbp-F8h]
  int v26; // [xsp+108h] [xbp-E8h]
  __int128 v27; // [xsp+110h] [xbp-E0h]
  __int128 v28; // [xsp+120h] [xbp-D0h]
  int v29; // [xsp+130h] [xbp-C0h]
  __int128 v30; // [xsp+138h] [xbp-B8h]
  __int128 v31; // [xsp+148h] [xbp-A8h]
  int v32; // [xsp+158h] [xbp-98h]
  __int128 v33; // [xsp+160h] [xbp-90h]
  __int128 v34; // [xsp+170h] [xbp-80h]
  int v35; // [xsp+180h] [xbp-70h]
  __int128 v36; // [xsp+188h] [xbp-68h]
  __int128 v37; // [xsp+198h] [xbp-58h]
  int v38; // [xsp+1A8h] [xbp-48h]

  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    memset(s, 0, 0x1B0u);
    v11 = -1;
    v12 = -1;
    v10 = -1;
    v15 = 0u;
    v16 = 0u;
    v17 = 0;
    v14 = 0;
    v13 = 0;
    v19 = 0u;
    v18 = 0u;
    v20 = 0;
    v23 = 0;
    v22 = 0u;
    v21 = 0u;
    v26 = 0;
    v25 = 0u;
    v24 = 0u;
    v27 = 0u;
    v28 = 0u;
    v29 = 0;
    v31 = 0u;
    v32 = 0;
    v30 = 0u;
    v33 = 0u;
    v34 = 0u;
    v35 = 0;
    v37 = 0u;
    v38 = 0;
    v36 = 0u;
    sub_981EC(a1, a2, (unsigned __int64)s);
    if ( ptr )
    {
      v8 = 0;
      qfree(ptr);
      ptr = nullptr;
      v9 = 0;
    }
    if ( v5 )
    {
      v6 = 0;
      qfree(v5);
    }
  }
}
