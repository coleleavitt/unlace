__int64 __fastcall sub_8CB420(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // al
  char v11; // r13
  _QWORD *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  __m128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // r14
  void *v25; // rdi
  void **v26; // r14
  void **v27; // rbx
  __int64 v28; // rdi
  int v29; // eax
  _QWORD v30[3]; // [rsp+0h] [rbp-318h] BYREF
  int v31; // [rsp+18h] [rbp-300h]
  __int64 v32; // [rsp+20h] [rbp-2F8h]
  __int64 v33; // [rsp+28h] [rbp-2F0h]
  int v34; // [rsp+30h] [rbp-2E8h]
  int v35; // [rsp+38h] [rbp-2E0h]
  char v36; // [rsp+3Ch] [rbp-2DCh]
  void **v37; // [rsp+40h] [rbp-2D8h]
  __int64 v38; // [rsp+48h] [rbp-2D0h]
  _BYTE v39[288]; // [rsp+50h] [rbp-2C8h] BYREF
  __m128 v40; // [rsp+170h] [rbp-1A8h]
  __int64 v41; // [rsp+180h] [rbp-198h]
  __int64 v42; // [rsp+188h] [rbp-190h]
  __int64 v43; // [rsp+190h] [rbp-188h]
  int v44; // [rsp+198h] [rbp-180h]
  __int64 v45; // [rsp+1A0h] [rbp-178h]
  __int64 v46; // [rsp+1A8h] [rbp-170h]
  unsigned int v47; // [rsp+1B0h] [rbp-168h]
  void *v48[2]; // [rsp+1B8h] [rbp-160h]
  void *v49[2]; // [rsp+1C8h] [rbp-150h]
  __int128 v50; // [rsp+1D8h] [rbp-140h]
  __m128 v51; // [rsp+1E8h] [rbp-130h]
  __int64 v52; // [rsp+1F8h] [rbp-120h]
  __int64 v53; // [rsp+200h] [rbp-118h]
  int v54; // [rsp+208h] [rbp-110h]
  __int64 v55; // [rsp+210h] [rbp-108h]
  __int64 v56; // [rsp+218h] [rbp-100h]
  int v57; // [rsp+220h] [rbp-F8h]
  __int64 v58; // [rsp+228h] [rbp-F0h]
  char v59; // [rsp+238h] [rbp-E0h]
  __int64 v60; // [rsp+240h] [rbp-D8h]
  __int16 v61; // [rsp+248h] [rbp-D0h]
  char v62; // [rsp+24Ah] [rbp-CEh]
  __int64 v63; // [rsp+250h] [rbp-C8h]
  void *ptr; // [rsp+258h] [rbp-C0h]
  __int64 v65; // [rsp+260h] [rbp-B8h]
  _BYTE v66[64]; // [rsp+268h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+2A8h] [rbp-70h]
  __int64 v68; // [rsp+2B0h] [rbp-68h]
  int v69; // [rsp+2B8h] [rbp-60h]
  __int64 v70; // [rsp+2C0h] [rbp-58h]
  char v71; // [rsp+2CCh] [rbp-4Ch]
  __int64 v72; // [rsp+2D0h] [rbp-48h]
  char v73; // [rsp+2DCh] [rbp-3Ch]
  char v74; // [rsp+2E4h] [rbp-34h]

  v3 = *(_QWORD *)(a2 + 112);
  v4 = *(_QWORD *)(v3 + 104);
  v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v4 & 1) != 0 )
  {
LABEL_2:
    v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = (_QWORD *)v6;
    if ( v5 )
      goto LABEL_3;
    goto LABEL_5;
  }
  if ( v5 <= 3 )
  {
    v7 = nullptr;
    goto LABEL_5;
  }
  v13 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = v13;
  if ( (v5 & 2) != 0 )
  {
    v14 = v13[2275];
    if ( v14 )
    {
      v15 = v13[274];
      v13[284] += 24LL;
      v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7[275] >= v16 + 24 && v15 )
        v7[274] = v16 + 24;
      else
        v16 = sub_8C9370((__int64)(v7 + 274), 24, 3);
      *(_QWORD *)v16 = v14;
      *(_DWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = v3;
      *(_QWORD *)(v3 + 104) = v16 | 5;
      v17 = v16;
      v6 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = (_QWORD *)v6;
      LOBYTE(v5) = v17 & 0xFA | 4;
LABEL_3:
      if ( (v5 & 4) != 0 && v6 )
      {
        v28 = *v7;
        v29 = *(_DWORD *)(*v7 + 12LL);
        if ( *((_DWORD *)v7 + 2) != v29 )
        {
          *((_DWORD *)v7 + 2) = v29;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, v3);
        }
        v7 = (_QWORD *)v7[2];
      }
      goto LABEL_5;
    }
    v5 = v3 & 0xFFFFFFFFFFFFFFFALL;
    v4 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v3 + 104) = v4;
    goto LABEL_2;
  }
