__int64 __fastcall sub_855F20(__int64 a1, unsigned __int8 *a2, char a3, double *a4)
{
  int v7; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ebp
  char v12; // di
  int v13; // r10d
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int8 v16; // r13
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // r9
  int v20; // esi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128 *v25; // rax
  __m128 *v26; // rax
  __int64 v27; // r15
  int v28; // r13d
  int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __m128 *v33; // rax
  __m128 *v34; // rax
  int v35; // r13d
  __int64 v36; // r8
  __m128 *v37; // rax
  int v38; // r15d
  int v39; // r14d
  int v40; // r13d
  int v41; // r13d
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __m128 *v45; // rax
  __m128 *v46; // rax
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __m128 *v51; // rax
  int v52; // r11d
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __m128 *v56; // rax
  __m128 *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __m128 *v62; // rax
  __m128 *v63; // rax
  int v64; // ebp
  int v65; // esi
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __m128 *v69; // rax
  __m128 *v70; // rax
  __int64 v71; // [rsp-8h] [rbp-80h]
  __int64 v72; // [rsp-8h] [rbp-80h]
  int v73; // [rsp+8h] [rbp-70h]
  int v74; // [rsp+8h] [rbp-70h]
  int v75; // [rsp+14h] [rbp-64h]
  int v76; // [rsp+14h] [rbp-64h]
  int v77; // [rsp+18h] [rbp-60h]
  int v78; // [rsp+18h] [rbp-60h]
  int v79; // [rsp+20h] [rbp-58h]
  int v80; // [rsp+24h] [rbp-54h]
  int v81; // [rsp+28h] [rbp-50h]
  int v82; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v83; // [rsp+38h] [rbp-40h]

  v7 = 0;
  v9 = *a2;
  v83 = __readfsqword(0x28u);
  v10 = 0;
  v11 = v9 & 1;
  v12 = v9 & 1;
  v13 = -v11;
  while ( (v10 & 7) == 0 && (_BYTE)v9 == (_BYTE)v13 )
  {
    v10 += 8;
    if ( v10 > 255 )
      goto LABEL_10;
LABEL_6:
    v9 = a2[v10 >> 3];
  }
  LOBYTE(v9) = _bittest(&v9, v10 & 7);
  if ( (_BYTE)v9 != v12 )
  {
    if ( v7 > 3 )
      return 0;
    v14 = v7++;
    *(&v79 + v14) = v10;
    v13 = -v9;
  }
  ++v10;
  v12 = v9;
  if ( v10 <= 255 )
    goto LABEL_6;
LABEL_10:
  if ( v12 )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_25;
    goto LABEL_14;
  }
  if ( (a3 & 1) != 0 )
    goto LABEL_12;
