__m128i *__fastcall clang_getCursorDefinition(
        __m128i *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __m128i a7,
        __m128i a8)
{
  __m128i *v8; // rbp
  int v9; // ebx
  __m128i v10; // xmm0
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r12
  char v16; // r13
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  unsigned __int8 v21; // cl
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // rsi
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  bool (__fastcall *v53)(__int64); // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // r14
  __int64 v63; // rsi
  _DWORD *v64; // rax
  __int64 v65; // rdi
  int v66; // edx
  __m128i v67; // [rsp+0h] [rbp-C8h]
  __m128i v68; // [rsp+0h] [rbp-C8h]
  __m128i v69; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v70; // [rsp+30h] [rbp-98h] BYREF
  __m128i v71; // [rsp+40h] [rbp-88h] BYREF
  __m128i v72; // [rsp+50h] [rbp-78h] BYREF
  __m128i v73; // [rsp+60h] [rbp-68h] BYREF
  __m128i v74; // [rsp+70h] [rbp-58h] BYREF
  __m128i v75; // [rsp+80h] [rbp-48h] BYREF
  __m128i v76[3]; // [rsp+90h] [rbp-38h] BYREF

  v8 = a1;
  v9 = a7.m128i_i32[0];
  if ( (unsigned int)(a7.m128i_i32[0] - 70) <= 3 )
    goto LABEL_7;
  v67 = _mm_loadu_si128(&a7);
  v10 = _mm_loadu_si128(&a8);
  v15 = sub_63A300(
          (_DWORD)a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          v67.m128i_i32[0],
          v67.m128i_i32[2],
          v10.m128i_i32[0],
          v10.m128i_i64[1]);
  if ( (unsigned int)(v9 - 40) <= 0xA || (v16 = 0, (unsigned int)(v9 - 100) <= 0x38) )
  {
    a1 = &v69;
    v16 = 1;
    clang_getCursorReferenced(
      (__int64)&v69,
      a2,
      v11,
      v12,
      v13,
      v14,
      (__int128)_mm_loadu_si128(&a7),
      _mm_loadu_si128(&a8));
    a7 = _mm_loadu_si128(&v69);
    v9 = _mm_cvtsi128_si32(a7);
    a8 = _mm_loadu_si128(&v70);
    if ( v9 != 502 )
    {
LABEL_5:
      if ( (unsigned int)(v9 - 600) <= 4 || (unsigned int)(v9 - 1) <= 0x26 )
      {
        a7.m128i_i32[0] = v9;
        v68 = _mm_loadu_si128(&a7);
        v18 = sub_63A250((_DWORD)a1, a2, v11, v12, v13, v14, v68.m128i_i32[0], v68.m128i_i64[1]);
        v20 = v18;
        if ( v18 )
        {
          v21 = *(_BYTE *)(v18 + 28) & 0x7F;
          if ( v21 <= 0x56u )
          {
            if ( v21 > 0x34u )
            {
              switch ( (v21 + 75) & 0x7F )
              {
                case 0:
                case 2:
                case 9:
                case 0xA:
                case 0xB:
                case 0xC:
                case 0xD:
                case 0xF:
                case 0x12:
                case 0x13:
                case 0x17:
                case 0x1A:
                case 0x1B:
                case 0x1C:
                case 0x1F:
                case 0x21:
                  goto LABEL_19;
                case 1:
                  v31 = sub_7A70A0(v18);
                  goto LABEL_32;
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                  v28 = sub_78B3D0(v18);
                  if ( v28 )
                    goto LABEL_25;
                  goto LABEL_7;
                case 0xE:
                  v48 = *(_QWORD *)(v18 + 48);
                  v49 = sub_798D40(v48);
                  v50 = sub_77B9E0(v48, v49);
                  if ( !v50 )
                    goto LABEL_7;
                  v31 = sub_77CBA0(v50);
                  goto LABEL_32;
                case 0x10:
                  v75.m128i_i64[0] = 0;
                  if ( !sub_78BC30(*(_QWORD *)(v18 + 48), &v75) )
                    goto LABEL_7;
                  v31 = sub_780E20(v75.m128i_i64[0]);
                  goto LABEL_32;
                case 0x11:
                  v46 = *(_QWORD *)(v18 + 48);
                  v47 = *(_QWORD *)(v46 + 128);
                  if ( !v47 )
                  {
                    sub_5F98A0((__int64 *)(*(_QWORD *)(v46 + 104) + 96LL), *(_QWORD *)(v46 + 104));
                    v47 = *(_QWORD *)(v46 + 128);
                    if ( !v47 )
                      goto LABEL_7;
                  }
                  if ( !*(_QWORD *)(v47 + 88) )
                    goto LABEL_7;
                  v31 = sub_7A47A0();
LABEL_32:
                  v32 = v31;
                  goto LABEL_33;
                case 0x15:
                  v45 = *(_QWORD *)(v18 + 48);
                  if ( v45 )
                    goto LABEL_43;
                  goto LABEL_7;
                case 0x16:
                  do
                    v20 = *(_QWORD *)(v20 + 88);
                  while ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x4B );
                  goto LABEL_27;
                case 0x18:
                case 0x19:
                  sub_63A1A0(v8, v18, *(unsigned int *)(v18 + 24), v15);
                  return v8;
                case 0x1D:
                  v39 = *(_QWORD *)(v18 + 48);
                  if ( !v39 )
                    goto LABEL_7;
                  if ( (v39 & 4) != 0 )
                    goto LABEL_7;
                  v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v40 )
                    goto LABEL_7;
                  sub_639160(&v75, v40, v15, 0, 1, v19, v69.m128i_i64[0], v69.m128i_i64[1]);
                  clang_getCursorDefinition(
                    (_DWORD)v8,
                    v40,
                    v41,
                    v42,
                    v43,
                    v44,
                    (__int128)_mm_load_si128(&v75),
                    (__int128)_mm_load_si128(v76));
                  return v8;
                case 0x1E:
                  v33 = *(_QWORD *)(v18 + 40);
                  if ( !v33 )
                    goto LABEL_7;
                  if ( (v33 & 4) != 0 )
                    goto LABEL_7;
                  v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v34 )
                    goto LABEL_7;
                  sub_639160(&v73, v34, v15, 0, 1, v19, v69.m128i_i64[0], v69.m128i_i64[1]);
                  clang_getCursorDefinition(
                    (_DWORD)v8,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38,
                    (__int128)_mm_load_si128(&v73),
                    (__int128)_mm_load_si128(&v74));
                  return v8;
                default:
                  goto LABEL_7;
              }
            }
            if ( v21 > 0x24u )
            {
              v22 = 1LL << v21;
              if ( ((1LL << v21) & 0x7EE2000000000LL) != 0 )
              {
LABEL_19:
                *v8 = _mm_loadu_si128(&a7);
                v8[1] = _mm_loadu_si128(&a8);
                return v8;
              }
              if ( (v22 & 0x11C000000000LL) != 0 )
              {
                v57 = sub_798D40(v20);
                v28 = sub_77B9E0(v20, v57);
                if ( v28 )
                {
LABEL_25:
                  sub_639160(v8, v28, v15, 0, 1, v29, v69.m128i_i64[0], v69.m128i_i64[1]);
                  return v8;
                }
              }
              else if ( (v22 & 0x18000000000000LL) != 0 )
              {
                v23 = *(_QWORD *)(v20 + 64);
                sub_639160(&v71, v23, v15, 0, 1, v19, v69.m128i_i64[0], v69.m128i_i64[1]);
                clang_getCursorDefinition(
                  (_DWORD)v8,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27,
                  (__int128)_mm_load_si128(&v71),
                  (__int128)_mm_load_si128(&v72));
                return v8;
              }
            }
            else if ( v21 )
            {
              switch ( v21 )
              {
                case 1u:
                case 2u:
                case 3u:
                case 4u:
                case 6u:
                case 7u:
                case 8u:
                case 9u:
                case 0xAu:
                case 0xBu:
                case 0xCu:
                case 0xDu:
                case 0xEu:
                case 0xFu:
                case 0x13u:
                case 0x14u:
                case 0x16u:
                case 0x17u:
                case 0x18u:
                case 0x19u:
                case 0x1Bu:
                case 0x1Cu:
                case 0x1Du:
                case 0x1Eu:
                case 0x1Fu:
                  goto LABEL_19;
                case 0x10u:
                  v53 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL);
                  if ( v53 == sub_5F7BA0 )
                  {
                    if ( (*(_BYTE *)(v20 + 112) & 1) != 0 || *(_QWORD *)(v20 + 112) )
                      goto LABEL_19;
                  }
                  else if ( v53(v20) )
                  {
                    goto LABEL_19;
                  }
                  v54 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
                    v54 = *(_QWORD *)v54;
                  if ( (*(_BYTE *)(v54 + 8) & 0x7F) == 0x12 )
                  {
                    v55 = sub_7BB160(v54 - 48);
                    if ( v55 )
                    {
                      v56 = sub_7BDA60(v55, *(_QWORD *)(v20 + 40), (*(_BYTE *)(v20 + 58) & 2) != 0, 0);
                      v20 = v56;
                      if ( v56 )
                      {
                        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v56 + 72LL))(v56) )
                        {
LABEL_27:
                          sub_639160(v8, v20, v15, 0, 1, v19, v69.m128i_i64[0], v69.m128i_i64[1]);
                          return v8;
                        }
                      }
                    }
                  }
                  break;
                case 0x11u:
                  v51 = *(_QWORD *)(v18 + 104);
                  v52 = v51;
                  if ( v51 )
                    goto LABEL_58;
                  v58 = *(_QWORD *)(v20 + 96);
                  v59 = *(_QWORD *)(v58 + 88);
                  v60 = v59 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v59 & 1) != 0 )
                  {
                    if ( !v60 )
                      break;
                    goto LABEL_81;
                  }
                  if ( v60 > 3 )
                  {
                    if ( (v59 & 2) == 0 )
                      break;
                    v61 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
                    v62 = v61[2275];
                    if ( !v62 )
                    {
                      *(_QWORD *)(v58 + 88) = v58 & 0xFFFFFFFFFFFFFFFALL | 1;
                      if ( (v58 & 0xFFFFFFFFFFFFFFFALL) == 0 )
                      {
LABEL_83:
                        v51 = *(_QWORD *)(v20 + 104);
                        goto LABEL_58;
                      }
                      goto LABEL_89;
                    }
                    v63 = v61[274];
                    v61[284] += 24LL;
                    v60 = (v63 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v61[275] >= v60 + 24 && v63 )
                      v61[274] = v60 + 24;
                    else
                      v60 = sub_5F8390((__int64)(v61 + 274), 24, 3);
                    *(_QWORD *)v60 = v62;
                    *(_DWORD *)(v60 + 8) = 0;
                    v59 = v60 | 5;
                    *(_QWORD *)(v60 + 16) = v58;
                    *(_QWORD *)(v58 + 88) = v60 | 5;
                    LOBYTE(v60) = v60 & 0xFA | 4;
LABEL_81:
                    if ( (v60 & 4) != 0 )
                    {
                      v64 = (_DWORD *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v64 )
                      {
                        v65 = *(_QWORD *)v64;
                        v66 = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
                        if ( v64[2] != v66 )
                        {
                          v64[2] = v66;
                          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 144LL))(v65, v58);
                        }
                      }
                      goto LABEL_83;
                    }
