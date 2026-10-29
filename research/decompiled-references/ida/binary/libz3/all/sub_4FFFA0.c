void __fastcall sub_4FFFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // edx
  __int64 v4; // rax
  unsigned int v6; // r12d
  __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // ecx
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 *v13; // rbp
  __int64 *v14; // r8
  __int64 v15; // r10
  unsigned int v16; // ecx
  __int64 v17; // rsi
  unsigned int v18; // edi
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r13d
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // r11
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // r10d
  __int64 v36; // r11
  __int64 *v37; // r12
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  int v46; // esi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // r13d
  unsigned int v51; // r13d
  unsigned int v52; // ebx
  __int64 v53; // r9
  int v54; // edx
  __int64 v55; // rax
  int v56; // r8d
  __int64 *v57; // r12
  __int64 v58; // rbp
  unsigned int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // eax
  int v66; // esi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  char v71; // al
  __int64 v72; // rsi
  __int64 v73; // rdx
  char v74; // al
  int v75; // [rsp+0h] [rbp-78h]
  int v76; // [rsp+0h] [rbp-78h]
  __int64 v77; // [rsp+8h] [rbp-70h]
  __int64 v78; // [rsp+8h] [rbp-70h]
  __int64 v79; // [rsp+8h] [rbp-70h]
  int v80; // [rsp+8h] [rbp-70h]
  int v81; // [rsp+8h] [rbp-70h]
  int v82; // [rsp+8h] [rbp-70h]
  __int64 v83; // [rsp+10h] [rbp-68h]
  int v84; // [rsp+10h] [rbp-68h]
  int v85; // [rsp+10h] [rbp-68h]
  __int64 v86; // [rsp+10h] [rbp-68h]
  unsigned int v87; // [rsp+10h] [rbp-68h]
  __int64 v88; // [rsp+18h] [rbp-60h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  unsigned int v90; // [rsp+18h] [rbp-60h]
  __int64 v91; // [rsp+18h] [rbp-60h]
  __int64 v92; // [rsp+18h] [rbp-60h]
  __int64 v93; // [rsp+18h] [rbp-60h]
  int v94; // [rsp+20h] [rbp-58h]
  __int64 v95; // [rsp+20h] [rbp-58h]
  __int64 v96; // [rsp+20h] [rbp-58h]
  __int64 v97; // [rsp+28h] [rbp-50h]
  __int64 v98; // [rsp+28h] [rbp-50h]
  __int64 *v99; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v100; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = a1;
      v6 = 0;
