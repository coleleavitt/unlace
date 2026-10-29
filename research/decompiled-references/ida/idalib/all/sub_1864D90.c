unsigned __int64 __fastcall sub_1864D90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  int v5; // r13d
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned int v16; // eax
  _QWORD *v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // eax
  _QWORD *v31; // rbp
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  unsigned __int64 v36; // [rsp+18h] [rbp-2F0h] BYREF
  void *v37; // [rsp+20h] [rbp-2E8h]
  __int64 v38; // [rsp+28h] [rbp-2E0h]
  __int64 v39[4]; // [rsp+30h] [rbp-2D8h] BYREF
  __m128i v40; // [rsp+50h] [rbp-2B8h] BYREF
  int v41; // [rsp+60h] [rbp-2A8h]
  int v42; // [rsp+68h] [rbp-2A0h]
  __int64 v43; // [rsp+70h] [rbp-298h]
  __int64 v44; // [rsp+78h] [rbp-290h]
  __int64 v45; // [rsp+80h] [rbp-288h]
  __int64 v46; // [rsp+88h] [rbp-280h]
  __int64 v47; // [rsp+90h] [rbp-278h]
  __int64 v48; // [rsp+98h] [rbp-270h]
  int v49; // [rsp+A0h] [rbp-268h]
  __int64 v50; // [rsp+A8h] [rbp-260h]
  __int64 v51; // [rsp+B0h] [rbp-258h]
  __int64 v52; // [rsp+B8h] [rbp-250h]
  __int64 v53; // [rsp+C0h] [rbp-248h]
  _QWORD v54[2]; // [rsp+D0h] [rbp-238h] BYREF
  unsigned int v55; // [rsp+E0h] [rbp-228h]
  __int16 v56; // [rsp+E4h] [rbp-224h]
  __int64 v57; // [rsp+E8h] [rbp-220h]
  _QWORD *v58; // [rsp+F0h] [rbp-218h]
  __int64 v59; // [rsp+F8h] [rbp-210h]
  _QWORD v60[17]; // [rsp+100h] [rbp-208h] BYREF
  __int64 v61; // [rsp+188h] [rbp-180h]
  __int64 v62; // [rsp+190h] [rbp-178h]
  __int64 v63; // [rsp+1A0h] [rbp-168h]
  __int64 v64; // [rsp+1A8h] [rbp-160h]
  int v65; // [rsp+1B8h] [rbp-150h]
  char v66; // [rsp+1BCh] [rbp-14Ch]
  void *v67; // [rsp+1C0h] [rbp-148h]
  __int64 v68; // [rsp+1C8h] [rbp-140h]
  _QWORD v69[10]; // [rsp+1D0h] [rbp-138h] BYREF
  void *v70; // [rsp+220h] [rbp-E8h]
  __int64 v71; // [rsp+228h] [rbp-E0h]
  _WORD v72[52]; // [rsp+230h] [rbp-D8h] BYREF
  void *ptr; // [rsp+298h] [rbp-70h]
  __int64 v74; // [rsp+2A0h] [rbp-68h]
  _BYTE v75[96]; // [rsp+2A8h] [rbp-60h] BYREF

  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v4 = *(_QWORD *)(a2 + 48);
  v5 = a1;
  v8 = a2;
  if ( !sub_B74C70(v4) || sub_B748A0(v4, a2, v9, v10) || (unsigned int)sub_B76070(v4, a2, v11, v12) != 4 )
    return 0;
  v15 = *(_QWORD *)(v4 + 120);
  v16 = sub_B76070(v4, a2, v13, v14);
  v17 = (_QWORD *)(v15 + 8);
  v18 = 8LL * v16 - 8;
  v19 = (_QWORD *)(v15 + 8LL * v16);
  v20 = v18 >> 5;
  v21 = v18 >> 3;
  if ( v20 <= 0 )
  {
LABEL_38:
    if ( v21 != 2 )
    {
      if ( v21 != 3 )
      {
        if ( v21 != 1 )
          goto LABEL_15;
        goto LABEL_41;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v17 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_14;
      ++v17;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v17 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_14;
    ++v17;
LABEL_41:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v17 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17[1] + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        ++v17;
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17[2] + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        v17 += 2;
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17[3] + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        break;
      v17 += 4;
      if ( (_QWORD *)(v15 + 32 * v20 + 8) == v17 )
      {
        v21 = v19 - v17;
        goto LABEL_38;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v17 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_14;
    }
    v17 += 3;
  }
LABEL_14:
  if ( v19 != v17 )
    return 0;
LABEL_15:
  v22 = *(_QWORD *)(a1 + 4184);
  if ( !v22 )
  {
    v22 = sub_1864A00(a1, a4, "type_identity", nullptr);
    *(_QWORD *)(a1 + 4184) = v22;
    if ( !v22 )
      return v22;
  }
  v23 = sub_183D390(a1, v22, a3, a4);
  if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v24 = *(_QWORD *)(v4 + 120);
  v39[0] = v23;
  v25 = *(_QWORD *)(v24 + 8);
  v38 = 0x400000001LL;
  v37 = v39;
  v39[1] = *(_QWORD *)(v25 + 48);
  v26 = *(_QWORD *)(v4 + 120);
  LODWORD(v38) = 2;
  v39[2] = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 48LL);
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 24LL) + 48LL);
  LODWORD(v38) = 3;
  v22 = 0;
  v39[3] = v27;
  v28 = *(_QWORD *)(a1 + 248);
  v40.m128i_i64[1] = 0;
  v29 = *(_QWORD *)(v28 + 18632);
  v41 = 0;
  v42 = 0;
  LODWORD(v38) = 4;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v40.m128i_i32[0] &= 0xF0000000;
  v30 = sub_A73610(v28, v29, v39, 4u, &v40, 0);
  v56 = 0;
  v67 = v69;
  v68 = 0x800000000LL;
  v70 = v72;
  v58 = v60;
  v72[48] = 0;
  v59 = 0x400000000LL;
  v71 = 0x400000000LL;
  ptr = v75;
  v74 = 0x400000000LL;
  v54[0] = 0;
  v54[1] = 0;
  v55 = a4;
  v57 = 0;
  v60[16] = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v69[8] = 0;
  v69[9] = 0;
  v61 &= 0xFFFFFFFE00000000LL;
  v63 &= 0xFFFFFFFE00000000LL;
  if ( !(unsigned int)sub_1D75BD0(v5, v8, 0, v30, (unsigned int)&v36, (unsigned int)v54, 0) )
    v22 = v36;
  if ( ptr != v75 )
    free(ptr);
  if ( v70 != v72 )
    free(v70);
  if ( v67 != v69 )
    free(v67);
  v31 = v58;
  v32 = &v58[4 * (unsigned int)v59];
  if ( v58 != v32 )
  {
    do
    {
      v32 -= 4;
      v33 = v32[1];
      if ( v33 )
      {
        v34 = v32[2];
        if ( v34 )
          sub_1580C40(v34, v33);
      }
    }
    while ( v31 != v32 );
    v32 = v58;
  }
  if ( v32 != v60 )
    free(v32);
  if ( v37 != v39 )
    free(v37);
  return v22;
}
