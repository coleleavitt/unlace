__int64 __fastcall sub_156D770(const __m128i *a1, int a2, _DWORD *a3, __m128i a4, __m128 a5)
{
  bool v8; // al
  __int64 *v9; // rdi
  __int16 v10; // ax
  char v11; // r15
  __int16 v12; // ax
  __int64 v13; // rax
  size_t v14; // rax
  int v15; // r9d
  char v16; // dl
  __int64 v17; // r13
  __int32 v19; // eax
  __int64 *v20; // rdi
  __int64 *v21; // rdi
  __int32 v22; // eax
  __int64 v23; // rsi
  int v24; // ecx
  size_t v25; // rax
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  unsigned int v28; // r15d
  size_t v29; // rax
  size_t v30; // rax
  __int64 v31; // rax
  unsigned int v32; // esi
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rdx
  size_t v39; // r15
  size_t v40; // rax
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // r8
  char v44; // dl
  __int64 *v45; // rdi
  __int64 v46; // rcx
  _DWORD *v47; // rax
  _DWORD *v48; // rdx
  unsigned int v49; // [rsp+0h] [rbp-138h]
  __int64 v50; // [rsp+0h] [rbp-138h]
  char v51; // [rsp+0h] [rbp-138h]
  int v52; // [rsp+8h] [rbp-130h]
  _QWORD *v53; // [rsp+8h] [rbp-130h]
  __int32 v54; // [rsp+14h] [rbp-124h]
  __int64 v55; // [rsp+18h] [rbp-120h]
  __int64 v56; // [rsp+20h] [rbp-118h]
  bool v57; // [rsp+2Bh] [rbp-10Dh]
  char v58; // [rsp+2Ch] [rbp-10Ch]
  void *v59; // [rsp+30h] [rbp-108h] BYREF
  __int64 v60; // [rsp+38h] [rbp-100h]
  _BYTE v61[32]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int8 *v62; // [rsp+60h] [rbp-D8h] BYREF
  char v63; // [rsp+68h] [rbp-D0h]
  __int64 v64; // [rsp+B0h] [rbp-88h] BYREF
  void *v65; // [rsp+B8h] [rbp-80h]
  __int64 v66; // [rsp+C0h] [rbp-78h]
  _BYTE v67[16]; // [rsp+C8h] [rbp-70h] BYREF
  __int8 *v68; // [rsp+D8h] [rbp-60h] BYREF
  void *ptr; // [rsp+E0h] [rbp-58h]
  __int64 v70; // [rsp+E8h] [rbp-50h]
  _BYTE v71[72]; // [rsp+F0h] [rbp-48h] BYREF

  v52 = a2;
  if ( !a2 )
    v52 = a1[1].m128i_i32[0];
  v54 = 0;
  if ( a1[2].m128i_i16[0] == 134 )
  {
    v19 = a1[1].m128i_i32[0];
    v20 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v19;
    sub_14634E0(v20, a1[1].m128i_i32);
    v54 = a1[2].m128i_i32[2];
  }
  v8 = sub_13D0E90((__int64)a1[1].m128i_i64, 25);
  v9 = (__int64 *)a1->m128i_i64[1];
  v57 = v8;
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v9, a1[1].m128i_i32);
  v49 = a1[2].m128i_u32[2];
  v59 = v61;
  v60 = 0x200000000LL;
  v10 = a1[2].m128i_i16[0];
  switch ( v10 )
  {
    case 16:
      v26 = (__int64 *)a1->m128i_i64[1];
      v11 = 0;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v26, a1[1].m128i_i32);
      v58 = 0;
      v56 = 0;
      v55 = 0;
      break;
    case 459:
      v21 = (__int64 *)a1->m128i_i64[1];
      v55 = a1[1].m128i_i64[1];
      v22 = a1[1].m128i_i32[1];
      if ( !v22 )
        v22 = a1[1].m128i_i32[0];
      v11 = 0;
      a1[2].m128i_i32[2] = v22;
      sub_14634E0(v21, a1[1].m128i_i32);
      v58 = 0;
      v56 = 0;
      break;
    case 62:
      v27 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v27, a1[1].m128i_i32);
      v28 = a1[2].m128i_u32[2];
      if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 21LL) & 4) != 0 )
      {
        if ( (unsigned __int8)sub_15684E0((__int64)a1, v28, (__int64)&v59, 1u) )
          goto LABEL_52;
        v56 = 1;
        v11 = 1;
        v58 = 1;
        v55 = 0;
      }
      else
      {
        sub_FC70B0((__int64)&v64, a1[6].m128i_i64[1], v28, 1929);
        v62 = (unsigned __int8 *)__PAIR64__(*((_DWORD *)v59 + 4 * (unsigned int)v60 - 4), v28);
        v11 = 0;
        v63 = 1;
        sub_AEC610(&v64, (__int64 *)&v62);
        sub_AEA040((__int64)&v64);
        v58 = 0;
        v56 = 0;
        v55 = 0;
      }
      break;
    default:
      v11 = sub_15684E0((__int64)a1, v49, (__int64)&v59, 1u);
      if ( !v11 )
      {
        v58 = 0;
        v56 = 0;
        v55 = 0;
        break;
      }
