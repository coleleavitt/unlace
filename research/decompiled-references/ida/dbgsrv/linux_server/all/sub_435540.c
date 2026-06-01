/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435540
// Address: 0x0000000000435540

//----- (0000000000435540) ----------------------------------------------------
__int64 __fastcall sub_435540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rdi
  unsigned int v15; // ebp
  _QWORD *v16; // r13
  void *v17; // rdi
  double v18; // xmm4_8
  double v19; // xmm5_8
  _QWORD v21[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __m128i v22; // [rsp+10h] [rbp-1E8h]
  char v23; // [rsp+20h] [rbp-1D8h]
  __int64 v24; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v25; // [rsp+30h] [rbp-1C8h]
  __int64 v26; // [rsp+40h] [rbp-1B8h]
  __int64 v27; // [rsp+48h] [rbp-1B0h]
  __int64 v28; // [rsp+50h] [rbp-1A8h]
  __int128 v29; // [rsp+58h] [rbp-1A0h]
  __int64 v30; // [rsp+68h] [rbp-190h]
  __int64 v31; // [rsp+70h] [rbp-188h]
  __int128 v32; // [rsp+78h] [rbp-180h]
  __int64 v33; // [rsp+88h] [rbp-170h]
  __int128 v34; // [rsp+90h] [rbp-168h]
  __int64 v35; // [rsp+A0h] [rbp-158h]
  __int128 v36; // [rsp+A8h] [rbp-150h]
  __int128 v37; // [rsp+B8h] [rbp-140h]
  _QWORD *v38; // [rsp+C8h] [rbp-130h]
  int v39; // [rsp+D0h] [rbp-128h]
  char v40; // [rsp+D4h] [rbp-124h]
  int v41; // [rsp+D8h] [rbp-120h]
  char v42; // [rsp+DCh] [rbp-11Ch]
  __int64 v43; // [rsp+E0h] [rbp-118h]
  __int128 v44; // [rsp+E8h] [rbp-110h]
  __int64 v45; // [rsp+F8h] [rbp-100h]
  __int128 v46; // [rsp+100h] [rbp-F8h]
  __int64 v47; // [rsp+110h] [rbp-E8h]
  __int128 v48; // [rsp+118h] [rbp-E0h]
  __int64 v49; // [rsp+128h] [rbp-D0h]
  __int128 v50; // [rsp+130h] [rbp-C8h]
  __int64 v51; // [rsp+140h] [rbp-B8h]
  __int128 v52; // [rsp+148h] [rbp-B0h]
  __int64 v53; // [rsp+158h] [rbp-A0h]
  __int128 v54; // [rsp+160h] [rbp-98h]
  __int64 v55; // [rsp+170h] [rbp-88h]
  __int128 v56; // [rsp+178h] [rbp-80h]
  __int64 v57; // [rsp+188h] [rbp-70h]
  __int128 v58; // [rsp+190h] [rbp-68h]
  __int64 v59; // [rsp+1A0h] [rbp-58h]
  __int64 v60; // [rsp+1A8h] [rbp-50h]
  __int128 v61; // [rsp+1B0h] [rbp-48h]
  int v62; // [rsp+1C0h] [rbp-38h]
  char v63; // [rsp+1C4h] [rbp-34h]
  unsigned __int64 v64; // [rsp+1C8h] [rbp-30h]

  v64 = __readfsqword(0x28u);
  v21[0] = sub_42DED0;
  v30 = a1;
  v23 = 0;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C2C10), (__m128i)(unsigned __int64)&off_4C24E0);
  v21[1] = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v38 = nullptr;
  v25 = 0;
  v29 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v14 = *(_QWORD *)(a1 + 32);
  v59 = a2;
  v40 = -90;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v60 = 0;
  v62 = -1;
  v63 = a4;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v61 = 0;
  sub_44A730(v14, (__int64)v21);
  sub_479EB0(0);
  v15 = sub_451E50((__int64)v21, 0);
  if ( !(_BYTE)v15 )
  {
    sub_4352C0(*(_QWORD *)(a1 + 32), (__int64)&v24, a3);
    v16 = v38;
    if ( v38 )
    {
      v17 = (void *)*v38;
      if ( *v38 )
      {
        v38[1] = 0;
        j__free(v17);
        *v16 = 0;
        v16[2] = 0;
      }
    }
    sub_430D20((__int64)v21);
  }
  sub_44A730(*(_QWORD *)(a1 + 32), 0);
  sub_4345D0(v21, 0.0, (__m128)0LL, (__m128)(unsigned __int64)&off_4C24E0, a8, v18, v19, a11, a12);
  return v15;
}
// 435793: variable 'v18' is possibly undefined
// 435793: variable 'v19' is possibly undefined
// 4C24E0: using guessed type __int64 (__fastcall *off_4C24E0)();
// 4C2C10: using guessed type __int64 (**off_4C2C10)[4];