LABEL_4:
      v7 = *(_QWORD *)(*(_QWORD *)(v4 + 120) + 16LL);
      v8 = v6;
      do
      {
        v9 = v8;
        v8 = *(_DWORD *)(v7 + 4LL * v8);
      }
      while ( v9 != v8 );
      if ( v8 != v6 )
        goto LABEL_7;
      v10 = v6;
      do
      {
        v11 = v10;
        v12 = v10;
        v10 = *(_DWORD *)(v7 + 4LL * v10);
      }
      while ( v12 != v10 );
      v13 = (__int64 *)(**(_QWORD **)(v4 + 48) + 16 * v11);
      v14 = *(__int64 **)(a2 + 144);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL);
      v16 = v6;
      do
      {
        v17 = v16;
        v18 = v16;
        v16 = *(_DWORD *)(v15 + 4LL * v16);
      }
      while ( v16 != v18 );
      v19 = *v14;
      v20 = *v14 + 112 * v17;
      v21 = *v13;
      if ( *(_DWORD *)(v20 + 48) != 1 )
      {
        if ( v21 )
          *(_DWORD *)(v21 - 4) = 0;
        v22 = v13[1];
        if ( v22 )
          *(_DWORD *)(v22 - 4) = 0;
        goto LABEL_7;
      }
      v99 = v13;
      v97 = v4;
      v94 = v3;
      v88 = v19;
      v83 = v15;
      v77 = v20;
      if ( v21 )
      {
        v23 = *(_DWORD *)(v21 - 4);
        LODWORD(v100) = 0;
        v24 = 32 * v23;
        HIDWORD(v100) = v24;
        sub_313A20(&v99);
        v99 = v13;
        v25 = v100;
        v26 = v77;
        v27 = v83;
        v28 = v88;
        v29 = v94;
        v30 = v97;
      }
      else
      {
        v24 = 0;
        v100 = 0;
        sub_313A20(&v99);
        v99 = v13;
        v25 = v100;
        v30 = v97;
        v29 = v94;
        v28 = v88;
        v27 = v83;
        v26 = v77;
      }
      v89 = v30;
      v84 = v29;
      v78 = v26;
      v98 = v28;
      v95 = v27;
      v100 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v24), 224).m128i_u64[0];
      sub_313A20(&v99);
      v31 = v78;
      v32 = v84;
      v33 = v89;
      if ( (_DWORD)v100 != v25 )
      {
        v34 = v95;
        v96 = v89;
        v35 = v100;
        v36 = v98;
        v90 = v6;
        v37 = v13;
        v38 = v78;
        while ( 1 )
        {
          v39 = v25;
          do
          {
            v40 = v39;
            v41 = v39;
            v39 = *(_DWORD *)(v34 + 4LL * v39);
          }
          while ( v41 != v39 );
          v42 = v36 + 112 * v40;
          if ( *(_DWORD *)(v42 + 8) != 1 )
            break;
          v69 = v38 + 56;
          v70 = v42 + 16;
          if ( (*(_BYTE *)(v38 + 76) & 1) != 0
            || *(_DWORD *)(v38 + 72) != 1
            || (*(_BYTE *)(v42 + 36) & 1) != 0
            || *(_DWORD *)(v42 + 32) != 1 )
          {
            v81 = v35;
            v71 = sub_1848D40(qword_1C7F2C0, v69, v70);
            v35 = v81;
            if ( !v71 )
              break;
          }
          else
          {
            if ( (*(_BYTE *)(v38 + 60) & 1) != 0 || (*(_BYTE *)(v42 + 20) & 1) != 0 )
            {
              v82 = v35;
              LODWORD(v42) = sub_182C7B0(qword_1C7F2C0, v69, v70);
              v35 = v82;
              LODWORD(v42) = (unsigned int)v42 >> 31;
            }
            else
            {
              LOBYTE(v42) = *(_DWORD *)(v38 + 56) < *(_DWORD *)(v42 + 16);
            }
            if ( !(_BYTE)v42 )
              break;
          }
          ++v25;
          v43 = *v37;
          if ( v25 == v24 )
          {
            if ( !v43 )
              goto LABEL_89;
LABEL_85:
            v45 = v24 >> 5;
            if ( v24 >> 5 >= *(_DWORD *)(v43 - 4) )
              goto LABEL_89;
            v25 = v24;
            goto LABEL_87;
          }
          if ( v43 )
            goto LABEL_29;
          do
          {
LABEL_95:
            if ( (v25 & 0x1F) == 0 )
            {
              v45 = v25 >> 5;
              goto LABEL_51;
            }
            ++v25;
          }
          while ( v24 != v25 );
          v43 = 0;
LABEL_50:
          v45 = v25 >> 5;
          if ( !v43 )
          {
LABEL_51:
            if ( v24 != v25 )
            {
              v46 = *(_DWORD *)(4LL * v45);
              v43 = 0;
              goto LABEL_36;
            }
LABEL_43:
            if ( v35 == v25 )
              goto LABEL_56;
            goto LABEL_44;
          }
LABEL_31:
          if ( v45 >= *(_DWORD *)(v43 - 4) )
          {
            if ( v25 != v24 )
              goto LABEL_35;
            goto LABEL_89;
          }
LABEL_87:
          v46 = *(_DWORD *)(v43 + 4LL * v45);
          if ( (v46 & (1 << v25)) != 0 )
            goto LABEL_43;
          if ( v24 == v25 )
            goto LABEL_89;
LABEL_36:
          while ( !v46 )
          {
            v25 += 32;
            ++v45;
            if ( v24 == v25 )
              goto LABEL_89;
LABEL_35:
            v46 = *(_DWORD *)(v43 + 4LL * v45);
          }
          if ( v24 == v25 )
            goto LABEL_89;
          v47 = v25 >> 5;
          if ( !v43 )
          {
            do
              ++v25;
            while ( v24 != v25 && (v25 & 0x1F) != 0 );
            goto LABEL_43;
          }
          if ( (unsigned int)v47 < *(_DWORD *)(v43 - 4) )
          {
            if ( (*(_DWORD *)(v43 + 4 * v47) & (1 << v25)) != 0 )
              goto LABEL_41;
            if ( v24 != ++v25 )
              goto LABEL_41;
LABEL_89:
            v25 = v24;
            goto LABEL_43;
          }
          if ( v24 == ++v25 )
            goto LABEL_43;
          do
          {
LABEL_41:
            v48 = v25 >> 5;
            if ( (unsigned int)v48 < *(_DWORD *)(v43 - 4) && (*(_DWORD *)(v43 + 4 * v48) & (1 << (v25 & 0x1F))) != 0
              || (v25 & 0x1F) == 0 )
            {
              goto LABEL_43;
            }
            ++v25;
          }
          while ( v24 != v25 );
          if ( v35 == v25 )
          {
LABEL_56:
            v31 = v38;
            v32 = v84;
            v13 = v37;
            v33 = v96;
            v6 = v90;
            goto LABEL_57;
          }
LABEL_44:
          v34 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL);
          v36 = **(_QWORD **)(a2 + 144);
        }
        v43 = *v37;
        v44 = v25 >> 5;
        if ( !*v37 )
        {
          if ( ++v25 != v24 )
            goto LABEL_95;
          goto LABEL_89;
        }
        if ( (unsigned int)v44 < *(_DWORD *)(v43 - 4) )
          *(_DWORD *)(v43 + 4 * v44) &= ~(1 << v25);
        if ( v24 == ++v25 )
          goto LABEL_85;
