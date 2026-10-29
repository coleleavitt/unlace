void __fastcall sub_1882C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r12
  unsigned __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r13
  __int64 v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 i; // r12
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // r12
  __int64 (__fastcall *v61)(__int64); // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  _QWORD *v66; // rax
  double v67[2]; // [rsp+8h] [rbp-50h] BYREF
  int v68; // [rsp+1Ch] [rbp-3Ch] BYREF
  __m128 v69; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v67[0] = a1;
  v8 = *(_QWORD *)(a2 + 104);
  v69 = _mm_loadh_ps(v67);
  sub_7052B0((__int64 *)(v8 + 96), v8, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) != 0 )
  {
    sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 1u);
    return;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
  v17 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
    v18 = sub_B96980(v17);
  else
    v18 = *(_QWORD *)(v17 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
  v19 = *(_QWORD *)(a2 + 104);
  v20 = v18 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_7052B0((__int64 *)(v19 + 96), v19, v21, v22, v23, v24);
  v29 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
    v30 = sub_B96980(v29);
  else
    v30 = *(_QWORD *)(v29 + 24);
  for ( ; v30 != v20; v30 += 24 )
  {
    v31 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v31 + 8) & 0xF) != 0 )
      v31 = sub_F64F00(**(_QWORD **)(v30 + 16), v19, v25, v26, v27);
    if ( (*(_BYTE *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v32 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v32 + 8) & 0xF) != 0 )
        v32 = sub_F64F00(**(_QWORD **)(v30 + 16), v19, v25, v26, v27);
      if ( (*((_BYTE *)sub_F63270(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), v19, v25, v26, v27, v28) + 76) & 0x30) != 0 )
      {
        sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 2u);
        return;
      }
    }
    if ( (*(_BYTE *)(v30 + 12) & 1) != 0 )
    {
      sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 3u);
      return;
    }
  }
  v35 = sub_B7E900(a2, v19, v25, v26, v27, v28);
  if ( !v35 )
    goto LABEL_33;
LABEL_21:
  v36 = *(_QWORD *)(v35 + 48);
  v37 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
  v38 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v38 & 8) != 0 )
  {
    v19 = v38 & 0xFFFFFFFFFFFFFFF0LL;
    v64 = v36 & 7
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    if ( ((v64 >> 6) & 7) == 3 )
    {
      sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 4u);
      return;
    }
    v65 = HIDWORD(v64);
    if ( v65 && (v65 & 2) != 0 )
    {
      sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 6u);
      return;
    }
  }
  for ( i = *v37; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    v40 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v41 = *(unsigned __int8 *)(v40 + 16);
    v42 = (unsigned int)(v41 - 2);
    if ( (unsigned __int8)(v41 - 2) > 4u )
      goto LABEL_28;
    v43 = sub_F63050(i, v19, v42, v37);
    if ( !v43 )
      break;
    i = v43;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v41) = *(_BYTE *)(v40 + 16);
LABEL_28:
  if ( (_BYTE)v41 == 48 && (*(_BYTE *)(v40 + 17) & 4) == 0 )
  {
    v66 = sub_F60F10(v40, v19, v42, (__int64)v37, v33, v34);
    if ( (*((_BYTE *)v66 + 76) & 0x30) != 0 )
    {
      sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 5u);
      return;
    }
  }
  while ( 1 )
  {
    v44 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v35 = v44;
    if ( !v44 )
      break;
    if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_21;
  }
LABEL_33:
  if ( !(unsigned __int8)sub_1E8C0F0(a1, a2) && !(unsigned __int8)sub_B8E180(a2 + 64) )
  {
    v49 = *(_QWORD *)(a2 + 104);
    sub_7052B0((__int64 *)(v49 + 96), v49, v45, v46, v47, v48);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 2) != 0
      || (v49 = *(_QWORD *)(a2 + 104),
          sub_7052B0((__int64 *)(v49 + 96), v49, v50, v51, v52, v53),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) != 0) )
    {
      if ( !(unsigned __int8)sub_B9C060(a2, v49, v50, v51, v52, v53)
        || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v54, v55, v56, v57),
            (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) != 0) )
      {
        v60 = (_QWORD *)sub_183A950(a2);
        if ( v60 )
        {
LABEL_40:
          if ( (unsigned __int8)sub_B990E0((__int64)v60, &v68, v58, v59) )
          {
            v61 = *(__int64 (__fastcall **)(__int64))(*v60 + 32LL);
            v62 = v61 == sub_B94CC0 ? sub_B709C0((__int64)v60) : v61((__int64)v60);
            if ( (*(_BYTE *)(v62 + 82) & 0x40) == 0 )
              return;
          }
          while ( 1 )
          {
            v63 = v60[1] & 0xFFFFFFFFFFFFFFF8LL;
            v60 = (_QWORD *)v63;
            if ( !v63 )
              break;
            if ( (*(_BYTE *)(v63 + 28) & 0x7F) == 0x26 )
              goto LABEL_40;
          }
        }
        sub_1853140((__int64 *)&v69, &v69.m128_u32[2], 0);
      }
    }
  }
}
