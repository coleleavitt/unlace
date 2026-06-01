__int64 *__fastcall sub_219B940(__int64 *a1, __int64 a2, unsigned int **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // r13d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v14; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  unsigned int v23; // ecx
  unsigned __int32 v24; // esi
  unsigned __int32 v25; // edi
  __int64 v26; // r8
  unsigned int *v27; // rbx
  __int32 v28; // r15d
  _BYTE *v29; // rbx
  unsigned int i; // ebp
  _BYTE *v31; // rax
  const char *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // [rsp+0h] [rbp-208h] BYREF
  unsigned int v48; // [rsp+8h] [rbp-200h]
  char v49; // [rsp+10h] [rbp-1F8h]
  __m128i v50[2]; // [rsp+20h] [rbp-1E8h] BYREF
  __int16 v51; // [rsp+40h] [rbp-1C8h]
  __m128i v52[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int16 v53; // [rsp+70h] [rbp-198h]
  __m128i v54[3]; // [rsp+80h] [rbp-188h] BYREF
  __m128i v55[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v56; // [rsp+D0h] [rbp-138h]
  __m128i v57[2]; // [rsp+E0h] [rbp-128h] BYREF
  __int16 v58; // [rsp+100h] [rbp-108h]
  __m128i v59[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int16 v60; // [rsp+130h] [rbp-D8h]
  __m128i v61[3]; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v62[2]; // [rsp+170h] [rbp-98h] BYREF
  __int16 v63; // [rsp+190h] [rbp-78h]
  __m128i v64[2]; // [rsp+1A0h] [rbp-68h] BYREF
  __int16 v65; // [rsp+1C0h] [rbp-48h]

  v6 = a5;
  if ( (unsigned int)a4 > 0xB )
  {
    v14 = *a3;
    if ( (unsigned __int64)v14 < sub_215DEC0(a2)
      || (v18 = sub_215DEC0(a2), v17 = (__int64)(v14 + 3), (unsigned __int64)(v14 + 3) > v16 + v18) )
    {
      v64[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
      v65 = 259;
      sub_21967F0(v62[0].m128i_i64, v64[0].m128i_i64, v16, v17);
      v49 |= 1u;
      v47 = 0;
      *a1 = v62[0].m128i_i64[0];
    }
    else
    {
      v20 = *v14;
      v21 = v14[1];
      v22 = v14[2];
      v23 = *(_DWORD *)(a2 + 8);
      v24 = _byteswap_ulong(v20);
      v25 = _byteswap_ulong(v21);
      v26 = _byteswap_ulong(v22);
      if ( v23 <= 0x14 && ((0x155800uLL >> v23) & 1) != 0 )
      {
        v22 = v26;
        v21 = v25;
        v20 = v24;
      }
      v49 &= ~1u;
      v27 = *a3;
      v47 = __PAIR64__(v21, v20);
      v28 = 0;
      v48 = v22;
      v29 = v27 + 3;
      for ( i = v21 - 12; i; i -= v46 )
      {
        if ( !*v29 )
        {
          v31 = v29;
          while ( !*++v31 )
          {
            if ( v31 == &v29[i] )
              goto LABEL_16;
          }
          if ( !((_DWORD)v29 + i - (_DWORD)v31) )
            break;
          i = (_DWORD)v29 + i - (_DWORD)v31;
          v29 = v31;
        }
        ++v28;
        v44 = memchr(v29, 0, i);
        if ( !v44 || (v45 = (_DWORD)v44 - (_DWORD)v29, v45 == -1) )
        {
          v26 = 259;
          v19 = 265;
          v59[0].m128i_i32[0] = v28;
          v62[0].m128i_i64[0] = (__int64)" is not NULL terminated";
          v32 = " LC_LINKER_OPTION string #";
          v63 = 259;
          v60 = 265;
          goto LABEL_18;
        }
        if ( v45 > i )
          v45 = i;
        v46 = v45 + 1;
        v29 += v46;
      }
LABEL_16:
      if ( v28 != v22 )
      {
        v59[0].m128i_i32[0] = v22;
        v63 = 259;
        v60 = 265;
        v62[0].m128i_i64[0] = (__int64)" does not match number of strings";
        v32 = " LC_LINKER_OPTION string count ";
LABEL_18:
        v55[0].m128i_i64[0] = (__int64)v32;
        v53 = 265;
        v51 = 259;
        v56 = 259;
        v50[0].m128i_i64[0] = (__int64)"load command ";
        v52[0].m128i_i32[0] = v6;
        sub_A41580(v54, v50, v52, 259, v26, v19);
        sub_A41580(v57, v54, v55, v33, v34, v35);
        sub_A41580(v61, v57, v59, v36, v37, v38);
        sub_A41580(v64, v61, v62, v39, v40, v41);
        sub_21967F0(a1, v64[0].m128i_i64, v42, v43);
        goto LABEL_20;
      }
      *a1 = 0;
    }
LABEL_20:
    sub_219B920((__int64 *)&v47);
  }
  else
  {
    v58 = 259;
    v62[0].m128i_i64[0] = (__int64)" LC_LINKER_OPTION cmdsize too small";
    v60 = 265;
    v63 = 259;
    v59[0].m128i_i32[0] = a5;
    v57[0].m128i_i64[0] = (__int64)"load command ";
    sub_A41580(v61, v57, v59, a4, a5, a6);
    sub_A41580(v64, v61, v62, v8, v9, v10);
    sub_21967F0(a1, v64[0].m128i_i64, v11, v12);
  }
  return a1;
}
