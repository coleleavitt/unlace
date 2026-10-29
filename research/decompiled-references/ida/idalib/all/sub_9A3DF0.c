__int64 __fastcall sub_9A3DF0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  _WORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r15
  __int64 v32; // rax
  bool v33; // r13
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rbp
  int v37; // r15d
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int16 v44; // ax
  __int64 v45; // r14
  unsigned int v46; // esi
  __int64 v47; // r8
  unsigned int v48; // edx
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r13
  __int64 v62; // rsi
  unsigned __int64 *v63; // rax
  __int64 v64; // rdi
  _QWORD *v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r15
  __int64 v69; // rdx
  __int32 v70; // eax
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 *v76; // rax
  unsigned __int64 *v77; // rdi
  _QWORD *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // r11d
  _QWORD *v84; // r10
  int v85; // edx
  bool v86; // [rsp+7h] [rbp-A1h]
  __int64 v87; // [rsp+8h] [rbp-A0h]
  __int64 v88; // [rsp+10h] [rbp-98h]
  _QWORD *v89; // [rsp+20h] [rbp-88h]
  __int64 v90; // [rsp+28h] [rbp-80h]
  __int64 v91; // [rsp+30h] [rbp-78h]
  __int64 v92; // [rsp+30h] [rbp-78h]
  __int64 v93; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v94; // [rsp+50h] [rbp-58h] BYREF
  __int128 v95; // [rsp+58h] [rbp-50h]

  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_BYTE *)(v8 + 28) & 0x7F;
  v10 = (unsigned int)v9 - 64;
  if ( (unsigned int)v10 <= 2 )
  {
    v11 = (__int64 *)(*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v8 + 80) & 4) != 0 )
      v12 = v11[1];
    else
      v12 = *v11;
    v13 = a1[1].m128i_i64[0];
    v14 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v14 + 17) & 8) != 0 )
    {
      if ( !v13 )
      {
        sub_99A2D0((__int64)a1, a2, (__int64)v11, v10, a5, a6);
        v13 = a1[1].m128i_i64[0];
      }
      sub_99C220(a1, v13, a2);
      v15 = a1[1].m128i_i64[0];
      v16 = v14;
      while ( 1 )
      {
        v17 = sub_994330(v16);
        if ( !v17 )
          break;
        while ( 1 )
        {
          v13 = sub_99D480((__int64)a1, *(_QWORD *)(v17 + 40), 1, 0, v18, v19);
          v16 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( !v13 )
            break;
          v17 = sub_994330(v16);
          if ( !v17 )
            return v13;
          v15 = v13;
        }
      }
      return v15;
    }
    return v13;
  }
  if ( (unsigned int)v9 - 40 > 6 )
    return a1[1].m128i_i64[0];
  if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 64)
    || (*(_BYTE *)(v8 + 96) & 7) != 2 && ((*(_BYTE *)(v8 + 96) & 7) != 0 || ((*(_BYTE *)(v8 + 96) >> 3) & 3) != 2) )
  {
    goto LABEL_31;
  }
  if ( ((v9 + 85) & 0x7D) == 0 )
    goto LABEL_27;
  v20 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v20 = *(_QWORD *)(v20 + 8);
  v21 = *(_BYTE *)(sub_B8EAA0(v20) + 8) & 0x7F;
  if ( v21 == 24 || !v21 )
    goto LABEL_31;
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x2B )
    goto LABEL_27;
  v22 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v22 = *(_QWORD *)v22;
  if ( ((*(_BYTE *)(v22 + 8) + 70) & 0x7Fu) > 3 )
  {
LABEL_27:
    v23 = a1[1].m128i_i64[0];
    v88 = v23;
    if ( v23 )
    {
      v24 = a1[20].m128i_i8[0] == 0;
      a1[1].m128i_i64[1] = v23;
      a1[1].m128i_i64[0] = 0;
      if ( !v24 )
        return 0;
    }
    else
    {
      v88 = a1[1].m128i_i64[1];
    }
  }
  else
  {
LABEL_31:
    v88 = 0;
  }
  v26 = (_WORD *)sub_B73640(v8);
  v31 = v26;
  if ( v26 )
  {
    v24 = (*v26 & 0x1FF) == 60;
    v32 = a1[20].m128i_i64[1];
    v86 = v24;
    v28 = *(_BYTE *)(v32 + 62) & v24;
    v33 = *(_BYTE *)(v32 + 62) & v24;
    if ( v33 )
    {
      LOBYTE(v94) = 0;
      HIDWORD(v94) = 1;
      v95 = 0;
      sub_99B5B0((__int64)a1, v31[2], 1, (__int64)&v94);
      v86 = v33;
    }
  }
  else
  {
    v86 = 0;
  }
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x2E )
    goto LABEL_49;
  v28 = v8 + 104;
  v87 = v8 + 104;
  v34 = v8 + 104 + 8LL * *(unsigned int *)(v8 + 100);
  if ( v34 == v8 + 104 )
    goto LABEL_49;
  v89 = v31;
  v90 = v8;
  do
  {
    v35 = sub_B9AE20(*(_QWORD *)(v34 - 8));
    v36 = v35;
    if ( !v35 )
      goto LABEL_47;
    v37 = *(_DWORD *)(v35 + 24);
    v38 = v37;
    if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v39 = sub_B73640(v35);
      if ( v39 )
        v38 = (unsigned __int64)sub_EEC8C0(v39) >> 32;
      else
        v38 = *(_DWORD *)(v36 + 24);
    }
    v41 = sub_EEE9A0(24, a1->m128i_i64[0], 8);
    v44 = *(_WORD *)v41 & 0xFE00;
    LOBYTE(v44) = -11;
    *(_WORD *)v41 = v44;
    if ( unk_2CD7484 )
    {
      v91 = v41;
      sub_EE9B50(245);
      v41 = v91;
    }
    *(_DWORD *)(v41 + 20) = v38;
    v45 = a1->m128i_i64[1];
    *(_DWORD *)(v41 + 16) = v37;
    *(_QWORD *)(v41 + 8) = v36;
    v46 = *(_DWORD *)(v45 + 104);
    v93 = v41;
    if ( !v46 )
    {
      v94 = 0;
      goto LABEL_93;
    }
    v43 = v46 - 1;
    v47 = *(_QWORD *)(v45 + 88);
    v48 = v43 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
    v49 = (_QWORD *)(v47 + 16LL * v48);
    v50 = *v49;
    if ( v41 != *v49 )
    {
      v83 = 1;
      v84 = nullptr;
      if ( v50 != -4096 )
      {
        while ( 1 )
        {
          if ( !v84 && v50 == -8192 )
            v84 = v49;
          v48 = v43 & (v83 + v48);
          v49 = (_QWORD *)(v47 + 16LL * v48);
          v50 = *v49;
          if ( v41 == *v49 )
            goto LABEL_46;
          if ( v50 == -4096 )
          {
            if ( v84 )
              v49 = v84;
            break;
          }
          ++v83;
        }
      }
      v85 = *(_DWORD *)(v45 + 96);
      v94 = (unsigned __int64)v49;
      v40 = (unsigned int)(v85 + 1);
      v42 = (unsigned int)(4 * v40);
      if ( (unsigned int)v42 < 3 * v46 )
      {
        v42 = v41;
        v43 = v46 >> 3;
        if ( v46 - *(_DWORD *)(v45 + 100) - (unsigned int)v40 > (unsigned int)v43 )
        {
LABEL_89:
          v24 = *v49 == -4096;
          *(_DWORD *)(v45 + 96) = v40;
          if ( !v24 )
            --*(_DWORD *)(v45 + 100);
          *v49 = v42;
          v49[1] = 0;
          goto LABEL_46;
        }
        v92 = v41;
LABEL_94:
        sub_99C350(v45 + 88, v46, v40, v41, v42, v43);
        sub_998300((__int64 *)(v45 + 88), &v93, &v94);
        v42 = v93;
        v41 = v92;
        LODWORD(v40) = *(_DWORD *)(v45 + 96) + 1;
        v49 = (_QWORD *)v94;
        goto LABEL_89;
      }
LABEL_93:
      v92 = v41;
      v46 *= 2;
      goto LABEL_94;
    }
