__int64 __fastcall sub_142AA40(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r12
  __int64 v9; // rax
  __m128i v10; // xmm0
  char v11; // bp
  __int64 v12; // rax
  char v13; // r13
  _BOOL4 v14; // r13d
  char v15; // al
  unsigned __int16 v16; // r13
  char v17; // al
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // r13
  unsigned __int16 v23; // r12
  char v24; // al
  __int64 v25; // rsi
  __int64 result; // rax
  unsigned __int16 v27; // r15
  char v28; // al
  __int64 v29; // r15
  bool v30; // zf
  _DWORD *v31; // rdi
  int v32; // ebp
  unsigned int v33; // esi
  int v34; // eax
  _BYTE *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  void (*v38)(); // rax
  unsigned __int16 v39; // bp
  char v40; // al
  __int64 v41; // rbp
  __int64 *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  __int64 v46; // rcx
  int v47; // r12d
  unsigned __int64 v48; // rax
  char v49; // dl
  int v50; // eax
  _BYTE *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __m128i v57; // xmm1
  __m128i v58; // xmm2
  __int32 v59; // edx
  __m128i v60; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+10h] [rbp-B8h]
  int v62; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+28h] [rbp-A0h]
  unsigned __int16 v64; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v65[17]; // [rsp+40h] [rbp-88h] BYREF

  *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 24LL) = 1;
  v6 = *(_QWORD *)(a1 + 1112);
  if ( v6 )
    *(_BYTE *)(v6 + 146) = 0;
  v7 = *(_QWORD *)(a1 + 1120);
  v8 = *(_BYTE *)(v7 + 33);
  *(_BYTE *)(v7 + 33) = 0;
  v9 = *(_QWORD *)(a1 + 1120);
  ++*(_DWORD *)(a1 + 2296);
  v10 = _mm_loadu_si128(a2);
  v11 = *(_BYTE *)(v9 + 32);
  v12 = a2[1].m128i_i64[0];
  v60 = v10;
  v61 = v12;
  v13 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v13 | 0x20;
  v14 = (v13 & 0x20) != 0;
  sub_14634E0(a1, a2);
  v15 = (32 * v14) | *(_BYTE *)(a1 + 544) & 0xDF;
  *(_BYTE *)(a1 + 544) = v15;
  if ( (v15 & 8) == 0 )
  {
LABEL_15:
    if ( (v15 & 0x40) != 0 )
    {
      v30 = *(_BYTE *)(a1 + 2401) == 0;
      *(_BYTE *)(a1 + 544) = v15 & 0xDF;
      if ( !v30 )
        goto LABEL_26;
    }
    else if ( *(_BYTE *)(a1 + 2401) )
    {
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(a1 + 2400) )
    {
      v27 = a2[1].m128i_u16[0];
      switch ( v27 )
      {
        case 3u:
          v36 = *(_QWORD *)(a1 + 48);
          *(_BYTE *)(a1 + 968) = 1;
          *(_BYTE *)(v36 + 6) = 1;
          v37 = *(_QWORD *)(a1 + 752);
          if ( v37 )
          {
            v38 = *(void (**)())(*(_QWORD *)v37 + 16LL);
            if ( v38 != nullsub_672 )
              ((void (__fastcall *)(__int64, bool))v38)(v37, *(_DWORD *)(*(_QWORD *)(a1 + 1120) + 72LL) != 0);
          }
          goto LABEL_27;
        case 7u:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4LL) & 2) == 0
            || ((v31 = *(_DWORD **)(a1 + 88),
                 v32 = *(_DWORD *)(a1 + 2392),
                 v33 = v60.m128i_i32[0] & 0x7FFFFFFF,
                 (v60.m128i_i32[0] & 0x7FFFFFFFu) < v31[119])
             || v33 >= v31[120]
              ? (v34 = sub_101D590((__int64)v31, v33))
              : (v34 = v31[118]),
                v32 == v34) )
          {
            sub_141DD60((__int64 *)a1, a2->m128i_i32);
            goto LABEL_27;
          }
          break;
        case 2u:
          *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 32LL) = v11;
          goto LABEL_27;
        default:
          v28 = sub_141A630(v27);
          if ( v27 != 1 && !v28 )
          {
            v29 = a2->m128i_i64[1];
            if ( v29 )
            {
              switch ( sub_FDE240(a2->m128i_i64[1]) )
              {
                case 1LL:
                  sub_1425AB0(a1, a2, (unsigned int *)&v60, v11, v10, a4);
                  goto LABEL_27;
                case 2LL:
                  sub_1425D00(a1, (unsigned int *)a2, (unsigned int *)&v60, 0, 1, v10, a4);
                  goto LABEL_27;
                case 3LL:
                  sub_1425D00(a1, (unsigned int *)a2, (unsigned int *)&v60, 1, v11, v10, a4);
                  goto LABEL_27;
                case 4LL:
                case 5LL:
                case 6LL:
                  v50 = sub_FDE240(v29);
                  sub_1425590(a1, a2->m128i_i32, (unsigned int *)&v60, v50, v10, a4);
                  goto LABEL_27;
                case 7LL:
                  sub_14258C0(a1, a2->m128i_i32, (unsigned int *)&v60, v10, a4);
                  goto LABEL_27;
                case 8LL:
                  sub_1422580(a1, a2->m128i_i32);
                  goto LABEL_27;
                case 10LL:
                  sub_142A3D0((_QWORD *)a1, v60.m128i_u32[0], (__int64)a2, 0, 0, 0);
                  goto LABEL_27;
                case 11LL:
                  sub_142A5B0((_QWORD *)a1, v60.m128i_u32[0], a2->m128i_i32);
                  goto LABEL_27;
                case 12LL:
                  sub_14264A0(a1, a2->m128i_i32, v8, v10, a4);
                  goto LABEL_27;
                case 13LL:
                  sub_1424250(a1, v10, a4);
                  goto LABEL_27;
                case 14LL:
                  sub_1422900((__int64 *)a1);
                  goto LABEL_27;
                case 15LL:
                  sub_141AC30(a1, a2->m128i_i32, 0, *(double *)v10.m128i_i64, a4);
                  goto LABEL_27;
                case 16LL:
                  sub_1450BC0(a1, (unsigned __int64)v60.m128i_u32[0] << 32);
                  goto LABEL_27;
                case 17LL:
                  v52 = (__int64 *)sub_1436660(a1);
                  if ( v52 )
                  {
                    v53 = sub_1436660(a1);
                    v54 = sub_1465F30(v53);
                    do
                    {
                      v55 = *(_QWORD *)(v54 + 8);
                      if ( !v55 )
                        break;
                      v54 = v55 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v55 & 4) == 0 )
                        break;
                    }
                    while ( v54 );
                    v52 = (__int64 *)(v55 & 0xFFFFFFFFFFFFFFF8LL);
                  }
                  sub_141F950((_QWORD *)a1, v60.m128i_u32[0], a2->m128i_i32, v52);
                  goto LABEL_27;
                case 18LL:
                  sub_142A670((_QWORD *)a1, v60.m128i_u32[0], a2->m128i_i32);
                  goto LABEL_27;
                case 19LL:
                  sub_142A710((__int64 *)a1, v60.m128i_u32[0], a2->m128i_i32);
                  goto LABEL_27;
                case 20LL:
                  v51 = *(_BYTE **)(a1 + 56);
                  if ( (v51[1] & 8) != 0 )
                  {
                    sub_FC70B0((__int64)v65, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], (v51[2] & 1) == 0 ? 1252 : 1338);
                    sub_AE9DF0(v65, 1, 2u);
                  }
                  else
                  {
                    sub_FC70B0((__int64)v65, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], (*v51 & 8) == 0 ? 1252 : 1319);
                    sub_AE9DF0(v65, 0, 2u);
                  }
                  sub_AEA040((__int64)v65);
                  sub_141AC30(a1, a2->m128i_i32, 1, *(double *)v10.m128i_i64, a4);
                  goto LABEL_27;
                case 21LL:
                case 22LL:
                  sub_14227A0(a1, a2->m128i_i32);
                  goto LABEL_27;
                case 25LL:
                  v35 = *(_BYTE **)(a1 + 56);
                  if ( (v35[21] & 2) == 0 && (char)v35[22] >= 0 )
                    goto LABEL_35;
                  sub_141B710(a1, (__int64)&v62, 2, nullptr, v10, a4);
                  if ( v64 != 2 )
                  {
                    sub_1421C50(a1, (__int64)"__public_macro", 0);
                    v39 = v64;
                    v40 = sub_141A630(v64);
                    if ( v39 == 1 || v40 )
                      BUG();
                    v41 = v63;
                    if ( (*(_BYTE *)(v63 + 3) & 2) != 0
                      && (v42 = (__int64 *)sub_1445160(a1, v63)) != nullptr
                      && (sub_13F1C60(v42), !v45) )
                    {
                      v46 = *(_QWORD *)(a1 + 128);
                      v47 = v62;
                      *(_QWORD *)(a1 + 208) += 16LL;
                      v48 = (v46 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                      if ( *(_QWORD *)(a1 + 136) >= v48 + 16 && v46 )
                        *(_QWORD *)(a1 + 128) = v48 + 16;
                      else
                        v48 = sub_986170(a1 + 128, 16, 16, 4, v43, v44);
                      v49 = *(_BYTE *)(v48 + 12);
                      *(_DWORD *)(v48 + 8) = v47;
                      *(_QWORD *)v48 = 0;
                      *(_BYTE *)(v48 + 12) = v49 & 0xF0 | 0xA;
                      sub_144BC70(a1, v41);
                    }
                    else
                    {
                      sub_FC70B0((__int64)v65, *(_QWORD *)(a1 + 48), v62, 1180);
                      sub_AE9DF0(v65, v41, 5u);
                      sub_AEA040((__int64)v65);
                    }
                  }
                  break;
                case 26LL:
                  v35 = *(_BYTE **)(a1 + 56);
                  if ( (v35[21] & 2) == 0 && (char)v35[22] >= 0 )
                    goto LABEL_35;
                  sub_1422650((__int64 *)a1, v10, a4);
                  break;
                default:
                  goto LABEL_34;
              }
              goto LABEL_27;
            }
          }
          break;
      }
