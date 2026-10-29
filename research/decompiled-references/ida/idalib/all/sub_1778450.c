__int64 __fastcall sub_1778450(unsigned int *a1, __int64 a2, unsigned int a3, __m128 a4)
{
  __int64 *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // r8
  char v12; // al
  _QWORD *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // esi
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned int v27; // eax
  unsigned int v28; // edi
  __int64 v29; // r8
  unsigned int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rax
  const __m128i *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128i v36; // rax
  __m128 v37; // xmm0
  unsigned __int64 v38; // r15
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int *v42; // rdx
  size_t v43; // r15
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // r10d
  __int64 *v48; // r11
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // eax
  unsigned int v52; // esi
  __int64 v53; // rdi
  unsigned int v54; // r13d
  __int64 *v55; // r8
  int v56; // r9d
  __int64 *v57; // r9
  int v58; // r10d
  __m128i v59; // [rsp+0h] [rbp-B8h] BYREF
  void *v60; // [rsp+10h] [rbp-A8h]
  unsigned int v61; // [rsp+1Ch] [rbp-9Ch]
  __int64 v62; // [rsp+20h] [rbp-98h] BYREF
  unsigned int *v63; // [rsp+28h] [rbp-90h]
  __m128 v64; // [rsp+30h] [rbp-88h] BYREF
  void *v65; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _DWORD v67[9]; // [rsp+58h] [rbp-60h] BYREF
  char v68; // [rsp+7Ch] [rbp-3Ch]

  v7 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v7 = (__int64 *)v7[4];
  if ( a3 && *(_BYTE *)(*(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
  {
    v62 = *v7;
    v63 = (unsigned int *)(v7 + 1);
    v65 = v67;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v67[8] = 0;
    v68 = 0;
    if ( (unsigned __int64)(unsigned int)sub_F6C560(*v7) > si128.m128i_i64[0] )
      sub_1EA60C0(&v65);
    v32 = sub_1743190((__int64)&v62);
    v60 = (void *)sub_17687F0(a1, (__int64)&v65, v32, v33, v34, v35);
    if ( ((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (v61 = *v63,
          v36.m128i_i64[0] = sub_1743190((__int64)&v62),
          v59 = v36,
          v37 = (__m128)_mm_load_si128(&v59),
          v59.m128i_i64[0] = (__int64)&v64,
          v64 = v37,
          v38 = (unsigned __int64)(unsigned int)sub_F6CE20((__int64 *)&v64) << 32,
          v39 = sub_F6CCB0((__int64 *)v59.m128i_i64[0], v37),
          v40 = sub_1E503F0(*(_QWORD *)a1, v60, v38 | v39, v61, a3),
          v41 = v40,
          (v40 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
    {
      if ( v65 && v65 != v67 )
        operator delete[](v65);
      return 0;
    }
    sub_1EA6140(&v65, v40, 4, 4);
    *v42 = *v63;
    v43 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v8 = (__int64)sub_A81BC0(
                    *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                    v41,
                    si128.m128i_i32[0] - si128.m128i_i32[2],
                    v44,
                    v45,
                    v46);
    v60 = v65;
    memcpy((void *)(v8 + 8), (char *)v65 + si128.m128i_i64[1], v43);
    if ( v60 && v60 != v67 )
      operator delete[](v60);
  }
  else
  {
    v8 = (__int64)sub_176A140(a1, (void **)v7, a4);
  }
  if ( v8 )
  {
    if ( v7 == (__int64 *)v8 )
      return a2;
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 24);
    v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v12 = *(_BYTE *)(a2 + 96) & 7;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v11 = 0;
    v13 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v9 & 4) != 0 )
      v13 = (_QWORD *)*v13;
    v8 = sub_B74530(
           *(_QWORD *)(*(_QWORD *)a1 + 248LL),
           (__int64)v13,
           *(_DWORD *)(a2 + 64),
           v10,
           v11,
           *(_QWORD *)v8,
           v8,
           v12,
           0);
    v16 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( v16 == 255 )
    {
      v16 = sub_B74880(a2);
      LOBYTE(v17) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
      {
LABEL_15:
        v18 = *(_DWORD *)(v8 + 96) & 0xFFF01FFF;
        v19 = (unsigned int)v18 | ((v17 & 0x7F) << 13);
        *(_DWORD *)(v8 + 96) = v19;
        if ( v16 > 0xFE )
        {
          sub_B74850(v8, v16);
          v21 = a1[6];
          v20 = (__int64)(a1 + 2);
          if ( !v21 )
            goto LABEL_22;
        }
        else
        {
          v20 = (__int64)(a1 + 2);
          *(_WORD *)(v8 + 98) = *(_WORD *)(v8 + 98) & 0xF00F | (16 * (unsigned __int8)v16);
          v21 = a1[6];
          if ( !v21 )
            goto LABEL_22;
        }
        v15 = v21 - 1;
        v22 = *((_QWORD *)a1 + 1);
        v23 = v15 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v24 = (__int64 *)(v22 + 16LL * v23);
        v25 = *v24;
        if ( a2 == *v24 )
        {
LABEL_18:
          v24[1] = v8;
          return v8;
        }
        v47 = 1;
        v48 = nullptr;
        if ( v25 != -4096 )
        {
          while ( 1 )
          {
            if ( !v48 && v25 == -8192 )
              v48 = v24;
            v23 = v15 & (v47 + v23);
            v24 = (__int64 *)(v22 + 16LL * v23);
            v25 = *v24;
            if ( a2 == *v24 )
              goto LABEL_18;
            if ( v25 == -4096 )
              break;
            ++v47;
          }
          if ( v48 )
            v24 = v48;
        }
        v19 = a1[4] + 1;
        v18 = 3 * v21;
        v14 = (unsigned int)(4 * v19);
        if ( (unsigned int)v14 < (unsigned int)v18 )
        {
          v49 = v21 - a1[5] - (unsigned int)v19;
          v50 = v21 >> 3;
          if ( (unsigned int)v49 > (unsigned int)v50 )
          {
LABEL_42:
            v31 = *v24;
            goto LABEL_43;
          }
          sub_1748150(v20, v21, v19, v49, v50, v15);
          v51 = a1[6];
          if ( v51 )
          {
            v52 = v51 - 1;
            v53 = *((_QWORD *)a1 + 1);
            v54 = (v51 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
            LODWORD(v19) = a1[4] + 1;
            v24 = (__int64 *)(v53 + 16LL * v54);
            v31 = *v24;
            if ( a2 == *v24 )
            {
LABEL_43:
              a1[4] = v19;
              if ( v31 != -4096 )
                --a1[5];
              goto LABEL_45;
            }
            if ( v31 != -4096 )
            {
              v55 = (__int64 *)(v53 + 16LL * v54);
              v56 = 1;
              v24 = nullptr;
              while ( 1 )
              {
                if ( v31 == -8192 && !v24 )
                  v24 = v55;
                v54 = v52 & (v56 + v54);
                v55 = (__int64 *)(v53 + 16LL * v54);
                v31 = *v55;
                if ( a2 == *v55 )
                {
                  v24 = (__int64 *)(v53 + 16LL * v54);
                  goto LABEL_43;
                }
                if ( v31 == -4096 )
                  break;
                ++v56;
              }
              if ( v24 )
                goto LABEL_42;
              v24 = (__int64 *)(v53 + 16LL * v54);
            }
LABEL_25:
            a1[4] = v19;
LABEL_45:
            *v24 = a2;
            v24[1] = 0;
            goto LABEL_18;
          }
          goto LABEL_78;
        }
LABEL_22:
        sub_1748150(v20, 2 * v21, v19, v18, v14, v15);
        v27 = a1[6];
        if ( v27 )
        {
          v28 = v27 - 1;
          v29 = *((_QWORD *)a1 + 1);
          v30 = (v27 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          LODWORD(v19) = a1[4] + 1;
          v24 = (__int64 *)(v29 + 16LL * v30);
          v31 = *v24;
          if ( a2 == *v24 )
            goto LABEL_43;
          if ( v31 != -4096 )
          {
            v57 = (__int64 *)(v29 + 16LL * (v28 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
            v58 = 1;
            v24 = nullptr;
            while ( 1 )
            {
              if ( !v24 && v31 == -8192 )
                v24 = v57;
              v30 = v28 & (v58 + v30);
              v57 = (__int64 *)(v29 + 16LL * v30);
              v31 = *v57;
              if ( a2 == *v57 )
              {
                v24 = (__int64 *)(v29 + 16LL * v30);
                goto LABEL_43;
              }
              if ( v31 == -4096 )
                break;
              ++v58;
            }
            if ( v24 )
              goto LABEL_42;
            v24 = (__int64 *)(v29 + 16LL * v30);
          }
          goto LABEL_25;
        }
LABEL_78:
        ++a1[4];
        BUG();
      }
    }
    else
    {
      LOBYTE(v17) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        goto LABEL_15;
    }
    v17 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
    goto LABEL_15;
  }
  return v8;
}
