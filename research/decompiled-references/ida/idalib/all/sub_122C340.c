void __fastcall sub_122C340(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // rdi
  unsigned __int8 (__fastcall *v10)(__int64, __m128i *); // rax
  __int64 v11; // rsi
  void (__fastcall *v12)(__int128 *, __int64, __m128i *, int *); // rax
  _BYTE *v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  unsigned __int8 (__fastcall *v17)(__int64, __m128i *); // rax
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r15
  _QWORD *v26; // rdi
  __int64 v27; // rbp
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  __int64 v30; // r14
  __m128i *v31; // rdi
  __int32 v32; // eax
  __int64 v33; // r12
  __int64 v34; // rax
  char *v35; // r14
  __m128i *v36; // rbx
  __m128i *v37; // rsi
  __m128i *v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rax
  __int32 v41; // r12d
  __m128i *v43; // [rsp+10h] [rbp-7E8h]
  __int32 v44; // [rsp+18h] [rbp-7E0h]
  __int64 v45; // [rsp+30h] [rbp-7C8h]
  __int64 v46; // [rsp+38h] [rbp-7C0h]
  __int64 v47; // [rsp+48h] [rbp-7B0h] BYREF
  int v48; // [rsp+50h] [rbp-7A8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-7A0h]
  __int128 v50; // [rsp+60h] [rbp-798h] BYREF
  void *v51[2]; // [rsp+70h] [rbp-788h] BYREF
  __int64 v52; // [rsp+80h] [rbp-778h] BYREF
  __m128i v53; // [rsp+90h] [rbp-768h] BYREF
  _WORD v54[16]; // [rsp+A0h] [rbp-758h] BYREF
  __m128i v55; // [rsp+C0h] [rbp-738h] BYREF
  _BYTE v56[16]; // [rsp+D0h] [rbp-728h] BYREF
  __int16 v57; // [rsp+E0h] [rbp-718h]
  __m128i v58[2]; // [rsp+F0h] [rbp-708h] BYREF
  int v59; // [rsp+110h] [rbp-6E8h]
  __m128i v60; // [rsp+180h] [rbp-678h] BYREF
  _BYTE v61[16]; // [rsp+190h] [rbp-668h] BYREF
  __int16 v62; // [rsp+1A0h] [rbp-658h]
  void *v63; // [rsp+210h] [rbp-5E8h] BYREF
  __int64 v64; // [rsp+218h] [rbp-5E0h]
  _BYTE v65[16]; // [rsp+220h] [rbp-5D8h] BYREF
  __m128i v66; // [rsp+230h] [rbp-5C8h] BYREF
  _BYTE v67[16]; // [rsp+240h] [rbp-5B8h] BYREF
  __int16 v68; // [rsp+250h] [rbp-5A8h]

  v8 = *(_DWORD *)(a2 + 44);
  if ( v8 == 17 )
  {
    v68 = 257;
    v62 = 257;
    LOWORD(v59) = 257;
    v55.m128i_i64[0] = (__int64)"/boot/system/develop/tools";
    v57 = 259;
    sub_1130220(&v53, a4, a5, (__int64)&v55, (__int64)v58, (__int64)&v60, (__int64)&v66);
LABEL_6:
    sub_CEFAC0(a3, &v53);
    if ( (_WORD *)v53.m128i_i64[0] != v54 )
      operator delete((void *)v53.m128i_i64[0]);
    return;
  }
  if ( v8 != 13 )
  {
    if ( !a5 && v8 == 7 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
      v10 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v9 + 96LL);
      v66.m128i_i64[0] = (__int64)"/opt/rh";
      v68 = 259;
      if ( v10(v9, &v66) )
      {
        sub_1213D50(&v66, "/opt/rh/gcc-toolset-12/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/gcc-toolset-11/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/gcc-toolset-10/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-12/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-11/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-10/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-9/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-8/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-7/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-6/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-4/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-3/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
        sub_1213D50(&v66, "/opt/rh/devtoolset-2/root/usr");
        sub_CEFAC0(a3, &v66);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
      }
    }
    v68 = 257;
    v62 = 257;
    LOWORD(v59) = 257;
    v55.m128i_i64[0] = (__int64)"/usr";
    v57 = 259;
    sub_1130220(&v53, a4, a5, (__int64)&v55, (__int64)v58, (__int64)&v60, (__int64)&v66);
    goto LABEL_6;
  }
  v66.m128i_i64[0] = (__int64)v67;
  v66.m128i_i64[1] = 0x800000000LL;
  v57 = 257;
  v53.m128i_i64[0] = (__int64)"/usr/gcc";
  v54[8] = 259;
  LOWORD(v59) = 257;
  v62 = 257;
  sub_1130220(v51, a4, a5, (__int64)&v53, (__int64)&v55, (__int64)v58, (__int64)&v60);
  v48 = 0;
  v49 = std::_V2::system_category((std::_V2 *)v51);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v12 = *(void (__fastcall **)(__int128 *, __int64, __m128i *, int *))(*(_QWORD *)v11 + 64LL);
  v62 = 260;
  v60.m128i_i64[0] = (__int64)v51;
  v12(&v50, v11, &v60, &v48);
LABEL_38:
  if ( !v48 )
  {
    while ( (_QWORD)v50 )
    {
      v13 = (_BYTE *)sub_228AA60(*(_QWORD *)(v50 + 8), *(_QWORD *)(v50 + 16), 0);
      v15 = v14;
      sub_1220870(v58, v13, v14);
      if ( v59 != -1 && !(unsigned __int8)sub_1213FB0((__int64)v58, 4, 1, 1, nullptr, 0) )
      {
        v60.m128i_i64[0] = (__int64)v61;
        if ( v13 )
        {
          sub_1213C40(&v60, v13, (__int64)&v13[v15]);
        }
        else
        {
          v60.m128i_i64[1] = 0;
          v61[0] = 0;
        }
        sub_F7DA00((size_t *)&v55, (__int64)v51, "/");
        sub_1054B10(&v53, &v55, &v60);
        if ( (_BYTE *)v55.m128i_i64[0] != v56 )
          operator delete((void *)v55.m128i_i64[0]);
        if ( (_BYTE *)v60.m128i_i64[0] != v61 )
          operator delete((void *)v60.m128i_i64[0]);
        sub_F7DA00((size_t *)&v55, (__int64)&v53, "/lib/gcc");
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
        v17 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v16 + 96LL);
        v60.m128i_i64[0] = (__int64)&v55;
        v62 = 260;
        if ( v17(v16, &v60) )
        {
          sub_12140A0((__int64)&v60, (__int64)v58);
          v63 = v65;
          sub_1213B80(&v63, v53.m128i_i64[0], v53.m128i_i64[0] + v53.m128i_i64[1]);
          if ( v66.m128i_i32[3] <= (unsigned __int32)v66.m128i_i32[2] )
          {
            v45 = sub_2237400(&v66, v67, 0, 176, &v47);
            sub_1216D60((__m128i *)(v45 + 176LL * v66.m128i_u32[2]), &v60);
            v33 = v66.m128i_i64[0];
            v34 = 176LL * v66.m128i_u32[2];
            v35 = (char *)(v66.m128i_i64[0] + v34);
            if ( v66.m128i_i64[0] != v66.m128i_i64[0] + v34 )
            {
              v46 = a3;
              v36 = (__m128i *)v45;
              do
              {
                v37 = (__m128i *)v33;
                v38 = v36;
                v33 += 176;
                v36 += 11;
                sub_1216D60(v38, v37);
              }
              while ( v35 != (char *)v33 );
              v39 = v66.m128i_i64[0];
              a3 = v46;
              v40 = 176LL * v66.m128i_u32[2];
              v35 = (char *)(v66.m128i_i64[0] + v40);
              if ( v66.m128i_i64[0] != v66.m128i_i64[0] + v40 )
              {
                do
                {
                  v35 -= 176;
                  sub_12145F0((__int64)v35);
                }
                while ( (char *)v39 != v35 );
                v35 = (char *)v66.m128i_i64[0];
              }
            }
            v41 = v47;
            if ( v35 != v67 )
              free(v35);
            v66.m128i_i32[3] = v41;
            ++v66.m128i_i32[2];
            v66.m128i_i64[0] = v45;
          }
          else
          {
            sub_1216D60((__m128i *)(v66.m128i_i64[0] + 176LL * v66.m128i_u32[2]), &v60);
            ++v66.m128i_i32[2];
          }
          sub_12145F0((__int64)&v60);
        }
        if ( (_BYTE *)v55.m128i_i64[0] != v56 )
          operator delete((void *)v55.m128i_i64[0]);
        if ( (_WORD *)v53.m128i_i64[0] != v54 )
          operator delete((void *)v53.m128i_i64[0]);
      }
      sub_1213F50((__int64)v58);
      v48 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 16LL))(v50);
      v49 = v18;
      if ( *(_QWORD *)(v50 + 16) )
        goto LABEL_38;
      v19 = *((volatile signed __int32 **)&v50 + 1);
      v50 = 0;
      if ( !v19 )
        goto LABEL_38;
      sub_4343A0(v19);
      if ( v48 )
        break;
    }
  }
  if ( *((_QWORD *)&v50 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v50 + 1));
  v20 = v66.m128i_i64[0];
  v21 = 176LL * v66.m128i_u32[2];
  v22 = v66.m128i_i64[0] + v21;
  if ( v66.m128i_i64[0] + v21 != v66.m128i_i64[0] )
  {
    v58[0].m128i_i64[0] = v66.m128i_i64[0];
    v60.m128i_i64[0] = v66.m128i_i64[0] + v21;
    _BitScanReverse64(&v23, 0x2E8BA2E8BA2E8BA3LL * (v21 >> 4));
    sub_122AA50((void **)&v60, (void **)v58, (__m128i *)(2LL * (int)(63 - (v23 ^ 0x3F))));
    if ( (unsigned __int64)v21 > 0xB00 )
    {
      v30 = v22 - 2816;
      v60.m128i_i64[0] = v22;
      v58[0].m128i_i64[0] = v22 - 2816;
      sub_1215B30(v60.m128i_i64, (__int64 **)v58);
      if ( v20 != v22 - 2816 )
      {
        do
        {
          v60.m128i_i64[0] = v30;
          v30 -= 176;
          sub_1215290(v60.m128i_i64);
        }
        while ( v20 != v30 );
      }
    }
    else
    {
      v58[0].m128i_i64[0] = v20;
      v60.m128i_i64[0] = v22;
      sub_1215B30(v60.m128i_i64, (__int64 **)v58);
    }
    v24 = v66.m128i_i64[0];
    v25 = v66.m128i_i64[0] + 176LL * v66.m128i_u32[2];
    if ( v25 != v66.m128i_i64[0] )
    {
      do
      {
        sub_12140A0((__int64)&v60, v24);
        v63 = v65;
        sub_1213B80(&v63, *(_BYTE **)(v24 + 144), *(_QWORD *)(v24 + 144) + *(_QWORD *)(v24 + 152));
        if ( *(_DWORD *)(a3 + 12) <= *(_DWORD *)(a3 + 8) )
        {
          v43 = (__m128i *)sub_2237400(a3, a3 + 16, 0, 32, v58);
          v31 = &v43[2 * *(unsigned int *)(a3 + 8)];
          v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
          sub_1213B80(v31, v63, (__int64)v63 + v64);
          sub_10E9550(a3, v43);
          v32 = v58[0].m128i_i32[0];
          if ( a3 + 16 != *(_QWORD *)a3 )
          {
            v44 = v58[0].m128i_i32[0];
            free(*(void **)a3);
            v32 = v44;
          }
          *(_DWORD *)(a3 + 12) = v32;
          ++*(_DWORD *)(a3 + 8);
          *(_QWORD *)a3 = v43;
        }
        else
        {
          v26 = (_QWORD *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
          *v26 = v26 + 2;
          sub_1213B80(v26, v63, (__int64)v63 + v64);
          ++*(_DWORD *)(a3 + 8);
        }
        if ( v63 != v65 )
          operator delete(v63);
        v24 += 176;
        sub_1213F50((__int64)&v60);
      }
      while ( v25 != v24 );
    }
  }
  if ( v51[0] != &v52 )
    operator delete(v51[0]);
  v27 = v66.m128i_i64[0];
  v28 = (_QWORD *)(v66.m128i_i64[0] + 176LL * v66.m128i_u32[2]);
  if ( (_QWORD *)v66.m128i_i64[0] != v28 )
  {
    do
    {
      while ( 1 )
      {
        v28 -= 22;
        v29 = (_QWORD *)v28[18];
        if ( v29 == v28 + 20 )
          break;
        operator delete(v29);
        sub_1213F50((__int64)v28);
        if ( (_QWORD *)v27 == v28 )
          goto LABEL_75;
      }
      sub_1213F50((__int64)v28);
    }
    while ( (_QWORD *)v27 != v28 );
LABEL_75:
    v28 = (_QWORD *)v66.m128i_i64[0];
  }
  if ( v28 != (_QWORD *)v67 )
    free(v28);
}
