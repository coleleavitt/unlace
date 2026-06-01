__int64 __fastcall sub_6AE700(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // r10
  _QWORD *v9; // r15
  int v10; // eax
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // r11d
  unsigned int v16; // esi
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int16 v22; // ax
  __int64 v23; // rdi
  __int64 *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  int v28; // r12d
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int *v36; // r8
  __int64 (__fastcall *v37)(); // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // r9
  __int64 (__fastcall *v42)(); // rax
  __int64 v43; // rsi
  int v44; // r8d
  int v45; // r9d
  int v46; // eax
  _QWORD *v47; // r9
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 *v51; // rax
  int v52; // edx
  __int64 v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 *v56; // rax
  _QWORD *v57; // r9
  __m128i v58; // [rsp+0h] [rbp-1B8h] BYREF
  _QWORD *v59; // [rsp+10h] [rbp-1A8h]
  __int64 *v60; // [rsp+18h] [rbp-1A0h]
  __int64 v61; // [rsp+20h] [rbp-198h]
  int *v62; // [rsp+28h] [rbp-190h]
  __int64 v63; // [rsp+30h] [rbp-188h]
  __m128i *v64; // [rsp+38h] [rbp-180h]
  _QWORD *v65; // [rsp+40h] [rbp-178h]
  __int64 *v66; // [rsp+48h] [rbp-170h]
  _QWORD *v67; // [rsp+50h] [rbp-168h] BYREF
  __int64 v68; // [rsp+58h] [rbp-160h] BYREF
  __int64 v69; // [rsp+60h] [rbp-158h] BYREF
  __int64 *v70; // [rsp+68h] [rbp-150h] BYREF
  __int64 *v71; // [rsp+70h] [rbp-148h] BYREF
  __int64 v72; // [rsp+78h] [rbp-140h]
  __int64 v73; // [rsp+80h] [rbp-138h] BYREF
  __int64 v74; // [rsp+88h] [rbp-130h]
  __m128i v75; // [rsp+90h] [rbp-128h] BYREF
  __m128i v76; // [rsp+A0h] [rbp-118h] BYREF

  v4 = *(_QWORD *)a1;
  v71 = nullptr;
  v72 = v4;
  v5 = *a2;
  v68 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v59 = (_QWORD *)(a1 + 32);
  sub_6ACBA0((_QWORD *)(a1 + 32), &v68);
  v6 = *a2;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v8 = *(_QWORD **)(a1 + 40);
  v7[1] = v6;
  v9 = v7 + 1;
  *v7 = 0x100000002LL;
  v10 = 1;
  while ( 1 )
  {
    v11 = (_QWORD *)v9[v10 - 1];
    v58.m128i_i32[0] = *(_DWORD *)(a1 + 48);
    v12 = sub_6A98D0(v8, v58.m128i_u32[0], (__int64)v11);
    v16 = v58.m128i_i32[0];
    v17 = (__int64)v12;
    if ( !v12 )
      break;
    *((_DWORD *)v9 - 1) = v15;
LABEL_6:
    v10 = *((_DWORD *)v9 - 1);
    if ( !v10 )
      goto LABEL_7;
  }
  v61 = a1 + 40;
  v22 = *((_WORD *)v11 + 2);
  if ( v22 )
  {
    if ( v22 != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 2348);
    }
    v28 = *((_DWORD *)v11 + 4);
    v29 = v71;
    v30 = v72;
    v73 = *(_QWORD *)a1;
    if ( v28 == 2 )
    {
      ++*((_DWORD *)v11 + 2);
      v58.m128i_i64[0] = (__int64)&v73;
      sub_6A99C0((__int64)v29, v30);
      v71 = v11;
      v51 = v11;
      v70 = v11;
      v58.m128i_i64[0] = (__int64)&v73;
    }
    else
    {
      v31 = v11[3];
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v60 = (__int64 *)v31;
      v58.m128i_i64[0] = (__int64)&v73;
      sub_6A99C0((__int64)v29, v30);
      v74 = 0;
      v58.m128i_i64[0] = (__int64)&v73;
      v71 = v60;
      v60 = (__int64 *)&v71;
      sub_6AB960((__int64)v11, &v71, (__int64)&v73);
      v17 = v74;
      sub_6AE700(
        a1,
        (_DWORD)v60,
        v32,
        v33,
        v34,
        v35,
        v58.m128i_i32[0],
        v58.m128i_i32[2],
        (_DWORD)v59,
        (_DWORD)v60,
        v61,
        (_DWORD)v62,
        v63,
        (_DWORD)v64,
        (_DWORD)v65,
        (__int64)v66,
        (_DWORD)v67,
        v68,
        v69,
        (__int64)v70,
        (__int64)v71,
        v72,
        v73,
        v74,
        v75.m128i_i64[0],
        v75.m128i_i8[8],
        v76.m128i_i64[0]);
      v36 = *(int **)(a1 + 64);
      if ( !v36 )
      {
        sub_6A9880((__int64 *)a1);
        v36 = *(int **)(a1 + 64);
      }
      v37 = *(__int64 (__fastcall **)())(*(_QWORD *)v36 + 24LL);
      v38 = *(_QWORD *)(a1 + 72);
      if ( v37 == sub_6B0140 )
      {
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v39 = *((_QWORD *)v36 + 4);
        v40 = *((_QWORD *)v36 + 3);
        v63 = v38;
        v62 = v36;
        sub_6A99C0(v40, v39);
        *((_QWORD *)v62 + 3) = v63;
      }
      else
      {
        ((void (__fastcall *)(int *, _QWORD))v37)(v36, *(_QWORD *)(a1 + 72));
      }
      v41 = *(_QWORD **)(a1 + 64);
      v42 = *(__int64 (__fastcall **)())(*v41 + 40LL);
      if ( v17 )
        LODWORD(v63) = *(_DWORD *)(v17 - 4);
      else
        LODWORD(v63) = 0;
      if ( v42 == sub_6B5D20 )
      {
        if ( v28 )
        {
          sub_6B25E0(v41, (unsigned int)v63, v17, v60);
        }
        else
        {
          v43 = v41[1];
          v65 = v41;
          v75.m128i_i64[0] = 0;
          v75.m128i_i64[1] = v43;
          v70 = nullptr;
          v62 = (int *)&v76;
          sub_39A6C0((__int64)&v76, v43, (__int64)&v70);
          sub_18572D0(&v70);
          v64 = &v75;
          v66 = v71;
          v46 = sub_14DEE90(
                  (_DWORD)v62,
                  (_DWORD)v71,
                  (unsigned int)&v75,
                  (unsigned int)&v75,
                  v44,
                  v45,
                  v58.m128i_i64[0]);
          v47 = v65;
          if ( v46 == 5 )
          {
            v56 = (__int64 *)sub_15E1A70(v76.m128i_i32[0]);
            v57 = v65;
            if ( v56 )
              ++*((_DWORD *)v56 + 2);
            v66 = v56;
            v65 = v57;
            sub_6A99C0(v75.m128i_i64[0], v75.m128i_i64[1]);
            v47 = v65;
            v75.m128i_i64[0] = (__int64)v66;
          }
          sub_6B25E0(v47, (unsigned int)v63, v17, v64);
          v63 = v75.m128i_i64[0];
          if ( (unsigned int)sub_14DEE90((_DWORD)v62, v75.m128i_i32[0], (_DWORD)v60, v48, v49, v50, v58.m128i_i64[0]) == 5 )
          {
            v55 = sub_15E1A70(v76.m128i_i32[0]);
            if ( v55 )
              ++*(_DWORD *)(v55 + 8);
            v60 = (__int64 *)v55;
            sub_6A99C0((__int64)v71, v72);
            v71 = v60;
          }
          sub_39A7A0((__int64)v62);
          sub_6A99C0(v75.m128i_i64[0], v75.m128i_i64[1]);
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, bool, _QWORD, __int64, __int64 *))v42)(
          v41,
          v28 == 0,
          (unsigned int)v63,
          v17,
          v60);
      }
      v51 = v71;
      v70 = v71;
      if ( !v71 )
        goto LABEL_44;
    }
    ++*((_DWORD *)v51 + 2);