LABEL_34:
      v35 = *(_BYTE **)(a1 + 56);
LABEL_35:
      if ( (v35[4] & 2) == 0 )
      {
        sub_FC70B0((__int64)v65, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1142);
        sub_AE9DF0(v65, 0, 2u);
        sub_AEA040((__int64)v65);
        sub_141A820(a1, (unsigned int *)v65);
        *(_BYTE *)(a1 + 544) = (32 * v14) | *(_BYTE *)(a1 + 544) & 0xDF;
        return (unsigned int)(32 * v14);
      }
      v56 = operator new[](0x30u);
      v57 = _mm_load_si128(&v60);
      v58 = _mm_loadu_si128(a2);
      v30 = a2[1].m128i_i16[0] == 68;
      *(_DWORD *)(v56 + 16) = v61;
      v59 = a2[1].m128i_i32[0];
      *(__m128i *)v56 = v57;
      *(__m128i *)(v56 + 24) = v58;
      *(_DWORD *)(v56 + 40) = v59;
      if ( v30 )
        *(_WORD *)(v56 + 40) = 0;
      sub_14368B0(a1, v56, 2, 0, 1, 0);
LABEL_27:
      result = *(_BYTE *)(a1 + 544) & 0xDF;
      *(_BYTE *)(a1 + 544) = *(_BYTE *)(a1 + 544) & 0xDF | (32 * v14);
      return result;
    }
