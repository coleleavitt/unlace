__int64 __fastcall sub_1D62F50(unsigned int *a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rbp
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
  unsigned int v21; // esi
  __int64 v22; // rdi
  unsigned int v23; // edx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __m128 si128; // xmm0
  __int64 v28; // rax
  const __m128i *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128i v32; // rax
  __m128 v33; // xmm0
  unsigned __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbp
  unsigned int *v38; // rdx
  size_t v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // r10
  unsigned int v44; // ecx
  bool v45; // zf
  __m128i v46; // [rsp+0h] [rbp-B8h] BYREF
  void *v47; // [rsp+10h] [rbp-A8h]
  unsigned int v48; // [rsp+1Ch] [rbp-9Ch]
  __int64 v49; // [rsp+20h] [rbp-98h] BYREF
  unsigned int *v50; // [rsp+28h] [rbp-90h]
  __m128 v51; // [rsp+30h] [rbp-88h] BYREF
  void *v52; // [rsp+40h] [rbp-78h] BYREF
  __m128i v53; // [rsp+48h] [rbp-70h]
  _DWORD v54[9]; // [rsp+58h] [rbp-60h] BYREF
  char v55; // [rsp+7Ch] [rbp-3Ch]

  v7 = a2;
  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  if ( a3 && *(_BYTE *)(*(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
  {
    v49 = *v8;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v50 = (unsigned int *)(v8 + 1);
    v52 = v54;
    v53 = (__m128i)si128;
    v54[8] = 0;
    v55 = 0;
    if ( (unsigned int)sub_F6C560(*v8) > si128.m128_u64[0] )
      sub_1EA60C0(&v52);
    v28 = sub_1743190((__int64)&v49);
    v47 = (void *)sub_1D4F8E0(a1, (__int64)&v52, v28, v29, v30, v31, si128, a5);
    if ( ((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (v48 = *v50,
          v32.m128i_i64[0] = sub_1743190((__int64)&v49),
          v46 = v32,
          v33 = (__m128)_mm_load_si128(&v46),
          v46.m128i_i64[0] = (__int64)&v51,
          v51 = v33,
          v34 = (unsigned __int64)(unsigned int)sub_F6CE20((__int64 *)&v51) << 32,
          v35 = sub_F6CCB0((__int64 *)v46.m128i_i64[0], v33),
          v36 = sub_1E503F0(*(_QWORD *)a1, v47, v34 | v35, v48, a3),
          v37 = v36,
          (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
    {
      if ( v52 && v52 != v54 )
        operator delete[](v52);
      return 0;
    }
    sub_1EA6140(&v52, v36, 4, 4);
    *v38 = *v50;
    v39 = v53.m128i_i64[0] - v53.m128i_i64[1];
    v9 = (__int64)sub_A81BC0(
                    *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                    v37,
                    v53.m128i_i32[0] - v53.m128i_i32[2],
                    v40,
                    v41,
                    v42);
    v47 = v52;
    memcpy((void *)(v9 + 8), (char *)v52 + v53.m128i_i64[1], v39);
    if ( v47 != v54 && v47 )
      operator delete[](v47);
  }
  else
  {
    v9 = (__int64)sub_1D51480(a1, (__int64)v8, a4, a5);
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
    v9 = sub_B74530(
           *(_QWORD *)(*(_QWORD *)a1 + 248LL),
           (__int64)v14,
           *(_DWORD *)(v7 + 64),
           v11,
           v12,
           *(_QWORD *)v9,
           v9,
           v13,
           0);
    v17 = (unsigned __int8)(*(_WORD *)(v7 + 98) >> 4);
    if ( v17 == 255 )
    {
      v17 = sub_B74880(v7);
      LOBYTE(v18) = 0;
      if ( (*(_BYTE *)(v7 + 97) & 0x10) != 0 )
      {
LABEL_15:
        v19 = *(_DWORD *)(v9 + 96) & 0xFFF01FFF;
        v20 = (unsigned int)v19 | ((v18 & 0x7F) << 13);
        *(_DWORD *)(v9 + 96) = v20;
        if ( v17 > 0xFE )
          sub_B74850(v9, v17);
        else
          *(_WORD *)(v9 + 98) = *(_WORD *)(v9 + 98) & 0xF00F | (16 * (unsigned __int8)v17);
        v21 = a1[6];
        v51.m128_u64[0] = v7;
        if ( v21 )
        {
          v15 = v21 - 1;
          v22 = *((_QWORD *)a1 + 1);
          v23 = v15 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
          v24 = (_QWORD *)(v22 + 16LL * v23);
          v25 = *v24;
          if ( v7 == *v24 )
          {
LABEL_19:
            v24[1] = v9;
            return v9;
          }
          v16 = 1;
          v43 = nullptr;
          if ( v25 != -4096 )
          {
            while ( 1 )
            {
              if ( v25 == -8192 && !v43 )
                v43 = v24;
              v23 = v15 & (v16 + v23);
              v24 = (_QWORD *)(v22 + 16LL * v23);
              v25 = *v24;
              if ( v7 == *v24 )
                goto LABEL_19;
              if ( v25 == -4096 )
              {
                if ( v43 )
                  v24 = v43;
                break;
              }
              v16 = (unsigned int)(v16 + 1);
            }
          }
          v44 = a1[4];
          v52 = v24;
          v20 = v44 + 1;
          v19 = 3 * v21;
          if ( 4 * (int)v20 < (unsigned int)v19 )
          {
            v19 = v21 - a1[5] - (unsigned int)v20;
            if ( (unsigned int)v19 > v21 >> 3 )
            {
LABEL_39:
              v45 = *v24 == -4096;
              a1[4] = v20;
              if ( !v45 )
                --a1[5];
              *v24 = v7;
              v24[1] = 0;
              goto LABEL_19;
            }
LABEL_44:
            sub_1748150((__int64)(a1 + 2), v21, v20, v19, v15, v16);
            sub_1C740A0((__int64 *)a1 + 1, (__int64 *)&v51, &v52);
            v7 = v51.m128_u64[0];
            LODWORD(v20) = a1[4] + 1;
            v24 = v52;
            goto LABEL_39;
          }
        }
        else
        {
          v52 = nullptr;
        }
        v21 *= 2;
        goto LABEL_44;
      }
    }
    else
    {
      LOBYTE(v18) = 0;
      if ( (*(_BYTE *)(v7 + 97) & 0x10) != 0 )
        goto LABEL_15;
    }
    v18 = (*(_DWORD *)(v7 + 96) >> 13) & 0x7F;
    goto LABEL_15;
  }
  return v9;
}
