__m128i *__fastcall clang_getCursorLocation(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __m128i *v8; // rbx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbp
  __int32 v16; // r12d
  __int64 v17; // rdx
  char v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  unsigned __int16 *v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const __m128i *v26; // rdx
  const __m128i *v27; // kr00_8
  __int32 v28; // ebp
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i *result; // rax
  __int64 v33; // rax
  int v34; // edx
  __int32 v35; // ebp
  __int64 v36; // rax
  int v37; // edx
  __m128i v38; // xmm0
  int v39; // edx
  __int64 v40; // rax
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  __m128i v46; // xmm0
  __m128i v47; // [rsp+0h] [rbp-58h]
  __m128i v48; // [rsp+0h] [rbp-58h]
  __m128i v49; // [rsp+0h] [rbp-58h]
  __m128i v50; // [rsp+0h] [rbp-58h]
  __m128i v51; // [rsp+0h] [rbp-58h]
  __m128i v52; // [rsp+0h] [rbp-58h]
  __m128i v53; // [rsp+0h] [rbp-58h]
  __m128i v54; // [rsp+0h] [rbp-58h]
  __m128i v55; // [rsp+0h] [rbp-58h]
  __m128i v56; // [rsp+0h] [rbp-58h]
  __m128i v57; // [rsp+0h] [rbp-58h]
  __m128i v58; // [rsp+0h] [rbp-58h]
  __m128i v59; // [rsp+0h] [rbp-58h]
  __m128i v60; // [rsp+0h] [rbp-58h]
  __m128i v61; // [rsp+0h] [rbp-58h]
  __m128i v62; // [rsp+0h] [rbp-58h]
  __m128i v63; // [rsp+0h] [rbp-58h]
  __m128i v64; // [rsp+0h] [rbp-58h]
  __m128i v65; // [rsp+0h] [rbp-58h]
  __m128i v66; // [rsp+0h] [rbp-58h]
  __m128i v67; // [rsp+0h] [rbp-58h]
  __m128i v68; // [rsp+10h] [rbp-48h]
  _BYTE v69[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v70; // [rsp+38h] [rbp-20h]

  v8 = a1;
  v9 = a7 - 40;
  if ( (unsigned int)(a7 - 40) > 0xA )
  {
    if ( (unsigned int)(a7 - 100) <= 0x38 )
    {
      v50 = _mm_loadu_si128((const __m128i *)&a7);
      v22 = (unsigned __int16 *)sub_63A260(
                                  (_DWORD)a1,
                                  a2,
                                  (int)a7 - 100,
                                  a4,
                                  a5,
                                  a6,
                                  v50.m128i_i32[0],
                                  v50.m128i_i32[2],
                                  _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
      while ( 2 )
      {
        v26 = (const __m128i *)*v22;
        LOWORD(v26) = (unsigned __int16)v26 & 0x1FF;
        if ( (_WORD)v26 == 13 )
        {
          v28 = *((_DWORD *)v22 + 5);
        }
        else
        {
          LOWORD(v26) = ((_WORD)v26 + 479) & 0x1FF;
          v27 = v26;
          LODWORD(v26) = (unsigned __int16)v26;
          switch ( (unsigned __int64)v27 )
          {
            case 0uLL:
            case 1uLL:
            case 2uLL:
              v28 = *((_DWORD *)v22 + 8);
              break;
            case 0xEuLL:
              v28 = *((_DWORD *)v22 + 10);
              break;
            case 0x27uLL:
              v28 = *((_DWORD *)v22 + 1);
              break;
            case 0x2FuLL:
              v22 = *((unsigned __int16 **)v22 + 2);
              continue;
            default:
              LODWORD(a1) = (_DWORD)v22;
              v28 = sub_AC6DA0(v22);
              break;
          }
        }
        break;
      }
    }
    else
    {
      v10 = (unsigned int)(a7 - 200);
      if ( (unsigned int)v10 <= 0x83 )
      {
        v53 = _mm_loadu_si128((const __m128i *)&a7);
        v36 = sub_63A2A0(
                (_DWORD)a1,
                a2,
                v10,
                a4,
                a5,
                a6,
                v53.m128i_i32[0],
                v53.m128i_i32[2],
                _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
        LODWORD(a1) = v36;
        v28 = sub_AC6DA0(v36);
      }
      else
      {
        switch ( (_DWORD)a7 )
        {
          case 0x1F4:
            v63 = _mm_loadu_si128((const __m128i *)&a7);
            v68 = _mm_loadu_si128((const __m128i *)&a8);
            v28 = sub_639F60(
                    (_DWORD)a1,
                    a2,
                    v10,
                    a4,
                    a5,
                    a6,
                    v63.m128i_i32[0],
                    v63.m128i_i32[2],
                    v68.m128i_i32[0],
                    v68.m128i_i64[1]);
            break;
          case 0x1F6:
            v46 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
            a1 = (__m128i *)v69;
            *(_QWORD *)v69 = __PAIR64__(DWORD1(a7), 502);
            *(__m128i *)&v69[8] = v46;
            v70 = *((_QWORD *)&a8 + 1);
            v28 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))sub_63A0B0)(
                    v69,
                    a2,
                    v10,
                    a4,
                    a5,
                    a6);
            break;
          case 0x1F5:
            v66 = _mm_loadu_si128((const __m128i *)&a7);
            v28 = *(_DWORD *)(sub_639FD0((_DWORD)a1, a2, v10, a4, a5, a6, v66.m128i_i32[0], v66.m128i_i64[1]) + 4);
            break;
          case 0x1F7:
            v67 = _mm_loadu_si128((const __m128i *)&a7);
            v28 = *(_DWORD *)(sub_63A110((_DWORD)a1, a2, v10, a4, a5, a6, v67.m128i_i32[0], v67.m128i_i64[1]) + 4);
            break;
          default:
            if ( (unsigned int)(a7 - 400) > 0x29 )
            {
              if ( (unsigned int)(a7 - 1) <= 0x26 || (unsigned int)(a7 - 600) <= 4 )
              {
                v47 = _mm_loadu_si128((const __m128i *)&a7);
                v11 = sub_63A250((_DWORD)a1, a2, (int)a7 - 1, a4, a5, a6, v47.m128i_i32[0], v47.m128i_i64[1]);
                v15 = v11;
                if ( v11 )
                {
                  v16 = *(_DWORD *)(v11 + 24);
                  LODWORD(v17) = *(_BYTE *)(v11 + 28) & 0x7F;
                  if ( (unsigned int)(v17 - 38) <= 6 )
                  {
                    v48 = _mm_loadu_si128((const __m128i *)&a7);
                    v18 = sub_63A940(
                            (_DWORD)a1,
                            a2,
                            v17,
                            v12,
                            v13,
                            v14,
                            v48.m128i_i32[0],
                            v48.m128i_i32[2],
                            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
                    LODWORD(v17) = *(_BYTE *)(v15 + 28) & 0x7F;
                    if ( !v18 )
                      v16 = *(_DWORD *)(v15 + 24);
                  }
                  if ( (_BYTE)v17 == 16 )
                  {
                    if ( (*(_BYTE *)(v15 + 29) & 2) != 0 )
                    {
                      v16 = *(_DWORD *)(v15 + 24);
                    }
                    else
                    {
                      v17 = *(unsigned int *)(v15 + 104);
                      if ( ((*(_BYTE *)(v15 + 60) >> 2) & 3) != 0 )
                      {
                        a2 = *(_QWORD *)(v15 + 40);
                        LODWORD(a1) = 0;
                        v16 = sub_AC26A0(
                                0,
                                a2,
                                ((*(_BYTE *)(v15 + 60) >> 2) & 3) == 2,
                                *(_QWORD *)(v15 + 96),
                                *(unsigned int *)(v15 + 104),
                                *(unsigned int *)(v15 + 108));
                      }
                      else
                      {
                        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 96) + 8 * v17);
                      }
                    }
                  }
                  v49 = _mm_loadu_si128((const __m128i *)&a7);
                  v19 = _mm_loadu_si128((const __m128i *)&a8);
                  v20 = sub_63A2D0(
                          (_DWORD)a1,
                          a2,
                          v17,
                          v12,
                          v13,
                          v14,
                          v49.m128i_i32[0],
                          v49.m128i_i32[2],
                          v19.m128i_i32[0],
                          v19.m128i_i64[1]);
                  if ( v16 )
                  {
                    v21 = _mm_loadu_si128((const __m128i *)(v20 + 2152));
                    v8[1].m128i_i32[0] = v16;
                    *v8 = v21;
                    return v8;
                  }
                }
              }
              goto LABEL_29;
            }
            v65 = _mm_loadu_si128((const __m128i *)&a7);
            v28 = *(_DWORD *)(sub_63A2C0(
                                (_DWORD)a1,
                                a2,
                                (int)a7 - 400,
                                a4,
                                a5,
                                a6,
                                v65.m128i_i32[0],
                                v65.m128i_i32[2],
                                _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0])
                            + 16);
            break;
        }
      }
    }
