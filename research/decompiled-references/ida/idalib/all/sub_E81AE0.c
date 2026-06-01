__int64 __fastcall sub_E81AE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebp
  int i; // r13d
  unsigned __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  unsigned __int64 v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // r15
  _BYTE *v27; // rax
  _BYTE *v28; // rax
  __m128 *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned __int8 v33; // al
  __int64 v34; // rdi
  _BYTE *v35; // rax
  __int64 v36; // rdi
  _BYTE *v37; // rax
  __int64 v38; // rdi
  _BYTE *v39; // rax
  unsigned __int64 v40; // rdx
  size_t v41; // rbp
  _BYTE *v42; // rax
  __m128 *v43; // rdi
  _BYTE *v44; // rax
  __m128 *v45; // rdi
  __int64 v46; // rbp
  _BYTE *v47; // rax
  __m128 *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  size_t v51; // rbp
  char v52; // dl
  __int64 v53; // rdx
  unsigned __int64 v54; // rsi
  __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // r11
  unsigned int v60; // r10d
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  int v67; // edi
  bool v68; // zf
  __int64 v69; // rdx
  int v70; // esi
  unsigned __int64 v71; // r9
  unsigned int v72; // [rsp+8h] [rbp-C0h]
  int v73; // [rsp+8h] [rbp-C0h]
  int v74; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+10h] [rbp-B8h]
  size_t na; // [rsp+10h] [rbp-B8h]
  __int64 v77; // [rsp+18h] [rbp-B0h]
  __int64 v78; // [rsp+20h] [rbp-A8h]
  __int64 v79; // [rsp+28h] [rbp-A0h]
  void *v80; // [rsp+30h] [rbp-98h] BYREF
  size_t v81; // [rsp+38h] [rbp-90h]
  _BYTE v82[16]; // [rsp+40h] [rbp-88h] BYREF
  __m128 v83; // [rsp+50h] [rbp-78h] BYREF
  __int128 v84; // [rsp+60h] [rbp-68h]
  void *dest; // [rsp+70h] [rbp-58h]
  char v86; // [rsp+78h] [rbp-50h]
  int v87; // [rsp+7Ch] [rbp-4Ch]
  void **v88; // [rsp+80h] [rbp-48h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v3 = v2;
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x20 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 > 1 )
    {
      for ( i = 1; i != v5; ++i )
      {
        v2 = (unsigned __int64)"<unnamed-tag>";
        sub_E7C4B0(a1, "<unnamed-tag>", 0xDu);
      }
    }
  }
  v7 = sub_E78790(v3);
  result = *(_BYTE *)(v7 + 8) & 0x7F;
  if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0 )
  {
    while ( 1 )
    {
      v11 = *(_BYTE *)(v3 + 28) & 0x7F;
      v12 = (unsigned int)(v11 - 58);
      if ( (unsigned int)v12 <= 4 || (unsigned int)(v11 - 40) <= 6 )
      {
        v2 = v3;
        if ( (unsigned __int8)sub_E7F0E0(*(_QWORD *)a1, v3, (int *)&v83) )
        {
          v13 = *(_QWORD *)(a1 + 8);
          v14 = *(_BYTE **)(v13 + 32);
          if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
          {
            sub_227BA10(v13, 63);
          }
          else
          {
            *(_QWORD *)(v13 + 32) = v14 + 1;
            *v14 = 63;
          }
          v2 = v83.m128_u32[0];
          sub_E79E60(a1, (void *)v83.m128_u32[0]);
          v15 = *(_QWORD *)(a1 + 8);
          v16 = *(_BYTE **)(v15 + 32);
          if ( (unsigned __int64)v16 >= *(_QWORD *)(v15 + 24) )
          {
            v2 = 63;
            sub_227BA10(v15, 63);
          }
          else
          {
            *(_QWORD *)(v15 + 32) = v16 + 1;
            *v16 = 63;
          }
        }
        LOBYTE(result) = *(_BYTE *)(v7 + 8) & 0x7F;
      }
      if ( (_BYTE)result == 8 )
        break;
      if ( (_BYTE)result == 18 )
      {
        v2 = v7 - 48;
        if ( v7 != 48 )
        {
          sub_E6F860(*(_QWORD *)a1, v2, *(_QWORD *)(a1 + 8));
LABEL_70:
          v46 = *(_QWORD *)(sub_B8C1B0(v7) + 16);
          if ( (v46 & 4) != 0 )
            v7 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v7 = v46 & 0xFFFFFFFFFFFFFFF8LL;
          result = *(_BYTE *)(v7 + 8) & 0x7F;
          goto LABEL_73;
        }
      }
      else if ( (unsigned int)(unsigned __int8)result - 18 > 0x3F )
      {
        goto LABEL_70;
      }
      v3 = sub_B8C1B0(v7);
      if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34 <= 5 )
      {
        v51 = j__strlen("?");
        v52 = *(_BYTE *)(v3 + 80) & 0x7F;
        if ( v52 == 38 )
        {
          v53 = 0;
          v54 = v3 & 0xFFFFFFFFFFFFFFF8LL;
        }
        else if ( v52 == 36 )
        {
          v53 = 0;
          v54 = v3 & 0xFFFFFFFFFFFFFFF8LL | 1;
        }
        else
        {
          sub_E7A980((__int64)&v83, v3, 0);
          v54 = v83.m128_u64[0];
          v53 = v83.m128_u32[2];
        }
        return sub_E89720(a1, v54, v53, "?", v51);
      }
      v2 = v3;
      v79 &= 0xFFFFFFFF00000000LL;
      sub_E801A0((_QWORD *)a1, v3, v79, *(__int64 **)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 40), v49, v50);
      if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 59 > 2 )
        goto LABEL_70;
      v63 = *(_QWORD *)(v3 + 128);
      if ( !v63 )
        goto LABEL_70;
      if ( (*(_BYTE *)(v63 + 10) & 0x20) == 0 )
        goto LABEL_70;
      v64 = sub_B970F0(v3);
      if ( !v64 || (*(_BYTE *)(v64 + 28) & 0x7F) != 0x2B )
        goto LABEL_70;
      v65 = *(_QWORD *)(v64 + 16);
      v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v65 & 4) != 0 )
        v66 = *(_QWORD *)v66;
      if ( !v66 )
        goto LABEL_70;
      v7 = v66;
      result = *(_BYTE *)(v66 + 8) & 0x7F;
