/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94200
// Address: 0x0000000000094200

//----- (0000000000094200) ----------------------------------------------------
unsigned __int64 __fastcall sub_94200(__int64 *a1, unsigned __int64 a2)
{
  _BYTE s[8]; // [rsp+8h] [rbp-1D0h] BYREF
  void *v4; // [rsp+10h] [rbp-1C8h]
  __int64 v5; // [rsp+18h] [rbp-1C0h]
  __int64 v6; // [rsp+20h] [rbp-1B8h]
  void *ptr; // [rsp+30h] [rbp-1A8h]
  __int64 v8; // [rsp+38h] [rbp-1A0h]
  __int64 v9; // [rsp+40h] [rbp-198h]
  __int128 v10; // [rsp+48h] [rbp-190h]
  __int64 v11; // [rsp+58h] [rbp-180h]
  __int64 v12; // [rsp+60h] [rbp-178h]
  int v13; // [rsp+68h] [rbp-170h]
  __int128 v14; // [rsp+70h] [rbp-168h]
  __int128 v15; // [rsp+80h] [rbp-158h]
  int v16; // [rsp+90h] [rbp-148h]
  __int128 v17; // [rsp+98h] [rbp-140h]
  __int128 v18; // [rsp+A8h] [rbp-130h]
  int v19; // [rsp+B8h] [rbp-120h]
  __int128 v20; // [rsp+C0h] [rbp-118h]
  __int128 v21; // [rsp+D0h] [rbp-108h]
  int v22; // [rsp+E0h] [rbp-F8h]
  __int128 v23; // [rsp+E8h] [rbp-F0h]
  __int128 v24; // [rsp+F8h] [rbp-E0h]
  int v25; // [rsp+108h] [rbp-D0h]
  __int128 v26; // [rsp+110h] [rbp-C8h]
  __int128 v27; // [rsp+120h] [rbp-B8h]
  int v28; // [rsp+130h] [rbp-A8h]
  __int128 v29; // [rsp+138h] [rbp-A0h]
  __int128 v30; // [rsp+148h] [rbp-90h]
  int v31; // [rsp+158h] [rbp-80h]
  __int128 v32; // [rsp+160h] [rbp-78h]
  __int128 v33; // [rsp+170h] [rbp-68h]
  int v34; // [rsp+180h] [rbp-58h]
  __int128 v35; // [rsp+188h] [rbp-50h]
  __int128 v36; // [rsp+198h] [rbp-40h]
  int v37; // [rsp+1A8h] [rbp-30h]
  unsigned __int64 v38; // [rsp+1B8h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    memset(s, 0, 0x1B0u);
    v10 = -1;
    v11 = -1;
    v15 = 0;
    v14 = 0;
    v16 = 0;
    v13 = 0;
    v12 = 0;
    v18 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v35 = 0;
    v37 = 0;
    sub_9DBA0(a1, a2, (unsigned __int64)s);
    if ( ptr )
    {
      v8 = 0;
      qfree(ptr);
      ptr = nullptr;
      v9 = 0;
    }
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
      v4 = nullptr;
      v6 = 0;
    }
  }
  return __readfsqword(0x28u);
}
