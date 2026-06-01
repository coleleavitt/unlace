char __fastcall sub_B78CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbp
  __m128i *v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rbp
  __int64 v40; // rax
  size_t v41; // rdx
  _WORD *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  size_t *v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rbp
  _QWORD *v65; // rdi
  unsigned __int64 v66; // rax
  _WORD **v67; // rax
  size_t v68; // r12
  const char *v69; // rax
  size_t v70; // rdx
  size_t v71; // rax
  size_t v72; // r12
  const char *v73; // rax
  size_t v74; // rax
  __m128i v75; // [rsp+0h] [rbp-38h] BYREF
  __int64 v76; // [rsp+10h] [rbp-28h]

  v7 = *(unsigned __int8 *)(a1 + 73);
  result = 1;
  LOBYTE(v7) = (unsigned __int8)v7 >> 5;
  if ( (_BYTE)v7 != 1 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( v8 && (*(_BYTE *)(v8 + 10) & 0x20) != 0 )
      return 0;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, a4, a5, a6);
    if ( (**(_BYTE **)(a1 + 128) & 1) != 0 )
      return 0;
    v14 = *(_QWORD *)(a1 + 104);
    sub_6E4DB0((__int64 *)(v14 + 96), v14, v10, v11, v12, v13);
    if ( (**(_BYTE **)(a1 + 128) & 0x40) != 0 )
      return 0;
    if ( sub_B5ABC0(a1, v14, v15, v16, v17, v18) )
      return 0;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v19, v20, v21, v22);
    v27 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v27 + 96) & 1) != 0 )
      return 0;
    if ( *(_QWORD *)(v27 + 96) )
      return 0;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v23, v24, v25, v26);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 20LL) )
      return 0;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v28, v29, v30, v31);
    v36 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v36 + 56) & 4) != 0 )
    {
      v62 = sub_B685F0(a1);
      sub_B72B60(v36 + 40, v62);
    }
    v37 = *(__m128i **)(a1 + 104);
    v38 = *(_QWORD *)(v36 + 40);
    sub_6E4DB0(v37[6].m128i_i64, (__int64)v37, v32, v33, v34, v35);
    v39 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v39 + 56) & 4) != 0 )
    {
      v37 = (__m128i *)sub_B685F0(a1);
      sub_B72B60(v39 + 40, (__int64)v37);
    }
    if ( *(_QWORD *)(v39 + 48) - v38 > 0 )
      return 0;
    v40 = sub_B6AC30(a1 + 64);
    v45 = v40;
    if ( v40 )
    {
      if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 35 > 3 )
      {
        while ( 1 )
        {
          v46 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v45 = v46;
          if ( !v46 )
            break;
          if ( (*(_BYTE *)(v46 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        v37 = &v75;
        if ( (unsigned __int8)sub_B59650(v45, (__int64)&v75, 0, (__int64)v42) && (*(_BYTE *)(v45 + 29) & 2) == 0 )
          return 0;
        while ( 1 )
        {
          v63 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v45 = v63;
          if ( !v63 )
            break;
          if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_36;
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v47 = sub_B68690(a1, (__int64)v37, v41, (__int64)v42, v43, v44);
      v41 = *v47;
      v48 = *v47 + 8LL * *((unsigned int *)v47 + 2);
      if ( v41 < v48 )
      {
        v42 = (_WORD *)v41;
        while ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 392 )
        {
          v42 += 4;
          if ( (_WORD *)v48 == v42 )
            goto LABEL_28;
        }
        if ( (_WORD *)v48 == v42 )
          goto LABEL_28;
LABEL_45:
        while ( 1 )
        {
          v64 = *(_QWORD *)v41;
          if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) == 392 )
            break;
          v41 += 8LL;
        }
        if ( !(*(_BYTE *)(a1 + 73) >> 5) )
        {
          v65 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v65 = (_QWORD *)*v65;
          if ( !sub_B6A780((unsigned __int64)v65) )
          {
            v66 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
              v66 = *(_QWORD *)v66;
            v41 = *(unsigned __int8 *)(v66 + 8);
            LOBYTE(v41) = v41 & 0x7F;
            if ( (_BYTE)v41 )
            {
              while ( (_BYTE)v41 != 24 )
              {
                v66 = sub_B4E950(v66);
                v41 = *(_BYTE *)(v66 + 8) & 0x7F;
                if ( (*(_BYTE *)(v66 + 8) & 0x7F) == 0 )
                  goto LABEL_63;
              }
            }
            else
            {
LABEL_63:
              v68 = j__strlen("IUnknown");
              v69 = sub_971A10(a1);
              if ( v70 == v68
                && (!v70 || !memcmp(v69, "IUnknown", v70))
                && (v71 = j__strlen("00000000-0000-0000-C000-000000000046"),
                    v41 = *(unsigned int *)(v64 + 40),
                    v41 == v71)
                && (!*(_DWORD *)(v64 + 40)
                 || !memcmp(*(const void **)(v64 + 48), "00000000-0000-0000-C000-000000000046", v41))
                || (v72 = j__strlen("IDispatch"), v73 = sub_971A10(a1), v41 == v72)
                && (!v41 || !memcmp(v73, "IDispatch", v41))
                && (v74 = j__strlen("00020400-0000-0000-C000-000000000046"),
                    v41 = *(unsigned int *)(v64 + 40),
                    v41 == v74)
                && (!*(_DWORD *)(v64 + 40)
                 || !memcmp(*(const void **)(v64 + 48), "00020400-0000-0000-C000-000000000046", v41)) )
              {
                sub_6E4DB0(
                  (__int64 *)(*(_QWORD *)(a1 + 104) + 96LL),
                  *(_QWORD *)(a1 + 104),
                  v41,
                  (__int64)v42,
                  v43,
                  v44);
                return *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) == 0;
              }
            }
          }
        }
        goto LABEL_28;
      }
      if ( v41 != v48 )
      {
        v42 = *(_WORD **)v48;
        if ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 392 )
        {
          v67 = (_WORD **)(v48 + 8);
          while ( 1 )
          {
            v42 = v67;
            if ( (_WORD **)v41 == v67 )
              goto LABEL_28;
            v42 = *v67++;
            if ( v42[18] == 392 )
              goto LABEL_45;
          }
        }
        goto LABEL_45;
      }
    }
