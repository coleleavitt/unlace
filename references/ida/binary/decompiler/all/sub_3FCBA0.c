__int64 __fastcall sub_3FCBA0(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  unsigned __int16 v8; // r15
  __int64 v9; // rsi
  unsigned __int8 v10; // r14
  int v11; // eax
  int v12; // eax
  char v13; // al
  unsigned int v14; // r15d
  int v15; // r15d
  int v16; // edx
  int v17; // r9d
  int v18; // eax
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // rsi
  int v22; // edi
  __int16 v23; // ax
  __int64 *v24; // r8
  __int64 v25; // rsi
  unsigned __int64 *v26; // rcx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r15
  int v34; // r9d
  int v35; // edx
  unsigned __int8 v36; // r15
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // r14d
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int dtype_size; // eax
  int v60; // r12d
  int v61; // eax
  int v62; // r12d
  int v63; // eax
  int v64; // r12d
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rdx
  unsigned int v68; // [rsp+10h] [rbp-80h]
  unsigned int v69; // [rsp+14h] [rbp-7Ch]
  unsigned int v70; // [rsp+14h] [rbp-7Ch]
  _QWORD v72[2]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v73; // [rsp+30h] [rbp-60h] BYREF
  __int64 v74; // [rsp+38h] [rbp-58h]
  __int64 v75; // [rsp+40h] [rbp-50h] BYREF
  __int64 v76; // [rsp+48h] [rbp-48h]
  unsigned __int64 v77; // [rsp+58h] [rbp-38h]

  v6 = *(_BYTE *)(a3 + 16) == 0;
  v77 = __readfsqword(0x28u);
  if ( !v6 )
  {
    if ( *(_BYTE *)(a4 + 16) )
      goto LABEL_3;
LABEL_58:
    sub_3EFA20((int *)a4, 0, 0);
    if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      goto LABEL_4;
LABEL_59:
    if ( (unsigned __int8)sub_3FC970(a1, a3) )
    {
      sub_3E2760((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
      return 0;
    }
    v8 = *(_WORD *)(a1 + 48);
LABEL_7:
    v9 = a1 + 104;
    v10 = sub_3EF830(a1, a1 + 64);
    sub_3EF830(a1, a1 + 104);
    if ( v8 == 225 )
    {
      dtype_size = get_dtype_size();
      sub_1D3790(a1, 62, dtype_size, 8, -1, 8, 0);
      v60 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL);
      v61 = get_dtype_size();
      sub_1D3790(a1, 62, v61, -1, -1, v60, 0);
      v62 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL);
      v63 = get_dtype_size();
      sub_1D3790(a1, 62, v63, -1, -1, v62, 0);
      v64 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 396LL);
      v65 = get_dtype_size();
      sub_1D3790(a1, 62, v65, -1, -1, v64, 0);
      return 0;
    }
    if ( v8 <= 0xE1u )
    {
      if ( v8 == 161 )
      {
        if ( *(_BYTE *)(a3 + 16) || (v45 = a3, (unsigned __int8)sub_3F0150(a3)) )
        {
          v52 = *(_DWORD *)(a3 + 12);
          v53 = get_dtype_size();
          sub_1D3790(a1, 62, v53, v52, -1, -1, 0);
          sub_3FCA20(a1);
          return 0;
        }
        goto LABEL_83;
      }
      if ( v8 > 0xA1u )
      {
        if ( v8 == 218 )
        {
          a2 |= 0x100u;
LABEL_73:
          if ( *(_BYTE *)(a3 + 16) || (v45 = a3, (unsigned __int8)sub_3F0150(a3)) )
          {
            v68 = *(_DWORD *)(a3 + 12);
LABEL_16:
            v69 = -1;
            v13 = *(_BYTE *)(a4 + 16);
            if ( (a2 & 0x200) != 0 )
            {
              if ( v13 )
              {
                v14 = *(_DWORD *)(a4 + 12);
                v69 = v14;
                goto LABEL_19;
              }
              v45 = a4;
              if ( !(unsigned __int8)sub_3F0150(a4) )
                goto LABEL_83;
              v13 = *(_BYTE *)(a4 + 16);
              v69 = *(_DWORD *)(a4 + 12);
            }
            if ( !v13 )
            {
              v45 = a4;
              if ( !(unsigned __int8)sub_3F0150(a4) )
                goto LABEL_83;
            }
            v14 = *(_DWORD *)(a4 + 12);
LABEL_19:
            if ( !*(_BYTE *)(a3 + 16) )
            {
              v45 = a3;
              if ( !(unsigned __int8)sub_3F0150(a3) )
                goto LABEL_83;
            }
            v15 = sub_3FCB30(a1, a2, *(_DWORD *)(a3 + 12), v14);
            LODWORD(v72[0]) = 1;
            v72[1] = v68;
            HIDWORD(v72[0]) = get_dtype_size();
            v73 = 0xFFFFFFFF00000001LL;
            v74 = v69;
            v16 = get_dtype_size();
            v18 = HIDWORD(v72[0]);
            v19 = 32;
            v75 = 1;
            v20 = v16;
            if ( (a2 & 4) != 0 )
              v20 = HIDWORD(v72[0]);
            v76 = 0;
            if ( SHIDWORD(v72[0]) > 32 )
              v18 = 32;
            LODWORD(v76) = v15;
            if ( v16 <= 32 )
              v19 = v16;
            if ( v20 > 32 )
              v20 = 32;
            v21 = *(_QWORD *)(a1 + 832);
            HIDWORD(v72[0]) = v18;
            HIDWORD(v73) = v19;
            HIDWORD(v75) = v20;
            v22 = *(_DWORD *)(v21 + 92);
            if ( v18 >= v22 )
              BYTE1(v72[0]) |= 2u;
            if ( v19 >= v22 )
              BYTE1(v73) |= 2u;
            BYTE1(v75) = 2 * (v20 >= v22);
            v23 = *(_WORD *)(a1 + 48);
            if ( (v23 == 5 || v23 == 166) && *(_BYTE *)(a1 + 105) == 5 )
            {
              LODWORD(v74) = 0;
              if ( v16 != 1 )
              {
                v39 = *(_QWORD *)(a1 + 40);
                HIDWORD(v73) = 1;
                sub_11E3A0((char *)&v73, v21, 9, v39, v19);
              }
            }
            v24 = &v75;
            v25 = 62;
            if ( v15 == -1 )
              LODWORD(v24) = 0;
            LODWORD(v26) = 0;
            if ( v69 != -1 )
              v26 = &v73;
            v27 = v72;
            if ( v68 == -1 )
              LODWORD(v27) = 0;
            sub_1D38D0(a1, 62, (_DWORD)v27, (_DWORD)v26, (_DWORD)v24, v17);
            if ( (a2 & 4) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL) == v15 )
            {
              if ( !*(_BYTE *)(a3 + 16) && !(unsigned __int8)sub_3F0150(a3) )
                sub_3E07C0(a3, 62, v66);
              v25 = 0;
              sub_3F0710(a1, 0, *(_DWORD *)(a3 + 12), 0);
            }
            if ( (a2 & 8) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 456LL) == v15 )
            {
              if ( !*(_BYTE *)(a4 + 16) && !(unsigned __int8)sub_3F0150(a4) )
                sub_3E07C0(a4, v25, v67);
              sub_3F0710(a1, 1, *(_DWORD *)(a4 + 12), 0);
            }
            v28 = *(unsigned __int16 *)(a1 + 48);
            if ( (_WORD)v28 != 465 )
            {
              if ( (unsigned __int16)v28 > 0x1D1u )
              {
                if ( (_WORD)v28 != 1076 )
                {
                  if ( (unsigned __int16)v28 <= 0x434u )
                  {
                    if ( (_WORD)v28 != 526 && (_WORD)v28 != 584 )
                      goto LABEL_51;
                    goto LABEL_89;
                  }
                  if ( (unsigned __int16)(v28 - 1105) > 1u )
                    goto LABEL_51;
                }
                v40 = get_dtype_size();
                sub_1D3790(a1, 62, v40, -1, -1, 0, 0);
                v41 = get_dtype_size();
                sub_1D3790(a1, 62, v41, -1, -1, 1, 0);
                v42 = get_dtype_size();
                sub_1D3790(a1, 3, v42, 0, 346938453, 2, 0);
                v43 = get_dtype_size();
                sub_1D3790(a1, 3, v43, 0, 346938453, 3, 0);
                v44 = get_dtype_size();
                sub_1D3790(a1, 3, v44, 0, 346938453, 4, 0);
                goto LABEL_51;
              }
              if ( (unsigned __int16)v28 <= 0x8Eu )
              {
                if ( (unsigned __int16)v28 <= 0x8Au )
                {
                  if ( (unsigned __int16)(v28 - 5) > 0x27u )
                    goto LABEL_51;
                  v29 = 0x10040000FC60LL;
                  if ( !_bittest64(&v29, v28) )
                    goto LABEL_51;
                }
                goto LABEL_50;
              }
              if ( (unsigned __int16)v28 > 0x100u )
              {
                if ( (_WORD)v28 != 430 )
                  goto LABEL_51;
              }
              else if ( (unsigned __int16)v28 <= 0xFCu )
              {
                if ( (_WORD)v28 != 166 && (_WORD)v28 != 209 )
                  goto LABEL_51;
LABEL_50:
                sub_3FCA20(a1);
LABEL_51:
                sub_11A960((__int64)&v75);
                sub_11A960((__int64)&v73);
                sub_11A960((__int64)v72);
                return 0;
              }
            }
LABEL_89:
            v47 = get_dtype_size();
            sub_1D3790(a1, 62, v47, -1, -1, 0, 0);
            v48 = get_dtype_size();
            sub_1D3790(a1, 62, v48, -1, -1, 1, 0);
            v49 = get_dtype_size();
            sub_1D3790(a1, 3, v49, 0, 346938453, 2, 0);
            v50 = get_dtype_size();
            sub_1D3790(a1, 3, v50, 0, 346938453, 3, 0);
            v51 = get_dtype_size();
            sub_1D3790(a1, 62, v51, -1, -1, 4, 0);
            goto LABEL_51;
          }
LABEL_83:
          sub_3E07C0(v45, v9, v46);
        }
      }
      else if ( v8 == 92 )
      {
        v35 = *(_DWORD *)(a1 + 52);
        v36 = 7;
        if ( (v35 & 0x1018) != 0x1010 )
          v36 = ((v35 & 0x1018) == 4104 || (v35 & 0x1008) == 0) + 1;
        if ( v36 < v10 )
        {
          if ( *(_BYTE *)(a4 + 16) )
          {
            v37 = *(unsigned int *)(a4 + 12);
            v38 = v37;
          }
          else
          {
            v45 = a4;
            if ( !(unsigned __int8)sub_3F0150(a4) )
              goto LABEL_83;
            v37 = *(unsigned int *)(a4 + 12);
            if ( *(_BYTE *)(a4 + 16) )
            {
              v38 = (unsigned int)v37;
            }
            else
            {
              v45 = a4;
              v70 = *(_DWORD *)(a4 + 12);
              if ( !(unsigned __int8)sub_3F0150(a4) )
                goto LABEL_83;
              v38 = *(unsigned int *)(a4 + 12);
              v37 = v70;
            }
          }
          v9 = v36;
          sub_1D3CC0(a1, v36, v10, v38, v37, 0);
        }
      }
      else if ( (unsigned __int16)(v8 - 148) <= 3u )
      {
        v11 = get_dtype_size();
        sub_1D3790(a1, 62, v11, 0, 1, -1, 0);
        v12 = get_dtype_size();
        v9 = 62;
        sub_1D3790(a1, 62, v12, 2, 3, -1, 0);
      }