LABEL_5:
  v8 = sub_A25610(*(_QWORD *)(a1 + 24), v7);
  v9 = v8;
  if ( !v8 )
    goto LABEL_24;
  v10 = *(_BYTE *)(v8 + 501);
  v11 = 0;
  if ( v10 )
    v11 = *(_BYTE *)(v9 + 497) ^ 1;
  if ( !*(_BYTE *)(v9 + 496) )
  {
    v18 = *(_QWORD *)(v9 + 8);
    if ( (v18 & 4) == 0 )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 33 <= 3 )
        {
          if ( (unsigned __int8)sub_7A5D20(v19) )
            return v9;
          v10 = *(_BYTE *)(v9 + 501);
        }
      }
    }
    if ( !v11 && !v10 )
    {
LABEL_24:
      v20 = _mm_loadh_ps((const double *)(a1 + 24));
      *(_OWORD *)v48 = 0;
      v40 = v20;
      v38 = 0x200000000LL;
      *(_OWORD *)v49 = 0;
      v50 = 0;
      v51 = v20;
      v31 = 0;
      v30[1] = 0;
      v30[2] = 0;
      v34 = 0;
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v36 = 0;
      v37 = (void **)v39;
      v41 = 0;
      v44 = 0;
      v42 = 0;
      v43 = 0;
      v47 = 0;
      v45 = 0;
      v46 = 0;
      v30[0] = &off_49F7330;
      v54 = 0;
      v52 = 0;
      v53 = 0;
      v57 = 0;
      v55 = 0;
      v56 = 0;
      v58 = 0;
      v61 = 0;
      v59 = 0;
      v60 = 0;
      v62 = 0;
      v63 = 0;
      ptr = v66;
      v65 = 0x300000000LL;
      v66[48] = 0;
      v66[56] = 0;
      v69 = 0;
      v67 = 0;
      v68 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      v21 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *))sub_BAE4C0)(v30, v7);
      v30[0] = &off_49F7330;
      v22 = v21;
      operator delete();
      if ( ptr != v66 )
        free(ptr);
      operator delete();
      operator delete();
      v30[0] = &qword_49F6CC8[2];
      if ( v49[1] )
        operator delete(v49[1], *((_QWORD *)&v50 + 1) - (unsigned __int64)v49[1]);
      if ( v48[0] )
        operator delete(v48[0], (char *)v49[0] - (char *)v48[0]);
      if ( v47 )
      {
        v23 = v45;
        v24 = v45 + 48LL * v47;
        do
        {
          while ( 1 )
          {
            if ( *(_DWORD *)v23 <= 0xFFFFFFFD )
            {
              v25 = *(void **)(v23 + 8);
              if ( v25 != (void *)(v23 + 24) )
                break;
            }
            v23 += 48;
            if ( v24 == v23 )
              goto LABEL_36;
          }
          free(v25);
          v23 += 48;
        }
        while ( v24 != v23 );
      }
LABEL_36:
      operator delete();
      operator delete();
      v26 = v37;
      v27 = &v37[18 * (unsigned int)v38];
      if ( v37 != v27 )
      {
        do
        {
          v27 -= 18;
          if ( *v27 != v27 + 2 )
            free(*v27);
        }
        while ( v26 != v27 );
        v27 = v37;
      }
      if ( v27 != (void **)v39 )
        free(v27);
      operator delete();
      operator delete();
      if ( v22 )
        return v22;
    }
  }
  return v9;
}

