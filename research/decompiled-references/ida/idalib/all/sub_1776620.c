unsigned __int64 __fastcall sub_1776620(__int64 *a1, __int64 a2, unsigned __int64 a3, int *a4)
{
  __int64 v6; // rbp
  unsigned __int16 v7; // cx
  int *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int16 v19; // ax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __m128i v30; // rax
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __m128i v55; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-110h]
  __int64 v57; // [rsp+20h] [rbp-108h]
  __int64 v58; // [rsp+28h] [rbp-100h]
  unsigned __int64 v59; // [rsp+30h] [rbp-F8h] BYREF
  int *v60; // [rsp+38h] [rbp-F0h]
  __int64 v61; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-E0h] BYREF
  __m128 v63; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v64[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v65; // [rsp+70h] [rbp-B8h]
  char v66; // [rsp+D8h] [rbp-50h]
  unsigned int v67; // [rsp+E0h] [rbp-48h]
  char v68; // [rsp+E4h] [rbp-44h]

  v6 = *(_QWORD *)(a3 + 32);
  v60 = a4;
  v7 = *(_WORD *)(a3 + 18);
  v59 = a3;
  v8 = v60;
  if ( (unsigned __int8)(v7 >> 3) == 6 )
  {
    if ( !v6 )
    {
      v11 = a3;
      v10 = 0;
      goto LABEL_6;
    }
  }
  else if ( !v6 )
  {
    v8 = v60 + 4;
    v11 = a3;
    v10 = 0;
    goto LABEL_6;
  }
  v6 = sub_176EE90(a1, v6, *((void **)v60 + 1), 0, 0);
  v10 = v9;
  if ( !v6 )
    return 0;
  v11 = v59;
  v8 = v60;
  if ( (unsigned __int8)(*(_WORD *)(v59 + 18) >> 3) != 6 || *(_QWORD *)(v59 + 32) )
    v8 = v60 + 4;
LABEL_6:
  v12 = sub_F6C520(*(_QWORD *)(v11 + 40));
  v15 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v59 + 40),
          (const __m128i *)(v12 * (((unsigned __int64)v8 - (v8 != nullptr)) / v12 + (v8 != nullptr))),
          v13,
          v14);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( (unsigned int)(unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) - 5 <= 1 )
    goto LABEL_8;
  v28 = sub_F6A860(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v28 )
    goto LABEL_8;
  v61 = *(_QWORD *)(v28 + 32);
  v29 = sub_F22BD0(&v61, 0);
  v16 = *a1;
  v56 = v29;
  if ( !v29 )
    goto LABEL_9;
  v55.m128i_i8[0] = *(_BYTE *)(v29 + 28);
  if ( (v55.m128i_i8[0] & 0x7F) != 0x46 )
    goto LABEL_9;
  v57 = v16;
  v30.m128i_i64[0] = sub_1743120((__int64)&v59);
  v55 = v30;
  v63 = (__m128)_mm_load_si128(&v55);
  v31 = sub_F6CCB0((__int64 *)&v63, v63);
  v55.m128i_i64[0] = (__int64)v64;
  sub_168B9F0((__int64)v64, (__int64 *)(v57 + 8), v31, 0x13D4u, 0);
  if ( v66 )
  {
    sub_AE9DF0((unsigned __int8 **)(v55.m128i_i64[0] + 32), v56, 0xAu);
LABEL_50:
    if ( v66 )
    {
      sub_AE9DF0((unsigned __int8 **)(v55.m128i_i64[0] + 32), 7, 2u);
    }
    else if ( v68 )
    {
      v48 = sub_168B9E0(v55.m128i_i64[0]);
      v52 = (__int64)v65;
      if ( v65 )
      {
        v53 = *v65;
        v57 = v48;
        v52 = (*(__int64 (__fastcall **)(__int64 *))(v53 + 32))(v65);
        v48 = v57;
      }
      v62 = v52;
      v54 = sub_1587BC0(v48, &v62, v48, v49, v50, v51);
      sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v67 + 8), 7, 2u);
    }
    goto LABEL_36;
  }
  if ( v68 )
  {
    v41 = sub_168B9E0(v55.m128i_i64[0]);
    v45 = (__int64)v65;
    if ( v65 )
    {
      v46 = *v65;
      v57 = v41;
      v45 = (*(__int64 (__fastcall **)(__int64 *))(v46 + 32))(v65);
      v41 = v57;
    }
    v62 = v45;
    v47 = sub_1587BC0(v41, &v62, v41, v42, v43, v44);
    sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v67 + 8), v56, 0xAu);
    goto LABEL_50;
  }
LABEL_36:
  v32 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
  if ( v66 )
  {
    sub_AE9DF0((unsigned __int8 **)(v55.m128i_i64[0] + 32), v32, 2u);
  }
  else if ( v68 )
  {
    LODWORD(v57) = v32;
    v33 = sub_168B9E0(v55.m128i_i64[0]);
    v36 = (unsigned int)v57;
    v37 = v33;
    v38 = (__int64)v65;
    if ( v65 )
    {
      v39 = *v65;
      v58 = v37;
      v38 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v39 + 32))(v65, v39, (unsigned int)v57);
      v37 = v58;
      v36 = (unsigned int)v57;
    }
    LODWORD(v57) = v36;
    v62 = v38;
    v40 = sub_1587BC0(v37, &v62, v36, v37, v34, v35);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v67 + 8), (int)v57, 2u);
  }
  sub_15F7200(v55.m128i_i64[0]);
  sub_168B9F0(v55.m128i_i64[0], (__int64 *)(*a1 + 8), *(_DWORD *)(v56 + 24), 0x67u, 0);
  sub_15F7200(v55.m128i_i64[0]);
LABEL_8:
  v16 = *a1;
LABEL_9:
  if ( !*(_DWORD *)(v16 + 12632) )
  {
    v17 = v59;
    v18 = *(_QWORD *)(v59 + 32);
    v19 = *(_WORD *)(v59 + 18) >> 3;
    if ( (_BYTE)v19 != 6 || (v20 = 0, v18) )
      v20 = *((_QWORD *)v60 + 1);
    if ( v20 == v10 && v18 == v6 && v15 == *(_QWORD *)(a3 + 40) )
    {
      v22 = v59;
      goto LABEL_16;
    }
  }
  v21 = sub_A76250(*(_QWORD *)(v16 + 248), (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3), v6, v15, 0);
  v22 = v21;
  if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v17 = v21;
  v19 = *(_WORD *)(v21 + 18) >> 3;
LABEL_16:
  v23 = 16;
  if ( (_BYTE)v19 == 6 )
    v23 = 16LL * (*(_QWORD *)(v17 + 32) != 0);
  v24 = sub_1EA6140(a2, v22, v23, 8);
  if ( (unsigned __int8)(*(_WORD *)(v59 + 18) >> 3) != 6 || (v26 = 0, *(_QWORD *)(v59 + 32)) )
    v26 = *v60;
  if ( (unsigned __int8)(*(_WORD *)(v24 + 18) >> 3) != 6 || *(_QWORD *)(v24 + 32) )
  {
    *(_DWORD *)v25 = v26;
    if ( (unsigned __int8)(*(_WORD *)(v24 + 18) >> 3) != 6 || *(_QWORD *)(v24 + 32) )
      *(_QWORD *)(v25 + 8) = v10;
  }
  return v22;
}
