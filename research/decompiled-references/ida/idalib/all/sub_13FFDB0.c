unsigned __int64 __fastcall sub_13FFDB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  char *v22; // r14
  __int64 *v23; // r15
  __int64 v24; // rsi
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rax
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rdi
  __int64 j; // rax
  unsigned __int64 v42; // rax
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // rdx
  unsigned __int8 *v45; // rax
  size_t v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  unsigned __int64 *v57; // r8
  __int64 v58; // r9
  int v59; // r10d
  _QWORD *v60; // r11
  int v61; // ecx
  unsigned __int64 *v62; // [rsp+0h] [rbp-F8h]
  __int64 v63; // [rsp+18h] [rbp-E0h]
  __m128i si128; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v65; // [rsp+30h] [rbp-C8h]
  _BOOL4 v66; // [rsp+34h] [rbp-C4h]
  char *v67; // [rsp+38h] [rbp-C0h]
  __int64 v68; // [rsp+40h] [rbp-B8h]
  _QWORD *v69; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+58h] [rbp-A0h] BYREF
  void *ptr; // [rsp+60h] [rbp-98h] BYREF
  __int64 v72; // [rsp+68h] [rbp-90h]
  _BYTE v73[16]; // [rsp+70h] [rbp-88h] BYREF
  void *v74; // [rsp+80h] [rbp-78h] BYREF
  __m128i v75; // [rsp+88h] [rbp-70h]
  _BYTE v76[96]; // [rsp+98h] [rbp-60h] BYREF

  v69 = (_QWORD *)a2;
  v72 = 0x200000000LL;
  ptr = v73;
  v3 = sub_13F9800(a1, a2, (__int64)&ptr) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v3 )
  {
    v4 = v3;
    v5 = v3;
    for ( i = v3; !sub_FEF250(i) && *(_QWORD *)(i + 40); i = *(_QWORD *)(i + 40) )
      ;
    if ( (*(_BYTE *)(i + 905) & 2) != 0 )
    {
      v65 = sub_13FA250(a1, i);
      v67 = (char *)ptr;
      v22 = (char *)ptr + 8 * (unsigned int)v72;
      v66 = (*(_BYTE *)(i + 905) & 4) != 0;
      v63 = a1 + 520;
      if ( ptr == v22 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      }
      else
      {
        v68 = a1 + 440;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
        do
        {
          while ( 1 )
          {
            v23 = *((__int64 **)v22 - 1);
            v75 = _mm_load_si128(&si128);
            v24 = *v23;
            v74 = v76;
            v25 = (unsigned __int8 *)sub_228AAA0(v23 + 4, v24, 0);
            v27 = sub_13F4A30(v25, v26, (unsigned __int8 **)&v74);
            v29 = sub_13FCE90(a1, v27, v28, v5, 0, v66);
            *(_BYTE *)(v29 + 905) |= 1u;
            v5 = v29;
            v70 = v29;
            v34 = sub_13FFC60(v63, &v70, v30, v31, v32, v33);
            v35 = v65;
            v36 = v68;
            *(_DWORD *)v34 = v65;
            v70 = v23[1];
            *sub_13FDE80(v36, &v70, v37, v35, v38, v39) = v5;
            if ( (*(_BYTE *)(i + 905) & 8) != 0 && !*(_DWORD *)(v5 + 1040) )
              sub_13F4440(v5 + 1032, 4);
            if ( v74 == v76 )
              break;
            free(v74);
            v22 -= 8;
            if ( v67 == v22 )
              goto LABEL_32;
          }
          v22 -= 8;
        }
        while ( v67 != v22 );
      }
LABEL_32:
      v40 = v69;
      v75 = _mm_load_si128(&si128);
      v74 = v76;
      for ( j = v69[1]; j; j = *(_QWORD *)(v42 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v42 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v42 )
          break;
        v40 = (_QWORD *)v42;
      }
      v43 = (unsigned __int8 *)sub_228AAA0(v40 + 4, *v40, 0);
      v45 = sub_13F4A30(v43, v44, (unsigned __int8 **)&v74);
      v47 = sub_13FCE90(a1, v45, v46, v5, 0, v66);
      *(_BYTE *)(v47 + 905) |= 1u;
      v48 = v47;
      v70 = v47;
      v53 = sub_13FFC60(v63, &v70, v49, v50, v51, v52);
      v54 = v65;
      v55 = (unsigned __int64)v69;
      *(_DWORD *)v53 = v65;
      sub_FF6C00(v48, v55, v56, v54, v57, v58);
      if ( (*(_BYTE *)(i + 905) & 8) != 0 && !*(_DWORD *)(v48 + 1040) )
        sub_13F4440(v48 + 1032, 4);
      if ( v74 != v76 )
        free(v74);
      v4 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else if ( (_DWORD)v72 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v72 - 1) + 8;
      do
      {
        while ( 1 )
        {
          v14 = *(_DWORD *)(a1 + 456);
          v15 = *(_QWORD *)(*(_QWORD *)((char *)ptr + v10) + 8LL);
          v70 = v15;
          if ( !v14 )
          {
            v74 = nullptr;
            goto LABEL_13;
          }
          v9 = v14 - 1;
          v8 = *(_QWORD *)(a1 + 440);
          v7 = (unsigned int)v9 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
          v12 = (_QWORD *)(v8 + 16 * v7);
          v13 = *v12;
          if ( v15 != *v12 )
            break;
LABEL_10:
          v10 += 8;
          v12[1] = v4;
          if ( v10 == v11 )
            goto LABEL_18;
        }
        v59 = 1;
        v60 = nullptr;
        if ( v13 != -4096 )
        {
          while ( 1 )
          {
            if ( v13 == -8192 && !v60 )
              v60 = v12;
            v7 = (unsigned int)v9 & (v59 + (_DWORD)v7);
            v12 = (_QWORD *)(v8 + 16LL * (unsigned int)v7);
            v13 = *v12;
            if ( v15 == *v12 )
              goto LABEL_10;
            if ( v13 == -4096 )
            {
              if ( v60 )
                v12 = v60;
              break;
            }
            ++v59;
          }
        }
        v61 = *(_DWORD *)(a1 + 448);
        v74 = v12;
        v7 = (unsigned int)(v61 + 1);
        v8 = (unsigned int)(4 * v7);
        if ( (unsigned int)v8 < 3 * v14 )
        {
          v8 = v14 >> 3;
          if ( v14 - *(_DWORD *)(a1 + 452) - (unsigned int)v7 > (unsigned int)v8 )
            goto LABEL_15;
          goto LABEL_14;
        }
LABEL_13:
        v14 *= 2;
LABEL_14:
        sub_13FDC70(a1 + 440, v14, v15, v7, v8, v9);
        sub_13F78D0((__int64 *)(a1 + 440), &v70, &v74);
        v15 = v70;
        v7 = (unsigned int)(*(_DWORD *)(a1 + 448) + 1);
        v12 = v74;
LABEL_15:
        v16 = *v12 == -4096;
        *(_DWORD *)(a1 + 448) = v7;
        if ( !v16 )
          --*(_DWORD *)(a1 + 452);
        *v12 = v15;
        v10 += 8;
        v17 = v12 + 1;
        *v17 = 0;
        *v17 = v4;
      }
      while ( v10 != v11 );
    }
LABEL_18:
    v18 = sub_13FE460(a1 + 368, (unsigned __int64 *)&v69);
    v19 = *((unsigned int *)v18 + 2);
    if ( v19 + 1 > (unsigned __int64)*((unsigned int *)v18 + 3) )
    {
      v62 = v18;
      sub_2237220(v18, v18 + 2, v19 + 1, 8);
      v18 = v62;
      v19 = *((unsigned int *)v62 + 2);
    }
    v20 = v4;
    *(_QWORD *)(*v18 + 8 * v19) = v4;
    ++*((_DWORD *)v18 + 2);
  }
  else
  {
    v20 = 0;
  }
  if ( ptr != v73 )
    free(ptr);
  return v20;
}
