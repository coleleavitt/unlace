unsigned __int64 __fastcall sub_1F39880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  unsigned __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rdi
  unsigned int v17; // edx
  unsigned __int8 **v18; // r12
  unsigned __int8 *v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // r13
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // r13
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  void *v31; // rdi
  void **v32; // r12
  unsigned __int64 v33; // r13
  void *v34; // rdi
  unsigned __int8 **v35; // r10
  int v36; // eax
  int v37; // eax
  bool v38; // zf
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // r13
  __int64 v41; // rcx
  unsigned __int8 *v42; // rdx
  __int64 v43; // rax
  unsigned __int8 *v44; // r13
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r15
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // r15
  void *v61; // rdi
  __m128i v62; // [rsp+0h] [rbp-158h] BYREF
  _QWORD v63[2]; // [rsp+10h] [rbp-148h] BYREF
  unsigned int v64; // [rsp+20h] [rbp-138h]
  unsigned __int8 *v65; // [rsp+30h] [rbp-128h] BYREF
  __int64 v66; // [rsp+38h] [rbp-120h]
  _QWORD v67[3]; // [rsp+80h] [rbp-D8h] BYREF
  void *v68; // [rsp+98h] [rbp-C0h]
  __int64 v69; // [rsp+A0h] [rbp-B8h]
  __m128i v70; // [rsp+A8h] [rbp-B0h]
  __int64 v71; // [rsp+B8h] [rbp-A0h]
  void **v72; // [rsp+C0h] [rbp-98h]
  __int64 v73; // [rsp+C8h] [rbp-90h]
  __int64 v74; // [rsp+D0h] [rbp-88h]
  __int64 v75; // [rsp+D8h] [rbp-80h]
  char *v76; // [rsp+E0h] [rbp-78h]
  __int64 v77; // [rsp+E8h] [rbp-70h]
  __int64 v78; // [rsp+F0h] [rbp-68h]
  unsigned int v79; // [rsp+F8h] [rbp-60h]
  _QWORD *v80; // [rsp+100h] [rbp-58h]
  __int64 v81; // [rsp+108h] [rbp-50h]
  char v82; // [rsp+110h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v8 + 20) )
  {
    result = *(unsigned int *)(v8 + 12);
    v10 = *(_QWORD **)v8;
    v11 = *(_QWORD *)v8 + 8 * result;
    if ( *(_QWORD *)v8 != v11 )
    {
      result = *(_QWORD *)v8;
      if ( a2 == *v10 )
      {
LABEL_27:
        v13 = (unsigned int)(*(_DWORD *)(v8 + 12) - 1);
        v12 = v10[(unsigned int)v13];
        *(_DWORD *)(v8 + 12) = v13;
        *(_QWORD *)result = v12;
LABEL_10:
        v14 = *(unsigned __int8 **)(a2 + 40);
        if ( !v14 )
          goto LABEL_24;
        v15 = *(_DWORD *)(a1 + 48);
        v65 = *(unsigned __int8 **)(a2 + 40);
        if ( v15 )
        {
          a5 = v15 - 1;
          v16 = *(_QWORD *)(a1 + 32);
          v17 = a5 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
          v18 = (unsigned __int8 **)(v16 + 16LL * v17);
          v19 = *v18;
          if ( v14 == *v18 )
          {
LABEL_13:
            v20 = (__int64)v18[1];
            v21 = (__int64 *)(v18 + 1);
            if ( v20 )
            {
              v22 = sub_1EAB3B0(*(_QWORD *)a1, v20);
              if ( v22 != sub_1EAB3B0(*(_QWORD *)a1, a2) )
              {
                v23 = (__int64)v18[1];
                v64 = 0;
                v63[0] = 0;
                v63[1] = 0;
                v24 = sub_B8C330(v23);
                v25 = sub_B8C330(a2);
                v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 144LL) + 2320LL);
                v67[2] = v24;
                v67[1] = v25;
                v67[0] = v26;
                v70 = 0u;
                v71 = 0;
                v73 = 0;
                v74 = 0;
                v75 = 0;
                v76 = nullptr;
                v69 = 8;
                v68 = (void *)operator new(0x40u);
                v27 = (char *)v68 + 24;
                v28 = operator new(0x200u);
                v72 = (void **)((char *)v68 + 24);
                v62.m128i_i64[0] = v28;
                v29 = _mm_loadl_epi64(&v62);
                *((_QWORD *)v68 + 3) = v28;
                v74 = v28;
                v73 = v28;
                v80 = v63;
                v71 = v28 + 512;
                v75 = v28 + 512;
                v81 = 0x10000000000LL;
                v30 = (__int64)v18[1];
                v76 = v27;
                v70 = _mm_unpacklo_epi64(v29, v29);
                v77 = 0;
                v78 = 0;
                v79 = 0;
                v82 = 0;
                if ( !(unsigned __int8)sub_AFA170((__int64)v67, a2, v30) )
                {
                  sub_1EAC9C0((__int64)&v65, *(_QWORD *)a1, *(_DWORD *)(a2 + 24), 136);
                  v40 = v65;
                  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
                  if ( !v65 )
                  {
                    v50 = v66;
                    v51 = *(_DWORD *)(v66 + 14976);
                    if ( v51 )
                    {
                      v57 = (unsigned int)(v51 - 1);
                      *(_DWORD *)(v66 + 14976) = v57;
                      v40 = *(unsigned __int8 **)(v50 + 8 * v57 + 14848);
                      v58 = *((unsigned int *)v40 + 134);
                      *v40 = 0;
                      v59 = *((_QWORD *)v40 + 66);
                      *((_DWORD *)v40 + 106) = 0;
                      v60 = v59 + (v58 << 6);
                      while ( v59 != v60 )
                      {
                        while ( 1 )
                        {
                          v60 -= 64;
                          v61 = *(void **)(v60 + 24);
                          if ( v61 == (void *)(v60 + 40) )
                            break;
                          v62.m128i_i64[1] = v59;
                          v62.m128i_i64[0] = v41;
                          operator delete(v61);
                          v59 = v62.m128i_i64[1];
                          v41 = v62.m128i_i64[0];
                          if ( v62.m128i_i64[1] == v60 )
                            goto LABEL_56;
                        }
                      }
LABEL_56:
                      *((_DWORD *)v40 + 134) = 0;
                    }
                    else
                    {
                      v62.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
                      v40 = (unsigned __int8 *)operator new(0x3A0u);
                      *v40 = 0;
                      *((_QWORD *)v40 + 12) = v40 + 112;
                      *((_QWORD *)v40 + 16) = v40 + 144;
                      *((_QWORD *)v40 + 20) = v40 + 176;
                      *((_QWORD *)v40 + 24) = v40 + 208;
                      *((_QWORD *)v40 + 28) = v40 + 240;
                      *((_QWORD *)v40 + 32) = v40 + 272;
                      *((_QWORD *)v40 + 36) = v40 + 304;
                      *((_QWORD *)v40 + 40) = v40 + 336;
                      *((_QWORD *)v40 + 44) = v40 + 368;
                      *((_QWORD *)v40 + 48) = v40 + 400;
                      *((_QWORD *)v40 + 52) = v40 + 432;
                      *((_QWORD *)v40 + 13) = 0;
                      v40[112] = 0;
                      *((_QWORD *)v40 + 17) = 0;
                      v40[144] = 0;
                      *((_QWORD *)v40 + 21) = 0;
                      v40[176] = 0;
                      *((_QWORD *)v40 + 25) = 0;
                      v40[208] = 0;
                      *((_QWORD *)v40 + 29) = 0;
                      v40[240] = 0;
                      *((_QWORD *)v40 + 33) = 0;
                      v40[272] = 0;
                      *((_QWORD *)v40 + 37) = 0;
                      v40[304] = 0;
                      *((_QWORD *)v40 + 41) = 0;
                      v40[336] = 0;
                      *((_QWORD *)v40 + 45) = 0;
                      v40[368] = 0;
                      *((_QWORD *)v40 + 49) = 0;
                      v40[400] = 0;
                      *((_QWORD *)v40 + 53) = 0x800000000LL;
                      v41 = v62.m128i_i64[0];
                      *((_QWORD *)v40 + 66) = v40 + 544;
                      *((_QWORD *)v40 + 67) = 0x600000000LL;
                    }
                    v65 = v40;
                  }
                  v40[*v40 + 1] = 9;
                  v42 = v65;
                  v43 = *v65;
                  *v65 = v43 + 1;
                  *(_QWORD *)&v42[8 * v43 + 16] = v41;
                  v44 = v65;
                  v45 = *(_QWORD *)(a2 + 40);
                  if ( !v65 )
                  {
                    v48 = v66;
                    v49 = *(_DWORD *)(v66 + 14976);
                    if ( v49 )
                    {
                      v52 = (unsigned int)(v49 - 1);
                      *(_DWORD *)(v66 + 14976) = v52;
                      v44 = *(unsigned __int8 **)(v48 + 8 * v52 + 14848);
                      v53 = *((unsigned int *)v44 + 134);
                      *v44 = 0;
                      v54 = *((_QWORD *)v44 + 66);
                      *((_DWORD *)v44 + 106) = 0;
                      v55 = v54 + (v53 << 6);
                      while ( v54 != v55 )
                      {
                        while ( 1 )
                        {
                          v55 -= 64;
                          v56 = *(void **)(v55 + 24);
                          if ( v56 == (void *)(v55 + 40) )
                            break;
                          v62.m128i_i64[1] = v54;
                          v62.m128i_i64[0] = v45;
                          operator delete(v56);
                          v54 = v62.m128i_i64[1];
                          v45 = v62.m128i_i64[0];
                          if ( v62.m128i_i64[1] == v55 )
                            goto LABEL_51;
                        }
                      }
LABEL_51:
                      *((_DWORD *)v44 + 134) = 0;
                    }
                    else
                    {
                      v62.m128i_i64[0] = *(_QWORD *)(a2 + 40);
                      v44 = (unsigned __int8 *)operator new(0x3A0u);
                      *v44 = 0;
                      *((_QWORD *)v44 + 12) = v44 + 112;
                      *((_QWORD *)v44 + 16) = v44 + 144;
                      *((_QWORD *)v44 + 20) = v44 + 176;
                      *((_QWORD *)v44 + 24) = v44 + 208;
                      *((_QWORD *)v44 + 28) = v44 + 240;
                      *((_QWORD *)v44 + 32) = v44 + 272;
                      *((_QWORD *)v44 + 36) = v44 + 304;
                      *((_QWORD *)v44 + 40) = v44 + 336;
                      *((_QWORD *)v44 + 44) = v44 + 368;
                      *((_QWORD *)v44 + 48) = v44 + 400;
                      *((_QWORD *)v44 + 52) = v44 + 432;
                      *((_QWORD *)v44 + 13) = 0;
                      v44[112] = 0;
                      *((_QWORD *)v44 + 17) = 0;
                      v44[144] = 0;
                      *((_QWORD *)v44 + 21) = 0;
                      v44[176] = 0;
                      *((_QWORD *)v44 + 25) = 0;
                      v44[208] = 0;
                      *((_QWORD *)v44 + 29) = 0;
                      v44[240] = 0;
                      *((_QWORD *)v44 + 33) = 0;
                      v44[272] = 0;
                      *((_QWORD *)v44 + 37) = 0;
                      v44[304] = 0;
                      *((_QWORD *)v44 + 41) = 0;
                      v44[336] = 0;
                      *((_QWORD *)v44 + 45) = 0;
                      v44[368] = 0;
                      *((_QWORD *)v44 + 49) = 0;
                      v44[400] = 0;
                      *((_QWORD *)v44 + 53) = 0x800000000LL;
                      v45 = v62.m128i_i64[0];
                      *((_QWORD *)v44 + 66) = v44 + 544;
                      *((_QWORD *)v44 + 67) = 0x600000000LL;
                    }
                    v65 = v44;
                  }
                  v44[*v44 + 1] = 9;
                  v46 = v65;
                  v47 = *v65;
                  *v65 = v47 + 1;
                  *(_QWORD *)&v46[8 * v47 + 16] = v45;
                  sub_AEA040((__int64)&v65);
                  sub_1EAC9C0((__int64)&v65, *(_QWORD *)a1, *((_DWORD *)v18[1] + 6), 113);
                  sub_AEA040((__int64)&v65);
                }
                operator delete(v77, 16LL * v79, 8);
                v31 = v68;
                if ( v68 )
                {
                  v32 = v72;
                  v33 = (unsigned __int64)(v76 + 8);
                  if ( v76 + 8 > (char *)v72 )
                  {
                    do
                    {
                      v34 = *v32++;
                      operator delete(v34);
                    }
                    while ( v33 > (unsigned __int64)v32 );
                    v31 = v68;
                  }
                  operator delete(v31);
                }
                operator delete(v63[0], 24LL * v64, 8);
                result = *(_QWORD *)(a1 + 24);
                if ( !result )
                  goto LABEL_22;
                goto LABEL_25;
              }
              if ( v18[1] )
              {
LABEL_24:
                result = *(_QWORD *)(a1 + 24);
                if ( !result )
                {
LABEL_22:
                  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) & 0xFFFFFFFFFFFFFFF8LL;
                  *(_QWORD *)(result + 56) = a2;
LABEL_26:
                  *(_QWORD *)(a1 + 24) = a2;
                  return result;
                }
LABEL_25:
                *(_QWORD *)(result + 128) = a2;
                goto LABEL_26;
              }
            }
LABEL_34:
            *v21 = a2;
            goto LABEL_24;
          }
          a6 = 1;
          v35 = nullptr;
          if ( v19 != (unsigned __int8 *)-1LL )
          {
            while ( 1 )
            {
              if ( v19 == (unsigned __int8 *)-2LL && !v35 )
                v35 = v18;
              v17 = a5 & (a6 + v17);
              v18 = (unsigned __int8 **)(v16 + 16LL * v17);
              v19 = *v18;
              if ( v14 == *v18 )
                goto LABEL_13;
              if ( v19 == (unsigned __int8 *)-1LL )
              {
                if ( v35 )
                  v18 = v35;
                break;
              }
              a6 = (unsigned int)(a6 + 1);
            }
          }
          v36 = *(_DWORD *)(a1 + 40);
          v12 = 3 * v15;
          v67[0] = v18;
          v37 = v36 + 1;
          v13 = (unsigned int)(4 * v37);
          if ( (unsigned int)v13 < (unsigned int)v12 )
          {
            v12 = v15 - *(_DWORD *)(a1 + 44) - v37;
            v13 = v15 >> 3;
            if ( (unsigned int)v12 > (unsigned int)v13 )
            {
LABEL_31:
              v38 = *v18 + 1 == nullptr;
              *(_DWORD *)(a1 + 40) = v37;
              if ( !v38 )
                --*(_DWORD *)(a1 + 44);
              v39 = v65;
              v21 = (__int64 *)(v18 + 1);
              v18[1] = nullptr;
              *v18 = v39;
              goto LABEL_34;
            }
LABEL_40:
            sub_1F39680(a1 + 32, v15, v12, v13, a5, a6);
            sub_1F21A70((__int64 *)(a1 + 32), (__int64 *)&v65, v67);
            v18 = (unsigned __int8 **)v67[0];
            v37 = *(_DWORD *)(a1 + 40) + 1;
            goto LABEL_31;
          }
        }
        else
        {
          v67[0] = 0;
        }
        v15 *= 2;
        goto LABEL_40;
      }
      while ( 1 )
      {
        result += 8LL;
        if ( v11 == result )
          break;
        if ( a2 == *(_QWORD *)result )
          goto LABEL_27;
      }
    }
  }
  else
  {
    result = sub_2236570(*(_QWORD *)(a1 + 16), a2);
    if ( result )
    {
      *(_QWORD *)result = -2;
      ++*(_DWORD *)(v8 + 16);
      goto LABEL_10;
    }
  }
  return result;
}
