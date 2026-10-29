__int64 __fastcall sub_DEED30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v20; // rsi
  __int64 v21; // r12
  void *v22; // rdi
  void **v23; // r12
  void **v24; // rbx
  _QWORD *v26; // rdi
  __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-320h]
  __int64 (__fastcall **v33)(); // [rsp+10h] [rbp-318h] BYREF
  __int64 v34; // [rsp+18h] [rbp-310h]
  __int64 v35; // [rsp+20h] [rbp-308h]
  unsigned int v36; // [rsp+28h] [rbp-300h]
  __int64 v37; // [rsp+30h] [rbp-2F8h]
  __int64 v38; // [rsp+38h] [rbp-2F0h]
  unsigned int v39; // [rsp+40h] [rbp-2E8h]
  int v40; // [rsp+48h] [rbp-2E0h]
  char v41; // [rsp+4Ch] [rbp-2DCh]
  void **v42; // [rsp+50h] [rbp-2D8h]
  __int64 v43; // [rsp+58h] [rbp-2D0h]
  _QWORD v44[39]; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v45; // [rsp+198h] [rbp-190h]
  __int64 v46; // [rsp+1A0h] [rbp-188h]
  unsigned int v47; // [rsp+1A8h] [rbp-180h]
  __int64 v48; // [rsp+1B0h] [rbp-178h]
  __int64 v49; // [rsp+1B8h] [rbp-170h]
  unsigned int v50; // [rsp+1C0h] [rbp-168h]
  void *v51; // [rsp+1C8h] [rbp-160h]
  __int64 v52; // [rsp+1D0h] [rbp-158h]
  __int64 v53; // [rsp+1D8h] [rbp-150h]
  void *v54; // [rsp+1E0h] [rbp-148h]
  __int64 v55; // [rsp+1E8h] [rbp-140h]
  __int64 v56; // [rsp+1F0h] [rbp-138h]
  __int64 v57; // [rsp+1F8h] [rbp-130h]
  __int64 v58; // [rsp+200h] [rbp-128h]
  __int64 v59; // [rsp+208h] [rbp-120h]
  __int64 v60; // [rsp+210h] [rbp-118h]
  unsigned int v61; // [rsp+218h] [rbp-110h]
  __int64 v62; // [rsp+220h] [rbp-108h]
  __int64 v63; // [rsp+228h] [rbp-100h]
  unsigned int v64; // [rsp+230h] [rbp-F8h]
  __int64 v65; // [rsp+238h] [rbp-F0h]
  char v66; // [rsp+248h] [rbp-E0h]
  __int64 v67; // [rsp+250h] [rbp-D8h]
  __int16 v68; // [rsp+258h] [rbp-D0h]
  char v69; // [rsp+25Ah] [rbp-CEh]
  __int64 v70; // [rsp+260h] [rbp-C8h]
  void *ptr; // [rsp+268h] [rbp-C0h]
  __int64 v72; // [rsp+270h] [rbp-B8h]
  _BYTE v73[64]; // [rsp+278h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+2B8h] [rbp-70h]
  __int64 v75; // [rsp+2C0h] [rbp-68h]
  unsigned int v76; // [rsp+2C8h] [rbp-60h]
  __int64 v77; // [rsp+2D0h] [rbp-58h]
  char v78; // [rsp+2DCh] [rbp-4Ch]
  __int64 v79; // [rsp+2E0h] [rbp-48h]
  char v80; // [rsp+2ECh] [rbp-3Ch]
  char v81; // [rsp+2F4h] [rbp-34h]
  __int64 v82; // [rsp+2F8h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(a1 + 184);
  v36 = 0;
  v41 = 0;
  v42 = (void **)v44;
  v43 = 0x200000000LL;
  v44[37] = v6;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v44[36] = v7;
  v44[38] = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = 0;
  v56 = 0;
  v58 = v6;
  v68 = 0;
  v8 = &off_2C04B38;
  ptr = v73;
  v72 = 0x300000000LL;
  v9 = *(_QWORD *)(a2 + 16);
  v33 = &off_2C04B38;
  v57 = v7;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v73[48] = 0;
  v73[56] = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  if ( (v9 & 4) != 0 )
    BUG();
  v11 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 112);
  v12 = *(_QWORD *)(v11 + 104);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) == 0 )
  {
    v26 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v15 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v12 & 2) == 0 )
        goto LABEL_9;
      v27 = v26[2295];
      v28 = v11 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v27 )
      {
        v29 = v26[294];
        v26[304] += 24LL;
        v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = (__int64 (__fastcall **)())(v30 + 24);
        if ( v26[295] >= v30 + 24 && v29 )
        {
          v26[294] = v8;
          v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v31 = sub_986170((__int64)(v26 + 294), 24, 24, 3, a5, a6);
          v30 = v31 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v31 = v27;
        v28 = v30 | 4;
        *(_DWORD *)(v31 + 8) = 0;
        *(_QWORD *)(v31 + 16) = v11;
      }
      v13 = v28 & 0xFFFFFFFFFFFFFFFELL;
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
          v32 = v14;
          (*(void (__fastcall **)(__int64 *, __int64))(v18 + 152))(v16, v11);
          v14 = v32;
        }
        v15 = *(_QWORD *)(v14 + 16);
      }
    }
  }
LABEL_9:
  sub_CAD320(&v33, v15, a2, (__int64)v8);
  v33 = &off_2C04B38;
  operator delete(v74, 16LL * v76, 8);
  if ( ptr != v73 )
    free(ptr);
  operator delete(v62, 16LL * v64, 8);
  operator delete(v59, 24LL * v61, 8);
  v33 = (__int64 (__fastcall **)())&unk_2C04AF0;
  if ( v54 )
    operator delete(v54);
  if ( v51 )
    operator delete(v51);
  v19 = v48;
  v20 = 48LL * v50;
  if ( v50 )
  {
    v21 = v48 + 48LL * v50;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v19 + 2) > 1 )
        {
          v22 = *(void **)(v19 + 8);
          if ( v22 != (void *)(v19 + 24) )
            break;
        }
        v19 += 48;
        if ( v21 == v19 )
          goto LABEL_21;
      }
      free(v22);
      v19 += 48;
    }
    while ( v21 != v19 );
LABEL_21:
    v19 = v48;
    v20 = 48LL * v50;
  }
  operator delete(v19, v20, 8);
  operator delete(v45, 8LL * v47, 4);
  v23 = v42;
  v24 = &v42[18 * (unsigned int)v43];
  if ( v42 != v24 )
  {
    do
    {
      while ( 1 )
      {
        v24 -= 18;
        if ( *v24 == v24 + 2 )
          break;
        free(*v24);
        if ( v23 == v24 )
          goto LABEL_25;
      }
    }
    while ( v23 != v24 );
LABEL_25:
    v24 = v42;
  }
  if ( v24 != v44 )
    free(v24);
  operator delete(v37, 16LL * v39, 8);
  return operator delete(v34, 16LL * v36, 8);
}
