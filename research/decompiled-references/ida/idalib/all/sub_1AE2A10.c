void __fastcall sub_1AE2A10(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r13
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __m128i *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  bool v33; // bp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 **v41; // rax
  __int64 *v42; // rdx
  unsigned __int64 v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  int v47; // r13d
  int v48; // eax
  unsigned int v49; // edx
  unsigned int *v50; // rsi
  __int64 *v51; // rcx
  char v52; // al
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbp
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp+0h] [rbp-E8h]
  signed __int64 v79; // [rsp+0h] [rbp-E8h]
  __int64 v80; // [rsp+8h] [rbp-E0h]
  __int64 v81; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v82[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v83; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v84[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v85; // [rsp+98h] [rbp-50h]
  unsigned int v86; // [rsp+A0h] [rbp-48h]
  char v87; // [rsp+A4h] [rbp-44h]

  if ( *(char *)(a2 + 28) < 0 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v22 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
    v26 = *v22;
    v27 = *v22 + 8LL * *((unsigned int *)v22 + 2);
    if ( *v22 >= v27 )
    {
      if ( v26 == v27 )
        goto LABEL_3;
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 434 )
      {
        v27 += 8LL;
        if ( v26 == v27 )
          goto LABEL_3;
      }
    }
    else
    {
      v28 = (__int64 *)*v22;
      while ( 1 )
      {
        v23 = *v28;
        if ( *(_WORD *)(*v28 + 36) == 434 )
          break;
        if ( (__int64 *)v27 == ++v28 )
          goto LABEL_3;
      }
      if ( (__int64 *)v27 == v28 )
        goto LABEL_3;
    }
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_40;
    v41 = (__int64 **)sub_B8C3D0(a2, v27, v23, v26, v24, v25);
    v42 = *v41;
    v43 = (unsigned __int64)&(*v41)[*((unsigned int *)v41 + 2)];
    if ( (unsigned __int64)v42 < v43 )
    {
      v51 = v42;
      while ( *(_WORD *)(*v51 + 36) != 434 )
      {
        if ( (__int64 *)v43 == ++v51 )
          goto LABEL_40;
      }
      if ( (__int64 *)v43 == v51 )
        goto LABEL_40;
    }
    else
    {
      if ( v42 == (__int64 *)v43 )
      {
LABEL_40:
        v46 = 0;
LABEL_41:
        v47 = sub_B16590(v46);
        v48 = sub_15D8710((__int64)a3);
        v49 = a3[1].m128i_u32[2];
        if ( v47 != v48 )
        {
          sub_168B9F0((__int64)v82, a1, v49, 0x1258u, 0);
          v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
          sub_1587DB0((__int64)v82, &v81);
          sub_15F7200(v82);
          sub_B88650(a2, 1);
          return;
        }
        sub_168B9F0((__int64)v82, a1, v49, 0x89u, 0);
        v50 = *(unsigned int **)(a3->m128i_i64[0] + 16);
        if ( v85 )
        {
          sub_AEC220(v84, (_BYTE *)v50 + 16, *v50);
        }
        else if ( v87 )
        {
          v78 = *v50;
          v71 = sub_168B9E0(v82);
          v74 = v78;
          v75 = v71;
          v76 = (__int64)v83;
          if ( v83 )
          {
            v80 = v75;
            v76 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v83 + 32LL))(v83, *v83, v78);
            v75 = v80;
            v74 = v78;
          }
          v79 = v74;
          v81 = v76;
          v77 = sub_1587BC0(v75, &v81, v74, v75, v72, v73);
          sub_AEC220((unsigned __int8 **)(*v77 + 32LL * v86 + 8), (_BYTE *)v50 + 16, v79);
        }
        v81 = a3[1].m128i_i64[1];
        sub_1587DB0((__int64)v82, &v81);
        sub_15F7200(v82);
        goto LABEL_3;
      }
      if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) != 434 )
      {
        v44 = (__int64 *)(v43 + 8);
        while ( v42 != v44 )
        {
          v45 = *v44++;
          if ( *(_WORD *)(v45 + 36) == 434 )
            goto LABEL_61;
        }
        goto LABEL_40;
      }
    }