LABEL_52:
      v17 = 0;
      goto LABEL_25;
  }
  v64 = 0;
  v65 = v67;
  v66 = 0x200000000LL;
  v70 = 0x200000000LL;
  v12 = a1[2].m128i_i16[0];
  v68 = &a1[31].m128i_i8[8];
  ptr = v71;
  if ( (unsigned __int16)(v12 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020((__int64)a1, (unsigned int *)&v64, a4, a5);
  sub_147CDF0((__int64)a1, (int *)&v64, 0x612u, 0x6B5u, 0, 1, a4, *(double *)a5.m128_u64);
  v13 = a1->m128i_i64[1];
  if ( *(_BYTE *)(*(_QWORD *)(v13 + 112) + 9LL) )
  {
    if ( *(_QWORD *)(v13 + 760) )
    {
      *(_BYTE *)(v13 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v13 + 48) + 6LL) = 1;
    }
    v17 = 0;
    a1[2].m128i_i16[0] = 1;
  }
  else
  {
    switch ( *a3 )
    {
      case 0:
        *a3 = 6;
        goto LABEL_15;
      case 1:
      case 4:
        if ( v11 )
          goto LABEL_53;
        if ( !v55 )
        {
          v29 = j__strlen(&byte_22F0C30);
          sub_156A150((__int64)a1, 1737, &byte_22F0C30, v29, a4, *(double *)a5.m128_u64);
          goto LABEL_45;
        }
        if ( *(_DWORD *)(v55 + 36) != 1 )
        {
LABEL_53:
          sub_FC70B0((__int64)&v62, a1[6].m128i_i64[1], v49, 1702);
          sub_AE9DF0(&v62, v56, 2u);
          sub_AE9DF0(&v62, *a3 != 1, 2u);
          sub_AEA040((__int64)&v62);
          goto LABEL_38;
        }
        v30 = j__strlen(&byte_22F0C30);
        sub_156A150((__int64)a1, 1737, &byte_22F0C30, v30, a4, *(double *)a5.m128_u64);
        goto LABEL_17;
      case 2:
        goto LABEL_16;
      case 3:
      case 5:
        if ( (*(_BYTE *)(*(_QWORD *)(v13 + 56) + 21LL) & 4) == 0 )
          goto LABEL_16;
        v23 = a1[6].m128i_i64[1];
        v24 = 1703;
        goto LABEL_37;
      case 6:
LABEL_15:
        if ( !v11 )
        {
LABEL_16:
          v14 = j__strlen(&byte_22F0C30);
          sub_156A150((__int64)a1, 1737, &byte_22F0C30, v14, a4, *(double *)a5.m128_u64);
          if ( v55 )
          {
LABEL_17:
            v17 = sub_1A84440(a1[6].m128i_i64[0], v52, v54, v49, v55, v15, 0, 0);
          }
          else
          {
LABEL_45:
            v17 = 0;
            if ( !(_DWORD)v60 )
              goto LABEL_19;
            v17 = sub_1A85240(a1[6].m128i_i64[0], v52, v54, v49, (_DWORD)v59, v60, v58);
          }
          if ( v16 )
          {
            v17 = 0;
            break;
          }
LABEL_19:
          if ( !a2 || !v57 )
            break;
          v31 = a1->m128i_i64[1];
          v32 = a2 & 0x7FFFFFFF;
          v33 = *(_QWORD *)(v31 + 88);
          if ( (a2 & 0x7FFFFFFFu) < *(_DWORD *)(v33 + 476) || v32 >= *(_DWORD *)(v33 + 480) )
            v34 = sub_101D590(*(_QWORD *)(v31 + 88), v32);
          else
            v34 = *(_DWORD *)(v33 + 472);
          LOBYTE(v62) = 0;
          if ( (unsigned int)(v34 + 1) <= 1 )
            break;
          if ( v34 >= 0 )
          {
            v35 = *(_QWORD *)(v33 + 184) + 24LL * (unsigned int)v34;
LABEL_62:
            if ( v35 )
            {
              if ( *(char *)(v35 + 3) >= 0 )
              {
                v36 = *(_QWORD *)((*(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
                if ( v36 )
                {
                  v37 = sub_228A4B0(*(_QWORD *)(v36 + 16) + 32LL, **(_QWORD **)(v36 + 16), 0);
                  v39 = v38;
                  v50 = v37;
                  v40 = j__strlen(".framework");
                  if ( v40 <= v39 && (!v40 || !memcmp((const void *)(v39 - v40 + v50), ".framework", v40)) )
                  {
                    sub_FC70B0((__int64)&v62, a1[6].m128i_i64[1], a2, 2060);
                    sub_AEA040((__int64)&v62);
                  }
                }
              }
            }
            break;
          }
          v41 = (unsigned int)(-2 - v34);
          v42 = *(_QWORD *)(*(_QWORD *)(v33 + 320) + 8LL * ((unsigned int)(-2 - v34) >> 6));
          if ( _bittest64(&v42, v41) )
          {
            v43 = (_QWORD *)(*(_QWORD *)(v33 + 272) + 8 * ((unsigned __int64)(int)v41 >> 5));
            if ( *v43 )
            {
              v35 = *v43 + 24 * (v41 & 0x1F);
              goto LABEL_62;
            }
            v45 = (__int64 *)(*(_QWORD *)(v33 + 288) & 0xFFFFFFFFFFFFFFF8LL);
            v46 = *v45;
            v45[10] += 768;
            v47 = (_DWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v45[1] >= (unsigned __int64)(v47 + 192) && v46 )
            {
              *v45 = (__int64)(v47 + 192);
            }
            else
            {
              v53 = v43;
              v51 = v41;
              v47 = (_DWORD *)sub_986170((__int64)v45, 768, 768, 3, (__int64)v43, v41);
              v43 = v53;
              LOBYTE(v41) = v51;
            }
            *v43 = v47;
            v48 = v47 + 192;
            do
            {
              *v47 = 0;
              v47 += 6;
              *((_OWORD *)v47 - 1) = 0;
              *((_QWORD *)v47 - 1) = 0;
            }
            while ( v47 != v48 );
            v44 = (char)v62;
            v35 = *v43 + 24 * (v41 & 0x1F);
          }
          else
          {
            v35 = sub_101F930(v33, v41, &v62);
            v44 = (char)v62;
          }
          if ( v44 )
            break;
          goto LABEL_62;
        }
        v23 = a1[6].m128i_i64[1];
        v24 = 1834;
LABEL_37:
        sub_FC70B0((__int64)&v62, v23, v49, v24);
        sub_AEA040((__int64)&v62);
LABEL_38:
        v17 = 0;
        v25 = j__strlen(&byte_22F0C30);
        sub_156A150((__int64)a1, 1737, &byte_22F0C30, v25, a4, *(double *)a5.m128_u64);
        break;
      default:
        goto LABEL_38;
    }
  }
  sub_15DCED0(v68, &v68);
  if ( ptr != v71 )
    free(ptr);
  if ( v65 != v67 )
    free(v65);
LABEL_25:
  if ( v59 != v61 )
    free(v59);
  return v17;
}
