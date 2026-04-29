__int64 __fastcall sub_407720(__int64 a1, __int16 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int16 v6; // r13
  bool v8; // zf
  unsigned __int16 v10; // r15
  unsigned __int8 v11; // r14
  int v12; // eax
  int v13; // eax
  char v14; // al
  unsigned int v15; // r15d
  int v16; // r15d
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // rsi
  int v22; // edi
  __int16 v23; // ax
  unsigned __int8 *v24; // r8
  unsigned __int8 *v25; // rcx
  unsigned __int8 *v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
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
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // r14
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int dtype_size; // eax
  __int64 v58; // r12
  int v59; // eax
  __int64 v60; // r12
  int v61; // eax
  __int64 v62; // r12
  int v63; // eax
  unsigned int v64; // [rsp+10h] [rbp-80h]
  unsigned int v65; // [rsp+14h] [rbp-7Ch]
  int v66; // [rsp+14h] [rbp-7Ch]
  _QWORD v68[2]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v69; // [rsp+30h] [rbp-60h] BYREF
  __int64 v70; // [rsp+38h] [rbp-58h]
  __int64 v71; // [rsp+40h] [rbp-50h] BYREF
  __int64 v72; // [rsp+48h] [rbp-48h]
  unsigned __int64 v73; // [rsp+58h] [rbp-38h]

  v6 = a2;
  v8 = *(_BYTE *)(a3 + 16) == 0;
  v73 = __readfsqword(0x28u);
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
    v11 = sub_3FA390(a1, a1 + 64);
    sub_3FA390(a1, a1 + 104);
    if ( v10 == 225 )
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, dtype_size, 8, -1, 8, 0);
      v58 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v59 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v59, -1, -1, v58, 0);
      v60 = *(int *)(*(_QWORD *)(a1 + 832) + 388LL);
      v61 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v61, -1, -1, v60, 0);
      v62 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
      v63 = get_dtype_size();
      sub_1D6310(a1, 0x3Eu, v63, -1, -1, v62, 0);
      return 0;
    }
    if ( v10 <= 0xE1u )
    {
      if ( v10 == 161 )
      {
        if ( *(_BYTE *)(a3 + 16) || (unsigned __int8)sub_3FACB0(a3, a5, a6) )
        {
          v50 = *(int *)(a3 + 12);
          v51 = get_dtype_size();
          sub_1D6310(a1, 0x3Eu, v51, v50, -1, -1, 0);
          sub_4075A0(a1);
          return 0;
        }
        goto LABEL_83;
      }
      if ( v10 > 0xA1u )
      {
        if ( v10 == 218 )
        {
          v6 = a2 | 0x100;
LABEL_73:
          if ( *(_BYTE *)(a3 + 16) || (unsigned __int8)sub_3FACB0(a3, a5, a6) )
          {
            v64 = *(_DWORD *)(a3 + 12);
LABEL_16:
            v65 = -1;
            v14 = *(_BYTE *)(a4 + 16);
            if ( (v6 & 0x200) != 0 )
            {
              if ( v14 )
              {
                v15 = *(_DWORD *)(a4 + 12);
                v65 = v15;
                goto LABEL_19;
              }
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                goto LABEL_83;
              v14 = *(_BYTE *)(a4 + 16);
              v65 = *(_DWORD *)(a4 + 12);
            }
            if ( !v14 && !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
              goto LABEL_83;
            v15 = *(_DWORD *)(a4 + 12);
LABEL_19:
            if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3FACB0(a3, a5, a6) )
              goto LABEL_83;
            v16 = sub_4076B0(a1, v6, *(_DWORD *)(a3 + 12), v15, a5);
            LODWORD(v68[0]) = 1;
            v68[1] = v64;
            HIDWORD(v68[0]) = get_dtype_size();
            v69 = 0xFFFFFFFF00000001LL;
            v70 = v65;
            v17 = get_dtype_size();
            v18 = HIDWORD(v68[0]);
            v19 = 32;
            v71 = 1;
            v20 = v17;
            if ( (v6 & 4) != 0 )
              v20 = HIDWORD(v68[0]);
            v72 = 0;
            if ( SHIDWORD(v68[0]) > 32 )
              v18 = 32;
            LODWORD(v72) = v16;
            if ( v17 <= 32 )
              v19 = v17;
            if ( v20 > 32 )
              v20 = 32;
            v21 = *(_QWORD *)(a1 + 832);
            HIDWORD(v68[0]) = v18;
            HIDWORD(v69) = v19;
            HIDWORD(v71) = v20;
            v22 = *(_DWORD *)(v21 + 92);
            if ( v18 >= v22 )
              BYTE1(v68[0]) |= 2u;
            if ( v19 >= v22 )
              BYTE1(v69) |= 2u;
            BYTE1(v71) = 2 * (v20 >= v22);
            v23 = *(_WORD *)(a1 + 48);
            if ( (v23 == 5 || v23 == 166) && *(_BYTE *)(a1 + 105) == 5 )
            {
              LODWORD(v70) = 0;
              if ( v17 != 1 )
              {
                v39 = *(_QWORD *)(a1 + 40);
                HIDWORD(v69) = 1;
                sub_1207E0((char *)&v69, v21, 9, v39, v19);
              }
            }
            v24 = (unsigned __int8 *)&v71;
            if ( v16 == -1 )
              v24 = nullptr;
            v25 = nullptr;
            if ( v65 != -1 )
              v25 = (unsigned __int8 *)&v69;
            v26 = (unsigned __int8 *)v68;
            if ( v64 == -1 )
              v26 = nullptr;
            sub_1D6450(a1, 62, v26, v25, v24);
            if ( (v6 & 4) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL) == v16 )
            {
              if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3FACB0(a3, a5, a6) )
                sub_3EB430(a5);
              sub_3FB270(a1, 0, *(_DWORD *)(a3 + 12), 0, a5, a6);
            }
            if ( (v6 & 8) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 456LL) == v16 )
            {
              if ( !*(_BYTE *)(a4 + 16) && !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                sub_3EB430(a5);
              sub_3FB270(a1, 1, *(_DWORD *)(a4 + 12), 0, a5, a6);
            }
            v27 = *(unsigned __int16 *)(a1 + 48);
            if ( (_WORD)v27 != 465 )
            {
              if ( (unsigned __int16)v27 > 0x1D1u )
              {
                if ( (_WORD)v27 != 1076 )
                {
                  if ( (unsigned __int16)v27 <= 0x434u )
                  {
                    if ( (_WORD)v27 != 526 && (_WORD)v27 != 584 )
                      goto LABEL_51;
                    goto LABEL_89;
                  }
                  if ( (unsigned __int16)(v27 - 1105) > 1u )
                    goto LABEL_51;
                }
                v40 = get_dtype_size();
                sub_1D6310(a1, 0x3Eu, v40, -1, -1, 0, 0);
                v41 = get_dtype_size();
                sub_1D6310(a1, 0x3Eu, v41, -1, -1, 1, 0);
                v42 = get_dtype_size();
                sub_1D6310(a1, 3u, v42, 0, 0x3BEA45E214ADDC55LL, 2, 0);
                v43 = get_dtype_size();
                sub_1D6310(a1, 3u, v43, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v44 = get_dtype_size();
                sub_1D6310(a1, 3u, v44, 0, 0x3BEA45E214ADDC55LL, 4, 0);
                goto LABEL_51;
              }
              if ( (unsigned __int16)v27 <= 0x8Eu )
              {
                if ( (unsigned __int16)v27 <= 0x8Au )
                {
                  if ( (unsigned __int16)(v27 - 5) > 0x27u )
                    goto LABEL_51;
                  v28 = 0x10040000FC60LL;
                  if ( !_bittest64(&v28, v27) )
                    goto LABEL_51;
                }
                goto LABEL_50;
              }
              if ( (unsigned __int16)v27 > 0x100u )
              {
                if ( (_WORD)v27 != 430 )
                  goto LABEL_51;
              }
              else if ( (unsigned __int16)v27 <= 0xFCu )
              {
                if ( (_WORD)v27 != 166 && (_WORD)v27 != 209 )
                  goto LABEL_51;
LABEL_50:
                sub_4075A0(a1);
LABEL_51:
                sub_11CDA0((__int64)&v71);
                sub_11CDA0((__int64)&v69);
                sub_11CDA0((__int64)v68);
                return 0;
              }
            }
LABEL_89:
            v45 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v45, -1, -1, 0, 0);
            v46 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v46, -1, -1, 1, 0);
            v47 = get_dtype_size();
            sub_1D6310(a1, 3u, v47, 0, 0x3BEA45E214ADDC55LL, 2, 0);
            v48 = get_dtype_size();
            sub_1D6310(a1, 3u, v48, 0, 0x3BEA45E214ADDC55LL, 3, 0);
            v49 = get_dtype_size();
            sub_1D6310(a1, 0x3Eu, v49, -1, -1, 4, 0);
            goto LABEL_51;
          }