LABEL_73:
      if ( !(_BYTE)result )
        return result;
    }
    v17 = v7 - 40;
    if ( v7 == 40 )
      goto LABEL_70;
    v18 = *(_DWORD *)(v7 + 76);
    if ( v18 )
    {
LABEL_17:
      v19 = *(_QWORD *)(v7 + 80);
      v72 = 0;
      if ( v19 && (*(_BYTE *)(v19 + 28) & 0x7F) == 0x2B )
      {
        v20 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v19 + 16) & 4) != 0 )
          v20 = *(_QWORD *)v20;
        n = *(_QWORD *)(v7 + 80);
        v72 = 0;
        if ( (*(_BYTE *)(v20 + 8) & 0x7Fu) - 34 <= 5 )
        {
          v21 = v20 - 72;
          if ( v21 )
          {
            v22 = sub_B76070(v21, v2, v19, v12);
            v23 = (unsigned __int8)(*(_WORD *)(n + 98) >> 4);
            if ( v23 == 255 )
            {
              v73 = v22;
              v23 = sub_B74880(n);
              v22 = v73;
            }
            v72 = v22 - v23;
          }
        }
      }
      v24 = sub_E78790(v7 - 40);
      v25 = *(_QWORD *)(a1 + 8);
      v26 = v24;
      v27 = *(_BYTE **)(v25 + 32);
      if ( (unsigned __int64)v27 >= *(_QWORD *)(v25 + 24) )
      {
        sub_227BA10(v25, 63);
      }
      else
      {
        *(_QWORD *)(v25 + 32) = v27 + 1;
        *v27 = 63;
      }
      na = j__strlen("_block_invoke");
      v88 = &v80;
      v80 = v82;
      v81 = 0;
      v82[0] = 0;
      v83.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
      v83.m128_i32[2] = 0;
      v86 = 0;
      v87 = 1;
      dest = nullptr;
      v84 = 0;
      sub_227B8B0(&v83, 0, 0, 0);
      if ( na > *((_QWORD *)&v84 + 1) - (_QWORD)dest )
      {
        sub_227BF10(&v83, "_block_invoke", na);
        if ( v18 )
          goto LABEL_31;
      }
      else if ( na )
      {
        memcpy(dest, "_block_invoke", na);
        dest = (char *)dest + na;
        if ( v18 )
          goto LABEL_31;
      }
      else if ( v18 )
      {
LABEL_31:
        v28 = dest;
        if ( (unsigned __int64)dest >= *((_QWORD *)&v84 + 1) )
        {
          v29 = (__m128 *)sub_227BA10(&v83, 95);
        }
        else
        {
          v29 = &v83;
          dest = (char *)dest + 1;
          *v28 = 95;
        }
        sub_227B910(v29, v18);
      }
      if ( v72 )
      {
        v47 = dest;
        if ( (unsigned __int64)dest >= *((_QWORD *)&v84 + 1) )
        {
          v48 = (__m128 *)sub_227BA10(&v83, 95);
        }
        else
        {
          v48 = &v83;
          dest = (char *)dest + 1;
          *v47 = 95;
        }
        sub_227B910(v48, v72);
      }
      v83.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
      sub_227B7A0(&v83);
      sub_E7C4B0(a1, v80, v81);
      if ( v80 != v82 )
        operator delete(v80);
      v32 = *(_QWORD *)(v7 + 80);
      if ( v32 )
      {
        v33 = *(_BYTE *)(v32 + 28) & 0x7F;
        if ( v33 != 43 && (unsigned int)v33 - 18 <= 0x3F )
        {
          v78 &= 0xFFFFFFFF00000000LL;
          sub_E801A0((_QWORD *)a1, v32, v78, *(__int64 **)((v32 & 0xFFFFFFFFFFFFFFF8LL) + 40), v30, v31);
        }
      }
      if ( (*(_BYTE *)(v26 + 8) & 0x7Fu) - 58 > 3 || v26 == 64 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(_BYTE **)(v34 + 32);
        if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
        {
          sub_227BA10(v34, 64);
        }
        else
        {
          *(_QWORD *)(v34 + 32) = v35 + 1;
          *v35 = 64;
        }
      }
      else
      {
        v77 &= 0xFFFFFFFF00000000LL;
        sub_E82590(a1, v26 - 64, v77);
      }
      sub_995540(*(_QWORD *)(a1 + 8), "YAX");
      v36 = *(_QWORD *)(a1 + 8);
      v37 = *(_BYTE **)(v36 + 32);
      if ( (unsigned __int64)v37 >= *(_QWORD *)(v36 + 24) )
      {
        sub_227BA10(v36, 80);
      }
      else
      {
        *(_QWORD *)(v36 + 32) = v37 + 1;
        *v37 = 80;
      }
      v38 = *(_QWORD *)(a1 + 8);
      v39 = *(_BYTE **)(v38 + 32);
      v40 = *(_QWORD *)(v38 + 24);
      if ( *(_BYTE *)(a1 + 592) )
      {
        if ( v40 <= (unsigned __int64)v39 )
        {
          sub_227BA10(v38, 69);
        }
        else
        {
          *(_QWORD *)(v38 + 32) = v39 + 1;
          *v39 = 69;
        }
        v38 = *(_QWORD *)(a1 + 8);
        v39 = *(_BYTE **)(v38 + 32);
        v40 = *(_QWORD *)(v38 + 24);
      }
      if ( v40 <= (unsigned __int64)v39 )
      {
        sub_227BA10(v38, 65);
      }
      else
      {
        *(_QWORD *)(v38 + 32) = v39 + 1;
        *v39 = 65;
      }
      v41 = j__strlen("__block_literal");
      v82[0] = 0;
      v88 = &v80;
      v80 = v82;
      v81 = 0;
      v83.m128_i32[2] = 0;
      v83.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
      v86 = 0;
      v87 = 1;
      dest = nullptr;
      v84 = 0;
      sub_227B8B0(&v83, 0, 0, 0);
      if ( v41 > *((_QWORD *)&v84 + 1) - (_QWORD)dest )
      {
        sub_227BF10(&v83, "__block_literal", v41);
      }
      else if ( v41 )
      {
        memcpy(dest, "__block_literal", v41);
        dest = (char *)dest + v41;
      }
      if ( v18 )
      {
        v42 = dest;
        if ( (unsigned __int64)dest >= *((_QWORD *)&v84 + 1) )
        {
          v43 = (__m128 *)sub_227BA10(&v83, 95);
        }
        else
        {
          v43 = &v83;
          dest = (char *)dest + 1;
          *v42 = 95;
        }
        sub_227B910(v43, v18);
      }
      if ( v72 )
      {
        v44 = dest;
        if ( (unsigned __int64)dest >= *((_QWORD *)&v84 + 1) )
        {
          v45 = (__m128 *)sub_227BA10(&v83, 95);
        }
        else
        {
          v45 = &v83;
          dest = (char *)dest + 1;
          *v44 = 95;
        }
        sub_227B910(v45, v72);
      }
      v83.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
      sub_227B7A0(&v83);
      sub_E7C970(a1, v80, v81, 0, 0);
      if ( v80 != v82 )
        operator delete(v80);
      v2 = (unsigned __int64)"@Z";
      sub_995540(*(_QWORD *)(a1 + 8), "@Z");
      result = *(_BYTE *)(v26 + 8) & 0x7F;
      if ( (unsigned int)(unsigned __int8)result - 58 <= 3 )
        return result;
      v7 = v26;
      goto LABEL_73;
    }
    v55 = *(_QWORD *)a1;
    v56 = *(unsigned int *)(*(_QWORD *)a1 + 40LL);
    v80 = (void *)(v7 - 40);
    v57 = v55 + 32;
    LODWORD(v81) = v56;
    v58 = *(_DWORD *)(v55 + 48);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v55 + 32);
      v60 = (v58 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v2 = v59 + 16LL * v60;
      v61 = *(_QWORD *)v2;
      if ( v17 == *(_QWORD *)v2 )
      {
LABEL_91:
        sub_E3DF30(&v83, (_QWORD *)v2, (_QWORD *)(v59 + 16LL * v58), v57, 1);
        v62 = v83.m128_u64[0];
LABEL_92:
        v18 = *(_DWORD *)(v62 + 8);
        goto LABEL_17;
      }
      if ( v61 != -4096 )
      {
        v74 = 1;
        v71 = 0;
        while ( 1 )
        {
          if ( !v71 && v61 == -8192 )
            v71 = v2;
          v60 = (v58 - 1) & (v74 + v60);
          v2 = v59 + 16LL * v60;
          v61 = *(_QWORD *)v2;
          if ( v17 == *(_QWORD *)v2 )
            goto LABEL_91;
          if ( v61 == -4096 )
          {
            v56 = (unsigned int)v56;
            if ( v71 )
              v2 = v71;
            break;
          }
          ++v74;
        }
      }
      v67 = v56 + 1;
      v8 = 3 * v58;
      v83.m128_u64[0] = v2;
      v9 = (unsigned int)(4 * (v56 + 1));
      if ( (unsigned int)v9 < (unsigned int)v8 )
      {
        v9 = v7 - 40;
        v8 = v58 - *(_DWORD *)(v55 + 44) - v67;
        if ( (unsigned int)v8 > v58 >> 3 )
        {
LABEL_121:
          v68 = *(_QWORD *)v2 == -4096;
          *(_DWORD *)(v55 + 40) = v67;
          if ( !v68 )
            --*(_DWORD *)(v55 + 44);
          *(_DWORD *)(v2 + 8) = v56;
          v69 = *(unsigned int *)(v55 + 48);
          *(_QWORD *)v2 = v9;
          sub_E3DF30(&v83, (_QWORD *)v2, (_QWORD *)(v59 + 16 * v69), v57, 1);
          v62 = v83.m128_u64[0];
          goto LABEL_92;
        }
        v70 = v58;
LABEL_126:
        sub_E3E460((__int64 *)(v55 + 32), v70, v56, v57, v8, v9);
        sub_E3C750((__int64 *)(v55 + 32), (__int64 *)&v80, &v83);
        v9 = (__int64)v80;
        LODWORD(v56) = v81;
        v59 = *(_QWORD *)(v55 + 32);
        v67 = *(_DWORD *)(v55 + 40) + 1;
        v2 = v83.m128_u64[0];
        v57 = v55 + 32;
        goto LABEL_121;
      }
    }
    else
    {
      v83.m128_u64[0] = 0;
    }
    v70 = 2 * v58;
    goto LABEL_126;
  }
  return result;
}