LABEL_26:
    sub_142A8F0(a1, (__int64)a2, v60.m128i_u32[0], v10, a4);
    goto LABEL_27;
  }
  v16 = a2[1].m128i_u16[0];
  v17 = sub_141A630(v16);
  if ( v16 == 1 || v17 || (v18 = a2->m128i_i64[1]) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 48);
    v21 = a2->m128i_i32[0];
LABEL_14:
    sub_FC70B0((__int64)v65, v20, v21, 1219);
    sub_AEA040((__int64)v65);
    v15 = *(_BYTE *)(a1 + 544);
    v14 = (v15 & 0x20) != 0;
    goto LABEL_15;
  }
  v19 = sub_FDE240(a2->m128i_i64[1]);
  v20 = *(_QWORD *)(a1 + 48);
  v21 = a2->m128i_i32[0];
  if ( v19 > 0x13 || ((1LL << v19) & 0xF0C00) == 0 )
    goto LABEL_14;
  sub_FC70B0((__int64)v65, v20, v21, 1037);
  sub_AEC220(v65, (_BYTE *)(*(_QWORD *)(v18 + 16) + 16LL), **(unsigned int **)(v18 + 16));
  sub_AEA040((__int64)v65);
  sub_FC70B0((__int64)v65, *(_QWORD *)(a1 + 48), **(_DWORD **)(a1 + 512), 1266);
  v22 = *(_QWORD *)(a1 + 512);
  v23 = *(_WORD *)(v22 + 16);
  v24 = sub_141A630(v23);
  if ( v23 == 1 || v24 )
    v25 = 0;
  else
    v25 = *(_QWORD *)(v22 + 8);
  sub_AE9DF0(v65, v25, 5u);
  sub_AEA040((__int64)v65);
  return sub_141A820(a1, (unsigned int *)v65);
}