LABEL_83:
          sub_3EB430(a5);
        }
      }
      else if ( v10 == 92 )
      {
        v35 = *(_DWORD *)(a1 + 52);
        v36 = 7;
        if ( (v35 & 0x1018) != 0x1010 )
          v36 = ((v35 & 0x1018) == 4104 || (v35 & 0x1008) == 0) + 1;
        if ( v36 < v11 )
        {
          if ( *(_BYTE *)(a4 + 16) )
          {
            v37 = *(_DWORD *)(a4 + 12);
            v38 = v37;
          }
          else
          {
            if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
              goto LABEL_83;
            v37 = *(_DWORD *)(a4 + 12);
            if ( *(_BYTE *)(a4 + 16) )
            {
              v38 = *(_DWORD *)(a4 + 12);
            }
            else
            {
              v66 = *(_DWORD *)(a4 + 12);
              if ( !(unsigned __int8)sub_3FACB0(a4, a5, a6) )
                goto LABEL_83;
              v38 = *(_DWORD *)(a4 + 12);
              v37 = v66;
            }
          }
          sub_1D6840(a1, v36, v11, v38, v37, 0);
        }
      }
      else if ( (unsigned __int16)(v10 - 148) <= 3u )
      {
        v12 = get_dtype_size();
        sub_1D6310(a1, 0x3Eu, v12, 0, 1, -1, 0);
        v13 = get_dtype_size();
        sub_1D6310(a1, 0x3Eu, v13, 2, 3, -1, 0);
      }
