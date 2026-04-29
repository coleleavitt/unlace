__int64 __fastcall sub_3F1440(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _BYTE *a6)
{
  unsigned int v8; // r14d
  __int64 v10; // rdi
  int v13; // esi
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  char v19; // al
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  unsigned int v25; // eax
  __int64 v26; // r9
  _QWORD *v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // esi
  int v32; // eax
  __int64 v33; // rdi
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // [rsp+10h] [rbp-258h]
  char v45; // [rsp+10h] [rbp-258h]
  char v46; // [rsp+1Eh] [rbp-24Ah]
  char v47; // [rsp+1Eh] [rbp-24Ah]
  char v48; // [rsp+1Eh] [rbp-24Ah]
  char v49; // [rsp+1Fh] [rbp-249h]
  char v50; // [rsp+1Fh] [rbp-249h]
  __int64 v51; // [rsp+20h] [rbp-248h] BYREF
  int *v52; // [rsp+28h] [rbp-240h] BYREF
  _QWORD v53[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v54; // [rsp+40h] [rbp-228h]
  __int64 v55; // [rsp+48h] [rbp-220h]
  __int64 v56; // [rsp+60h] [rbp-208h] BYREF
  __int64 v57; // [rsp+68h] [rbp-200h]
  __int64 v58; // [rsp+70h] [rbp-1F8h] BYREF
  __m128i v59; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v60; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v61; // [rsp+98h] [rbp-1D0h]
  __int64 *v62; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-1C0h]
  __int128 v64; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-198h]
  __int64 v66; // [rsp+D8h] [rbp-190h]
  __int64 v67; // [rsp+E0h] [rbp-188h]
  _BYTE v68[6]; // [rsp+E8h] [rbp-180h] BYREF
  __int16 v69; // [rsp+EEh] [rbp-17Ah]
  _QWORD v70[8]; // [rsp+228h] [rbp-40h] BYREF

  v70[0] = __readfsqword(0x28u);
  if ( a4 )
  {
    if ( *(_DWORD *)a4 == 4 && *(_BYTE *)(a4 + 32) == 1 && a1[111] == *(_DWORD *)(a4 + 40) )
    {
      if ( !(unsigned __int8)sub_64880(a5) || a5[3] )
        *a6 = 1;
      v10 = a5[2];
      a5[1] = 0;
      if ( v10 )
      {
        a5[3] = 0;
        qfree(v10);
        a5[2] = 0;
        a5[4] = 0;
      }
      return 1;
    }
    return 0;
  }
  v13 = a1[130];
  v14 = a1[112];
  v60 = 0;
  v61 = 0;
  sub_63E80(&v60, v13, v14);
  v62 = nullptr;
  v63 = 0;
  v46 = sub_64640(a5, &v60, v15, v16, v17, v18);
  v44 = a5 + 2;
  v49 = sub_317C60(a5 + 2, (__int64)&v62);
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  qfree(v60);
  v19 = v49 | *a6 | v46;
  v60 = 0;
  *a6 = v19;
  v20 = a1[140];
  v61 = 0;
  sub_63E80(&v60, v20, 16);
  v62 = nullptr;
  v63 = 0;
  v47 = sub_64640(a5, &v60, v21, v22, v23, v24);
  v50 = sub_317C60(v44, (__int64)&v62);
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  qfree(v60);
  *a6 |= v50 | v47;
  if ( a1[21] == 8 )
  {
    v34 = a1[156];
    v60 = 0;
    v61 = 0;
    sub_63E80(&v60, v34, 32);
    v62 = nullptr;
    v63 = 0;
    v48 = sub_64640(a5, &v60, v35, v36, v37, v38);
    v45 = sub_317C60(v44, (__int64)&v62);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    qfree(v60);
    *a6 |= v45 | v48;
  }
  if ( a3 || !(unsigned __int8)sub_3398A0((unsigned __int64)&v51, &v52, a2) )
    return 0;
  sub_339670((__int64)v53, a2, v51, (__int64)v52);
  LOBYTE(v25) = sub_64930(v53, a1[140]);
  v8 = v25;
  if ( !(_BYTE)v25 )
  {
    if ( v54 )
    {
      v55 = 0;
      qfree(v54);
    }
    qfree(v53[0]);
    return 0;
  }
  if ( a1[21] == 8 )
    goto LABEL_25;
  v65 = -1;
  v27 = v68;
  v66 = 0;
  v67 = 0;
  v64 = -1;
  do
  {
    *(_WORD *)v27 = 0;
    v27 += 5;
    *((_WORD *)v27 - 19) = 0;
    *((_WORD *)v27 - 18) = 0;
    *((_DWORD *)v27 - 2) = 0;
    *((_WORD *)v27 - 17) = 0;
    *((_OWORD *)v27 - 2) = 0;
    *(v27 - 2) = 0;
  }
  while ( v70 != v27 );
  decode_insn(&v64, *((_QWORD *)v52 + 3), v70, 0, 0, v26, 0.0);
  if ( v68[1] == 1 && v69 == 81 )
  {
    v8 = 0;
  }
  else
  {
LABEL_25:
    v28 = *v52;
    if ( (unsigned int)(*v52 - 8) <= 1 || (v28 == 4 || v28 == 67 && v52[9] == v52[17]) && *((_BYTE *)v52 + 64) != 15 )
    {
      v30 = v52[9];
    }
    else
    {
      v29 = sub_64BA0(v53, a1[140]);
      v30 = 16;
      if ( v29 <= 16 )
        v30 = v29;
    }
    v31 = a1[140];
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v60 = 0;
    v61 = 0;
    v59 = 0;
    sub_63E80(&v60, v31, v30);
    v62 = nullptr;
    v63 = 0;
    sub_64280(&v56, &v60);
    sub_316CB0(&v58, &v62);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    qfree(v60);
    v32 = sub_122C30((__int64)&v56, (__int64)a5);
    v33 = v58;
    if ( v32 )
    {
      v39 = *a5;
      v40 = _mm_loadu_si128(&v59);
      *a5 = v56;
      v56 = v39;
      v41 = a5[1];
      a5[1] = v57;
      v42 = a5[4];
      v57 = v41;
      v43 = a5[2];
      *(__m128i *)(a5 + 3) = v40;
      a5[2] = v33;
      v33 = v43;
      v58 = v43;
      v59.m128i_i64[1] = v42;
      *a6 = 1;
    }
    if ( v33 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v33);
    }
    qfree(v56);
  }
  if ( v54 )
  {
    v55 = 0;
    qfree(v54);
  }
  qfree(v53[0]);
  return v8;
}
