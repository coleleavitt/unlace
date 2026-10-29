__int64 __fastcall sub_1C994E0(_QWORD *a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // ecx
  unsigned __int64 v13; // r8
  char v14; // al
  _QWORD *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // esi
  __int64 v24; // r8
  unsigned int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v29; // eax
  int v30; // edi
  __int64 v31; // r8
  unsigned int v32; // esi
  __int64 v33; // rcx
  __m128 si128; // xmm0
  unsigned int v35; // eax
  _BOOL8 v36; // rdi
  unsigned __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rbx
  _DWORD *v45; // rdx
  size_t v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r10d
  __int64 *v51; // r11
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  int v55; // esi
  __int64 v56; // rdi
  unsigned int v57; // r13d
  __int64 *v58; // r8
  int v59; // r9d
  __int64 *v60; // r9
  int v61; // r10d
  _BYTE *v62; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v63; // [rsp+10h] [rbp-98h]
  unsigned int v64; // [rsp+1Ch] [rbp-8Ch]
  __int64 v65[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v66; // [rsp+30h] [rbp-78h] BYREF
  __m128i v67; // [rsp+38h] [rbp-70h]
  _BYTE v68[32]; // [rsp+48h] [rbp-60h] BYREF
  int v69; // [rsp+68h] [rbp-40h]
  char v70; // [rsp+6Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = *(_QWORD *)(v8 + 32);
  if ( a3 && (v9 = *(_QWORD *)v8, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38) )
  {
    v70 = 0;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v66 = v68;
    v67 = (__m128i)si128;
    v69 = 0;
    if ( (unsigned int)sub_F6C560(*(_QWORD *)v8) > si128.m128_u64[0] )
      sub_1EA60C0(&v66);
    v35 = sub_F6C520(*(_QWORD *)(v9 + 32));
    v36 = v8 != -12;
    v37 = v8 + 12 - v36;
    v63 = sub_1C892C0(
            a1,
            (__int64)&v66,
            *(_QWORD *)(v9 + 32),
            (const __m128i *)(v35 * (v37 / v35 + v36)),
            v38,
            v39,
            si128,
            a5);
    if ( (v63 & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (v64 = *(_DWORD *)(v8 + 8),
          v40 = sub_F6C520(*(_QWORD *)(v9 + 32)),
          v65[0] = *(_QWORD *)(v9 + 32),
          v65[1] = v40 * ((v8 != -12) + v37 / v40),
          v41 = (unsigned int)sub_F6CE20(v65),
          v42 = sub_F6CCB0(v65, si128),
          v43 = sub_1E503F0(*a1, v63, (v41 << 32) | v42, v64, a3),
          v44 = v43,
          (v43 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
    {
      if ( v66 && v66 != v68 )
        operator delete[](v66);
      return 0;
    }
    sub_1EA6140(&v66, v43, 4, 4);
    *v45 = *(_DWORD *)(v8 + 8);
    v46 = v67.m128i_i64[0] - v67.m128i_i64[1];
    v10 = (__int64)sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v44, v67.m128i_i32[0] - v67.m128i_i32[2], v47, v48, v49);
    v62 = v66;
    memcpy((void *)(v10 + 8), (char *)v66 + v67.m128i_i64[1], v46);
    if ( v62 != v68 && v62 )
      operator delete[](v62);
  }
  else
  {
    v10 = (__int64)sub_1C8AA80(a1, v8, a4, a5);
  }
  if ( v10 )
  {
    if ( v8 == v10 )
      return a2;
    v11 = *(_QWORD *)(a2 + 16);
    v12 = *(_DWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_BYTE *)(a2 + 96) & 7;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v13 = 0;
    v15 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v11 & 4) != 0 )
      v15 = (_QWORD *)*v15;
    v10 = sub_B74530(
            *(_QWORD *)(*a1 + 248LL),
            (__int64)v15,
            *(_DWORD *)(a2 + 64),
            v12,
            v13,
            *(_QWORD *)v10,
            v10,
            v14,
            0);
    v18 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( v18 == 255 )
    {
      v18 = sub_B74880(a2);
      LOBYTE(v19) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
      {
LABEL_15:
        v20 = *(_DWORD *)(v10 + 96) & 0xFFF01FFF;
        v21 = (unsigned int)v20 | ((v19 & 0x7F) << 13);
        *(_DWORD *)(v10 + 96) = v21;
        if ( v18 > 0xFE )
        {
          sub_B74850(v10, v18);
          v23 = *((_DWORD *)a1 + 6);
          v22 = (__int64)(a1 + 1);
          if ( !v23 )
            goto LABEL_22;
        }
        else
        {
          v22 = (__int64)(a1 + 1);
          *(_WORD *)(v10 + 98) = *(_WORD *)(v10 + 98) & 0xF00F | (16 * (unsigned __int8)v18);
          v23 = *((_DWORD *)a1 + 6);
          if ( !v23 )
            goto LABEL_22;
        }
        v17 = v23 - 1;
        v24 = a1[1];
        v25 = v17 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v26 = (__int64 *)(v24 + 16LL * v25);
        v27 = *v26;
        if ( a2 == *v26 )
        {
LABEL_18:
          v26[1] = v10;
          return v10;
        }
        v50 = 1;
        v51 = nullptr;
        if ( v27 != -4096 )
        {
          while ( 1 )
          {
            if ( v27 == -8192 && !v51 )
              v51 = v26;
            v25 = v17 & (v50 + v25);
            v26 = (__int64 *)(v24 + 16LL * v25);
            v27 = *v26;
            if ( a2 == *v26 )
              goto LABEL_18;
            if ( v27 == -4096 )
              break;
            ++v50;
          }
          if ( v51 )
            v26 = v51;
        }
        v21 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
        v20 = 3 * v23;
        v16 = (unsigned int)(4 * v21);
        if ( (unsigned int)v16 < (unsigned int)v20 )
        {
          v52 = v23 - *((_DWORD *)a1 + 5) - (unsigned int)v21;
          v53 = v23 >> 3;
          if ( (unsigned int)v52 > (unsigned int)v53 )
          {
LABEL_42:
            v33 = *v26;
            goto LABEL_43;
          }
          sub_1748150(v22, v23, v21, v52, v53, v17);
          v54 = *((_DWORD *)a1 + 6);
          if ( v54 )
          {
            v55 = v54 - 1;
            v56 = a1[1];
            v57 = (v54 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
            LODWORD(v21) = *((_DWORD *)a1 + 4) + 1;
            v26 = (__int64 *)(v56 + 16LL * v57);
            v33 = *v26;
            if ( a2 == *v26 )
            {
LABEL_43:
              *((_DWORD *)a1 + 4) = v21;
              if ( v33 != -4096 )
                --*((_DWORD *)a1 + 5);
              goto LABEL_45;
            }
            if ( v33 != -4096 )
            {
              v58 = (__int64 *)(v56 + 16LL * v57);
              v59 = 1;
              v26 = nullptr;
              while ( 1 )
              {
                if ( v33 == -8192 && !v26 )
                  v26 = v58;
                v57 = v55 & (v59 + v57);
                v58 = (__int64 *)(v56 + 16LL * v57);
                v33 = *v58;
                if ( a2 == *v58 )
                {
                  v26 = (__int64 *)(v56 + 16LL * v57);
                  goto LABEL_43;
                }
                if ( v33 == -4096 )
                  break;
                ++v59;
              }
              if ( v26 )
                goto LABEL_42;
              v26 = (__int64 *)(v56 + 16LL * v57);
            }
LABEL_25:
            *((_DWORD *)a1 + 4) = v21;
LABEL_45:
            *v26 = a2;
            v26[1] = 0;
            goto LABEL_18;
          }
          goto LABEL_78;
        }
LABEL_22:
        sub_1748150(v22, 2 * v23, v21, v20, v16, v17);
        v29 = *((_DWORD *)a1 + 6);
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = a1[1];
          v32 = (v29 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          LODWORD(v21) = *((_DWORD *)a1 + 4) + 1;
          v26 = (__int64 *)(v31 + 16LL * v32);
          v33 = *v26;
          if ( a2 == *v26 )
            goto LABEL_43;
          if ( v33 != -4096 )
          {
            v60 = (__int64 *)(v31 + 16LL * (v30 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
            v61 = 1;
            v26 = nullptr;
            while ( 1 )
            {
              if ( !v26 && v33 == -8192 )
                v26 = v60;
              v32 = v30 & (v61 + v32);
              v60 = (__int64 *)(v31 + 16LL * v32);
              v33 = *v60;
              if ( a2 == *v60 )
              {
                v26 = (__int64 *)(v31 + 16LL * v32);
                goto LABEL_43;
              }
              if ( v33 == -4096 )
                break;
              ++v61;
            }
            if ( v26 )
              goto LABEL_42;
            v26 = (__int64 *)(v31 + 16LL * v32);
          }
          goto LABEL_25;
        }
LABEL_78:
        ++*((_DWORD *)a1 + 4);
        BUG();
      }
    }
    else
    {
      LOBYTE(v19) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        goto LABEL_15;
    }
    v19 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
    goto LABEL_15;
  }
  return v10;
}