LABEL_25:
    v51 = _mm_loadu_si128((const __m128i *)&a7);
    v29 = _mm_loadu_si128((const __m128i *)&a8);
    v30 = sub_63A2D0(
            (_DWORD)a1,
            a2,
            (_DWORD)v26,
            v23,
            v24,
            v25,
            v51.m128i_i32[0],
            v51.m128i_i32[2],
            v29.m128i_i32[0],
            v29.m128i_i64[1]);
    if ( v28 )
    {
      v31 = _mm_loadu_si128((const __m128i *)(v30 + 2152));
      v8[1].m128i_i32[0] = v28;
      *v8 = v31;
      return v8;
    }
LABEL_29:
    clang_getNullLocation(v8);
    return v8;
  }
  switch ( (int)a7 )
  {
    case ')':
      v60 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639C50(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v60.m128i_i32[0],
              v60.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v43;
      if ( !v43 )
        goto LABEL_29;
      goto LABEL_33;
    case '*':
      v52 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639CC0(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v52.m128i_i32[0],
              v52.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v34;
      if ( !v34 )
        goto LABEL_29;
      goto LABEL_33;
    case '+':
      v57 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639D10(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v57.m128i_i32[0],
              v57.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v41;
      if ( !v41 )
        goto LABEL_29;
      goto LABEL_33;
    case ',':
      v56 = _mm_loadu_si128((const __m128i *)&a7);
      v40 = sub_639EB0((_DWORD)a1, a2, v9, a4, a5, a6, v56.m128i_i32[0], v56.m128i_i64[1]);
      if ( !v40 )
        goto LABEL_29;
      v26 = *(const __m128i **)(v40 + 16);
      if ( v26 )
      {
        a1 = (__m128i *)v69;
        *(__m128i *)v69 = _mm_unpacklo_epi64(_mm_loadl_epi64(v26), (__m128i)(unsigned __int64)&v26->m128i_u64[1]);
        v28 = sub_B1E2D0(v69);
      }
      else
      {
        v28 = *(_DWORD *)v40;
      }
      goto LABEL_25;
    case '-':
      v55 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639D60(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v55.m128i_i32[0],
              v55.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v39;
      if ( !v39 )
        goto LABEL_29;
      goto LABEL_33;
    case '.':
      v54 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639DB0(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v54.m128i_i32[0],
              v54.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v37;
      if ( !v37 )
        goto LABEL_29;
      goto LABEL_33;
    case '/':
      v59 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639E50(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v59.m128i_i32[0],
              v59.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v42;
      if ( !v42 )
        goto LABEL_29;
      goto LABEL_33;
    case '0':
      v58 = _mm_loadu_si128((const __m128i *)&a7);
      sub_63A140(
        (_DWORD)a1,
        a2,
        v9,
        a4,
        a5,
        a6,
        v58.m128i_i32[0],
        v58.m128i_i64[1],
        _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      goto LABEL_42;
    case '1':
      v62 = _mm_loadu_si128((const __m128i *)&a7);
      sub_63A220(
        (_DWORD)a1,
        a2,
        v9,
        a4,
        a5,
        a6,
        v62.m128i_i32[0],
        v62.m128i_i64[1],
        _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
LABEL_42:
      v28 = (int)v26;
      goto LABEL_25;
    case '2':
      v61 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639E00(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v61.m128i_i32[0],
              v61.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v44;
      if ( !v44 )
        goto LABEL_29;
      goto LABEL_33;
    default:
      v64 = _mm_loadu_si128((const __m128i *)&a7);
      v33 = sub_639C00(
              (_DWORD)a1,
              a2,
              v9,
              a4,
              a5,
              a6,
              v64.m128i_i32[0],
              v64.m128i_i64[1],
              _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
      v35 = v45;
      if ( !v45 )
        goto LABEL_29;
LABEL_33:
      v38 = _mm_loadu_si128((const __m128i *)(sub_798D40(v33) + 2152));
      a1[1].m128i_i32[0] = v35;
      *a1 = v38;
      result = a1;
      break;
  }
  return result;
}

