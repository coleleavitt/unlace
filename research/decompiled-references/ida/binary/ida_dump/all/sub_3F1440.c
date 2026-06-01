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
  unsigned __int64 *v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // esi
  int v31; // eax
  __int64 v32; // rdi
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 *v43; // [rsp+10h] [rbp-258h]
  char v44; // [rsp+10h] [rbp-258h]
  char v45; // [rsp+1Eh] [rbp-24Ah]
  char v46; // [rsp+1Eh] [rbp-24Ah]
  char v47; // [rsp+1Eh] [rbp-24Ah]
  char v48; // [rsp+1Fh] [rbp-249h]
  char v49; // [rsp+1Fh] [rbp-249h]
  __int64 v50; // [rsp+20h] [rbp-248h] BYREF
  int *v51; // [rsp+28h] [rbp-240h] BYREF
  _QWORD v52[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v53; // [rsp+40h] [rbp-228h]
  __int64 v54; // [rsp+48h] [rbp-220h]
  __int64 v55; // [rsp+60h] [rbp-208h] BYREF
  __int64 v56; // [rsp+68h] [rbp-200h]
  __int64 v57; // [rsp+70h] [rbp-1F8h] BYREF
  __m128i v58; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v59; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v60; // [rsp+98h] [rbp-1D0h]
  __int64 *v61; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v62; // [rsp+A8h] [rbp-1C0h]
  __int128 v63; // [rsp+C0h] [rbp-1A8h]
  __int64 v64; // [rsp+D0h] [rbp-198h]
  __int64 v65; // [rsp+D8h] [rbp-190h]
  __int64 v66; // [rsp+E0h] [rbp-188h]
  _BYTE v67[6]; // [rsp+E8h] [rbp-180h] BYREF
  __int16 v68; // [rsp+EEh] [rbp-17Ah]
  unsigned __int64 v69; // [rsp+228h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
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
        qfree();
        a5[2] = 0;
        a5[4] = 0;
      }
      return 1;
    }
    return 0;
  }
  v13 = a1[130];
  v14 = a1[112];
  v59 = 0;
  v60 = 0;
  sub_63E80(&v59, v13, v14);
  v61 = nullptr;
  v62 = 0;
  v45 = sub_64640(a5, &v59, v15, v16, v17, v18);
  v43 = a5 + 2;
  v48 = sub_317C60(a5 + 2, (__int64)&v61);
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  qfree();
  v19 = v48 | *a6 | v45;
  v59 = 0;
  *a6 = v19;
  v20 = a1[140];
  v60 = 0;
  sub_63E80(&v59, v20, 16);
  v61 = nullptr;
  v62 = 0;
  v46 = sub_64640(a5, &v59, v21, v22, v23, v24);
  v49 = sub_317C60(v43, (__int64)&v61);
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  qfree();
  *a6 |= v49 | v46;
  if ( a1[21] == 8 )
  {
    v33 = a1[156];
    v59 = 0;
    v60 = 0;
    sub_63E80(&v59, v33, 32);
    v61 = nullptr;
    v62 = 0;
    v47 = sub_64640(a5, &v59, v34, v35, v36, v37);
    v44 = sub_317C60(v43, (__int64)&v61);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
    qfree();
    *a6 |= v44 | v47;
  }
  if ( a3 || !(unsigned __int8)sub_3398A0((unsigned __int64)&v50, &v51, a2) )
    return 0;
  sub_339670((__int64)v52, a2, v50, (__int64)v51);
  LOBYTE(v25) = sub_64930(v52, a1[140]);
  v8 = v25;
  if ( !(_BYTE)v25 )
  {
    if ( v53 )
    {
      v54 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  if ( a1[21] == 8 )
    goto LABEL_25;
  v64 = -1;
  v26 = (unsigned __int64 *)v67;
  v65 = 0;
  v66 = 0;
  v63 = -1;
  do
  {
    *(_WORD *)v26 = 0;
    v26 += 5;
    *((_WORD *)v26 - 19) = 0;
    *((_WORD *)v26 - 18) = 0;
    *((_DWORD *)v26 - 2) = 0;
    *((_WORD *)v26 - 17) = 0;
    *((_OWORD *)v26 - 2) = 0;
    *(v26 - 2) = 0;
  }
  while ( &v69 != v26 );
  decode_insn();
  if ( v67[1] == 1 && v68 == 81 )
  {
    v8 = 0;
  }
  else
  {
LABEL_25:
    v27 = *v51;
    if ( (unsigned int)(*v51 - 8) <= 1 || (v27 == 4 || v27 == 67 && v51[9] == v51[17]) && *((_BYTE *)v51 + 64) != 15 )
    {
      v29 = v51[9];
    }
    else
    {
      v28 = sub_64BA0(v52, a1[140]);
      v29 = 16;
      if ( v28 <= 16 )
        v29 = v28;
    }
    v30 = a1[140];
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v59 = 0;
    v60 = 0;
    v58 = 0;
    sub_63E80(&v59, v30, v29);
    v61 = nullptr;
    v62 = 0;
    sub_64280(&v55, &v59);
    sub_316CB0(&v57, &v61);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
    qfree();
    v31 = sub_122C30((__int64)&v55, (__int64)a5);
    v32 = v57;
    if ( v31 )
    {
      v38 = *a5;
      v39 = _mm_loadu_si128(&v58);
      *a5 = v55;
      v55 = v38;
      v40 = a5[1];
      a5[1] = v56;
      v41 = a5[4];
      v56 = v40;
      v42 = a5[2];
      *(__m128i *)(a5 + 3) = v39;
      a5[2] = v32;
      v32 = v42;
      v57 = v42;
      v58.m128i_i64[1] = v41;
      *a6 = 1;
    }
    if ( v32 )
    {
      v58.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  if ( v53 )
  {
    v54 = 0;
    qfree();
  }
  qfree();
  return v8;
}
