/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80719C0
// Address: 0x080719C0

//----- (080719C0) --------------------------------------------------------
__int32 __usercall sub_80719C0@<eax>(int *a1@<eax>, int (***a2)()@<edx>)
{
  __m128i *v2; // edi
  _BYTE *v3; // eax
  int (**v4)(); // eax
  unsigned int v5; // ebx
  void **v6; // edx
  int (***v7)(); // edi
  char *v8; // eax
  int (***i)(); // edi
  __m128i *v10; // edx
  void *v11; // eax
  void *v12; // eax
  char *v13; // eax
  int (***j)(); // edi
  __m128i *v15; // ebx
  void *v16; // eax
  void *v17; // eax
  void *v19; // eax
  char *v20; // edx
  int *v21; // ebx
  int (*v22)(); // edx
  void *v23; // eax
  int *v24; // ecx
  int (*v25)(); // eax
  void *v26; // eax
  char *v27; // edx
  __m128i v28; // xmm1
  __m128 v29; // xmm0
  void *v30; // eax
  __m128i v31; // xmm0
  unsigned __int64 v32; // rax
  __m128i v33; // xmm0
  int v34; // edi
  int v35; // ebx
  char *v36; // ebx
  char *v37; // edi
  int v38; // eax
  int (*v39)(); // eax
  int *v40; // edx
  __m128i v41; // xmm1
  unsigned int v42; // edx
  __m128i v43; // xmm0
  int *v44; // ecx
  int (*v45)(); // eax
  __int64 v46; // [esp-14h] [ebp-4A0h]
  int v47; // [esp+4h] [ebp-488h]
  __m128i v48; // [esp+14h] [ebp-478h] BYREF
  int (*v49)(); // [esp+24h] [ebp-468h]
  char v50; // [esp+28h] [ebp-464h]
  int (***v51)(); // [esp+2Ch] [ebp-460h]
  __m128i *v52; // [esp+30h] [ebp-45Ch]
  unsigned int v53; // [esp+40h] [ebp-44Ch] BYREF
  void *v54; // [esp+44h] [ebp-448h] BYREF
  __int32 v55; // [esp+48h] [ebp-444h]
  int v56; // [esp+4Ch] [ebp-440h]
  __m128i v57; // [esp+54h] [ebp-438h] BYREF
  void *ptr[4]; // [esp+64h] [ebp-428h] BYREF
  __m128 v59; // [esp+74h] [ebp-418h]
  __int64 v60; // [esp+84h] [ebp-408h]
  __int128 v61; // [esp+8Ch] [ebp-400h]
  int v62; // [esp+9Ch] [ebp-3F0h]
  int v63; // [esp+A0h] [ebp-3ECh]
  __m128i v64; // [esp+A4h] [ebp-3E8h] BYREF
  void *v65; // [esp+B4h] [ebp-3D8h]
  int v66; // [esp+B8h] [ebp-3D4h]
  int v67; // [esp+C0h] [ebp-3CCh]
  __m128i v68; // [esp+CCh] [ebp-3C0h] BYREF
  void *v69; // [esp+DCh] [ebp-3B0h]
  unsigned int v70; // [esp+E0h] [ebp-3ACh]
  unsigned int v71; // [esp+100h] [ebp-38Ch]
  unsigned int v72; // [esp+110h] [ebp-37Ch]
  unsigned int v73; // [esp+120h] [ebp-36Ch]
  char v74; // [esp+154h] [ebp-338h]
  void *v75; // [esp+178h] [ebp-314h]
  int (***v76)(); // [esp+17Ch] [ebp-310h]
  __m128i si128; // [esp+1A8h] [ebp-2E4h] BYREF
  __m128i v78; // [esp+1B8h] [ebp-2D4h]
  bool (__cdecl *v79)(int, int); // [esp+220h] [ebp-26Ch]
  char v80; // [esp+228h] [ebp-264h]
  char v81; // [esp+229h] [ebp-263h]
  __int64 v82; // [esp+244h] [ebp-248h]
  void *v83; // [esp+26Ch] [ebp-220h]
  int v84; // [esp+270h] [ebp-21Ch]
  int v85; // [esp+278h] [ebp-214h]
  _BYTE v86[484]; // [esp+284h] [ebp-208h] BYREF
  unsigned int v87; // [esp+470h] [ebp-1Ch]

  v51 = a2;
  v87 = __readgsdword(0x14u);
  v52 = &v64;
  sub_806D700((int)&v64, a1, 0);
  v79 = sub_8068E40;
  if ( !(unsigned __int8)sub_8069FC0((int)&v64) )
    goto LABEL_74;
  v50 = sub_806A5B0(v52);
  if ( !v50 || (unsigned __int8)(v80 - 1) > 1u || (unsigned __int8)(v81 - 1) > 1u )
    goto LABEL_74;
  v57 = 0;
  if ( !v82 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_806D970((int)v52) )
  {
LABEL_74:
    v48.m128i_i32[0] = -1;
    goto LABEL_35;
  }
  dword_811E604 = v67;
LABEL_8:
  sub_806EF70((int)v52);
  v57 = v68;
  if ( !v68.m128i_i32[0] )
    v57 = _mm_load_si128(&v64);
  v2 = v52;
  v3 = v86;
  do
  {
    *(_DWORD *)v3 = 0;
    v3 += 32;
    *((_DWORD *)v3 - 7) = 0;
    *(_OWORD *)(v3 - 24) = 0;
    *((_WORD *)v3 - 4) = 0;
    *((_DWORD *)v3 - 1) = 0;
  }
  while ( &v86[480] != v3 );
  v52 = v2;
  memset(v86, 0, sizeof(v86));
  if ( !v57.m128i_i32[0] )
    goto LABEL_13;
  v48.m128i_i32[0] = (__int32)v86;
  v54 = nullptr;
  v55 = 0;
  v56 = 0;
  v54 = sub_80CF920((int)&v54, nullptr, 0xAu, 0x10u);
  if ( !(unsigned __int8)sub_806DFB0((__int32)v52, (__m128i **)&v54, v57.m128i_i32)
    || !(unsigned __int8)sub_806AFD0(v52, v48.m128i_i32[0], (int *)&v54)
    || ((_BYTE)v51[1] & 4) == 0 )
  {
    goto LABEL_55;
  }
  v31 = _mm_loadl_epi64((const __m128i *)v86);
  v32 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v31, 0x20u)), _mm_cvtsi128_si32(v31));
  v48 = v31;
  if ( ((_DWORD)v32 != 0) + HIDWORD(v32) <= 0 || !*(_QWORD *)&v86[16] )
    goto LABEL_102;
  v33 = _mm_loadl_epi64(&si128);
  v34 = _mm_cvtsi128_si32(v33);
  v35 = _mm_cvtsi128_si32(_mm_srli_epi64(v33, 0x20u));
  if ( __SPAIR64__(v35, v34) <= 0 || !v78.m128i_i64[0] )
    goto LABEL_101;
  HIDWORD(v32) ^= v35;
  if ( v32 != v34 )
  {
    sub_8069790();
LABEL_101:
    si128 = _mm_load_si128((const __m128i *)v86);
    v78 = _mm_load_si128((const __m128i *)&v86[16]);
  }