LABEL_29:
        while ( 1 )
        {
          v45 = v25 >> 5;
          if ( v25 >> 5 < *(_DWORD *)(v43 - 4) && (*(_DWORD *)(v43 + 4LL * v45) & (1 << (v25 & 0x1F))) != 0 )
            goto LABEL_31;
          if ( (v25 & 0x1F) == 0 )
            goto LABEL_31;
          if ( v24 == ++v25 )
            goto LABEL_50;
        }
      }
LABEL_57:
      v49 = v13[1];
      v91 = v33;
      v99 = v13 + 1;
      v85 = v32;
      v79 = v31;
      if ( v49 )
      {
        v50 = *(_DWORD *)(v49 - 4);
        LODWORD(v100) = 0;
        v51 = 32 * v50;
        HIDWORD(v100) = v51;
        sub_313A20(&v99);
        v99 = v13 + 1;
        v52 = v100;
        v53 = v79;
        v54 = v85;
        v55 = v91;
      }
      else
      {
        v100 = 0;
        v51 = 0;
        sub_313A20(&v99);
        v99 = v13 + 1;
        v52 = v100;
        v55 = v91;
        v54 = v85;
        v53 = v79;
      }
      v86 = v55;
      v80 = v54;
      v92 = v53;
      v100 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v51), 224).m128i_u64[0];
      sub_313A20(&v99);
      v56 = v100;
      v3 = v80;
      v4 = v86;
      if ( (_DWORD)v100 == v52 )
        goto LABEL_7;
      v87 = v6;
      v57 = v13;
      v58 = v92;
      v93 = v4;
      while ( 1 )
      {
        v59 = v52;
        do
        {
          v60 = v59;
          v61 = v59;
          v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL) + 4LL * v59);
        }
        while ( v61 != v59 );
        v62 = **(_QWORD **)(a2 + 144) + 112 * v60;
        if ( *(_DWORD *)(v62 + 8) == 1 )
        {
          v72 = v62 + 16;
          v73 = v58 + 56;
          if ( (*(_BYTE *)(v62 + 36) & 1) != 0
            || *(_DWORD *)(v62 + 32) != 1
            || (*(_BYTE *)(v58 + 76) & 1) != 0
            || *(_DWORD *)(v58 + 72) != 1 )
          {
            v75 = v56;
            v74 = sub_1848D40(qword_1C7F2C0, v72, v73);
            v56 = v75;
            if ( !v74 )
              goto LABEL_106;
          }
          else
          {
            if ( (*(_BYTE *)(v62 + 20) & 1) != 0 || (*(_BYTE *)(v58 + 60) & 1) != 0 )
            {
              v76 = v56;
              LODWORD(v62) = sub_182C7B0(qword_1C7F2C0, v72, v73);
              v56 = v76;
              LODWORD(v62) = (unsigned int)v62 >> 31;
            }
            else
            {
              LOBYTE(v62) = *(_DWORD *)(v62 + 16) < *(_DWORD *)(v58 + 56);
            }
            if ( !(_BYTE)v62 )
            {
LABEL_106:
              ++v52;
              v63 = v57[1];
              if ( v52 != v51 )
              {
                if ( v63 )
                  goto LABEL_68;
                while ( 1 )
                {
                  if ( (v52 & 0x1F) == 0 )
                  {
                    if ( v52 != v51 )
                    {
                      v65 = v52 >> 5;
                      v66 = *(_DWORD *)(4LL * (v52 >> 5));
                      v63 = 0;
                      goto LABEL_75;
                    }
                    goto LABEL_110;
                  }
LABEL_109:
                  if ( ++v52 == v51 )
                    goto LABEL_110;
                }
              }
              if ( !v63 )
                goto LABEL_110;
LABEL_144:
              v65 = v51 >> 5;
              if ( v51 >> 5 >= *(_DWORD *)(v63 - 4) )
                goto LABEL_110;
              v52 = v51;
LABEL_114:
              v66 = *(_DWORD *)(v63 + 4LL * v65);
              if ( (v66 & (1 << v52)) == 0 )
              {
                if ( v51 == v52 )
                {
                  v52 = v51;
                }
                else
                {
LABEL_75:
                  while ( !v66 )
                  {
                    v52 += 32;
                    ++v65;
                    if ( v52 == v51 )
                      goto LABEL_110;
LABEL_74:
                    v66 = *(_DWORD *)(v63 + 4LL * v65);
                  }
                  if ( v52 == v51 )
                    goto LABEL_110;
                  v67 = v52 >> 5;
                  if ( v63 )
                  {
                    if ( (unsigned int)v67 < *(_DWORD *)(v63 - 4) )
                    {
                      if ( (*(_DWORD *)(v63 + 4 * v67) & (1 << v52)) != 0 )
                        goto LABEL_80;
                      if ( ++v52 != v51 )
                        goto LABEL_80;
                    }
                    else if ( v51 != ++v52 )
                    {
LABEL_80:
                      while ( 1 )
                      {
                        v68 = v52 >> 5;
                        if ( (unsigned int)v68 < *(_DWORD *)(v63 - 4)
                          && (*(_DWORD *)(v63 + 4 * v68) & (1 << (v52 & 0x1F))) != 0 )
                        {
                          break;
                        }
                        if ( (v52 & 0x1F) == 0 )
                          break;
                        if ( v51 == ++v52 )
                        {
                          v52 = v51;
                          goto LABEL_82;
                        }
                      }
                    }
                  }
                  else if ( v51 != ++v52 )
                  {
                    while ( (v52 & 0x1F) != 0 )
                    {
                      if ( ++v52 == v51 )
                        goto LABEL_110;
                    }
                  }
                }
              }
              goto LABEL_82;
            }
          }
        }
        v63 = v57[1];
        v64 = v52 >> 5;
        if ( !v63 )
          goto LABEL_109;
        if ( (unsigned int)v64 < *(_DWORD *)(v63 - 4) )
          *(_DWORD *)(v63 + 4 * v64) &= ~(1 << v52);
        if ( v51 == ++v52 )
          goto LABEL_144;
        do
        {
LABEL_68:
          v65 = v52 >> 5;
          if ( v52 >> 5 < *(_DWORD *)(v63 - 4) && (*(_DWORD *)(v63 + 4LL * v65) & (1 << (v52 & 0x1F))) != 0
            || (v52 & 0x1F) == 0 )
          {
            if ( v65 < *(_DWORD *)(v63 - 4) )
              goto LABEL_114;
            if ( v51 == v52 )
              goto LABEL_110;
            goto LABEL_74;
          }
          ++v52;
        }
        while ( v51 != v52 );
        v65 = v51 >> 5;
        if ( v51 >> 5 < *(_DWORD *)(v63 - 4) )
          goto LABEL_114;
LABEL_110:
        v52 = v51;
LABEL_82:
        if ( v56 == v52 )
        {
          v3 = v80;
          v6 = v87;
          v4 = v93;
LABEL_7:
          if ( v3 == ++v6 )
            return;
          goto LABEL_4;
        }
      }
    }
  }
}