LABEL_46:
    v49[1] = a2;
    a1[1].m128i_i64[0] = sub_9A3DF0(a1, v41);
LABEL_47:
    v34 -= 8;
  }
  while ( v87 != v34 );
  v31 = v89;
  v8 = v90;
LABEL_49:
  v51 = a1[1].m128i_i64[0];
  if ( !v51 )
  {
    sub_99A2D0((__int64)a1, 0, v27, v28, v29, v30);
    v51 = a1[1].m128i_i64[0];
  }
  sub_99C220(a1, v51, a2);
  if ( v31 )
  {
    v52 = (__int64)v31;
    if ( (*(_WORD *)v31 & 0x1FF) == 0x7D )
      v52 = v31[3];
    v53 = a1->m128i_i64[1];
    v94 = a2;
    *(_QWORD *)&v95 = 0;
    v54 = sub_9A94C0(v53 + 32, &v94, 0);
    sub_99C950((__int64)a1, v54, v52, v55, v56, v57);
    v61 = a1[1].m128i_i64[0];
    if ( v86 )
    {
      v62 = v31[2];
      v63 = sub_9A1D70(a1, (_QWORD *)v62, 0, v58, v59, v60);
      if ( v63 )
        v61 = (__int64)v63;
    }
    else
    {
      v62 = (__int64)v31;
      v76 = sub_9A1D70(a1, v31, 0, v58, v59, v60);
      if ( v76 )
        v61 = (__int64)v76;
    }
  }
  else
  {
    v79 = a1->m128i_i64[1];
    v94 = a2;
    *(_QWORD *)&v95 = 0;
    v62 = sub_9A94C0(v79 + 32, &v94, 0);
    sub_99C950((__int64)a1, v62, 0, v80, v81, v82);
    v61 = a1[1].m128i_i64[0];
  }
  v64 = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  while ( 1 )
  {
    v68 = sub_994330(v64);
    if ( !v68 )
      break;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v68 + 40);
      v13 = sub_99D480((__int64)a1, v62, 1, 0, v66, v67);
      v64 = *(_QWORD *)(*(_QWORD *)(v68 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v13 )
        break;
      v68 = sub_994330(v64);
      if ( !v68 )
        goto LABEL_63;
      v61 = v13;
    }
  }
  v13 = v61;
