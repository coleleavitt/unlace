unsigned __int64 __fastcall sub_1701C10(__int64 a1, __int64 a2, char **a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v8; // zf
  __m128 v9; // xmm0
  __int64 v10; // r8
  __int64 *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  void *v17; // rax
  void *v18; // rdx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rdx
  char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 *v38; // r9
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rbp
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  char *v50; // rax
  __int64 v52; // [rsp+8h] [rbp-1A0h] BYREF
  char **v53; // [rsp+10h] [rbp-198h]
  __m128i *v54; // [rsp+18h] [rbp-190h]
  unsigned __int64 v55; // [rsp+28h] [rbp-180h] BYREF
  __m128i v56; // [rsp+30h] [rbp-178h] BYREF
  __m128i v57; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v58[16]; // [rsp+50h] [rbp-158h] BYREF
  void *v59[2]; // [rsp+60h] [rbp-148h] BYREF
  _WORD v60[16]; // [rsp+70h] [rbp-138h] BYREF
  void **v61; // [rsp+90h] [rbp-118h] BYREF
  __int64 v62; // [rsp+98h] [rbp-110h]
  __int128 v63; // [rsp+A0h] [rbp-108h]
  __int64 v64; // [rsp+B0h] [rbp-F8h]
  char v65; // [rsp+B8h] [rbp-F0h]
  int v66; // [rsp+BCh] [rbp-ECh]
  __m128i *v67; // [rsp+C0h] [rbp-E8h]
  __m128 v68; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-C8h]
  __int64 v70; // [rsp+E8h] [rbp-C0h]
  __int64 v71; // [rsp+F0h] [rbp-B8h]
  __int64 v72; // [rsp+F8h] [rbp-B0h]
  void *v73; // [rsp+100h] [rbp-A8h]
  __int64 v74; // [rsp+108h] [rbp-A0h]
  _BYTE v75[64]; // [rsp+110h] [rbp-98h] BYREF
  void *ptr; // [rsp+150h] [rbp-58h]
  __int64 v77; // [rsp+158h] [rbp-50h]
  _BYTE v78[72]; // [rsp+160h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 48) == 0;
  v52 = a4;
  v53 = a3;
  v73 = v75;
  v74 = 0x400000000LL;
  v9 = _mm_loadh_ps((const double *)&v52);
  ptr = v78;
  v68 = v9;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v77 = 0x200000000LL;
  if ( v8 )
    goto LABEL_7;
  v58[0] = 0;
  v57.m128i_i64[0] = (__int64)v58;
  v57.m128i_i64[1] = 0;
  LODWORD(v62) = 0;
  v61 = (void **)&off_2BEBE68;
  v65 = 0;
  v66 = 1;
  v64 = 0;
  v63 = 0;
  v67 = &v57;
  sub_227B8B0(&v61, 0, 0, 0);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 56) + 40LL);
  if ( (v14 & 7) != 0
    || (v34 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 16), *(_DWORD *)v34 != 7)
    || *(_DWORD *)(v34 + 16) != 1701667187
    || *(_WORD *)(v34 + 20) != 24927
    || *(_BYTE *)(v34 + 22) != 115
    || (v35 = *(_QWORD *)(v13 + 64)) == 0
    || *(_DWORD *)(v35 + 8) != 1
    || (v13 = *(_DWORD *)(v35 + 16) & 0x7FFFFFFF, (_DWORD)v13 != 1) )
  {
    v15 = *(_QWORD **)(a2 + 240);
    v16 = *(_QWORD **)(a2 + 248);
    v55 = 0;
LABEL_4:
    v52 = v12;
    v17 = (void *)sub_16FEC70(v15, v16, v13, v12, v10, v11);
    v59[1] = v18;
    v19 = *(__int64 **)(v52 + 8);
    v59[0] = v17;
    sub_A55390(v19, (__int64)&v61, v59);
    goto LABEL_5;
  }
  v15 = *(_QWORD **)(a2 + 240);
  v16 = *(_QWORD **)(a2 + 248);
  v55 = *(_QWORD *)(v35 + 24);
  if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_4;
  v60[8] = 257;
  v56.m128i_i64[0] = sub_16FEC70(v15, v16, v13, v12, 257, v11);
  v56.m128i_i64[1] = v36;
  sub_F74830(&v55, (unsigned __int64)&v61, &v56, (const void ***)v59, 0);
LABEL_5:
  v61 = (void **)&off_2BEBE68;
  sub_227B7A0(&v61);
  v61 = (void **)&v57;
  LOWORD(v64) = 260;
  v24 = sub_15A4EB0(a3, (const void ***)&v61, v20, v21, v22, v23);
  sub_15A3150((__int64)&v68, (__int64)v24);
  if ( (_BYTE *)v57.m128i_i64[0] != v58 )
    operator delete((void *)v57.m128i_i64[0]);
LABEL_7:
  v25 = *(unsigned int **)(*(_QWORD *)a1 + 16LL);
  v26 = *v25;
  LOWORD(v64) = 261;
  v61 = (void **)(v25 + 4);
  v62 = v26;
  v27 = sub_15A4EB0(a3, (const void ***)&v61, v26, 261, a5, a6);
  sub_15A2F70((__int64)&v68, (__int64)v27);
  if ( *(_BYTE *)(a1 + 32) )
  {
    sub_15A3210((__int64)&v68, 7, (char *)&byte_22F0C30);
    v39 = *(__int64 **)(a1 + 8);
    v40 = (__int64)&v39[*(unsigned int *)(a1 + 16)];
    v52 = v40;
    if ( v39 != (__int64 *)v40 )
    {
      v41 = *v39;
      v42 = v39 + 1;
      v54 = &v56;
      v56.m128i_i64[0] = v41;
      v53 = (char **)v60;
      while ( 1 )
      {
        v44 = sub_16043A0(*(_QWORD **)(a2 + 248), *(_QWORD **)(a2 + 240), v41, v40, v37, v38);
        v57.m128i_i64[1] = v45;
        v57.m128i_i64[0] = v44 & 0xFFFFEFFFFFF3E7FFLL | 0x100000081800LL;
        sub_F785A0((__int64)v59, (unsigned __int64 *)v54, &v57);
        LOWORD(v64) = 260;
        v61 = v59;
        v50 = sub_15A4EB0(a3, (const void ***)&v61, v46, v47, v48, v49);
        sub_15A3090((__int64)&v68, (__int64)v50);
        if ( v59[0] == v53 )
        {
          if ( (__int64 *)v52 == v42 )
            break;
        }
        else
        {
          operator delete(v59[0]);
          if ( (__int64 *)v52 == v42 )
            break;
        }
        v43 = *v42++;
        v56.m128i_i64[0] = v43;
        sub_15A3210((__int64)&v68, 15, (char *)&byte_22F0C30);
        sub_15A3210((__int64)&v68, 19, (char *)&byte_22F0C30);
      }
    }
    v27 = byte_8;
    sub_15A3210((__int64)&v68, 8, (char *)&byte_22F0C30);
  }
  v32 = sub_15A5CA0((__int64)&v68, (__int64)v27, v28, v29, v30, v31);
  if ( ptr != v78 )
    free(ptr);
  if ( v73 != v75 )
    free(v73);
  return v32;
}
