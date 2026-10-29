__int64 __fastcall sub_788920(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  _QWORD *v8; // r13
  void *v9; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __m128i v12; // [rsp+10h] [rbp-1E8h]
  char v13; // [rsp+20h] [rbp-1D8h]
  __int64 v14; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v15; // [rsp+30h] [rbp-1C8h]
  __int64 v16; // [rsp+40h] [rbp-1B8h]
  __int64 v17; // [rsp+48h] [rbp-1B0h]
  __int64 v18; // [rsp+50h] [rbp-1A8h]
  __int128 v19; // [rsp+58h] [rbp-1A0h]
  __int64 v20; // [rsp+68h] [rbp-190h]
  __int64 v21; // [rsp+70h] [rbp-188h]
  __int128 v22; // [rsp+78h] [rbp-180h]
  __int64 v23; // [rsp+88h] [rbp-170h]
  __int128 v24; // [rsp+90h] [rbp-168h]
  __int64 v25; // [rsp+A0h] [rbp-158h]
  __int128 v26; // [rsp+A8h] [rbp-150h]
  __int128 v27; // [rsp+B8h] [rbp-140h]
  _QWORD *v28; // [rsp+C8h] [rbp-130h]
  int v29; // [rsp+D0h] [rbp-128h]
  char v30; // [rsp+D4h] [rbp-124h]
  int v31; // [rsp+D8h] [rbp-120h]
  char v32; // [rsp+DCh] [rbp-11Ch]
  __int64 v33; // [rsp+E0h] [rbp-118h]
  __int128 v34; // [rsp+E8h] [rbp-110h]
  __int64 v35; // [rsp+F8h] [rbp-100h]
  __int128 v36; // [rsp+100h] [rbp-F8h]
  __int64 v37; // [rsp+110h] [rbp-E8h]
  __int128 v38; // [rsp+118h] [rbp-E0h]
  __int64 v39; // [rsp+128h] [rbp-D0h]
  __int128 v40; // [rsp+130h] [rbp-C8h]
  __int64 v41; // [rsp+140h] [rbp-B8h]
  __int128 v42; // [rsp+148h] [rbp-B0h]
  __int64 v43; // [rsp+158h] [rbp-A0h]
  __int128 v44; // [rsp+160h] [rbp-98h]
  __int64 v45; // [rsp+170h] [rbp-88h]
  __int128 v46; // [rsp+178h] [rbp-80h]
  __int64 v47; // [rsp+188h] [rbp-70h]
  __int128 v48; // [rsp+190h] [rbp-68h]
  __int64 v49; // [rsp+1A0h] [rbp-58h]
  __int64 v50; // [rsp+1A8h] [rbp-50h]
  __int128 v51; // [rsp+1B0h] [rbp-48h]
  int v52; // [rsp+1C0h] [rbp-38h]
  char v53; // [rsp+1C4h] [rbp-34h]
  unsigned __int64 v54; // [rsp+1C8h] [rbp-30h]

  v54 = __readfsqword(0x28u);
  v11[0] = sub_7812A0;
  v20 = a1;
  v13 = 0;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B39F50), (__m128i)(unsigned __int64)&off_2B39820);
  v11[1] = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v28 = nullptr;
  v15 = 0;
  v19 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v49 = a2;
  v30 = -90;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v50 = 0;
  v52 = -1;
  v53 = a4;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v51 = 0;
  sub_7A0530(v6, v11);
  set_qerrno(0);
  v7 = basic_parser_parse_0(v11, 0);
  if ( !(_BYTE)v7 )
  {
    sub_7886A0(*(_QWORD *)(a1 + 32), (__int64)&v14, a3);
    v8 = v28;
    if ( v28 )
    {
      v9 = (void *)*v28;
      if ( *v28 )
      {
        v28[1] = 0;
        qfree(v9);
        *v8 = 0;
        v8[2] = 0;
      }
    }
    sub_7840F0((__int64)v11);
  }
  sub_7A0530(*(_QWORD *)(a1 + 32), 0);
  sub_7879A0(v11);
  return v7;
}
