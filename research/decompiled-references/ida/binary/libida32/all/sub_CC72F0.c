__int64 __fastcall sub_CC72F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r15
  void *v15; // rdi
  void **v16; // r15
  void **v17; // rbx
  __int64 (__fastcall **v19)(); // [rsp+8h] [rbp-330h]
  _QWORD v20[3]; // [rsp+10h] [rbp-328h] BYREF
  int v21; // [rsp+28h] [rbp-310h]
  __int64 v22; // [rsp+30h] [rbp-308h]
  __int64 v23; // [rsp+38h] [rbp-300h]
  int v24; // [rsp+40h] [rbp-2F8h]
  int v25; // [rsp+48h] [rbp-2F0h]
  char v26; // [rsp+4Ch] [rbp-2ECh]
  void **v27; // [rsp+50h] [rbp-2E8h]
  __int64 v28; // [rsp+58h] [rbp-2E0h]
  _QWORD v29[41]; // [rsp+60h] [rbp-2D8h] BYREF
  int v30; // [rsp+1A8h] [rbp-190h]
  __int64 v31; // [rsp+1B0h] [rbp-188h]
  __int64 v32; // [rsp+1B8h] [rbp-180h]
  unsigned int v33; // [rsp+1C0h] [rbp-178h]
  void *v34; // [rsp+1C8h] [rbp-170h]
  __int64 v35; // [rsp+1D0h] [rbp-168h]
  __int64 v36; // [rsp+1D8h] [rbp-160h]
  void *v37; // [rsp+1E0h] [rbp-158h]
  __int64 v38; // [rsp+1E8h] [rbp-150h]
  __int64 v39; // [rsp+1F0h] [rbp-148h]
  __int64 v40; // [rsp+1F8h] [rbp-140h]
  __int64 v41; // [rsp+200h] [rbp-138h]
  __int64 v42; // [rsp+208h] [rbp-130h]
  __int64 v43; // [rsp+210h] [rbp-128h]
  int v44; // [rsp+218h] [rbp-120h]
  __int64 v45; // [rsp+220h] [rbp-118h]
  __int64 v46; // [rsp+228h] [rbp-110h]
  int v47; // [rsp+230h] [rbp-108h]
  __int64 v48; // [rsp+238h] [rbp-100h]
  char v49; // [rsp+248h] [rbp-F0h]
  __int64 v50; // [rsp+250h] [rbp-E8h]
  __int16 v51; // [rsp+258h] [rbp-E0h]
  char v52; // [rsp+25Ah] [rbp-DEh]
  __int64 v53; // [rsp+260h] [rbp-D8h]
  void *ptr; // [rsp+268h] [rbp-D0h]
  __int64 v55; // [rsp+270h] [rbp-C8h]
  _BYTE v56[64]; // [rsp+278h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+2B8h] [rbp-80h]
  __int64 v58; // [rsp+2C0h] [rbp-78h]
  int v59; // [rsp+2C8h] [rbp-70h]
  __int64 v60; // [rsp+2D0h] [rbp-68h]
  char v61; // [rsp+2DCh] [rbp-5Ch]
  __int64 v62; // [rsp+2E0h] [rbp-58h]
  char v63; // [rsp+2ECh] [rbp-4Ch]
  char v64; // [rsp+2F4h] [rbp-44h]
  __int64 v65; // [rsp+2F8h] [rbp-40h]

  v8 = 0;
  v9 = sub_CC5910(a1, a3, a3, a4, a5, a6);
  if ( v9 )
  {
    v11 = v9;
    v12 = *(_QWORD *)(a1 + 24);
    v20[1] = 0;
    v27 = (void **)v29;
    v28 = 0x200000000LL;
    v29[37] = v12;
    v41 = v12;
    v20[0] = &off_2BDAB38;
    v19 = &off_2BDAB38;
    v20[2] = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v29[36] = a1;
    memset(&v29[38], 0, 24);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = nullptr;
    v35 = 0;
    v36 = 0;
    v37 = nullptr;
    v38 = 0;
    v39 = 0;
    v40 = a1;
    v42 = 0;
    v43 = 0;
    v51 = 0;
    v55 = 0x300000000LL;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v52 = 0;
    v53 = 0;
    ptr = v56;
    v56[48] = 0;
    v56[56] = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    sub_C895E0(v20, a3, v9, v10);
    v20[0] = &off_2BDAB38;
    operator delete();
    if ( ptr != v56 )
      free(ptr);
    operator delete();
    operator delete();
    v20[0] = &unk_2BDAAF0;
    if ( v37 )
      operator delete(v37);
    if ( v34 )
      operator delete(v34);
    v13 = v31;
    if ( v33 )
    {
      v14 = v31 + 48LL * v33;
      do
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v13 + 2) > 1 )
          {
            v15 = *(void **)(v13 + 8);
            if ( v15 != (void *)(v13 + 24) )
              break;
          }
          v13 += 48;
          if ( v14 == v13 )
            goto LABEL_14;
        }
        free(v15);
        v13 += 48;
      }
      while ( v14 != v13 );
    }
LABEL_14:
    operator delete();
    operator delete();
    v16 = v27;
    v17 = &v27[18 * (unsigned int)v28];
    if ( v27 != v17 )
    {
      do
      {
        while ( 1 )
        {
          v17 -= 18;
          if ( *v17 == v17 + 2 )
            break;
          free(*v17);
          if ( v16 == v17 )
            goto LABEL_17;
        }
      }
      while ( v16 != v17 );
LABEL_17:
      v17 = v27;
    }
    if ( v17 != v29 )
      free(v17);
    operator delete();
    operator delete();
    ++*(_DWORD *)(a1 + 32);
    sub_DFDD90(v20, a2, *(_QWORD *)(a1 + 24), a1 + 8, a1, v11);
    v8 = sub_DEBBD0(v20);
    if ( (_BYTE)v8 )
    {
      sub_DFE9F0(v20);
      if ( (*(_BYTE *)(v11 + 504) & 1) == 0 )
        LOBYTE(v8) = *(_DWORD *)(v11 + 8) == 3;
    }
    else
    {
      sub_DFE9F0(v20);
      sub_DFD890(a1 + 8);
    }
  }
  return v8;
}