LABEL_102:
  v36 = (char *)v54;
  v48.m128i_i32[0] = v55;
  v37 = (char *)v54;
  if ( !(16 * v55) )
  {
    v19 = v54;
    goto LABEL_56;
  }
  v49 = sub_8054780;
  while ( 1 )
  {
    memset(ptr, 0, 12);
    v41 = _mm_loadl_epi64((const __m128i *)v37);
    v42 = _mm_cvtsi128_si32(v41);
    v43 = _mm_loadl_epi64((const __m128i *)(v37 + 8));
    v47 = _mm_cvtsi128_si32(v43);
    if ( __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v41, 0x20u)), v42) <= 0x1D )
    {
      v38 = 536920066;
      if ( _bittest(&v38, v42) )
        break;
    }
    v40 = &dword_80DDFD8;
    v39 = (*v51)[3];
    if ( v39 != v49 )
      goto LABEL_114;
LABEL_111:
    v37 += 16;
    v19 = v36;
    if ( v37 == &v36[16 * v48.m128i_i32[0]] )
      goto LABEL_56;
  }
  HIDWORD(v46) = v47;
  LODWORD(v46) = &si128;
  sub_806E910((int)v52, (__m128i **)ptr, v46);
  v39 = (*v51)[3];
  if ( ptr[1] )
    v40 = (int *)ptr[0];
  else
    v40 = &dword_80DDFD8;
  if ( v39 == v49 )
    goto LABEL_108;
  v41.m128i_i64[0] = *(_QWORD *)v37;
  v43.m128i_i64[0] = *((_QWORD *)v37 + 1);