LABEL_25:
  if ( v12 )
  {
LABEL_12:
    if ( v7 <= 3 )
    {
      v15 = v7++;
      *(&v79 + v15) = 256;
      goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  if ( (unsigned int)v7 > 4 )
    return 0;
  v16 = v11 ^ 1;
  if ( !v7 && v16 )
  {
    sub_8452F0(a1, 36);
    if ( *(_DWORD *)a1 )
      return 1;
    v22 = *(_QWORD *)(a1 + 80);
    v23 = *(_QWORD *)(v22 + 8);
    v24 = v23 + 16;
    if ( (unsigned __int64)(v23 + 16) > 0xFF0 )
    {
      v25 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
      if ( !v25 )
        goto LABEL_89;
      v25->m128_u64[0] = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = v25;
      v26 = v25 + 1;
      v26[-1].m128_u64[1] = 16;
LABEL_31:
      *v26 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v26;
      return 1;
    }
LABEL_43:
    v26 = (__m128 *)(v22 + v23 + 16);
    *(_QWORD *)(v22 + 8) = v24;
    if ( !v26 )
      return 1;
    goto LABEL_31;
  }
  switch ( v7 )
  {
    case 3:
      v27 = v79;
      v28 = v81;
      v29 = v79;
      if ( !(_BYTE)v11 )
      {
        sub_84A700((unsigned int *)a1, 2, 1, 0, 127, v79);
        if ( *(_DWORD *)a1 )
          goto LABEL_39;
        v30 = *(_QWORD *)(a1 + 80);
        v31 = *(_QWORD *)(v30 + 8);
        v32 = v31 + 16;
        if ( (unsigned __int64)(v31 + 16) <= 0xFF0 )
        {
          v34 = (__m128 *)(v30 + v31 + 16);
          *(_QWORD *)(v30 + 8) = v32;
          if ( v34 )
            goto LABEL_38;
        }
        else
        {
          v33 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                            4096,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
          if ( v33 )
          {
            v33->m128_u64[0] = *(_QWORD *)(a1 + 80);
            *(_QWORD *)(a1 + 80) = v33;
            v34 = v33 + 1;
            v34[-1].m128_u64[1] = 16;
LABEL_38:
            *v34 = _mm_loadh_ps(a4);
            *(_QWORD *)a4 = v34;
            goto LABEL_39;
          }
          *(_DWORD *)a1 = 2;
        }
LABEL_39:
        v17 = v80;
        if ( v80 + 1 != v28 )
        {
          v35 = v28 - v80;
          sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v80);
          v19 = v35;
          v20 = 2;
LABEL_41:
          sub_84A700((unsigned int *)a1, v20, 1, 0, 127, v19);
          v36 = v71;
          if ( *(_DWORD *)a1 )
            return 1;
LABEL_46:
          v22 = *(_QWORD *)(a1 + 80);
          v23 = *(_QWORD *)(v22 + 8);
          v24 = v23 + 16;
          if ( (unsigned __int64)(v23 + 16) > 0xFF0 )
          {
            v37 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 56))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
                              v22,
                              v24,
                              v36);
            if ( !v37 )
              goto LABEL_89;
            v37->m128_u64[0] = *(_QWORD *)(a1 + 80);
            *(_QWORD *)(a1 + 80) = v37;
            v26 = v37 + 1;
            v26[-1].m128_u64[1] = 16;
            goto LABEL_31;
          }
          goto LABEL_43;
        }
        goto LABEL_86;
      }
      sub_84A700((unsigned int *)a1, 3, 1, 0, 127, v81);
      if ( !*(_DWORD *)a1 )
      {
        v59 = *(_QWORD *)(a1 + 80);
        v60 = *(_QWORD *)(v59 + 8);
        v61 = v60 + 16;
        if ( (unsigned __int64)(v60 + 16) <= 0xFF0 )
        {
          v63 = (__m128 *)(v59 + v60 + 16);
          *(_QWORD *)(v59 + 8) = v61;
          if ( !v63 )
            goto LABEL_80;
        }
        else
        {
          v62 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                            4096,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
          if ( !v62 )
          {
            *(_DWORD *)a1 = 2;
            goto LABEL_80;
          }
          v62->m128_u64[0] = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v62;
          v63 = v62 + 1;
          v63[-1].m128_u64[1] = 16;
        }
        *v63 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v63;
      }
LABEL_80:
      v64 = v80;
      if ( v29 + 1 == v80 )
      {
        v17 = v27;
        goto LABEL_86;
      }
      sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v27);
      v47 = v64 - v29;
      goto LABEL_59;
    case 4:
      v38 = v82;
      v39 = v81;
      v73 = v80 - v79;
      v75 = v82 - v81;
      if ( v80 - v79 == v82 - v81 )
      {
        v58 = v81 - v79;
        if ( v81 == ((v81 - v79) | v79) && (v58 & (v80 | (v58 - 1))) == 0 )
        {
          sub_849F80((unsigned int *)a1, 0x46u, 1, 0, 1, 0, 0x7Fu, v58);
          if ( v38 == v39 + 1 )
          {
            sub_84A700((unsigned int *)a1, (unsigned __int8)v11 ^ 1, 1, 0, 127, v39);
          }
          else
          {
            sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v39);
            sub_84A700((unsigned int *)a1, 3 - (unsigned __int8)v11, 1, 0, 127, v73);
          }
          sub_847380((unsigned int *)a1, a4);
          return 1;
        }
      }
      if ( (_BYTE)v11 )
      {
        v77 = v79;
        if ( v80 != v79 + 1 )
        {
          v40 = v81;
          sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v79);
          sub_84A700((unsigned int *)a1, 2, 1, 0, 127, v73);
          v41 = v40 - v77;
          if ( *(_DWORD *)a1 )
            goto LABEL_57;
          v42 = *(_QWORD *)(a1 + 80);
          v43 = *(_QWORD *)(v42 + 8);
          v44 = v43 + 16;
          if ( (unsigned __int64)(v43 + 16) <= 0xFF0 )
          {
            v46 = (__m128 *)(v42 + v43 + 16);
            *(_QWORD *)(v42 + 8) = v44;
            if ( v46 )
              goto LABEL_56;
          }
          else
          {
            v45 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
            if ( v45 )
            {
              v45->m128_u64[0] = *(_QWORD *)(a1 + 80);
              *(_QWORD *)(a1 + 80) = v45;
              v46 = v45 + 1;
              v46[-1].m128_u64[1] = 16;
LABEL_56:
              *v46 = _mm_loadh_ps(a4);
              *(_QWORD *)a4 = v46;
              goto LABEL_57;
            }
            *(_DWORD *)a1 = 2;
          }
LABEL_57:
          v17 = v41;
          if ( v38 != v39 + 1 )
          {
            sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v41);
            v47 = v75;
            goto LABEL_59;
          }
