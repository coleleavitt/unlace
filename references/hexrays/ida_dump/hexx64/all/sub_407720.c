__int64 __fastcall sub_407720(__int64 a1, __int16 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  bool v8; // zf
  unsigned __int16 v10; // r15
  __int64 v11; // rsi
  unsigned __int8 v12; // r14
  int v13; // eax
  int v14; // eax
  char v15; // al
  unsigned int v16; // r15d
  int v17; // r15d
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rsi
  int v23; // edi
  __int16 v24; // ax
  unsigned __int8 *v25; // r8
  __int64 v26; // rsi
  unsigned __int8 *v27; // rcx
  unsigned __int8 *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // edx
  unsigned __int8 v36; // r15
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // r14
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // edx
  __int64 v59; // rdi
  int v60; // eax
  int dtype_size; // eax
  __int64 v62; // r12
  int v63; // eax
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // r12
  int v67; // eax
  unsigned __int8 v68; // [rsp+Ch] [rbp-84h]
  unsigned int v69; // [rsp+10h] [rbp-80h]
  unsigned int v70; // [rsp+14h] [rbp-7Ch]
  int v71; // [rsp+14h] [rbp-7Ch]
  _QWORD v73[2]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v74; // [rsp+30h] [rbp-60h] BYREF
  __int64 v75; // [rsp+38h] [rbp-58h]
  __int64 v76; // [rsp+40h] [rbp-50h] BYREF
  __int64 v77; // [rsp+48h] [rbp-48h]
  unsigned __int64 v78; // [rsp+58h] [rbp-38h]

  v8 = *(_BYTE *)(a3 + 16) == 0;
  v78 = __readfsqword(0x28u);
  if ( !v8 )
  {
    if ( *(_BYTE *)(a4 + 16) )
      goto LABEL_3;
LABEL_58:
    sub_3FA580((int *)a4, 0, 0, a5);
    if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      goto LABEL_4;
LABEL_59:
    if ( (unsigned __int8)sub_4074F0(a1, a3, a5, a6) )
    {
      sub_3ED3A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
      return 0;
    }
    v10 = *(_WORD *)(a1 + 48);
LABEL_7:
    v11 = a1 + 104;
    v12 = sub_3FA390(a1, a1 + 64);
    v68 = sub_3FA390(a1, a1 + 104);
    if ( v10 == 225 )
    {
      v58 = *(_DWORD *)(a1 + 52);
      v59 = 7;
      v60 = *(_DWORD *)(a1 + 52) & 0x1018;
      if ( v60 != 4112 )
        v59 = (unsigned __int8)(((v58 & 0x1008) == 0 || v60 == 4104) + 1);
      dtype_size = get_dtype_size(v59);
      sub_1D6310(a1, 0x3Eu, dtype_size, 8, -1, 8, 0);
      v62 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v63 = get_dtype_size((unsigned int)v59);
      sub_1D6310(a1, 0x3Eu, v63, -1, -1, v62, 0);
      v64 = *(int *)(*(_QWORD *)(a1 + 832) + 388LL);
      v65 = get_dtype_size((unsigned int)v59);
      sub_1D6310(a1, 0x3Eu, v65, -1, -1, v64, 0);
      v66 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
      v67 = get_dtype_size((unsigned int)v59);
      sub_1D6310(a1, 0x3Eu, v67, -1, -1, v66, 0);
      return 0;
    }
    if ( v10 <= 0xE1u )
    {
      if ( v10 == 161 )
      {
        if ( *(_BYTE *)(a3 + 16) || (v45 = a3, (unsigned __int8)sub_3FACB0(a3, a5, a6)) )
        {
          v51 = *(int *)(a3 + 12);
          v52 = get_dtype_size(0);
          sub_1D6310(a1, 0x3Eu, v52, v51, -1, -1, 0);
          sub_4075A0(a1);
          return 0;
        }
        goto LABEL_83;
      }
      if ( v10 > 0xA1u )
      {
        if ( v10 == 218 )
        {
          a2 |= 0x100u;
LABEL_73:
          if ( *(_BYTE *)(a3 + 16) || (v45 = a3, (unsigned __int8)sub_3FACB0(a3, a5, a6)) )
          {
            v69 = *(_DWORD *)(a3 + 12);
LABEL_16:
            v70 = -1;
            v15 = *(_BYTE *)(a4 + 16);
            if ( (a2 & 0x200) != 0 )
            {
              if ( v15 )
              {
                v16 = *(_DWORD *)(a4 + 12);
                v70 = v16;
                goto LABEL_19;
              }
              v45 = a4;
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                goto LABEL_83;
              v15 = *(_BYTE *)(a4 + 16);
              v70 = *(_DWORD *)(a4 + 12);
            }
            if ( !v15 )
            {
              v45 = a4;
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                goto LABEL_83;
            }
            v16 = *(_DWORD *)(a4 + 12);
LABEL_19:
            if ( !*(_BYTE *)(a3 + 16) )
            {
              v45 = a3;
              if ( !(unsigned __int8)sub_3FACB0(a3, a5, a6) )
                goto LABEL_83;
            }
            v17 = sub_4076B0(a1, a2, *(_DWORD *)(a3 + 12), v16, a5);
            LODWORD(v73[0]) = 1;
            v73[1] = v69;
            HIDWORD(v73[0]) = get_dtype_size(v12);
            v74 = 0xFFFFFFFF00000001LL;
            v75 = v70;
            v18 = get_dtype_size(v68);
            v19 = HIDWORD(v73[0]);
            v20 = 32;
            v76 = 1;
            v21 = v18;
            if ( (a2 & 4) != 0 )
              v21 = HIDWORD(v73[0]);
            v77 = 0;
            if ( SHIDWORD(v73[0]) > 32 )
              v19 = 32;
            LODWORD(v77) = v17;
            if ( v18 <= 32 )
              v20 = v18;
            if ( v21 > 32 )
              v21 = 32;
            v22 = *(_QWORD *)(a1 + 832);
            HIDWORD(v73[0]) = v19;
            HIDWORD(v74) = v20;
            HIDWORD(v76) = v21;
            v23 = *(_DWORD *)(v22 + 92);
            if ( v19 >= v23 )
              BYTE1(v73[0]) |= 2u;
            if ( v20 >= v23 )
              BYTE1(v74) |= 2u;
            BYTE1(v76) = 2 * (v21 >= v23);
            v24 = *(_WORD *)(a1 + 48);
            if ( (v24 == 5 || v24 == 166) && *(_BYTE *)(a1 + 105) == 5 )
            {
              LODWORD(v75) = 0;
              if ( v18 != 1 )
              {
                v39 = *(_QWORD *)(a1 + 40);
                HIDWORD(v74) = 1;
                sub_1207E0((char *)&v74, v22, 9, v39, v20);
              }
            }
            v25 = (unsigned __int8 *)&v76;
            v26 = 62;
            if ( v17 == -1 )
              v25 = nullptr;
            v27 = nullptr;
            if ( v70 != -1 )
              v27 = (unsigned __int8 *)&v74;
            v28 = (unsigned __int8 *)v73;
            if ( v69 == -1 )
              v28 = nullptr;
            sub_1D6450(a1, 62, v28, v27, v25);
            if ( (a2 & 4) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL) == v17 )
            {
              if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3FACB0(a3, a5, a6) )
                sub_3EB430(a5, a3, 62);
              v26 = 0;
              sub_3FB270(a1, 0, *(_DWORD *)(a3 + 12), 0, a5, a6);
            }
            if ( (a2 & 8) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 456LL) == v17 )
            {
              if ( !*(_BYTE *)(a4 + 16) && !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                sub_3EB430(a5, a4, v26);
              sub_3FB270(a1, 1, *(_DWORD *)(a4 + 12), 0, a5, a6);
            }
            v29 = *(unsigned __int16 *)(a1 + 48);
            if ( (_WORD)v29 != 465 )
            {
              if ( (unsigned __int16)v29 > 0x1D1u )
              {
                if ( (_WORD)v29 != 1076 )
                {
                  if ( (unsigned __int16)v29 <= 0x434u )
                  {
                    if ( (_WORD)v29 != 526 && (_WORD)v29 != 584 )
                      goto LABEL_51;
                    goto LABEL_89;
                  }
                  if ( (unsigned __int16)(v29 - 1105) > 1u )
                    goto LABEL_51;
                }
                v40 = get_dtype_size(0);
                sub_1D6310(a1, 0x3Eu, v40, -1, -1, 0, 0);
                v41 = get_dtype_size(0);
                sub_1D6310(a1, 0x3Eu, v41, -1, -1, 1, 0);
                v42 = get_dtype_size(0);
                sub_1D6310(a1, 3u, v42, 0, 0x3BEA45E214ADDC55LL, 2, 0);
                v43 = get_dtype_size(0);
                sub_1D6310(a1, 3u, v43, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v44 = get_dtype_size(0);
                sub_1D6310(a1, 3u, v44, 0, 0x3BEA45E214ADDC55LL, 4, 0);
                goto LABEL_51;
              }
              if ( (unsigned __int16)v29 <= 0x8Eu )
              {
                if ( (unsigned __int16)v29 <= 0x8Au )
                {
                  if ( (unsigned __int16)(v29 - 5) > 0x27u )
                    goto LABEL_51;
                  v30 = 0x10040000FC60LL;
                  if ( !_bittest64(&v30, v29) )
                    goto LABEL_51;
                }
                goto LABEL_50;
              }
              if ( (unsigned __int16)v29 > 0x100u )
              {
                if ( (_WORD)v29 != 430 )
                  goto LABEL_51;
              }
              else if ( (unsigned __int16)v29 <= 0xFCu )
              {
                if ( (_WORD)v29 != 166 && (_WORD)v29 != 209 )
                  goto LABEL_51;
LABEL_50:
                sub_4075A0(a1);
LABEL_51:
                sub_11CDA0((__int64)&v76);
                sub_11CDA0((__int64)&v74);
                sub_11CDA0((__int64)v73);
                return 0;
              }
            }
LABEL_89:
            v46 = get_dtype_size(0);
            sub_1D6310(a1, 0x3Eu, v46, -1, -1, 0, 0);
            v47 = get_dtype_size(0);
            sub_1D6310(a1, 0x3Eu, v47, -1, -1, 1, 0);
            v48 = get_dtype_size(0);
            sub_1D6310(a1, 3u, v48, 0, 0x3BEA45E214ADDC55LL, 2, 0);
            v49 = get_dtype_size(0);
            sub_1D6310(a1, 3u, v49, 0, 0x3BEA45E214ADDC55LL, 3, 0);
            v50 = get_dtype_size(0);
            sub_1D6310(a1, 0x3Eu, v50, -1, -1, 4, 0);
            goto LABEL_51;
          }
LABEL_83:
          sub_3EB430(a5, v45, v11);
        }
      }
      else if ( v10 == 92 )
      {
        v35 = *(_DWORD *)(a1 + 52);
        v36 = 7;
        if ( (v35 & 0x1018) != 0x1010 )
          v36 = ((v35 & 0x1018) == 4104 || (v35 & 0x1008) == 0) + 1;
        if ( v36 < v12 )
        {
          if ( *(_BYTE *)(a4 + 16) )
          {
            v37 = *(_DWORD *)(a4 + 12);
            v38 = v37;
          }
          else
          {
            v45 = a4;
            if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
              goto LABEL_83;
            v37 = *(_DWORD *)(a4 + 12);
            if ( *(_BYTE *)(a4 + 16) )
            {
              v38 = *(_DWORD *)(a4 + 12);
            }
            else
            {
              v45 = a4;
              v71 = *(_DWORD *)(a4 + 12);
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                goto LABEL_83;
              v38 = *(_DWORD *)(a4 + 12);
              v37 = v71;
            }
          }
          v11 = v36;
          sub_1D6840(a1, v36, v12, v38, v37, 0);
        }
      }
      else if ( (unsigned __int16)(v10 - 148) <= 3u )
      {
        v13 = get_dtype_size(0);
        sub_1D6310(a1, 0x3Eu, v13, 0, 1, -1, 0);
        v14 = get_dtype_size(0);
        v11 = 62;
        sub_1D6310(a1, 0x3Eu, v14, 2, 3, -1, 0);
      }
LABEL_14:
      if ( (a2 & 0x100) == 0 )
      {
        v69 = -1;
        goto LABEL_16;
      }
      goto LABEL_73;
    }
    if ( v10 != 742 )
    {
      if ( v10 <= 0x2E6u )
      {
        if ( v10 == 342 )
        {
          v32 = get_dtype_size(0);
          sub_1D6310(a1, 0x3Eu, v32, -1, -1, 8, 0);
          return 0;
        }
        if ( v10 != 632 )
          goto LABEL_14;
LABEL_63:
        if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
        {
          v75 = 0;
          v74 = 0xFFFFFFFF00000000LL;
          sub_11D4A0((__int64)&v74, (__int64)"BUG");
          v76 = 0xFFFFFFFF00000000LL;
          v77 = 0;
          v33 = j__qalloc_or_throw(312);
          *(_QWORD *)v33 = -1;
          *(_QWORD *)(v33 + 8) = 0;
          v34 = v33;
          *(_QWORD *)(v33 + 16) = 0;
          *(_QWORD *)(v33 + 24) = 0;
          *(_QWORD *)(v33 + 48) = 0;
          *(_QWORD *)(v33 + 72) = 0;
          *(_QWORD *)(v33 + 80) = 0;
          *(_QWORD *)(v33 + 88) = 0;
          *(_QWORD *)(v33 + 96) = 0;
          *(_QWORD *)(v33 + 104) = 0;
          *(_QWORD *)(v33 + 112) = 0;
          *(_QWORD *)(v33 + 136) = 0;
          *(_QWORD *)(v33 + 144) = 0;
          *(_QWORD *)(v33 + 152) = 0;
          *(_QWORD *)(v33 + 176) = 0;
          *(_QWORD *)(v33 + 184) = 0;
          *(_QWORD *)(v33 + 192) = 0;
          *(_QWORD *)(v33 + 216) = 0;
          *(_QWORD *)(v33 + 240) = 0;
          *(_QWORD *)(v33 + 248) = 0;
          *(_QWORD *)(v33 + 256) = 0;
          *(_QWORD *)(v33 + 280) = 0;
          *(_QWORD *)(v33 + 288) = 0;
          *(_OWORD *)(v33 + 32) = 0;
          *(_OWORD *)(v33 + 56) = 0;
          *(_OWORD *)(v33 + 120) = 0;
          *(_OWORD *)(v33 + 160) = 0;
          *(_OWORD *)(v33 + 200) = 0;
          *(_OWORD *)(v33 + 224) = 0;
          *(_OWORD *)(v33 + 264) = 0;
          *(_OWORD *)(v33 + 296) = 0;
          LOBYTE(v76) = 8;
          v77 = v33;
          HIDWORD(v76) = 0;
          *(_DWORD *)(v33 + 20) = 112;
          v73[0] = 1;
          copy_tinfo_t(v33 + 72, v73);
          clear_tinfo_t(v73);
          *(_DWORD *)(v34 + 280) |= 9u;
          *(_DWORD *)(v34 + 284) = 10;
          sub_1D6450(a1, 56, (unsigned __int8 *)&v74, nullptr, (unsigned __int8 *)&v76);
          sub_11CDA0((__int64)&v76);
          sub_11CDA0((__int64)&v74);
        }
        return 0;
      }
      if ( v10 != 763 )
      {
        if ( v10 != 0x8D05 )
          goto LABEL_14;
        goto LABEL_63;
      }
    }
    v53 = get_dtype_size(0);
    sub_1D6310(a1, 0x3Eu, v53, -1, -1, 0, 0);
    v54 = get_dtype_size(0);
    sub_1D6310(a1, 3u, v54, 0, 0x3BEA45E214ADDC55LL, 1, 0);
    v55 = get_dtype_size(0);
    sub_1D6310(a1, 3u, v55, 0, 0x3BEA45E214ADDC55LL, 2, 0);
    v56 = get_dtype_size(0);
    sub_1D6310(a1, 3u, v56, 0, 0x3BEA45E214ADDC55LL, 3, 0);
    v57 = get_dtype_size(0);
    v11 = 3;
    sub_1D6310(a1, 3u, v57, 0, 0x3BEA45E214ADDC55LL, 4, 0);
    goto LABEL_14;
  }
  sub_3FA580((int *)a3, 0, 0, a5);
  if ( !*(_BYTE *)(a4 + 16) )
    goto LABEL_58;
LABEL_3:
  if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
    goto LABEL_59;
LABEL_4:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 6) > 1u )
  {
    v10 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v10 - 17) > 1u && (unsigned __int16)(v10 - 87) > 1u )
      goto LABEL_7;
  }
  return 4294967294LL;
}