LABEL_89:
                    v52 = *(_QWORD *)(v20 + 104);
                    goto LABEL_90;
                  }
                  if ( !v60 )
                    break;
LABEL_90:
                  v51 = v52;
LABEL_58:
                  if ( v51 > 7 )
                  {
                    v32 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
                    if ( v32 )
                    {
LABEL_33:
                      sub_639160(v8, v32, v15, 0, 1, v19, v69.m128i_i64[0], v69.m128i_i64[1]);
                      return v8;
                    }
                  }
                  break;
                case 0x12u:
                  v45 = v18;
                  if ( v16 )
                  {
LABEL_43:
                    v28 = sub_6003F0(v45);
                    if ( v28 )
                      goto LABEL_25;
                  }
                  else
                  {
                    v28 = sub_7BB160(v18);
                    if ( v28 )
                      goto LABEL_25;
                  }
                  break;
                case 0x15u:
                  v28 = sub_7B8C50(v18);
                  if ( !v28 )
                    break;
                  goto LABEL_25;
                case 0x20u:
                case 0x21u:
                case 0x22u:
                case 0x23u:
                case 0x24u:
                  v75.m128i_i64[0] = 0;
                  if ( !sub_78BC30(v18, &v75) )
                    break;
                  sub_639160(v8, v75.m128i_i64[0], v15, 0, 1, v30, v69.m128i_i64[0], v69.m128i_i64[1]);
                  return v8;
                default:
                  break;
              }
            }
          }
        }
      }
LABEL_7:
      sub_638F50(v8, 70, 0);
      return v8;
    }
  }
  else if ( v9 != 502 )
  {
    goto LABEL_5;
  }
  a7.m128i_i32[0] = 502;
  clang_getCursorReferenced((__int64)v8, a2, v11, v12, v13, v14, (__int128)_mm_loadu_si128(&a7), _mm_loadu_si128(&a8));
  return v8;
}

