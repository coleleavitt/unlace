__int64 __fastcall sub_DCAFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(); // rcx
  __int64 v9; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 *v16; // rdi
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  void **v22; // r12
  void **v23; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-320h]
  _QWORD v32[3]; // [rsp+10h] [rbp-318h] BYREF
  int v33; // [rsp+28h] [rbp-300h]
  __int64 v34; // [rsp+30h] [rbp-2F8h]
  __int64 v35; // [rsp+38h] [rbp-2F0h]
  int v36; // [rsp+40h] [rbp-2E8h]
  int v37; // [rsp+48h] [rbp-2E0h]
  char v38; // [rsp+4Ch] [rbp-2DCh]
  void **v39; // [rsp+50h] [rbp-2D8h]
  __int64 v40; // [rsp+58h] [rbp-2D0h]
  _QWORD v41[41]; // [rsp+60h] [rbp-2C8h] BYREF
  int v42; // [rsp+1A8h] [rbp-180h]
  __int64 v43; // [rsp+1B0h] [rbp-178h]
  __int64 v44; // [rsp+1B8h] [rbp-170h]
  unsigned int v45; // [rsp+1C0h] [rbp-168h]
  void *v46; // [rsp+1C8h] [rbp-160h]
  __int64 v47; // [rsp+1D0h] [rbp-158h]
  __int64 v48; // [rsp+1D8h] [rbp-150h]
  void *v49; // [rsp+1E0h] [rbp-148h]
  __int64 v50; // [rsp+1E8h] [rbp-140h]
  __int64 v51; // [rsp+1F0h] [rbp-138h]
  __int64 v52; // [rsp+1F8h] [rbp-130h]
  __int64 v53; // [rsp+200h] [rbp-128h]
  __int64 v54; // [rsp+208h] [rbp-120h]
  __int64 v55; // [rsp+210h] [rbp-118h]
  int v56; // [rsp+218h] [rbp-110h]
  __int64 v57; // [rsp+220h] [rbp-108h]
  __int64 v58; // [rsp+228h] [rbp-100h]
  int v59; // [rsp+230h] [rbp-F8h]
  __int64 v60; // [rsp+238h] [rbp-F0h]
  char v61; // [rsp+248h] [rbp-E0h]
  __int64 v62; // [rsp+250h] [rbp-D8h]
  __int16 v63; // [rsp+258h] [rbp-D0h]
  char v64; // [rsp+25Ah] [rbp-CEh]
  __int64 v65; // [rsp+260h] [rbp-C8h]
  void *ptr; // [rsp+268h] [rbp-C0h]
  __int64 v67; // [rsp+270h] [rbp-B8h]
  _BYTE v68[64]; // [rsp+278h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+2B8h] [rbp-70h]
  __int64 v70; // [rsp+2C0h] [rbp-68h]
  int v71; // [rsp+2C8h] [rbp-60h]
  __int64 v72; // [rsp+2D0h] [rbp-58h]
  char v73; // [rsp+2DCh] [rbp-4Ch]
  __int64 v74; // [rsp+2E0h] [rbp-48h]
  char v75; // [rsp+2ECh] [rbp-3Ch]
  char v76; // [rsp+2F4h] [rbp-34h]
  __int64 v77; // [rsp+2F8h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(a1 + 184);
  v33 = 0;
  v38 = 0;
  v39 = (void **)v41;
  v40 = 0x200000000LL;
  v41[37] = v6;
  v32[1] = 0;
  v32[2] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v41[36] = v7;
  memset(&v41[38], 0, 24);
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  v53 = v6;
  v63 = 0;
  v8 = &off_2BDAB38;
  ptr = v68;
  v67 = 0x300000000LL;
  v9 = *(_QWORD *)(a2 + 16);
  v32[0] = &off_2BDAB38;
  v52 = v7;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v68[48] = 0;
  v68[56] = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  if ( (v9 & 4) != 0 )
    BUG();
  v11 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 112);
  v12 = *(_QWORD *)(v11 + 104);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) == 0 )
  {
    v25 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v15 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v12 & 2) == 0 )
        goto LABEL_9;
      v26 = v25[2295];
      v27 = v11 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v26 )
      {
        v28 = v25[294];
        v25[304] += 24LL;
        v29 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = (__int64 (__fastcall **)())(v29 + 24);
        if ( v25[295] >= v29 + 24 && v28 )
        {
          v25[294] = v8;
          v30 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v30 = sub_962430((__int64)(v25 + 294), 24, 24, 3, a5, a6);
          v29 = v30 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v30 = v26;
        v27 = v29 | 4;
        *(_DWORD *)(v30 + 8) = 0;
        *(_QWORD *)(v30 + 16) = v11;
      }
      v13 = v27 & 0xFFFFFFFFFFFFFFFELL;
      v12 = v13 | 1;
      *(_QWORD *)(v11 + 104) = v13 | 1;
    }
  }
  v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v14;
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v15 = 0;
      if ( v14 )
      {
        v16 = *(__int64 **)v14;
        v17 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        if ( *(_DWORD *)(v14 + 8) != v17 )
        {
          *(_DWORD *)(v14 + 8) = v17;
          v18 = *v16;
          v31 = v14;
          (*(void (__fastcall **)(__int64 *, __int64))(v18 + 152))(v16, v11);
          v14 = v31;
        }
        v15 = *(_QWORD *)(v14 + 16);
      }
    }
  }
LABEL_9:
  sub_C895E0(v32, v15, a2, (__int64)v8);
  v32[0] = &off_2BDAB38;
  operator delete();
  if ( ptr != v68 )
    free(ptr);
  operator delete();
  operator delete();
  v32[0] = &unk_2BDAAF0;
  if ( v49 )
    operator delete(v49);
  if ( v46 )
    operator delete(v46);
  v19 = v43;
  if ( v45 )
  {
    v20 = v43 + 48LL * v45;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v19 + 2) > 1 )
        {
          v21 = *(void **)(v19 + 8);
          if ( v21 != (void *)(v19 + 24) )
            break;
        }
        v19 += 48;
        if ( v20 == v19 )
          goto LABEL_21;
      }
      free(v21);
      v19 += 48;
    }
    while ( v20 != v19 );
  }
LABEL_21:
  operator delete();
  operator delete();
  v22 = v39;
  v23 = &v39[18 * (unsigned int)v40];
  if ( v39 != v23 )
  {
    do
    {
      while ( 1 )
      {
        v23 -= 18;
        if ( *v23 == v23 + 2 )
          break;
        free(*v23);
        if ( v22 == v23 )
          goto LABEL_24;
      }
    }
    while ( v22 != v23 );
LABEL_24:
    v23 = v39;
  }
  if ( v23 != v41 )
    free(v23);
  operator delete();
  return operator delete();
}

