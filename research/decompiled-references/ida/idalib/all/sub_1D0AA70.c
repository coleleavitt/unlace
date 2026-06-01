unsigned __int64 __fastcall sub_1D0AA70(__int64 *a1, __int64 a2, unsigned __int64 a3, int *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbp
  unsigned __int16 v9; // cx
  int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  __int16 v21; // ax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __m128i v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __m128i v57; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v58; // [rsp+18h] [rbp-110h]
  __int64 v59; // [rsp+20h] [rbp-108h]
  __int64 v60; // [rsp+28h] [rbp-100h]
  unsigned __int64 v61; // [rsp+30h] [rbp-F8h] BYREF
  int *v62; // [rsp+38h] [rbp-F0h]
  __int64 v63; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-E0h] BYREF
  __m128 v65; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v66[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v67; // [rsp+70h] [rbp-B8h]
  char v68; // [rsp+D8h] [rbp-50h]
  unsigned int v69; // [rsp+E0h] [rbp-48h]
  char v70; // [rsp+E4h] [rbp-44h]

  v8 = *(_QWORD *)(a3 + 32);
  v62 = a4;
  v9 = *(_WORD *)(a3 + 18);
  v61 = a3;
  v10 = v62;
  if ( (unsigned __int8)(v9 >> 3) == 6 )
  {
    if ( !v8 )
    {
      v13 = a3;
      v12 = 0;
      goto LABEL_6;
    }
  }
  else if ( !v8 )
  {
    v10 = v62 + 4;
    v13 = a3;
    v12 = 0;
    goto LABEL_6;
  }
  v8 = sub_1CFE3D0((__int64)a1, v8, *((void **)v62 + 1), 0, 0);
  v12 = v11;
  if ( !v8 )
    return 0;
  v13 = v61;
  v10 = v62;
  if ( (unsigned __int8)(*(_WORD *)(v61 + 18) >> 3) != 6 || *(_QWORD *)(v61 + 32) )
    v10 = v62 + 4;
LABEL_6:
  v14 = sub_F6C520(*(_QWORD *)(v13 + 40));
  v17 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(v61 + 40),
          (__m128i *)(v14 * (((unsigned __int64)v10 - (v10 != nullptr)) / v14 + (v10 != nullptr))),
          v15,
          v16,
          a5,
          a6);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( (unsigned int)(unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) - 5 <= 1 )
    goto LABEL_8;
  v30 = sub_F6A860(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v30 )
    goto LABEL_8;
  v63 = *(_QWORD *)(v30 + 32);
  v31 = sub_F22BD0(&v63, 0);
  v18 = *a1;
  v58 = v31;
  if ( !v31 )
    goto LABEL_9;
  v57.m128i_i8[0] = *(_BYTE *)(v31 + 28);
  if ( (v57.m128i_i8[0] & 0x7F) != 0x46 )
    goto LABEL_9;
  v59 = v18;
  v32.m128i_i64[0] = sub_1743120((__int64)&v61);
  v57 = v32;
  v65 = (__m128)_mm_load_si128(&v57);
  v33 = sub_F6CCB0((__int64 *)&v65, v65);
  v57.m128i_i64[0] = (__int64)v66;
  sub_168B9F0((__int64)v66, (__int64 *)(v59 + 8), v33, 0x13D4u, 0);
  if ( v68 )
  {
    sub_AE9DF0((unsigned __int8 **)(v57.m128i_i64[0] + 32), v58, 0xAu);
LABEL_50:
    if ( v68 )
    {
      sub_AE9DF0((unsigned __int8 **)(v57.m128i_i64[0] + 32), 7, 2u);
    }
    else if ( v70 )
    {
      v50 = sub_168B9E0(v57.m128i_i64[0]);
      v54 = (__int64)v67;
      if ( v67 )
      {
        v55 = *v67;
        v59 = v50;
        v54 = (*(__int64 (__fastcall **)(__int64 *))(v55 + 32))(v67);
        v50 = v59;
      }
      v64 = v54;
      v56 = sub_1587BC0(v50, &v64, v50, v51, v52, v53);
      sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * v69 + 8), 7, 2u);
    }
    goto LABEL_36;
  }
  if ( v70 )
  {
    v43 = sub_168B9E0(v57.m128i_i64[0]);
    v47 = (__int64)v67;
    if ( v67 )
    {
      v48 = *v67;
      v59 = v43;
      v47 = (*(__int64 (__fastcall **)(__int64 *))(v48 + 32))(v67);
      v43 = v59;
    }
    v64 = v47;
    v49 = sub_1587BC0(v43, &v64, v43, v44, v45, v46);
    sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v69 + 8), v58, 0xAu);
    goto LABEL_50;
  }
LABEL_36:
  v34 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
  if ( v68 )
  {
    sub_AE9DF0((unsigned __int8 **)(v57.m128i_i64[0] + 32), v34, 2u);
  }
  else if ( v70 )
  {
    LODWORD(v59) = v34;
    v35 = sub_168B9E0(v57.m128i_i64[0]);
    v38 = (unsigned int)v59;
    v39 = v35;
    v40 = (__int64)v67;
    if ( v67 )
    {
      v41 = *v67;
      v60 = v39;
      v40 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v41 + 32))(v67, v41, (unsigned int)v59);
      v39 = v60;
      v38 = (unsigned int)v59;
    }
    LODWORD(v59) = v38;
    v64 = v40;
    v42 = sub_1587BC0(v39, &v64, v38, v39, v36, v37);
    sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v69 + 8), (int)v59, 2u);
  }
  sub_15F7200(v57.m128i_i64[0]);
  sub_168B9F0(v57.m128i_i64[0], (__int64 *)(*a1 + 8), *(_DWORD *)(v58 + 24), 0x67u, 0);
  sub_15F7200(v57.m128i_i64[0]);
LABEL_8:
  v18 = *a1;
LABEL_9:
  if ( !*(_DWORD *)(v18 + 12632) )
  {
    v19 = v61;
    v20 = *(_QWORD *)(v61 + 32);
    v21 = *(_WORD *)(v61 + 18) >> 3;
    if ( (_BYTE)v21 != 6 || (v22 = 0, v20) )
      v22 = *((_QWORD *)v62 + 1);
    if ( v22 == v12 && v20 == v8 && v17 == *(_QWORD *)(a3 + 40) )
    {
      v24 = v61;
      goto LABEL_16;
    }
  }
  v23 = sub_A76250(*(_QWORD *)(v18 + 248), (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3), v8, v17, 0);
  v24 = v23;
  if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v19 = v23;
  v21 = *(_WORD *)(v23 + 18) >> 3;
LABEL_16:
  v25 = 16;
  if ( (_BYTE)v21 == 6 )
    v25 = 16LL * (*(_QWORD *)(v19 + 32) != 0);
  v26 = sub_1EA6140(a2, v24, v25, 8);
  if ( (unsigned __int8)(*(_WORD *)(v61 + 18) >> 3) != 6 || (v28 = 0, *(_QWORD *)(v61 + 32)) )
    v28 = *v62;
  if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
  {
    *(_DWORD *)v27 = v28;
    if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
      *(_QWORD *)(v27 + 8) = v12;
  }
  return v24;
}