LABEL_114:
  if ( !((int (__cdecl *)(int (***)(), __int32, __int32, int *, __int32, __int32))v39)(
          v51,
          v41.m128i_i32[0],
          v41.m128i_i32[1],
          v40,
          v43.m128i_i32[0],
          v43.m128i_i32[1]) )
  {
LABEL_108:
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      sub_80CF780(ptr[0]);
    }
    v36 = (char *)v54;
    v48.m128i_i32[0] = v55;
    goto LABEL_111;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_80CF780(ptr[0]);
  }
LABEL_55:
  v19 = v54;
LABEL_56:
  if ( !v19 )
  {
LABEL_13:
    v4 = v51[1];
    if ( ((unsigned __int8)v4 & 2) != 0 )
      goto LABEL_58;
    goto LABEL_14;
  }
  v55 = 0;
  sub_80CF780(v19);
  v4 = v51[1];
  if ( ((unsigned __int8)v4 & 2) == 0 )
  {
LABEL_14:
    v48.m128i_i32[0] = (unsigned __int8)v4 & 1;
    if ( ((unsigned __int8)v4 & 1) == 0 )
      goto LABEL_23;
    v5 = v71;
    if ( !(v71 | v73) )
    {
      if ( *(__int64 *)&v86[32] > 0 )
      {
        v28 = _mm_loadl_epi64((const __m128i *)&v86[48]);
        if ( _mm_cvtsi128_si32(_mm_srli_epi64(v28, 0x20u)) | _mm_cvtsi128_si32(v28) )
        {
          v48.m128i_i64[0] = *(_QWORD *)&v86[32];
          v6 = ptr;
          *(_OWORD *)ptr = 0;
          v61 = 0;
          DWORD1(v61) = *(_DWORD *)&v86[60];
          v29 = _mm_loadh_ps((const double *)v48.m128i_i64);
          v60 = v28.m128i_i64[0];
          ptr[1] = (void *)11;
          v62 = *(unsigned __int16 *)&v86[56];
          v63 = 0;
          v59 = v29;
LABEL_22:
          v7 = v51;
          v48.m128i_i32[0] = sub_80715F0((int)v52, (int)v6, 2, v51);
          v4 = v7[1];
          goto LABEL_23;
        }
      }
      v48.m128i_i32[0] = 0;
      goto LABEL_23;
    }
    v48.m128i_i32[0] = 0;
    if ( !v73 )
    {
LABEL_17:
      if ( v5 && v50 )
      {
        if ( v74 )
        {
          if ( v5 >= v70 )
            v6 = nullptr;
          else
            v6 = (void **)((char *)v69 + 64 * v5);
          goto LABEL_22;
        }
LABEL_141:
        if ( v87 == __readgsdword(0x14u) )
        {
          sub_8068EB0();
          JUMPOUT(0x804D0A9);
        }
        goto LABEL_135;
      }
      v4 = v51[1];
LABEL_23:
      memset(&ptr[1], 0, 12);
      ptr[0] = v52;
      v59.m128_i8[0] = 0;
      if ( ((unsigned __int8)v4 & 0x10) != 0 )
      {
        sub_806FF60((int)v52, (int)ptr);
        v54 = nullptr;
        v55 = 0;
        v56 = 0;
        if ( (unsigned __int8)sub_8070270((int)ptr, (int)&v54) )
        {
          v24 = &dword_80DDFD8;
          v25 = (*v51)[4];
          if ( v55 )
            v24 = (int *)v54;
          if ( v25 == sub_8054790 )
          {
            v26 = v54;
          }
          else
          {
            v48.m128i_i32[0] = ((int (__cdecl *)(int (***)(), int *))v25)(v51, v24);
            v26 = v54;
            if ( v48.m128i_i32[0] )
            {
              if ( !v54 )
                goto LABEL_26;
              goto LABEL_127;
            }
          }
          v48.m128i_i32[0] = 0;
        }
        else
        {
          v26 = v54;
        }
        if ( v26 )
        {
          v55 = 0;
          sub_80CF780(v26);
        }
        if ( ((_BYTE)v51[1] & 0x20) == 0 )
          goto LABEL_26;
      }
      else if ( ((unsigned __int8)v4 & 0x20) == 0 )
      {
        goto LABEL_35;
      }
      v54 = nullptr;
      v55 = 0;
      v56 = 0;
      if ( !v74 )
        goto LABEL_26;
      if ( !sub_806FB80((int)&v68, (int)&v54, &v53) )
      {
        v30 = v54;
        goto LABEL_91;
      }
      v44 = &dword_80DDFD8;
      v45 = (*v51)[5];
      if ( v55 )
        v44 = (int *)v54;
      if ( v45 == sub_80547A0 )
      {
        v30 = v54;
LABEL_121:
        v48.m128i_i32[0] = 0;
LABEL_91:
        if ( v30 )
        {
          v55 = 0;
          sub_80CF780(v30);
        }
        goto LABEL_26;
      }
      v48.m128i_i32[0] = ((int (__cdecl *)(int (***)(), int *, unsigned int))v45)(v51, v44, v53);
      v30 = v54;
      if ( !v48.m128i_i32[0] )
        goto LABEL_121;
      if ( !v54 )
      {
LABEL_26:
        v8 = (char *)ptr[1];
        if ( ptr[1] )
        {
          if ( ptr[2] )
          {
            v51 = (int (***)())ptr[2];
            for ( i = nullptr; i != v51; i = (int (***)())((char *)i + 1) )
            {
              v10 = (__m128i *)&v8[28 * (_DWORD)i];
              v11 = (void *)v10->m128i_i32[3];
              v52 = v10;
              if ( v11 )
              {
                v10[1].m128i_i32[0] = 0;
                sub_80CF780(v11);
              }
              v12 = (void *)v52->m128i_i32[0];
              if ( v52->m128i_i32[0] )
              {
                v52->m128i_i32[1] = 0;
                sub_80CF780(v12);
              }
              v8 = (char *)ptr[1];
            }
          }
          ptr[2] = nullptr;
          sub_80CF780(v8);
        }
        goto LABEL_35;
      }
LABEL_127:
      v55 = 0;
      sub_80CF780(v54);
      goto LABEL_26;
    }
    if ( v74 )
    {
      if ( v73 >= v70 )
        v27 = nullptr;
      else
        v27 = (char *)v69 + 64 * v73;
      v48.m128i_i32[0] = sub_80715F0((int)v52, (int)v27, 1, v51);
      v50 = v48.m128i_i32[0] == 0;
      goto LABEL_17;
    }
    if ( v87 != __readgsdword(0x14u) )
      goto LABEL_135;
    sub_8068EB0();
LABEL_139:
    if ( v87 != __readgsdword(0x14u) )
      goto LABEL_135;
    sub_8068EB0();
    goto LABEL_141;
  }
