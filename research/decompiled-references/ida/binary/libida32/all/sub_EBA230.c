__int64 __fastcall sub_EBA230(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 (*v22)(); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  const __m128i *v28; // rdx
  const __m128i *v29; // r12
  const __m128i *v30; // r13
  __int64 v31; // rsi
  __int64 *v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // edi
  __int64 *v39; // rdx
  int v40; // eax
  int v41; // esi
  __int64 v42; // r9
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 i; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  unsigned __int64 v57; // r12
  __int64 v58; // r9
  __int64 v59; // r8
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 *v64; // rbp
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbp
  unsigned int v70; // esi
  int v71; // r10d
  __int64 v72; // r11
  int v73; // ecx
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // [rsp-10h] [rbp-A8h]
  __int64 v81; // [rsp+10h] [rbp-88h]
  __int64 v82; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v83; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v84; // [rsp+38h] [rbp-60h] BYREF
  __m128i v85; // [rsp+40h] [rbp-58h] BYREF
  __int64 v86; // [rsp+50h] [rbp-48h]

  v4 = a2;
  if ( !a4 )
  {
    sub_EB93E0(a3, a2, a1, 0, 0, nullptr, 1, 1);
    return v80;
  }
  v6 = (__int64 *)sub_EBA840(a1, a2);
  v7 = sub_971800(a3, "Type: ");
  v12 = *(_QWORD *)(a2 + 48);
  v13 = v7;
  if ( v12 )
    v14 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v14 = sub_A56D30(a1, v4, v8, v9, v10, v11);
  v15 = sub_F52FB0(v13, v14);
  sub_971800(v15, "\n");
  sub_971800(a3, "\nLayout: ");
  sub_971800(a3, "<ASTRecordLayout\n");
  v16 = sub_971800(a3, "  Size:");
  v17 = sub_A74320(a1, *v6);
  v18 = sub_2257BF0(v16, v17);
  sub_971800(v18, "\n");
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 17448) + 472LL) )
  {
    v74 = sub_971800(a3, "  DataSize:");
    v75 = sub_A74320(a1, v6[1]);
    v76 = sub_2257BF0(v74, v75);
    sub_971800(v76, "\n");
  }
  v19 = sub_971800(a3, "  Alignment:");
  v20 = sub_A74320(a1, v6[2]);
  v21 = sub_2257BF0(v19, v20);
  sub_971800(v21, "\n");
  v22 = *(__int64 (**)())(**(_QWORD **)(a1 + 17448) + 832LL);
  if ( v22 != sub_A321E0 && (unsigned __int8)v22() )
  {
    v77 = sub_971800(a3, "  PreferredAlignment:");
    v78 = sub_A74320(a1, v6[3]);
    v79 = sub_2257BF0(v77, v78);
    sub_971800(v79, "\n");
  }
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 59 > 2 )
    goto LABEL_23;
  sub_971800(a3, "  BaseOffsets: [");
  v82 = 0;
  v27 = sub_A56850(v4, (__int64)"  BaseOffsets: [", v23, v24, v25, v26);
  v29 = v28;
  if ( (const __m128i *)v27 == v28 )
    goto LABEL_31;
  v81 = v4;
  v30 = (const __m128i *)v27;
  do
  {
    v85 = _mm_loadu_si128(v30);
    v86 = v30[1].m128i_i64[0];
    if ( (v85.m128i_i8[12] & 1) == 0 )
    {
      v32 = (__int64 *)v30[1].m128i_i64[0];
      if ( v82 )
        sub_971800(a3, ", ");
      v33 = sub_EB2840(v32);
      v34 = sub_F3F530(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL));
      v35 = v6[9];
      v82 = v34;
      if ( (unsigned __int8)sub_A49FE0((__int64 *)(v35 + 64), &v82, &v83) )
      {
        v31 = v83[1];
LABEL_11:
        sub_2257BF0(a3, v31);
        goto LABEL_12;
      }
      v38 = *(_DWORD *)(v35 + 80);
      v39 = v83;
      v40 = *(_DWORD *)(v35 + 72) + 1;
      v41 = 2 * v38;
      v42 = 3 * v38;
      v84 = v83;
      if ( 4 * v40 < (unsigned int)v42 )
      {
        v42 = v38 >> 3;
        if ( v38 - *(_DWORD *)(v35 + 76) - v40 > (unsigned int)v42 )
        {
LABEL_19:
          v43 = *v39 == -4096;
          *(_DWORD *)(v35 + 72) = v40;
          if ( !v43 )
            --*(_DWORD *)(v35 + 76);
          v44 = v82;
          v39[1] = 0;
          v31 = 0;
          *v39 = v44;
          goto LABEL_11;
        }
        v41 = v38;
      }
      sub_6E50A0(v35 + 64, v41, (__int64)v83, v36, v37, v42);
      sub_A49FE0((__int64 *)(v35 + 64), &v82, &v84);
      v39 = v84;
      v40 = *(_DWORD *)(v35 + 72) + 1;
      goto LABEL_19;
    }
