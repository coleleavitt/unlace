__int64 __fastcall sub_877860(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  _BYTE *v6; // rdi
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r15
  _BYTE *v10; // rdi
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  size_t *v13; // rax
  size_t v14; // rdx
  unsigned int v15; // esi
  int v16; // eax
  unsigned __int32 v17; // r11d
  size_t v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rsi
  __int64 *v22; // r10
  __int64 v23; // rax
  size_t v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // r9d
  __m128i *v29; // rcx
  __int32 v30; // r11d
  __int64 v31; // rsi
  __int64 *v32; // rdx
  unsigned int v33; // ebp
  unsigned __int64 v34; // r9
  unsigned int v35; // eax
  __int64 *v36; // rax
  __int64 *v37; // r11
  __m128i *v38; // rbp
  unsigned int v39; // ecx
  __int64 v40; // r11
  __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 v44; // rbp
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  int v47; // edx
  __int64 *v48; // rbp
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rdx
  __m128i *v52; // r9
  __m128i *v53; // rdi
  __m128i *v54; // r8
  const __m128i *v55; // rax
  __int64 v56; // rsi
  const __m128i *v57; // r10
  __int64 *v58; // rdi
  __int64 v59; // rsi
  const __m128i *v60; // rbx
  const __m128i *v61; // r13
  unsigned int v62; // r11d
  __m128i *v63; // rbp
  __int64 v64; // r9
  __m128i *v65; // r14
  __int64 v66; // rt0
  __int64 v67; // r10
  __int64 v68; // rdx
  __m128i *v69; // rsi
  __m128i *v70; // rdx
  _QWORD *v71; // rdi
  int v72; // eax
  int v73; // eax
  _QWORD *v74; // rax
  _QWORD *v75; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v76; // [rsp+8h] [rbp-90h]
  __int64 v77; // [rsp+10h] [rbp-88h]
  __m128i *v78; // [rsp+18h] [rbp-80h]
  __m128 v79; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v80; // [rsp+30h] [rbp-68h]
  __m128i *v81; // [rsp+38h] [rbp-60h]
  __int64 *v82; // [rsp+40h] [rbp-58h]
  __int64 v83; // [rsp+48h] [rbp-50h]
  __int64 v84; // [rsp+50h] [rbp-48h]
  unsigned int v85; // [rsp+5Ch] [rbp-3Ch]

  v4 = a1;
  v5 = a2;
  v6 = *(_BYTE **)(a1 + 80);
  v75 = a3;
  result = *(_QWORD *)(*(_QWORD *)v6 + 488LL);
  if ( (__int64 (__fastcall *)(__int64, __int64))result != sub_795570 )
  {
    v76 = a4;
    result = ((__int64 (*)(void))result)();
    a4 = v76;
LABEL_39:
    if ( !(_BYTE)result )
      return result;
    goto LABEL_3;
  }
  if ( v6[168] )
  {
    result = *(unsigned __int8 *)(a2 + 16);
    goto LABEL_39;
  }
LABEL_3:
  v8 = *(__int64 **)(a2 + 48);
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 != v9 )
    {
      v76 = a4;
      while ( 1 )
      {
        v10 = *(_BYTE **)(v4 + 80);
        v11 = *v8;
        v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 488LL);
        if ( v12 != sub_795570 )
          break;
        if ( v10[168] )
        {
          result = *(unsigned __int8 *)(v11 + 16);
          goto LABEL_7;
        }
LABEL_11:
        result = *(_QWORD *)v11;
        if ( *(_WORD *)(*(_QWORD *)v11 + 4LL) )
          goto LABEL_8;
        result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
        if ( !result )
          goto LABEL_8;
        if ( *(_DWORD *)(v4 + 112) != *(_DWORD *)result )
          goto LABEL_8;
        if ( *(_DWORD *)(result + 4) )
          goto LABEL_8;
        result = *(_QWORD *)(v11 + 176);
        if ( v5 != *(_QWORD *)(result + 64) )
          goto LABEL_8;
        v13 = (size_t *)sub_874A00(v4, v11);
        v14 = *v13;
        v78 = (__m128i *)v13;
        v77 = v14;
        v15 = *((_DWORD *)v75 + 38) - 1;
        LODWORD(v80) = *((_DWORD *)v75 + 38);
        v16 = sub_874080(v75, v15);
        v18 = v77;
        v19 = (__int64)v78;
        v20 = v16;
        v21 = 16LL * (v16 & (v17 - 1));
        v22 = (__int64 *)(v77 + v21);
        v23 = 16LL * v17;
        v77 = v23;
        v24 = v18 + v23;
        if ( v21 != v23 )
        {
          v25 = v11;
          v81 = v78;
          result = (__int64)v22;
          LODWORD(v82) = v17;
          v83 = v21;
          do
          {
            v26 = *(_QWORD *)(result + 8);
            if ( v26 > 1 )
            {
              if ( v20 == *(_DWORD *)result )
              {
                v39 = *(_DWORD *)(v26 + 152);
                if ( v39 <= 1 )
                  goto LABEL_8;
                v78 = (__m128i *)v25;
                v40 = v39 - 1;
                v41 = 0;
                v79.m128_u64[0] = result;
                while ( 1 )
                {
                  result = *(_QWORD *)(v75[v41 + 23] + 64LL);
                  if ( *(_QWORD *)(*(_QWORD *)(v26 + 8 * v41 + 184) + 64LL) != result )
                    break;
                  if ( v40 == ++v41 )
                    goto LABEL_8;
                }
                result = v79.m128_u64[0];
                v25 = (__int64)v78;
              }
            }
            else if ( !v26 )
            {
              v19 = (__int64)v81;
              v17 = (unsigned int)v82;
              v11 = v25;
              v21 = v83;
              goto LABEL_23;
            }
            result += 16;
          }
          while ( v24 != result );
          v19 = (__int64)v81;
          v17 = (unsigned int)v82;
          v11 = v25;
          v21 = v83;
        }
        if ( (__int64 *)v18 != v22 )
        {
          LODWORD(v81) = v17;
          result = v18;
          v78 = (__m128i *)v11;
          v79.m128_u64[0] = v19;
          v82 = (__int64 *)v21;
          while ( 1 )
          {
            v42 = *(_QWORD *)(result + 8);
            if ( v42 > 1 )
            {
              if ( v20 == *(_DWORD *)result )
              {
                v43 = *(_DWORD *)(v42 + 152);
                if ( v43 <= 1 )
                  goto LABEL_8;
                v44 = v43 - 1;
                v83 = result;
                v45 = 0;
                while ( 1 )
                {
                  result = *(_QWORD *)(v75[v45 + 23] + 64LL);
                  if ( *(_QWORD *)(*(_QWORD *)(v42 + 8 * v45 + 184) + 64LL) != result )
                    break;
                  if ( v44 == ++v45 )
                    goto LABEL_8;
                }
                result = v83;
              }
            }
            else if ( !v42 )
            {
LABEL_54:
              v11 = (__int64)v78;
              v19 = v79.m128_u64[0];
              v17 = (unsigned int)v81;
              v21 = (__int64)v82;
              break;
            }
            result += 16;
            if ( v22 == (__int64 *)result )
              goto LABEL_54;
          }
        }
LABEL_23:
        result = (unsigned int)v80;
        if ( (unsigned int)v80 <= 1 )
          goto LABEL_8;
        v79.m128_i32[0] = v17;
        v27 = 1;
        v82 = (__int64 *)v18;
        v78 = (__m128i *)v19;
        v81 = (__m128i *)v21;
        do
        {
          v28 = v27;
          if ( *(_QWORD *)(*(_QWORD *)(v11 + 8 * v27 + 176) + 64LL) != *(_QWORD *)(v75[v27 + 22] + 64LL) )
          {
            v29 = v78;
            v30 = v79.m128_i32[0];
            v31 = (__int64)v81;
            v32 = v82;
            goto LABEL_28;
          }
          ++v27;
        }
        while ( v27 != (unsigned int)v80 );
        v29 = v78;
        v30 = v79.m128_i32[0];
        ++v28;
        v31 = (__int64)v81;
        v32 = v82;
LABEL_28:
        result = (unsigned int)v80;
        if ( v28 >= (unsigned int)v80 )
          goto LABEL_8;
        v33 = 2 * v30;
        v34 = (unsigned int)(3 * v30);
        v35 = 4 * (v29->m128i_i32[3] + v29[1].m128i_i32[0]);
        v79 = _mm_loadh_ps((const double *)&v75);
        if ( (unsigned int)v34 < v35 )
        {
          v78 = v29;
          v77 = 16LL * v33;
          v49 = sub_186B270(v77);
          v50 = (__int64 *)v78;
          v51 = v49;
          v52 = (__m128i *)(v49 + v77);
          if ( v33 )
          {
            if ( (v77 & 0x10) == 0 || (*(_QWORD *)(v49 + 8) = 0, v49 += 16, (__m128i *)(v51 + 16) != v52) )
            {
              do
              {
                *(_QWORD *)(v49 + 8) = 0;
                v49 += 32;
                *(_QWORD *)(v49 - 8) = 0;
              }
              while ( (__m128i *)v49 != v52 );
            }
          }
          v53 = (__m128i *)*v50;
          v54 = v52;
          LODWORD(v78) = v33 - 1;
          v55 = v53;
          v56 = *((unsigned int *)v50 + 2);
          v57 = &v53[v56];
          if ( v53 != &v53[v56] )
          {
            v58 = v8;
            v59 = v5;
            v60 = v55;
            v61 = v57;
            v62 = v33;
            v63 = (__m128i *)v51;
            v66 = v4;
            v65 = v52;
            v64 = v66;
            v67 = v59;
            do
            {
              if ( v60->m128i_i64[1] > 1uLL )
              {
                v68 = 16LL * (v60->m128i_i32[0] & (unsigned int)v78);
                v69 = &v63[(unsigned __int64)v68 / 0x10];
                if ( v77 == v68 )
                {
LABEL_99:
                  if ( v63 == v69 )
                  {
LABEL_108:
                    v85 = v62;
                    v84 = v67;
                    v83 = v64;
                    v82 = v58;
                    v81 = v54;
                    v80 = v9;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v70 = v63;
                  while ( v70->m128i_i64[1] )
                  {
                    if ( v69 == ++v70 )
                      goto LABEL_108;
                  }
                }
                else
                {
                  v70 = &v63[(unsigned __int64)v68 / 0x10];
                  while ( v70->m128i_i64[1] )
                  {
                    if ( v65 == ++v70 )
                      goto LABEL_99;
                  }
                }
                *v70 = _mm_loadu_si128(v60);
              }
              ++v60;
            }
            while ( v61 != v60 );
            v8 = v58;
            v51 = (__int64)v63;
            v53 = (__m128i *)*v50;
            v4 = v64;
            v5 = v67;
            v33 = v62;
          }
          if ( v53 )
          {
            v82 = (__int64 *)v51;
            v81 = v54;
            v80 = v50;
            sub_186B220(v53);
            v51 = (__int64)v82;
            v54 = v81;
            v50 = v80;
          }
          v71 = v75;
          *v50 = v51;
          v82 = (__int64 *)v51;
          v72 = *((_DWORD *)v71 + 38);
          *((_DWORD *)v50 + 4) = 0;
          *((_DWORD *)v50 + 2) = v33;
          v83 = (__int64)v54;
          v81 = (__m128i *)v50;
          LODWORD(v80) = v72;
          v73 = sub_874080(v71, v72 - 1);
          v32 = v82;
          v24 = v83;
          v20 = v73;
          v29 = v81;
          v31 = 16LL * (v73 & (unsigned int)v78);
          v22 = (__int64 *)((char *)v82 + v31);
        }
        if ( v31 == v77 )
        {
          v37 = nullptr;
          while ( 1 )
          {
LABEL_69:
            if ( v32 == v22 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v46 = v32[1];
            if ( v46 > 1 )
            {
              if ( *(_DWORD *)v32 == v20 )
              {
                v31 = *(unsigned int *)(v46 + 152);
                if ( (unsigned int)v31 <= 1 )
                {
LABEL_77:
                  v32[1] = (__int64)v75;
                  goto LABEL_78;
                }
                v77 = v32[1];
                v24 = (unsigned int)(v31 - 1);
                v31 = 0;
                while ( 1 )
                {
                  v34 = *(_QWORD *)(v75[v31 + 23] + 64LL);
                  if ( *(_QWORD *)(*(_QWORD *)(v77 + 8 * v31 + 184) + 64LL) != v34 )
                    break;
                  if ( v24 == ++v31 )
                    goto LABEL_77;
                }
              }
            }
            else
            {
              if ( !v46 )
              {
                if ( v37 )
                {
                  --v29[1].m128i_i32[0];
                  v32 = v37;
                }
                v74 = v75;
                *(_DWORD *)v32 = v20;
                v32[1] = (__int64)v74;
                ++v29->m128i_i32[3];
                goto LABEL_78;
              }
              v37 = v32;
            }
            v32 += 2;
          }
        }
        v34 = (unsigned __int64)v75;
        v36 = v22;
        v37 = nullptr;
        v38 = v29;
        while ( 1 )
        {
          v29 = (__m128i *)v36[1];
          if ( (unsigned __int64)v29 <= 1 )
            break;
          if ( *(_DWORD *)v36 == v20 )
          {
            v31 = v29[9].m128i_u32[2];
            if ( (unsigned int)v31 <= 1 )
            {
LABEL_113:
              v32 = v75;
              v36[1] = (__int64)v75;
              goto LABEL_78;
            }
            LODWORD(v78) = v20;
            v77 = (unsigned int)(v31 - 1);
            v31 = 0;
            v80 = v32;
            while ( *(_QWORD *)(v29[11].m128i_i64[v31 + 1] + 64) == *(_QWORD *)(v75[v31 + 23] + 64LL) )
            {
              if ( v77 == ++v31 )
                goto LABEL_113;
            }
            v20 = (int)v78;
            v32 = v80;
          }
LABEL_33:
          v36 += 2;
          if ( v36 == (__int64 *)v24 )
          {
            v29 = v38;
            goto LABEL_69;
          }
        }
        if ( v29 )
        {
          v37 = v36;
          goto LABEL_33;
        }
        v29 = v38;
        if ( v37 )
        {
          --v38[1].m128i_i32[0];
          v36 = v37;
        }
        v32 = v75;
        *(_DWORD *)v36 = v20;
        v36[1] = (__int64)v32;
        ++v38->m128i_i32[3];
LABEL_78:
        result = *v76;
        if ( !*v76 || (v32 = (__int64 *)*(unsigned int *)(result - 8), *(_DWORD *)(result - 4) == (_DWORD)v32) )
        {
          v48 = v76;
          sub_8788A0(v76, v31, v32, v29, v24, v34);
          result = *v48;
        }
        v47 = *(_DWORD *)(result - 4) + 1;
        *(__m128i *)(result + 16LL * *(unsigned int *)(result - 4)) = _mm_load_si128((const __m128i *)&v79);
        *(_DWORD *)(result - 4) = v47;
LABEL_8:
        if ( v9 == ++v8 )
          return result;
      }
      result = v12((__int64)v10, *v8);
LABEL_7:
      if ( !(_BYTE)result )
        goto LABEL_8;
      goto LABEL_11;
    }
  }
  return result;
}

