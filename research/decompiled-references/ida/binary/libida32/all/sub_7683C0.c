__int64 __fastcall sub_7683C0(__int64 a1, __int64 a2, __int64 a3, char a4)
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
  __int128 v18; // [rsp+50h] [rbp-1A8h]
  __int64 v19; // [rsp+60h] [rbp-198h]
  __int64 v20; // [rsp+68h] [rbp-190h]
  __int128 v21; // [rsp+70h] [rbp-188h]
  __int64 v22; // [rsp+80h] [rbp-178h]
  __int128 v23; // [rsp+88h] [rbp-170h]
  __int64 v24; // [rsp+98h] [rbp-160h]
  __int128 v25; // [rsp+A0h] [rbp-158h]
  __int128 v26; // [rsp+B0h] [rbp-148h]
  _QWORD *v27; // [rsp+C0h] [rbp-138h]
  int v28; // [rsp+C8h] [rbp-130h]
  char v29; // [rsp+CCh] [rbp-12Ch]
  int v30; // [rsp+D0h] [rbp-128h]
  char v31; // [rsp+D4h] [rbp-124h]
  __int64 v32; // [rsp+D8h] [rbp-120h]
  __int128 v33; // [rsp+E0h] [rbp-118h]
  __int64 v34; // [rsp+F0h] [rbp-108h]
  __int128 v35; // [rsp+F8h] [rbp-100h]
  __int64 v36; // [rsp+108h] [rbp-F0h]
  __int128 v37; // [rsp+110h] [rbp-E8h]
  __int64 v38; // [rsp+120h] [rbp-D8h]
  __int128 v39; // [rsp+128h] [rbp-D0h]
  __int64 v40; // [rsp+138h] [rbp-C0h]
  __int128 v41; // [rsp+140h] [rbp-B8h]
  __int64 v42; // [rsp+150h] [rbp-A8h]
  __int128 v43; // [rsp+158h] [rbp-A0h]
  __int64 v44; // [rsp+168h] [rbp-90h]
  __int128 v45; // [rsp+170h] [rbp-88h]
  __int64 v46; // [rsp+180h] [rbp-78h]
  __int128 v47; // [rsp+188h] [rbp-70h]
  __int64 v48; // [rsp+198h] [rbp-60h]
  __int64 v49; // [rsp+1A0h] [rbp-58h]
  __int128 v50; // [rsp+1A8h] [rbp-50h]
  int v51; // [rsp+1B8h] [rbp-40h]
  char v52; // [rsp+1BCh] [rbp-3Ch]
  unsigned __int64 v53; // [rsp+1C8h] [rbp-30h]

  v53 = __readfsqword(0x28u);
  v11[0] = sub_760E60;
  v19 = a1;
  v13 = 0;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B0FFB0), (__m128i)(unsigned __int64)&off_2B0F880);
  v11[1] = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v27 = nullptr;
  v28 = 0;
  v15 = 0;
  v18 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v29 = -90;
  v6 = *(_QWORD *)(a1 + 32);
  v48 = a2;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v49 = 0;
  v51 = -1;
  v52 = a4;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v50 = 0;
  sub_780230(v6, v11);
  set_qerrno(0, v11);
  v7 = basic_parser_parse_0(v11, 0);
  if ( !(_BYTE)v7 )
  {
    sub_768140(*(_QWORD *)(a1 + 32), (__int64)&v14, a3);
    v8 = v27;
    if ( v27 )
    {
      v9 = (void *)*v27;
      if ( *v27 )
      {
        v27[1] = 0;
        qfree(v9);
        *v8 = 0;
        v8[2] = 0;
      }
    }
    sub_763CB0((__int64)v11);
  }
  sub_780230(*(_QWORD *)(a1 + 32), 0);
  sub_7674D0(v11);
  return v7;
}

