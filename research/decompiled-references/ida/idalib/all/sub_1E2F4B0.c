__int64 __fastcall sub_1E2F4B0(_QWORD *a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  __int64 *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // ecx
  unsigned __int64 v12; // r8
  char v13; // al
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v28; // eax
  int v29; // edi
  __int64 v30; // r8
  unsigned int v31; // esi
  __int64 v32; // rcx
  __m128 si128; // xmm0
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i v37; // rax
  __m128 v38; // xmm0
  unsigned __int64 v39; // r15
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned int *v43; // rdx
  size_t v44; // r15
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // r10d
  __int64 *v49; // r11
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // eax
  int v53; // esi
  __int64 v54; // rdi
  unsigned int v55; // r13d
  __int64 *v56; // r8
  int v57; // r9d
  __int64 *v58; // r9
  int v59; // r10d
  __m128i v60; // [rsp+0h] [rbp-B8h] BYREF
  void *v61; // [rsp+10h] [rbp-A8h]
  unsigned int v62; // [rsp+1Ch] [rbp-9Ch]
  __int64 v63; // [rsp+20h] [rbp-98h] BYREF
  unsigned int *v64; // [rsp+28h] [rbp-90h]
  __m128 v65; // [rsp+30h] [rbp-88h] BYREF
  void *v66; // [rsp+40h] [rbp-78h] BYREF
  __m128i v67; // [rsp+48h] [rbp-70h]
  _DWORD v68[9]; // [rsp+58h] [rbp-60h] BYREF
  char v69; // [rsp+7Ch] [rbp-3Ch]

  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  if ( a3 && *(_BYTE *)(*(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
  {
    v63 = *v8;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v64 = (unsigned int *)(v8 + 1);
    v66 = v68;
    v67 = (__m128i)si128;
    v68[8] = 0;
    v69 = 0;
    if ( (unsigned int)sub_F6C560(*v8) > si128.m128_u64[0] )
      sub_1EA60C0(&v66);
    v34 = sub_F6C520(*(_QWORD *)(v63 + 32));
    v61 = (void *)sub_1E1DA60(
                    a1,
                    &v66,
                    *(_QWORD *)(v63 + 32),
                    (const __m128i *)(v34
                                    * (((unsigned __int64)v64 - (v64 + 1 != nullptr) + 4) / v34 + (v64 + 1 != nullptr))),
                    v35,
                    v36,
                    si128,
                    a5);
    if ( ((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (v62 = *v64,
          v37.m128i_i64[0] = sub_1743190((__int64)&v63),
          v60 = v37,
          v38 = (__m128)_mm_load_si128(&v60),
          v60.m128i_i64[0] = (__int64)&v65,
          v65 = v38,
          v39 = (unsigned __int64)(unsigned int)sub_F6CE20((__int64 *)&v65) << 32,
          v40 = sub_F6CCB0((__int64 *)v60.m128i_i64[0], v38),
          v41 = sub_1E503F0(*a1, v61, v39 | v40, v62, a3),
          v42 = v41,
          (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
    {
      if ( v66 && v66 != v68 )
        operator delete[](v66);
      return 0;
    }
    sub_1EA6140(&v66, v41, 4, 4);
    *v43 = *v64;
    v44 = v67.m128i_i64[0] - v67.m128i_i64[1];
    v9 = (__int64)sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v42, v67.m128i_i32[0] - v67.m128i_i32[2], v45, v46, v47);
    v61 = v66;
    memcpy((void *)(v9 + 8), (char *)v66 + v67.m128i_i64[1], v44);
    if ( v61 && v61 != v68 )
      operator delete[](v61);
  }
  else
  {
    v9 = (__int64)sub_1E1F330(a1, (__int64)v8, a4, a5);
  }
  if ( v9 )
  {
    if ( v8 == (__int64 *)v9 )
      return a2;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *(_DWORD *)(a2 + 24);
    v12 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v13 = *(_BYTE *)(a2 + 96) & 7;
    if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
      v12 = 0;
    v14 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 & 4) != 0 )
      v14 = (_QWORD *)*v14;
    v9 = sub_B74530(*(_QWORD *)(*a1 + 248LL), (__int64)v14, *(_DWORD *)(a2 + 64), v11, v12, *(_QWORD *)v9, v9, v13, 0);
    v17 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( v17 == 255 )
    {
      v17 = sub_B74880(a2);
      LOBYTE(v18) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
      {
LABEL_15:
        v19 = *(_DWORD *)(v9 + 96) & 0xFFF01FFF;
        v20 = (unsigned int)v19 | ((v18 & 0x7F) << 13);
        *(_DWORD *)(v9 + 96) = v20;
        if ( v17 > 0xFE )
        {
          sub_B74850(v9, v17);
          v22 = *((_DWORD *)a1 + 6);
          v21 = (__int64)(a1 + 1);
          if ( !v22 )
            goto LABEL_22;
        }
        else
        {
          v21 = (__int64)(a1 + 1);
          *(_WORD *)(v9 + 98) = *(_WORD *)(v9 + 98) & 0xF00F | (16 * (unsigned __int8)v17);
          v22 = *((_DWORD *)a1 + 6);
          if ( !v22 )
            goto LABEL_22;
        }
        v16 = v22 - 1;
        v23 = a1[1];
        v24 = v16 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v25 = (__int64 *)(v23 + 16LL * v24);
        v26 = *v25;
        if ( a2 == *v25 )
        {
LABEL_18:
          v25[1] = v9;
          return v9;
        }
        v48 = 1;
        v49 = nullptr;
        if ( v26 != -4096 )
        {
          while ( 1 )
          {
            if ( !v49 && v26 == -8192 )
              v49 = v25;
            v24 = v16 & (v48 + v24);
            v25 = (__int64 *)(v23 + 16LL * v24);
            v26 = *v25;
            if ( a2 == *v25 )
              goto LABEL_18;
            if ( v26 == -4096 )
              break;
            ++v48;
          }
          if ( v49 )
            v25 = v49;
        }
        v20 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
        v19 = 3 * v22;
        v15 = (unsigned int)(4 * v20);
        if ( (unsigned int)v15 < (unsigned int)v19 )
        {
          v50 = v22 - *((_DWORD *)a1 + 5) - (unsigned int)v20;
          v51 = v22 >> 3;
          if ( (unsigned int)v50 > (unsigned int)v51 )
          {
LABEL_42:
            v32 = *v25;
            goto LABEL_43;
          }
          sub_1748150(v21, v22, v20, v50, v51, v16);
          v52 = *((_DWORD *)a1 + 6);
          if ( v52 )
          {
            v53 = v52 - 1;
            v54 = a1[1];
            v55 = (v52 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
            LODWORD(v20) = *((_DWORD *)a1 + 4) + 1;
            v25 = (__int64 *)(v54 + 16LL * v55);
            v32 = *v25;
            if ( a2 == *v25 )
            {
LABEL_43:
              *((_DWORD *)a1 + 4) = v20;
              if ( v32 != -4096 )
                --*((_DWORD *)a1 + 5);
              goto LABEL_45;
            }
            if ( v32 != -4096 )
            {
              v56 = (__int64 *)(v54 + 16LL * v55);
              v57 = 1;
              v25 = nullptr;
              while ( 1 )
              {
                if ( v32 == -8192 && !v25 )
                  v25 = v56;
                v55 = v53 & (v57 + v55);
                v56 = (__int64 *)(v54 + 16LL * v55);
                v32 = *v56;
                if ( a2 == *v56 )
                {
                  v25 = (__int64 *)(v54 + 16LL * v55);
                  goto LABEL_43;
                }
                if ( v32 == -4096 )
                  break;
                ++v57;
              }
              if ( v25 )
                goto LABEL_42;
              v25 = (__int64 *)(v54 + 16LL * v55);
            }
LABEL_25:
            *((_DWORD *)a1 + 4) = v20;
LABEL_45:
            *v25 = a2;
            v25[1] = 0;
            goto LABEL_18;
          }
          goto LABEL_78;
        }
LABEL_22:
        sub_1748150(v21, 2 * v22, v20, v19, v15, v16);
        v28 = *((_DWORD *)a1 + 6);
        if ( v28 )
        {
          v29 = v28 - 1;
          v30 = a1[1];
          v31 = (v28 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          LODWORD(v20) = *((_DWORD *)a1 + 4) + 1;
          v25 = (__int64 *)(v30 + 16LL * v31);
          v32 = *v25;
          if ( a2 == *v25 )
            goto LABEL_43;
          if ( v32 != -4096 )
          {
            v58 = (__int64 *)(v30 + 16LL * (v29 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
            v59 = 1;
            v25 = nullptr;
            while ( 1 )
            {
              if ( !v25 && v32 == -8192 )
                v25 = v58;
              v31 = v29 & (v59 + v31);
              v58 = (__int64 *)(v30 + 16LL * v31);
              v32 = *v58;
              if ( a2 == *v58 )
              {
                v25 = (__int64 *)(v30 + 16LL * v31);
                goto LABEL_43;
              }
              if ( v32 == -4096 )
                break;
              ++v59;
            }
            if ( v25 )
              goto LABEL_42;
            v25 = (__int64 *)(v30 + 16LL * v31);
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
      LOBYTE(v18) = 0;
      if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        goto LABEL_15;
    }
    v18 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
    goto LABEL_15;
  }
  return v9;
}