LABEL_14:
      if ( (a2 & 0x100) == 0 )
      {
        v64 = -1;
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
          v30 = get_dtype_size();
          sub_1D6310(a1, 0x3Eu, v30, -1, -1, 8, 0);
          return 0;
        }
        if ( v10 != 632 )
          goto LABEL_14;
LABEL_63:
        if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
        {
          v70 = 0;
          v69 = 0xFFFFFFFF00000000LL;
          sub_11D4A0((__int64)&v69);
          v71 = 0xFFFFFFFF00000000LL;
          v72 = 0;
          v33 = j__qalloc_or_throw(312, (__int64)"BUG", v31, v32);
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
          LOBYTE(v71) = 8;
          v72 = v33;
          HIDWORD(v71) = 0;
          *(_DWORD *)(v33 + 20) = 112;
          v68[0] = 1;
          copy_tinfo_t();
          clear_tinfo_t();
          *(_DWORD *)(v34 + 280) |= 9u;
          *(_DWORD *)(v34 + 284) = 10;
          sub_1D6450(a1, 56, (unsigned __int8 *)&v69, nullptr, (unsigned __int8 *)&v71);
          sub_11CDA0((__int64)&v71);
          sub_11CDA0((__int64)&v69);
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
    v52 = get_dtype_size();
    sub_1D6310(a1, 0x3Eu, v52, -1, -1, 0, 0);
    v53 = get_dtype_size();
    sub_1D6310(a1, 3u, v53, 0, 0x3BEA45E214ADDC55LL, 1, 0);
    v54 = get_dtype_size();
    sub_1D6310(a1, 3u, v54, 0, 0x3BEA45E214ADDC55LL, 2, 0);
    v55 = get_dtype_size();
    sub_1D6310(a1, 3u, v55, 0, 0x3BEA45E214ADDC55LL, 3, 0);
    v56 = get_dtype_size();
    sub_1D6310(a1, 3u, v56, 0, 0x3BEA45E214ADDC55LL, 4, 0);
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