LABEL_28:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v41, (__int64)v42, v43, v44);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) != 1 )
      return 0;
    v53 = *(_QWORD *)(a1 + 104);
    sub_6E4DB0((__int64 *)(v53 + 96), v53, v49, v50, v51, v52);
    v54 = *(_QWORD *)(a1 + 128);
    v55 = (*(_BYTE *)(v54 + 24) & 1) != 0 ? sub_B72C40(v54) : *(_QWORD *)(v54 + 24);
    v75 = _mm_loadu_si128((const __m128i *)v55);
    v76 = *(_QWORD *)(v55 + 16);
    if ( (v75.m128i_i8[12] & 1) != 0 )
      return 0;
    if ( (v75.m128i_i8[12] & 0xC) == 0xC )
    {
      if ( (v75.m128i_i8[12] & 2) != 0 )
        return 0;
    }
    else if ( (*(_BYTE *)(v55 + 12) & 0xC) != 0 )
    {
      return 0;
    }
    v56 = sub_B72090(*(__int64 **)(v55 + 16));
    v57 = sub_F3F530(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL));
    v61 = *(unsigned __int8 *)(v57 + 73);
    LOBYTE(v61) = ((unsigned __int8)v61 >> 5) - 1;
    if ( (_BYTE)v61 )
      return sub_B78CC0(v57, v53, v61, v58, v59, v60, v75.m128i_i64[0], v75.m128i_i64[1], v76);
    return 0;
  }
  return result;
}

