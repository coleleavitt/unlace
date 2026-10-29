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
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // eax
  unsigned __int64 *v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdi
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // [rsp+10h] [rbp-258h]
  char v48; // [rsp+10h] [rbp-258h]
  char v49; // [rsp+1Eh] [rbp-24Ah]
  char v50; // [rsp+1Eh] [rbp-24Ah]
  char v51; // [rsp+1Eh] [rbp-24Ah]
  char v52; // [rsp+1Fh] [rbp-249h]
  char v53; // [rsp+1Fh] [rbp-249h]
  __int64 v54; // [rsp+20h] [rbp-248h] BYREF
  int *v55; // [rsp+28h] [rbp-240h] BYREF
  __int64 v56[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v57; // [rsp+40h] [rbp-228h]
  __int64 v58; // [rsp+48h] [rbp-220h]
  __int64 v59; // [rsp+60h] [rbp-208h] BYREF
  __int64 v60; // [rsp+68h] [rbp-200h]
  __int64 v61; // [rsp+70h] [rbp-1F8h] BYREF
  __m128i v62; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v64; // [rsp+98h] [rbp-1D0h]
  __int64 *v65; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-1C0h]
  __int128 v67; // [rsp+C0h] [rbp-1A8h]
  __int64 v68; // [rsp+D0h] [rbp-198h]
  __int64 v69; // [rsp+D8h] [rbp-190h]
  __int64 v70; // [rsp+E0h] [rbp-188h]
  _BYTE v71[6]; // [rsp+E8h] [rbp-180h] BYREF
  __int16 v72; // [rsp+EEh] [rbp-17Ah]
  unsigned __int64 v73; // [rsp+228h] [rbp-40h] BYREF

  v73 = __readfsqword(0x28u);
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
  v63 = 0;
  v64 = 0;
  sub_63E80(&v63, v13, v14);
  v65 = nullptr;
  v66 = 0;
  v49 = sub_64640(a5, &v63, v15, v16, v17, v18);
  v47 = a5 + 2;
  v52 = sub_317C60(a5 + 2, (__int64)&v65);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)v65);
  }
  qfree(v63);
  v19 = v52 | *a6 | v49;
  v63 = 0;
  *a6 = v19;
  v20 = a1[140];
  v64 = 0;
  sub_63E80(&v63, v20, 16);
  v65 = nullptr;
  v66 = 0;
  v50 = sub_64640(a5, &v63, v21, v22, v23, v24);
  v53 = sub_317C60(v47, (__int64)&v65);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)v65);
  }
  qfree(v63);
  *a6 |= v53 | v50;
  if ( a1[21] == 8 )
  {
    v37 = a1[156];
    v63 = 0;
    v64 = 0;
    sub_63E80(&v63, v37, 32);
    v65 = nullptr;
    v66 = 0;
    v51 = sub_64640(a5, &v63, v38, v39, v40, v41);
    v48 = sub_317C60(v47, (__int64)&v65);
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree((__int64)v65);
    }
    qfree(v63);
    *a6 |= v48 | v51;
  }
  if ( a3 || !(unsigned __int8)sub_3398A0((unsigned __int64)&v54, &v55, a2) )
    return 0;
  sub_339670((__int64)v56, a2, v54, (__int64)v55, v25, v26);
  LOBYTE(v27) = sub_64930(v56, a1[140]);
  v8 = v27;
  if ( !(_BYTE)v27 )
  {
    if ( v57 )
    {
      v58 = 0;
      qfree(v57);
    }
    qfree(v56[0]);
    return 0;
  }
  if ( a1[21] == 8 )
    goto LABEL_25;
  v68 = -1;
  v28 = (unsigned __int64 *)v71;
  v69 = 0;
  v70 = 0;
  v67 = -1;
  do
  {
    *(_WORD *)v28 = 0;
    v28 += 5;
    *((_WORD *)v28 - 19) = 0;
    *((_WORD *)v28 - 18) = 0;
    *((_DWORD *)v28 - 2) = 0;
    *((_WORD *)v28 - 17) = 0;
    *((_OWORD *)v28 - 2) = 0;
    *(v28 - 2) = 0;
  }
  while ( &v73 != v28 );
  decode_insn();
  if ( v71[1] == 1 && v72 == 81 )
  {
    v8 = 0;
  }
  else
  {
LABEL_25:
    v29 = *v55;
    if ( (unsigned int)(*v55 - 8) <= 1 || (v29 == 4 || v29 == 67 && v55[9] == v55[17]) && *((_BYTE *)v55 + 64) != 15 )
    {
      v31 = v55[9];
    }
    else
    {
      v30 = sub_64BA0(v56, a1[140]);
      v31 = 16;
      if ( v30 <= 16 )
        v31 = v30;
    }
    v32 = a1[140];
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v63 = 0;
    v64 = 0;
    v62 = 0;
    sub_63E80(&v63, v32, v31);
    v65 = nullptr;
    v66 = 0;
    sub_64280(&v59, &v63);
    sub_316CB0(&v61, &v65, v33, v34);
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree((__int64)v65);
    }
    qfree(v63);
    v35 = sub_122C30((__int64)&v59, (__int64)a5);
    v36 = v61;
    if ( v35 )
    {
      v42 = *a5;
      v43 = _mm_loadu_si128(&v62);
      *a5 = v59;
      v59 = v42;
      v44 = a5[1];
      a5[1] = v60;
      v45 = a5[4];
      v60 = v44;
      v46 = a5[2];
      *(__m128i *)(a5 + 3) = v43;
      a5[2] = v36;
      v36 = v46;
      v61 = v46;
      v62.m128i_i64[1] = v45;
      *a6 = 1;
    }
    if ( v36 )
    {
      v62.m128i_i64[0] = 0;
      qfree(v36);
    }
    qfree(v59);
  }
  if ( v57 )
  {
    v58 = 0;
    qfree(v57);
  }
  qfree(v56[0]);
  return v8;
}