LABEL_14:
      if ( (a2 & 0x100) == 0 )
      {
        v68 = -1;
        goto LABEL_16;
      }
      goto LABEL_73;
    }
    if ( v8 != 742 )
    {
      if ( v8 <= 0x2E6u )
      {
        if ( v8 == 342 )
        {
          v31 = get_dtype_size();
          sub_1D3790(a1, 62, v31, -1, -1, 8, 0);
          return 0;
        }
        if ( v8 != 632 )
          goto LABEL_14;
LABEL_63:
        if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
        {
          v74 = 0;
          v73 = 0xFFFFFFFF00000000LL;
          sub_11B060((__int64)&v73);
          v75 = 0xFFFFFFFF00000000LL;
          v76 = 0;
          v32 = j__qalloc_or_throw();
          *(_QWORD *)v32 = -1;
          *(_QWORD *)(v32 + 8) = 0;
          v33 = v32;
          *(_QWORD *)(v32 + 16) = 0;
          *(_QWORD *)(v32 + 24) = 0;
          *(_QWORD *)(v32 + 48) = 0;
          *(_QWORD *)(v32 + 72) = 0;
          *(_QWORD *)(v32 + 80) = 0;
          *(_QWORD *)(v32 + 88) = 0;
          *(_QWORD *)(v32 + 96) = 0;
          *(_QWORD *)(v32 + 104) = 0;
          *(_QWORD *)(v32 + 112) = 0;
          *(_QWORD *)(v32 + 136) = 0;
          *(_QWORD *)(v32 + 144) = 0;
          *(_QWORD *)(v32 + 152) = 0;
          *(_QWORD *)(v32 + 176) = 0;
          *(_QWORD *)(v32 + 184) = 0;
          *(_QWORD *)(v32 + 192) = 0;
          *(_QWORD *)(v32 + 216) = 0;
          *(_QWORD *)(v32 + 240) = 0;
          *(_QWORD *)(v32 + 248) = 0;
          *(_QWORD *)(v32 + 256) = 0;
          *(_QWORD *)(v32 + 280) = 0;
          *(_QWORD *)(v32 + 288) = 0;
          *(_OWORD *)(v32 + 32) = 0;
          *(_OWORD *)(v32 + 56) = 0;
          *(_OWORD *)(v32 + 120) = 0;
          *(_OWORD *)(v32 + 160) = 0;
          *(_OWORD *)(v32 + 200) = 0;
          *(_OWORD *)(v32 + 224) = 0;
          *(_OWORD *)(v32 + 264) = 0;
          *(_OWORD *)(v32 + 296) = 0;
          LOBYTE(v75) = 8;
          v76 = v32;
          HIDWORD(v75) = 0;
          *(_DWORD *)(v32 + 20) = 112;
          v72[0] = 1;
          copy_tinfo_t();
          clear_tinfo_t();
          *(_DWORD *)(v33 + 280) |= 9u;
          *(_DWORD *)(v33 + 284) = 10;
          sub_1D38D0(a1, 56, (unsigned int)&v73, 0, (unsigned int)&v75, v34);
          sub_11A960((__int64)&v75);
          sub_11A960((__int64)&v73);
        }
        return 0;
      }
      if ( v8 != 763 )
      {
        if ( v8 != 0x8D05 )
          goto LABEL_14;
        goto LABEL_63;
      }
    }
    v54 = get_dtype_size();
    sub_1D3790(a1, 62, v54, -1, -1, 0, 0);
    v55 = get_dtype_size();
    sub_1D3790(a1, 3, v55, 0, 346938453, 1, 0);
    v56 = get_dtype_size();
    sub_1D3790(a1, 3, v56, 0, 346938453, 2, 0);
    v57 = get_dtype_size();
    sub_1D3790(a1, 3, v57, 0, 346938453, 3, 0);
    v58 = get_dtype_size();
    v9 = 3;
    sub_1D3790(a1, 3, v58, 0, 346938453, 4, 0);
    goto LABEL_14;
  }
  sub_3EFA20((int *)a3, 0, 0);
  if ( !*(_BYTE *)(a4 + 16) )
    goto LABEL_58;
LABEL_3:
  if ( (*(_BYTE *)(a1 + 52) & 7) == 0 )
    goto LABEL_59;
LABEL_4:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 6) > 1u )
  {
    v8 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v8 - 17) > 1u && (unsigned __int16)(v8 - 87) > 1u )
      goto LABEL_7;
  }
  return 4294967294LL;
}
