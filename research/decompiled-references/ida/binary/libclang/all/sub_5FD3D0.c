unsigned __int64 __fastcall sub_5FD3D0(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edx
  int v9; // edx
  unsigned __int64 result; // rax
  __int64 v11; // rbp
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  int v24; // r13d
  __int64 v25; // rax
  char v26; // dl
  int v27; // ebx
  int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned int v38; // r12d
  __int64 v39; // rsi
  __int64 v40; // rbx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int64 *v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  __int64 v55; // rax
  unsigned __int64 *v56; // r14
  __int64 *v57; // rdi
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 *v61; // rdi
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __m128i v65; // [rsp+0h] [rbp-68h]
  __m128i v66; // [rsp+0h] [rbp-68h]
  __m128i v67; // [rsp+0h] [rbp-68h]
  __m128i v68; // [rsp+0h] [rbp-68h]
  __m128i v69; // [rsp+0h] [rbp-68h]
  __m128i v70; // [rsp+0h] [rbp-68h]
  __m128i v71; // [rsp+0h] [rbp-68h]
  __m128i v72; // [rsp+0h] [rbp-68h]
  __m128i v73; // [rsp+0h] [rbp-68h]
  __m128i v74; // [rsp+0h] [rbp-68h]
  __m128i v75; // [rsp+0h] [rbp-68h]
  __m128i v76; // [rsp+0h] [rbp-68h]
  __m128i v77; // [rsp+0h] [rbp-68h]
  __m128i v78; // [rsp+0h] [rbp-68h]
  __m128i v79; // [rsp+0h] [rbp-68h]
  __m128i v80; // [rsp+0h] [rbp-68h]
  __m128i v81; // [rsp+0h] [rbp-68h]
  __m128i v82; // [rsp+0h] [rbp-68h]
  __m128i v83; // [rsp+0h] [rbp-68h]
  __m128i v84; // [rsp+0h] [rbp-68h]
  __m128i v85; // [rsp+0h] [rbp-68h]
  __m128i v86; // [rsp+0h] [rbp-68h]
  __m128i v87; // [rsp+10h] [rbp-58h]
  __m128i v88; // [rsp+10h] [rbp-58h]
  __m128i v89; // [rsp+10h] [rbp-58h]
  _DWORD v90[2]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v91; // [rsp+28h] [rbp-40h]
  __int64 v92; // [rsp+38h] [rbp-30h]

  v8 = a7 - 40;
  if ( (unsigned int)(a7 - 40) <= 0xA )
  {
    switch ( (int)a7 )
    {
      case ')':
        v79 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639C50(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v79.m128i_i32[0],
          v79.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '*':
        v78 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639CC0(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v78.m128i_i32[0],
          v78.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '+':
        v77 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639D10(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v77.m128i_i32[0],
          v77.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case ',':
        v76 = _mm_loadu_si128((const __m128i *)&a7);
        return *(_QWORD *)sub_639EB0(a1, a2, v8, a4, a5, a6, v76.m128i_i32[0], v76.m128i_i64[1]);
      case '-':
        v75 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639D60(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v75.m128i_i32[0],
          v75.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '.':
        v74 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639DB0(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v74.m128i_i32[0],
          v74.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '/':
        v73 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639E50(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v73.m128i_i32[0],
          v73.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '0':
        v72 = _mm_loadu_si128((const __m128i *)&a7);
        sub_63A140(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v72.m128i_i32[0],
          v72.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '1':
        v71 = _mm_loadu_si128((const __m128i *)&a7);
        sub_63A220(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v71.m128i_i32[0],
          v71.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      case '2':
        v70 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639E00(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v70.m128i_i32[0],
          v70.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
        goto LABEL_24;
      default:
        v81 = _mm_loadu_si128((const __m128i *)&a7);
        sub_639C00(
          a1,
          a2,
          v8,
          a4,
          a5,
          a6,
          v81.m128i_i32[0],
          v81.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
LABEL_24:
        result = (v19 << 32) | (unsigned int)v19;
        break;
    }
    return result;
  }
  if ( (unsigned int)(a7 - 100) <= 0x38 )
  {
    v67 = _mm_loadu_si128((const __m128i *)&a7);
    v18 = sub_63A260(
            a1,
            a2,
            (int)a7 - 100,
            a4,
            a5,
            a6,
            v67.m128i_i32[0],
            v67.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    return sub_AC7B80(v18);
  }
  if ( (unsigned int)(a7 - 200) <= 0x83 )
  {
    v69 = _mm_loadu_si128((const __m128i *)&a7);
    v18 = sub_63A2A0(
            a1,
            a2,
            (int)a7 - 200,
            a4,
            a5,
            a6,
            v69.m128i_i32[0],
            v69.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    return sub_AC7B80(v18);
  }
  v9 = a7 - 400;
  if ( (unsigned int)(a7 - 400) <= 0x29 )
  {
    v68 = _mm_loadu_si128((const __m128i *)&a7);
    return *(_QWORD *)(sub_63A2C0(
                         a1,
                         a2,
                         v9,
                         a4,
                         a5,
                         a6,
                         v68.m128i_i32[0],
                         v68.m128i_i32[2],
                         _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0])
                     + 16);
  }
  switch ( (_DWORD)a7 )
  {
    case 0x1F4:
      return sub_639F60(a1, a2, v9, a4, a5, a6, 500, DWORD2(a7), a8, *((__int64 *)&a8 + 1));
    case 0x1F6:
      v82 = _mm_loadu_si128((const __m128i *)&a7);
      v87 = _mm_loadu_si128((const __m128i *)&a8);
      v30 = sub_63A2F0(a1, a2, v9, a4, a5, a6, v82.m128i_i32[0], v82.m128i_i32[2], v87.m128i_i32[0], v87.m128i_i64[1]);
      v31 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
      v90[0] = 502;
      v32 = v30;
      v91 = v31;
      v90[1] = DWORD1(a7);
      v92 = *((_QWORD *)&a8 + 1);
      v37 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64, __int64, __int64))sub_63A0B0)(
              v90,
              a2,
              v33,
              v34,
              v35,
              v36);
      v38 = v37;
      v39 = HIDWORD(v37);
LABEL_44:
      v40 = (unsigned int)sub_FEDDA0(v32, v39);
      return (v40 << 32) | (unsigned int)sub_FEDDA0(v32, v38);
    case 0x1F5:
      v83 = _mm_loadu_si128((const __m128i *)&a7);
      v88 = _mm_loadu_si128((const __m128i *)&a8);
      v32 = sub_63A2F0(a1, a2, v9, a4, a5, a6, v83.m128i_i32[0], v83.m128i_i32[2], v88.m128i_i32[0], v88.m128i_i64[1]);
      v84 = _mm_loadu_si128((const __m128i *)&a7);
      v45 = sub_639FD0(a1, a2, v41, v42, v43, v44, v84.m128i_i32[0], v84.m128i_i64[1]);
LABEL_46:
      v38 = *(_DWORD *)(v45 + 4);
      v39 = *(unsigned int *)(v45 + 8);
      goto LABEL_44;
    case 0x1F7:
      v85 = _mm_loadu_si128((const __m128i *)&a7);
      v89 = _mm_loadu_si128((const __m128i *)&a8);
      v32 = sub_63A2F0(a1, a2, v9, a4, a5, a6, v85.m128i_i32[0], v85.m128i_i32[2], v89.m128i_i32[0], v89.m128i_i64[1]);
      v86 = _mm_loadu_si128((const __m128i *)&a7);
      v45 = sub_63A110(a1, a2, v46, v47, v48, v49, v86.m128i_i32[0], v86.m128i_i64[1]);
      goto LABEL_46;
    case 0x15E:
      v80 = _mm_loadu_si128((const __m128i *)&a7);
      v20 = _mm_loadu_si128((const __m128i *)&a8);
      v21 = sub_63A2F0(a1, a2, v9, a4, a5, a6, v80.m128i_i32[0], v80.m128i_i32[2], v20.m128i_i32[0], v20.m128i_i64[1]);
      v22 = *(_QWORD *)(v21 + 32);
      v23 = v21;
      v24 = *(_DWORD *)(v22 + 448);
      LOBYTE(v90[0]) = 0;
      if ( (unsigned int)(v24 + 1) > 1 )
      {
        if ( v24 < 0 )
        {
          v50 = (unsigned int)(-2 - v24);
          v51 = *(_QWORD *)(*(_QWORD *)(v22 + 256) + 8LL * ((unsigned int)(-2 - v24) >> 6));
          if ( _bittest64(&v51, v50) )
          {
            v52 = (unsigned __int64 *)(*(_QWORD *)(v22 + 208) + 8 * ((unsigned __int64)(int)v50 >> 5));
            if ( !*v52 )
            {
              v57 = (__int64 *)(*(_QWORD *)(v22 + 224) & 0xFFFFFFFFFFFFFFF8LL);
              v58 = *v57;
              v57[10] += 768;
              v59 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v57[1] >= v59 + 768 && v58 )
                *v57 = v59 + 768;
              else
                v59 = sub_5F8390((__int64)v57, 768, 3);
              *v52 = v59;
              v60 = v59 + 768;
              do
              {
                v59 += 24LL;
                *(_DWORD *)(v59 - 24) = 0;
                *(_OWORD *)(v59 - 16) = 0;
              }
              while ( v60 != v59 );
            }
            v53 = *v52 + 24LL * ((-2 - (_BYTE)v24) & 0x1F);
          }
          else
          {
            v53 = sub_CA9380(v22, (unsigned int)v50, v90);
          }
          v22 = *(_QWORD *)(v23 + 32);
          if ( LOBYTE(v90[0]) || !v53 || *(char *)(v53 + 3) < 0 )
            v27 = 0;
          else
            v27 = *(_DWORD *)v53 & 0x7FFFFFFF;
          LOBYTE(v90[0]) = 0;
          v54 = (unsigned int)(-2 - v24);
          v55 = *(_QWORD *)(*(_QWORD *)(v22 + 256) + 8LL * ((unsigned int)(-2 - v24) >> 6));
          if ( _bittest64(&v55, v54) )
          {
            v56 = (unsigned __int64 *)(*(_QWORD *)(v22 + 208) + 8 * ((unsigned __int64)(int)v54 >> 5));
            if ( !*v56 )
            {
              v61 = (__int64 *)(*(_QWORD *)(v22 + 224) & 0xFFFFFFFFFFFFFFF8LL);
              v62 = *v61;
              v61[10] += 768;
              v63 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v61[1] >= v63 + 768 && v62 )
                *v61 = v63 + 768;
              else
                v63 = sub_5F8390((__int64)v61, 768, 3);
              *v56 = v63;
              v64 = v63 + 768;
              do
              {
                v63 += 24LL;
                *(_DWORD *)(v63 - 24) = 0;
                *(_OWORD *)(v63 - 16) = 0;
              }
              while ( v64 != v63 );
            }
            v25 = *v56 + 24LL * ((-2 - (_BYTE)v24) & 0x1F);
          }
          else
          {
            v25 = sub_CA9380(v22, (unsigned int)v54, v90);
          }
          if ( LOBYTE(v90[0]) || !v25 )
            goto LABEL_49;
          v26 = *(_BYTE *)(v25 + 3);
          goto LABEL_38;
        }
        v25 = *(_QWORD *)(v22 + 184) + 24LL * v24;
        if ( *(char *)(v25 + 3) >= 0 )
        {
          v26 = *(_BYTE *)(v25 + 3);
          v27 = *(_DWORD *)v25 & 0x7FFFFFFF;
LABEL_38:
          if ( v26 >= 0 )
          {
            v28 = *(_DWORD *)v25 & 0x7FFFFFFF;
            v29 = v28 + (unsigned int)sub_CACB30(v22, (unsigned int)v24);
            return (v29 << 32) | v27 & 0x7FFFFFFF;
          }
LABEL_49:
          v29 = 0;
          return (v29 << 32) | v27 & 0x7FFFFFFF;
        }
      }
      v27 = 0;
      goto LABEL_49;
  }
  if ( (unsigned int)(a7 - 1) <= 0x26 || (a4 = a7 - 600, result = 0, (unsigned int)(a7 - 600) <= 4) )
  {
    v65 = _mm_loadu_si128((const __m128i *)&a7);
    v11 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v65.m128i_i32[0], v65.m128i_i64[1]);
    result = 0;
    if ( v11 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v17 = (unsigned int)v14;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 38 <= 6 )
      {
        v66 = _mm_loadu_si128((const __m128i *)&a7);
        if ( !(unsigned __int8)sub_63A940(
                                 v11,
                                 a2,
                                 v12,
                                 v13,
                                 v15,
                                 v16,
                                 v66.m128i_i32[0],
                                 v66.m128i_i32[2],
                                 _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]) )
          v17 = *(unsigned int *)(v11 + 24);
      }
      return v17 | v14 & 0xFFFFFFFF00000000LL;
    }
  }
  return result;
}

