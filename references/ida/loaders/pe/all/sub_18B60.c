__int64 __fastcall sub_18B60(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __m128i v12; // [rsp+8h] [rbp-448h] BYREF
  __int64 v13; // [rsp+18h] [rbp-438h]
  bool v14; // [rsp+20h] [rbp-430h]
  __int64 (__fastcall **v15)(); // [rsp+28h] [rbp-428h] BYREF
  __int64 v16; // [rsp+30h] [rbp-420h]
  __int128 v17; // [rsp+38h] [rbp-418h]
  _BYTE v18[4]; // [rsp+70h] [rbp-3E0h] BYREF
  __int16 v19; // [rsp+74h] [rbp-3DCh]
  int v20; // [rsp+E8h] [rbp-368h]
  __int64 ph; // [rsp+288h] [rbp-1C8h]
  __int64 eah; // [rsp+290h] [rbp-1C0h]
  __int64 v23; // [rsp+298h] [rbp-1B8h]
  __int128 v24; // [rsp+2A0h] [rbp-1B0h]
  _UNKNOWN **v25; // [rsp+2B0h] [rbp-1A0h]
  char v26; // [rsp+2B8h] [rbp-198h]
  __int128 v27; // [rsp+2C0h] [rbp-190h]
  int v28; // [rsp+2D0h] [rbp-180h]
  __int64 v29; // [rsp+2F8h] [rbp-158h]
  _BYTE *v30; // [rsp+300h] [rbp-150h]
  __int64 v31; // [rsp+308h] [rbp-148h]
  __int64 v32; // [rsp+310h] [rbp-140h]
  __int128 v33; // [rsp+318h] [rbp-138h]
  __m128i si128; // [rsp+328h] [rbp-128h]
  __int128 v35; // [rsp+338h] [rbp-118h]
  __int64 v36; // [rsp+348h] [rbp-108h]
  int v37; // [rsp+350h] [rbp-100h]
  __int16 v38; // [rsp+354h] [rbp-FCh]
  char v39; // [rsp+356h] [rbp-FAh]
  _UNKNOWN **v40; // [rsp+358h] [rbp-F8h]
  char v41; // [rsp+360h] [rbp-F0h]
  __int128 v42; // [rsp+368h] [rbp-E8h]
  int v43; // [rsp+378h] [rbp-D8h]
  __int64 v44; // [rsp+3A0h] [rbp-B0h]
  _BYTE *v45; // [rsp+3A8h] [rbp-A8h]
  __int64 v46; // [rsp+3B0h] [rbp-A0h]
  __int64 v47; // [rsp+3B8h] [rbp-98h]
  __int128 v48; // [rsp+3C0h] [rbp-90h]
  __m128i v49; // [rsp+3D0h] [rbp-80h]
  __int128 v50; // [rsp+3E0h] [rbp-70h]
  __int64 v51; // [rsp+3F0h] [rbp-60h]
  int v52; // [rsp+3F8h] [rbp-58h]
  __int16 v53; // [rsp+3FCh] [rbp-54h]
  char v54; // [rsp+3FEh] [rbp-52h]
  __int16 v55; // [rsp+400h] [rbp-50h]
  char v56; // [rsp+402h] [rbp-4Eh]
  unsigned __int64 v57; // [rsp+410h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v15 = off_324C8;
  v16 = 0;
  v17 = 0;
  ph = get_ph();
  v29 = ph;
  v38 = 0;
  v44 = ph;
  v53 = 0;
  eah = get_eah();
  v23 = 0;
  v26 = 0;
  v28 = 0;
  v25 = &off_325A8;
  v30 = v18;
  v31 = eah;
  v32 = 0;
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v40 = &off_325A8;
  v45 = v18;
  v46 = eah;
  v47 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 1;
  v24 = 0;
  v27 = 0;
  v33 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2CF90);
  v35 = -1;
  v42 = 0;
  v48 = 0;
  v55 = 0;
  v56 = 0;
  v49 = si128;
  v50 = -1;
  if ( !(unsigned __int8)sub_133F0((__int64)&v15, a1, 1, 1) )
    goto LABEL_30;
  v2 = 0;
  if ( !v20 )
    goto LABEL_3;
  v14 = v19 == 2560;
  v13 = a2;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_32578, (__m128i)(unsigned __int64)v18);
  v2 = sub_18140((__int64)&v15, a1, (__int64)&v12);
  if ( v2 >= 0 )
  {
    if ( !v2 )
      v2 = 1;
  }
  else
  {
LABEL_30:
    v2 = 0;
  }
LABEL_3:
  v3 = v47;
  v15 = off_324C8;
  v40 = &off_325A8;
  if ( v47 )
  {
    v4 = v48;
    if ( (_QWORD)v48 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + (v5 << 6));
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        ++v5;
        v3 = v47;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  v7 = v32;
  v25 = &off_325A8;
  if ( v32 )
  {
    v8 = v33;
    if ( (_QWORD)v33 )
    {
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v7 + (v9 << 6));
        if ( v10[3] )
        {
          v10[4] = 0;
          qfree();
        }
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
        }
        ++v9;
        v7 = v32;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  v15 = off_324F0;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return (unsigned int)v2;
}