LABEL_61:
    v46 = *v42;
    if ( *(_WORD *)(*v42 + 36) != 434 )
    {
      v54 = v42 + 1;
      do
        v46 = *v54++;
      while ( *(_WORD *)(v46 + 36) != 434 );
    }
    goto LABEL_41;
  }
LABEL_3:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
  {
    v9 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned int **)(a3->m128i_i64[0] + 16);
    v11 = *v10;
    v82[0] = v10 + 4;
    v82[1] = v11;
    if ( sub_2246AB0(v82, "read_write", 10, 0) != -1 )
    {
      if ( (v29 = sub_168B6E0((__int64)a1), (unsigned int)sub_FEAA90(v29) <= 0xC7)
        || (v30 = sub_168B6E0((__int64)a1), (unsigned int)sub_FEAA90(v30) == 300)
        && (v69 = *a1 + 200,
            v70 = sub_168B6E0((__int64)a1),
            !sub_FF8060(v69, (__int64)"__opencl_c_read_write_images", 28, v70))
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
      {
        sub_168B9F0((__int64)v82, a1, a3[1].m128i_u32[2], 0x1254u, 0);
        if ( v85 )
        {
          sub_AE9DF0(v84, (__int64)a3, 0x10u);
          v52 = v85;
        }
        else
        {
          if ( !v87 )
          {
            v31 = *(_QWORD *)(a2 + 48);
            goto LABEL_21;
          }
          v64 = sub_168B9E0(v82);
          v67 = (__int64)v83;
          if ( v83 )
            v67 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
          v81 = v67;
          v68 = sub_1587BC0(v64, &v81, v62, v63, v65, v66);
          sub_AE9DF0((unsigned __int8 **)(*v68 + 32LL * v86 + 8), (__int64)a3, 0x10u);
          v52 = v85;
        }
        v31 = *(_QWORD *)(a2 + 48);
        if ( v52 )
        {
          sub_AE9DF0(v84, *(_QWORD *)(a2 + 48), 8u);
          goto LABEL_56;
        }
LABEL_21:
        if ( !v87 )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v32 + 16) == 13 )
          {
            v33 = ((*(_WORD *)(v32 + 18) >> 3) & 0x1FFu) <= 0x23;
LABEL_24:
            if ( v87 )
            {
              v38 = sub_168B9E0(v82);
              v39 = (__int64)v83;
              if ( v83 )
                v39 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
              v81 = v39;
              v40 = sub_1587BC0(v38, &v81, v34, v35, v36, v37);
              sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v86 + 8), v33, 2u);
            }
          }
LABEL_28:
          sub_15F7200(v82);
          sub_B88650(a2, 1);
          return;
        }
        v59 = sub_168B9E0(v82);
        v60 = (__int64)v83;
        if ( v83 )
          v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
        v81 = v60;
        v61 = sub_1587BC0(v59, &v81, v55, v56, v57, v58);
        sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v86 + 8), v31, 8u);
LABEL_56:
        v33 = 0;
        v53 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v53 + 16) == 13 )
          v33 = ((*(_WORD *)(v53 + 18) >> 3) & 0x1FFu) <= 0x23;
        if ( !v85 )
          goto LABEL_24;
        sub_AE9DF0(v84, v33, 2u);
        goto LABEL_28;
      }
    }
  }
  v12 = sub_168B6C0((__int64)a1);
  v13 = (_QWORD *)sub_168B6C0((__int64)a1);
  v16 = v13[294];
  v13[304] += 40LL;
  v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13[295] >= (unsigned __int64)&v17[2].m128i_u64[1] && v16 )
    v13[294] = (char *)v17 + 40;
  else
    v17 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, v14, v15);
  sub_B16560(v17, v12, a3);
  sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
}
