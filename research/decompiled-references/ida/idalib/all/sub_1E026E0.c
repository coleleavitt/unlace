__int64 __fastcall sub_1E026E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // al
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  _BOOL8 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int *v28; // rax
  unsigned int *v29; // r13
  __int64 *v30; // rax
  unsigned int *v31; // r15
  __int64 *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int64 *v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  int v45; // edx
  unsigned __int8 v46; // r8
  unsigned __int64 v47; // rax
  int v48; // r11d
  __int64 *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v54; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v55; // [rsp+30h] [rbp-1A8h]
  __int64 v56; // [rsp+38h] [rbp-1A0h]
  __int64 v58; // [rsp+60h] [rbp-178h]
  __int64 v59; // [rsp+68h] [rbp-170h]
  unsigned __int64 v60; // [rsp+80h] [rbp-158h]
  __int64 v61; // [rsp+88h] [rbp-150h]
  int v62[3]; // [rsp+94h] [rbp-144h] BYREF
  __m128i v63; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-128h]
  __int64 v65[4]; // [rsp+C0h] [rbp-118h] BYREF
  __m128i v66[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+108h] [rbp-D0h]
  _BYTE v69[32]; // [rsp+110h] [rbp-C8h] BYREF
  __int128 v70; // [rsp+130h] [rbp-A8h] BYREF
  void *v71[2]; // [rsp+140h] [rbp-98h]
  __int128 v72; // [rsp+150h] [rbp-88h]
  void *v73; // [rsp+160h] [rbp-78h] BYREF
  __int64 v74; // [rsp+168h] [rbp-70h]
  _BYTE v75[104]; // [rsp+170h] [rbp-68h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(a2 + 104);
  v7 = *(_QWORD *)(a2 + 48);
  v59 = v6;
  v8 = *(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v8 & 4) != 0 || (v8 & 2) != 0 || (v58 = v7, (v8 & 1) != 0) )
  {
    v9 = *(__int64 **)(*a1 + 760);
    v10 = sub_1DD1D30(*a1, v7, a1[4], *(_DWORD *)(a2 + 24), v59, nullptr, a3, a4);
    v58 = sub_1AF5A60(v9, *(_DWORD *)(a2 + 24), (__int64)v10);
  }
  v11 = 0;
  if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = sub_BB2580(a2);
    v60 = v12;
    if ( v12 && *(char *)(v12 + 28) >= 0 )
      v60 = *(_QWORD *)sub_1DBE240(*(_QWORD *)(*a1 + 11280), v12, v13, v14) & 0xFFFFFFFFFFFFFFF8LL;
    v64 = 0;
    v73 = v75;
    v74 = 0x600000000LL;
    v15 = *a1;
    v63.m128i_i32[2] = 0;
    v16 = *(__int64 **)(v15 + 760);
    v17 = *(_QWORD *)(a2 + 56);
    v63.m128i_i64[0] = 0;
    sub_1B5B570(v16, 12, &v63, 0, **(_DWORD **)(v17 + 16));
    v18 = sub_1AF8CA0(*(__int64 **)(*v5 + 760), 0, v58, *(_DWORD *)(a2 + 24), v59) & 0xFFFFFFFFFFFFFFFELL;
    v19 = *(_QWORD *)(*v5 + 11280);
    v20 = *(_QWORD *)(v18 + 16);
    v61 = v18;
    v21 = sub_EF5320(*(unsigned int **)(a2 + 56));
    sub_1DC20B0(v19, *(_QWORD *)(*(_QWORD *)v21 + 16LL), v20, v22);
    v24 = v5[3];
    if ( v24 )
    {
      if ( (*(_BYTE *)(v24 + 8) & 0x7Fu) - 59 > 2 )
      {
        v25 = 0;
        v24 = 0;
      }
      else
      {
        v24 -= 64;
        v25 = v24 != 0;
      }
    }
    else
    {
      v25 = 0;
    }
    sub_19A2CD0((__int64)v65, *v5, v24, 0, v25, v23);
    v28 = *(unsigned int **)(a2 + 56);
    v29 = v28 + 4;
    v56 = (__int64)&v28[2 * *v28 + 4];
    if ( (unsigned int *)v56 == v28 + 4 )
    {
LABEL_25:
      sub_1B335B0(*(__int64 **)(*v5 + 760), 0, a3, *(double *)a4.m128_u64);
      v11 = sub_1B630D0(
              *(__int64 **)(*v5 + 760),
              nullptr,
              (__m128i *)v5[3],
              *(_QWORD *)(a2 + 40),
              v58,
              *(_DWORD *)(a2 + 24),
              *(double *)a3.m128_u64,
              a4,
              a5,
              v59,
              (*(_BYTE *)(a2 + 29) >> 5) & 3,
              v61,
              v73,
              (unsigned int)v74,
              v60);
      sub_1DC20B0(*(_QWORD *)(*v5 + 11280), a2, v11, v52);
    }
    else
    {
      v30 = v5;
      v31 = v29;
      v32 = v30;
      while ( 1 )
      {
        v33 = *(_QWORD *)v31;
        v34 = *(_QWORD *)v31 + 152LL;
        v68 = 0x400000000LL;
        v35 = *(unsigned int *)(v33 + 16);
        ptr = v69;
        v36 = v33 + 8 * v35 + 152;
        if ( v36 != v34 )
          break;
LABEL_18:
        v40 = sub_1DEB190(*v32, *(_QWORD *)(v33 + 40), *(void **)(v33 + 48), v32[4]);
        a3 = 0;
        v70 = 0;
        *(_OWORD *)v71 = 0;
        v72 = 0;
        sub_15AB8B0((__int64)&v70, v40, v41);
        sub_1DD8EB0(v66, *v32, (const __m128i *)(v33 + 56), v32[4], v42, v43, (__m128)0LL, a4);
        v44 = *(_DWORD *)v33;
        v45 = *(_DWORD *)(v33 + 12);
        v46 = *(_BYTE *)(v33 + 140);
        v62[2] = *(_DWORD *)(v33 + 4);
        v47 = *v32;
        v62[0] = v44;
        v48 = *(_DWORD *)(v33 + 148);
        v49 = *(__int64 **)(v47 + 760);
        v62[1] = v45;
        v50 = sub_1B64ED0(
                v49,
                *(_QWORD *)(v33 + 8LL * (unsigned int)(2 * *(_DWORD *)(v33 + 16)) + 152),
                v33 + 80,
                7,
                v33 + 108,
                0.0,
                a4,
                a5,
                7,
                (__int64)&v70,
                (__int64)v66,
                *(_DWORD *)(v33 + 136),
                v46,
                *(_DWORD *)(v33 + 144),
                v48,
                (__int64)ptr,
                (unsigned int)v68,
                v62,
                0,
                0,
                nullptr);
        v26 = (unsigned int)v74;
        v51 = (unsigned int)v74 + 1LL;
        if ( v51 > HIDWORD(v74) )
        {
          v55 = v50;
          sub_2237220(&v73, v75, v51, 8);
          v26 = (unsigned int)v74;
          v50 = v55;
        }
        *((_QWORD *)v73 + v26) = v50;
        LODWORD(v74) = v74 + 1;
        if ( HIDWORD(v71[1]) )
          free(v71[0]);
        if ( ptr == v69 )
        {
          v31 += 2;
          if ( (unsigned int *)v56 == v31 )
          {
LABEL_24:
            v5 = v32;
            goto LABEL_25;
          }
        }
        else
        {
          free(ptr);
          v31 += 2;
          if ( (unsigned int *)v56 == v31 )
            goto LABEL_24;
        }
      }
      v37 = (unsigned __int64 *)v34;
      while ( 1 )
      {
        v38 = (unsigned __int64)sub_1DF2070(*v32, *v37, v32[4], v26, v34, v27, a3, a4) & 0xFFFFFFFFFFFFFFFELL;
        if ( !v38 )
          break;
        v26 = (unsigned int)v68;
        v39 = (unsigned int)v68 + 1LL;
        if ( v39 > HIDWORD(v68) )
        {
          v54 = v38;
          sub_2237220(&ptr, v69, v39, 8);
          v26 = (unsigned int)v68;
          v38 = v54;
        }
        ++v37;
        *((_QWORD *)ptr + v26) = v38;
        LODWORD(v68) = v68 + 1;
        if ( (unsigned __int64 *)v36 == v37 )
          goto LABEL_18;
      }
      if ( ptr != v69 )
        free(ptr);
      v11 = 0;
      sub_1B335B0(*(__int64 **)(*v32 + 760), 0, a3, *(double *)a4.m128_u64);
    }
    sub_19A2DA0(v65);
    if ( v73 != v75 )
      free(v73);
  }
  return v11;
}