LABEL_86:
          v65 = 0;
          goto LABEL_83;
        }
        sub_84A700((unsigned int *)a1, 0, 1, 0, 127, v79);
        if ( !*(_DWORD *)a1 )
        {
          v66 = *(_QWORD *)(a1 + 80);
          v67 = *(_QWORD *)(v66 + 8);
          v68 = v67 + 16;
          if ( (unsigned __int64)(v67 + 16) <= 0xFF0 )
          {
            v70 = (__m128 *)(v66 + v67 + 16);
            *(_QWORD *)(v66 + 8) = v68;
            if ( !v70 )
              goto LABEL_97;
          }
          else
          {
            v69 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
            if ( !v69 )
            {
              *(_DWORD *)a1 = 2;
              goto LABEL_97;
            }
            v69->m128_u64[0] = *(_QWORD *)(a1 + 80);
            *(_QWORD *)(a1 + 80) = v69;
            v70 = v69 + 1;
            v70[-1].m128_u64[1] = 16;
          }
          *v70 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v70;
        }
LABEL_97:
        v41 = v39;
        goto LABEL_57;
      }
      v76 = v80;
      v78 = v79;
      sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v79);
      sub_84A700((unsigned int *)a1, 3, 1, 0, 127, v38 - v78);
      v52 = v76;
      if ( *(_DWORD *)a1 )
        goto LABEL_68;
      v53 = *(_QWORD *)(a1 + 80);
      v54 = *(_QWORD *)(v53 + 8);
      v55 = v54 + 16;
      if ( (unsigned __int64)(v54 + 16) <= 0xFF0 )
      {
        v57 = (__m128 *)(v53 + v54 + 16);
        *(_QWORD *)(v53 + 8) = v55;
        if ( !v57 )
          goto LABEL_68;
      }
      else
      {
        v56 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 56))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
                          v53,
                          v55,
                          v72);
        v52 = v76;
        if ( !v56 )
        {
          *(_DWORD *)a1 = 2;
          goto LABEL_68;
        }
        v56->m128_u64[0] = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 80) = v56;
        v57 = v56 + 1;
        v57[-1].m128_u64[1] = 16;
      }
      *v57 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v57;
LABEL_68:
      v17 = v73;
      v74 = v52;
      if ( v39 == v52 + 1 )
        goto LABEL_86;
      sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v17);
      v47 = v39 - v74;
LABEL_59:
      sub_84A700((unsigned int *)a1, 2, 1, 0, 127, v47);
      if ( *(_DWORD *)a1 )
        return 1;
LABEL_60:
      v48 = *(_QWORD *)(a1 + 80);
      v49 = *(_QWORD *)(v48 + 8);
      v50 = v49 + 16;
      if ( (unsigned __int64)(v49 + 16) <= 0xFF0 )
      {
        v26 = (__m128 *)(v48 + v49 + 16);
        *(_QWORD *)(v48 + 8) = v50;
        if ( !v26 )
          return 1;
        goto LABEL_31;
      }
      v51 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
      if ( v51 )
      {
        v51->m128_u64[0] = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 80) = v51;
        v26 = v51 + 1;
        v26[-1].m128_u64[1] = 16;
        goto LABEL_31;
      }
LABEL_89:
      *(_DWORD *)a1 = 2;
      return 1;
    case 1:
      sub_84A700((unsigned int *)a1, (unsigned __int8)(v11 + 2), 1, 0, 127, v79);
      if ( *(_DWORD *)a1 )
        return 1;
      goto LABEL_46;
    case 2:
      v17 = v79;
      if ( v79 + 1 != v80 )
      {
        v18 = v80 - v79;
        sub_849F80((unsigned int *)a1, 0x42u, 1, 0, 1, 0, 0x7Fu, v79);
        v19 = v18;
        v20 = 3 - (unsigned __int8)v11;
        goto LABEL_41;
      }
      v65 = v16;
LABEL_83:
      sub_84A700((unsigned int *)a1, v65, 1, 0, 127, v17);
      if ( !*(_DWORD *)a1 )
        goto LABEL_60;
      break;
  }
  return 1;
}