LABEL_12:
    v30 = (const __m128i *)((char *)v30 + 24);
  }
  while ( v29 != v30 );
  v4 = v81;
LABEL_31:
  sub_971800(a3, "]>\n");
  sub_971800(a3, "  VBaseOffsets: [");
  v84 = nullptr;
  v54 = sub_A56900(v4, (__int64)"  VBaseOffsets: [", v50, v51, v52, v53);
  v56 = v55;
  v57 = v54;
  if ( v54 != v55 )
  {
    while ( 2 )
    {
      v64 = *(__int64 **)(v57 + 16);
      if ( v84 )
        sub_971800(a3, ", ");
      v65 = sub_EB2840(v64);
      v66 = sub_F3F530(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL));
      v84 = (__int64 *)v66;
      v69 = v6[9];
      v70 = *(_DWORD *)(v69 + 104);
      if ( !v70 )
      {
        v85.m128i_i64[0] = 0;
        goto LABEL_40;
      }
      v58 = v70 - 1;
      v59 = *(_QWORD *)(v69 + 88);
      v60 = v58 & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
      v61 = v59 + 24LL * v60;
      v62 = *(_QWORD *)v61;
      if ( v66 == *(_QWORD *)v61 )
      {
LABEL_34:
        v63 = *(_QWORD *)(v61 + 8);
        goto LABEL_35;
      }
      v71 = 1;
      v72 = 0;
      if ( v62 != -4096 )
      {
        while ( 1 )
        {
          if ( v62 == -8192 && !v72 )
            v72 = v61;
          v60 = v58 & (v71 + v60);
          v61 = v59 + 24LL * v60;
          v62 = *(_QWORD *)v61;
          if ( v66 == *(_QWORD *)v61 )
            goto LABEL_34;
          if ( v62 == -4096 )
          {
            if ( v72 )
              v61 = v72;
            break;
          }
          ++v71;
        }
      }
      v73 = *(_DWORD *)(v69 + 96);
      v85.m128i_i64[0] = v61;
      v67 = (unsigned int)(v73 + 1);
      v68 = (unsigned int)(4 * v67);
      if ( (unsigned int)v68 >= 3 * v70 )
      {
LABEL_40:
        v70 *= 2;
      }
      else
      {
        v68 = v70 >> 3;
        if ( v70 - *(_DWORD *)(v69 + 100) - (unsigned int)v67 > (unsigned int)v68 )
          goto LABEL_46;
      }
      sub_A6E490((__int64 **)(v69 + 88), v70, v61, v67, v68, v58);
      sub_A4A0A0((__int64 *)(v69 + 88), (__int64 *)&v84, &v85);
      v66 = (__int64)v84;
      v61 = v85.m128i_i64[0];
      LODWORD(v67) = *(_DWORD *)(v69 + 96) + 1;
LABEL_46:
      v43 = *(_QWORD *)v61 == -4096;
      *(_DWORD *)(v69 + 96) = v67;
      if ( !v43 )
        --*(_DWORD *)(v69 + 100);
      *(_QWORD *)v61 = v66;
      v63 = 0;
      *(_QWORD *)(v61 + 8) = 0;
      *(_BYTE *)(v61 + 16) = 0;
LABEL_35:
      v57 += 24LL;
      sub_2257BF0(a3, v63);
      if ( v56 == v57 )
        break;
      continue;
    }
  }
  sub_971800(a3, "]>\n");
LABEL_23:
  sub_971800(a3, "  FieldOffsets: [");
  v45 = v6[6];
  v46 = (v6[7] - v45) >> 3;
  if ( (_DWORD)v46 )
  {
    v47 = (unsigned int)(v46 - 1);
    for ( i = 0; ; ++i )
    {
      sub_2257BD0(a3, *(_QWORD *)(v45 + 8 * i));
      if ( v47 == i )
        break;
      if ( (_DWORD)i != -1 )
        sub_971800(a3, ", ");
      v45 = v6[6];
    }
  }
  return sub_971800(a3, "]>\n");
}