LABEL_58:
  if ( !v72 )
    goto LABEL_14;
  if ( !v74 )
    goto LABEL_139;
  if ( v72 >= v70 )
    goto LABEL_14;
  v20 = (char *)v69 + 64 * v72;
  if ( !v20 )
    goto LABEL_14;
  memset(ptr, 0, 12);
  sub_806E590((int)v52, (int)ptr, *((_QWORD *)v20 + 3));
  v21 = &dword_80DDFD8;
  v22 = (*v51)[1];
  if ( ptr[1] )
    v21 = (int *)ptr[0];
  v23 = ptr[0];
  if ( v22 == sub_8054760
    || (v48.m128i_i32[0] = ((int (__cdecl *)(int (***)(), int *))v22)(v51, v21), v23 = ptr[0], !v48.m128i_i32[0]) )
  {
    if ( v23 )
    {
      ptr[1] = nullptr;
      sub_80CF780(v23);
    }
    v4 = v51[1];
    goto LABEL_14;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_80CF780(ptr[0]);
  }
LABEL_35:
  if ( v85 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v85 + 4))(v85);
  if ( v83 )
  {
    v84 = 0;
    sub_80CF780(v83);
  }
  v13 = (char *)v75;
  if ( v75 )
  {
    if ( v76 )
    {
      v51 = v76;
      for ( j = nullptr; j != v51; j = (int (***)())((char *)j + 1) )
      {
        v15 = (__m128i *)&v13[68 * (_DWORD)j];
        v16 = (void *)v15->m128i_i32[3];
        v52 = v15;
        if ( v16 )
        {
          v15[1].m128i_i32[0] = 0;
          sub_80CF780(v16);
        }
        v17 = (void *)v52->m128i_i32[0];
        if ( v52->m128i_i32[0] )
        {
          v52->m128i_i32[1] = 0;
          sub_80CF780(v17);
        }
        v13 = (char *)v75;
      }
    }
    v76 = nullptr;
    sub_80CF780(v13);
  }
  if ( v69 )
  {
    v70 = 0;
    sub_80CF780(v69);
  }
  if ( v65 )
  {
    v66 = 0;
    sub_80CF780(v65);
  }
  if ( v87 != __readgsdword(0x14u) )
LABEL_135:
    sub_80D7AB0();
  return v48.m128i_i32[0];
}
// 8072612: control flows out of bounds to 804D0A9
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E604: using guessed type int dword_811E604;
