void __fastcall sub_16BF690(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // r10
  _QWORD *v6; // r15
  __int64 v10; // rax
  unsigned int v11; // r11d
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned int *v16; // rdx
  bool v17; // zf
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int32 v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r14
  unsigned int *v30; // rsi
  unsigned int v31; // ecx
  __int64 v32; // r14
  unsigned int *v33; // rsi
  bool v34; // sf
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r11
  int v38; // edx
  __int64 v39; // rdi
  __int64 v40; // r9
  int v41; // edx
  __int64 v42; // rdi
  __m128 v43; // [rsp+0h] [rbp-98h] BYREF
  __int64 v44; // [rsp+10h] [rbp-88h]
  _DWORD *v45; // [rsp+18h] [rbp-80h]
  __int64 v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+2Ch] [rbp-6Ch]
  __m128i si128; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 *v49; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-50h]

  if ( *(_QWORD *)(a3 + 32) )
  {
    v5 = a1;
    v6 = (_QWORD *)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(a3 + 40);
    v12 = *(unsigned int *)(a1 + 1096);
    v13 = 4 * v12;
    v14 = v10 + 4 * v12;
    if ( *(char *)(v14 + 3) < 0 )
    {
      v31 = *(_DWORD *)v14 & 0x7FFFFFFF;
      v12 = v31;
      v32 = 4LL * v31;
      v33 = (unsigned int *)(v10 + v32);
      if ( *(char *)(v10 + v32 + 3) < 0 )
      {
        v31 = *v33 & 0x7FFFFFFF;
        v12 = v31;
        v44 = 4LL * v31;
        v34 = *(char *)(v10 + v44 + 3) < 0;
        v43.m128_u64[0] = v10 + v44;
        if ( v34 )
        {
          v31 = *(_DWORD *)(v10 + v44) & 0x7FFFFFFF;
          v46 = 4LL * v31;
          v34 = *(char *)(v10 + v46 + 3) < 0;
          v45 = (_DWORD *)(v10 + v46);
          if ( v34 )
          {
            v47 = *(_DWORD *)(v10 + v46);
            v31 = v47 & 0x7FFFFFFF;
            v36 = v10 + 4LL * (v47 & 0x7FFFFFFF);
            if ( *(char *)(v36 + 3) < 0 )
            {
              v31 = sub_16B5920(v6, *(_DWORD *)v36 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v10 = *(_QWORD *)(v5 + 16);
              v41 = *(_DWORD *)(v10 + 4 * v40);
              v33 = (unsigned int *)(v10 + v32);
              v45 = (_DWORD *)(v10 + v46);
              v42 = v10 + v44;
              *(_DWORD *)(v10 + 4 * v40) = v31 | v41 & 0x80000000;
              v12 = v31;
              v14 = v10 + v13;
              v43.m128_u64[0] = v42;
            }
            else
            {
              v12 = v31;
            }
            LODWORD(v44) = *v45;
            *v45 = v31 | v44 & 0x80000000;
          }
          else
          {
            v12 = v31;
          }
          *(_DWORD *)v43.m128_u64[0] = v31 | *(_DWORD *)v43.m128_u64[0] & 0x80000000;
        }
        *v33 = v31 | *v33 & 0x80000000;
      }
      *(_DWORD *)v14 = *(_DWORD *)v14 & 0x80000000 | v31;
    }
    v15 = 4LL * v11;
    v16 = (unsigned int *)(v10 + v15);
    if ( *(char *)(v10 + v15 + 3) < 0 )
    {
      v28 = *v16 & 0x7FFFFFFF;
      v11 = v28;
      v29 = 4LL * v28;
      v30 = (unsigned int *)(v10 + v29);
      if ( *(char *)(v10 + v29 + 3) < 0 )
      {
        v28 = *v30 & 0x7FFFFFFF;
        v11 = v28;
        v44 = 4LL * v28;
        v34 = *(char *)(v10 + v44 + 3) < 0;
        v43.m128_u64[0] = v10 + v44;
        if ( v34 )
        {
          v28 = *(_DWORD *)(v10 + v44) & 0x7FFFFFFF;
          v46 = 4LL * v28;
          v34 = *(char *)(v10 + v46 + 3) < 0;
          v45 = (_DWORD *)(v10 + v46);
          if ( v34 )
          {
            v47 = *(_DWORD *)(v10 + v46);
            v28 = v47 & 0x7FFFFFFF;
            v35 = v10 + 4LL * (v47 & 0x7FFFFFFF);
            if ( *(char *)(v35 + 3) < 0 )
            {
              v28 = sub_16B5920(v6, *(_DWORD *)v35 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v10 = *(_QWORD *)(v5 + 16);
              v38 = *(_DWORD *)(v10 + 4 * v37);
              v30 = (unsigned int *)(v10 + v29);
              v45 = (_DWORD *)(v10 + v46);
              v39 = v10 + v44;
              *(_DWORD *)(v10 + 4 * v37) = v28 | v38 & 0x80000000;
              v11 = v28;
              v16 = (unsigned int *)(v10 + v15);
              v43.m128_u64[0] = v39;
            }
            else
            {
              v11 = v47 & 0x7FFFFFFF;
            }
            LODWORD(v44) = *v45;
            *v45 = v28 | v44 & 0x80000000;
          }
          else
          {
            v11 = v28;
          }
          *(_DWORD *)v43.m128_u64[0] = v28 | *(_DWORD *)v43.m128_u64[0] & 0x80000000;
        }
        *v30 = v28 | *v30 & 0x80000000;
      }
      *v16 = *v16 & 0x80000000 | v28;
    }
    v17 = v11 == (_DWORD)v12;
    if ( v11 <= (unsigned int)v12 )
    {
      while ( !v17 )
      {
        LODWORD(v12) = *(_DWORD *)(v10 + 4 * v12) & 0x7FFFFFFF;
        v17 = (_DWORD)v12 == v11;
        if ( (unsigned int)v12 < v11 )
          return;
      }
      v18 = *(_QWORD *)(a3 + 32);
      v19 = *(_QWORD *)(v5 + 8);
      v43.m128_u64[0] = a4;
      v43 = _mm_loadh_ps((const double *)v43.m128_u64);
      sub_168B9B0((__int64)&v49, v19 + 8, (a5 == 0) + 7506);
      sub_16B73F0(&v49, a2);
      v23 = sub_C00A40(a4, a2, v20, v21, v22);
      si128.m128i_i8[8] = 1;
      si128.m128i_i32[0] = v23;
      si128.m128i_i32[1] = v23;
      sub_AEC610((__int64 *)&v49, si128.m128i_i64);
      si128 = _mm_load_si128((const __m128i *)&v43);
      v27 = sub_C00A40(v18, (__int64)&si128, v24, v25, v26);
      sub_18CA280(v19, v27, &si128, 2, &v49);
      if ( v49 )
      {
        if ( v50 )
          sub_1580C40(v50, (unsigned __int64)v49);
      }
      *(_BYTE *)(a3 + 48) = 1;
    }
  }
}