LABEL_63:
  v69 = a1[8].m128i_i64[0];
  if ( v69 || a1[8].m128i_i32[2] )
  {
    v65 = *(_QWORD **)(v69 + 8);
    if ( v8 == *v65 && *(_BYTE *)(a1[20].m128i_i64[1] + 63) )
    {
      v77 = (unsigned __int64 *)a1[1].m128i_i64[0];
      v62 = (__int64)&v94;
      v78 = (_QWORD *)(a1->m128i_i64[1] + 32);
      v94 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(_QWORD *)&v95 = a2 & 0xFFFFFFFFFFFFFFFCLL;
      sub_99A360(v77, (const __m128i *)&v94, v78, (__int64)v65, v66, v67);
      v69 = a1[8].m128i_i64[0];
      v70 = a1[8].m128i_i32[2];
      if ( v69 )
      {
        v65 = *(_QWORD **)(v69 + 8);
      }
      else
      {
        if ( !v70 )
          goto LABEL_67;
        v65 = nullptr;
      }
    }
    else
    {
      v70 = a1[8].m128i_i32[2];
    }
    v62 = (unsigned int)(v70 - 1);
    if ( v8 == v65[v62] )
    {
      a1[8].m128i_i32[2] = v62;
      if ( v70 == 1 )
      {
        a1[8].m128i_i64[0] = *(_QWORD *)(v69 + 32);
        a1[8].m128i_i32[2] = *(_DWORD *)(v69 + 40);
      }
    }
  }
LABEL_67:
  if ( v88 )
  {
    a1[1].m128i_i64[1] = v13;
    v71 = sub_999B20((__int64)a1, v62, v69, (__int64)v65, v66, v67);
    a1[1].m128i_i64[0] = v71;
    *(_QWORD *)(v71 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
    sub_9999E0(a1[1].m128i_i64[0], v88, 0, (_QWORD *)(a1->m128i_i64[1] + 32), v72, v73);
    sub_999860(a1[1].m128i_i64[0], v13, 2LL * (v13 == 0), (_QWORD *)(a1->m128i_i64[1] + 32), v74, v75);
    return a1[1].m128i_i64[0];
  }
  return v13;
}