LABEL_44:
    sub_6ACBA0(v59, &v70);
    v76 = (__m128i)_mm_loadh_ps((const double *)&v71);
    sub_686B20(v61, &v76);
    --*((_DWORD *)v9 - 1);
    v74 = v17;
    sub_2B4F40((__int64 *)v58.m128i_i64[0]);
    v8 = *(_QWORD **)(a1 + 40);
    goto LABEL_6;
  }
  v23 = *(_QWORD *)a1;
  v24 = v11 + 4;
  v25 = *((unsigned int *)v11 + 6);
  v76.m128i_i64[0] = *(_QWORD *)a1;
  v58.m128i_i64[0] = (__int64)&v11[v25 + 4];
  if ( !(v25 * 8) )
    goto LABEL_56;
  LOBYTE(v62) = 1;
  v60 = &v69;
  while ( 1 )
  {
    v75.m128i_i64[0] = *v24;
    v27 = sub_6A98D0(v8, v16, v75.m128i_i64[0]);
    if ( v27 )
    {
      v26 = v27[1];
      v69 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v76.m128i_i64[1] = v17;
      sub_6ACBA0(&v76.m128i_i64[1], v60);
      v17 = v76.m128i_i64[1];
    }
    else
    {
      v67 = v9;
      sub_6ACBA0(&v67, &v75);
      LOBYTE(v62) = 0;
      v9 = v67;
    }
    if ( (__int64 *)v58.m128i_i64[0] == ++v24 )
      break;
    v8 = *(_QWORD **)(a1 + 40);
    v16 = *(_DWORD *)(a1 + 48);
  }
  if ( (_BYTE)v62 )
  {
    v23 = *(_QWORD *)a1;
    if ( v17 )
    {
      v52 = *(_DWORD *)(v17 - 4);
      goto LABEL_48;
    }
LABEL_56:
    v52 = 0;
LABEL_48:
    v53 = sub_15DC610(
            v23,
            v11[2],
            v52,
            v17,
            v13,
            v14,
            v58.m128i_i32[0],
            v58.m128i_i32[2],
            (int)v59,
            (int)v60,
            v61,
            (char)v62,
            v63,
            (int)v64,
            (int)v65,
            v66);
    --*((_DWORD *)v9 - 1);
    v73 = v53;
    v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v53);
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    v58 = v54;
    sub_6ACBA0(v59, &v73);
    v75 = _mm_load_si128(&v58);
    sub_686B20(v61, &v75);
  }
  v76.m128i_i64[1] = v17;
  sub_2334C0(v76.m128i_i64);
  v8 = *(_QWORD **)(a1 + 40);
  if ( v9 )
    goto LABEL_6;
LABEL_7:
  v18 = sub_6A98D0(v8, *(_DWORD *)(a1 + 48), *a2);
  if ( !v18 )
  {
    sub_1872CE0("");
    sub_1873130(114, 2353);
  }
  v20 = v18[1];
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_6A99C0(v19, a2[1]);
  *a2 = v20;
  if ( v9 )
    sub_186B220(v9 - 1);
  return sub_6A99C0((__int64)v71, v72);
}

