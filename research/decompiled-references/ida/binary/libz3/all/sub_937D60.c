__int64 __fastcall sub_937D60(_QWORD *a1)
{
  _QWORD *v1; // r10
  __int64 v2; // r9
  __int64 v3; // rdx
  unsigned int *v4; // r9
  _QWORD *v5; // r12
  unsigned int *v6; // rdi
  __int64 v7; // r11
  __int64 result; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // rbx
  unsigned int *v11; // r14
  __int64 v12; // rsi
  unsigned int v13; // ecx
  int v14; // r8d
  _DWORD *v15; // r15
  int v16; // r13d
  __int64 v17; // rdx
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r12
  unsigned int *v22; // rbp
  int v23; // r11d
  unsigned int *v24; // rbx
  __int64 v25; // r14
  unsigned int v26; // r13d
  int v27; // r15d
  int v28; // edx
  __m128i *v29; // rbp
  __m128i v30; // xmm1
  int v31; // ecx
  _QWORD *v32; // r12
  int v33; // esi
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  size_t v37; // rdi
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  _QWORD *v44; // rax
  char **exception; // rbx
  unsigned int *v46; // [rsp+0h] [rbp-D8h]
  __int64 v47; // [rsp+8h] [rbp-D0h]
  __int16 v48; // [rsp+12h] [rbp-C6h]
  unsigned int v49; // [rsp+14h] [rbp-C4h]
  _QWORD *v50; // [rsp+18h] [rbp-C0h]
  unsigned int v51; // [rsp+18h] [rbp-C0h]
  int v52; // [rsp+18h] [rbp-C0h]
  int v53; // [rsp+20h] [rbp-B8h]
  int v54; // [rsp+20h] [rbp-B8h]
  _DWORD *v55; // [rsp+28h] [rbp-B0h]
  int v56; // [rsp+30h] [rbp-A8h]
  int v57; // [rsp+38h] [rbp-A0h]
  _QWORD *v58; // [rsp+38h] [rbp-A0h]
  _QWORD *v59; // [rsp+40h] [rbp-98h]
  unsigned int v60; // [rsp+50h] [rbp-88h]
  unsigned int v61; // [rsp+54h] [rbp-84h]
  _QWORD *v62; // [rsp+58h] [rbp-80h]
  _QWORD *v63; // [rsp+60h] [rbp-78h]
  __int64 v64; // [rsp+68h] [rbp-70h]
  unsigned int *v65; // [rsp+70h] [rbp-68h]
  __int64 v66; // [rsp+78h] [rbp-60h]
  __int64 v67[11]; // [rsp+80h] [rbp-58h] BYREF

  v1 = a1;
  v2 = a1[24];
  if ( v2 )
  {
    v49 = *(_DWORD *)(v2 - 4) - 1;
    v3 = 20LL * v49;
  }
  else
  {
    v49 = -1;
    v3 = 0x13FFFFFFECLL;
  }
  v4 = (unsigned int *)(v3 + v2);
  v5 = (_QWORD *)a1[25];
  v6 = (unsigned int *)a1[35];
  v7 = *v4;
  result = v4[1];
  v9 = (_DWORD *)v5[result];
  if ( v9 )
  {
    v10 = &v9[6 * *(v9 - 1)];
    if ( v10 != v9 )
    {
      v11 = (unsigned int *)v1[35];
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( *v9 == -1 || (_DWORD)v7 == v13 )
          goto LABEL_8;
        v14 = v9[1] + v4[2];
        v15 = (_DWORD *)(v12 + v5[(unsigned int)v7]);
        v16 = v9[2] + v4[3];
        if ( *v15 == -1 || v14 < v15[1] )
        {
          *v11 = v13;
          v11 += 3;
          *(v11 - 2) = v14;
          *(v11 - 1) = v16;
LABEL_13:
          v9 += 6;
          ++v13;
          v12 += 24;
          if ( v10 == v9 )
            goto LABEL_14;
        }
        else
        {
          if ( v14 == v15[1] && v16 < v15[2] )
          {
            *v11 = v13;
            v11 += 3;
            *(v11 - 2) = v14;
            *(v11 - 1) = v16;
            goto LABEL_13;
          }
LABEL_8:
          v9 += 6;
          ++v13;
          v12 += 24;
          if ( v10 == v9 )
            goto LABEL_14;
        }
      }
    }
  }
  v11 = (unsigned int *)v1[35];
LABEL_14:
  if ( v5 )
  {
    v17 = *((unsigned int *)v5 - 1);
    if ( v5 != &v5[v17] )
    {
      v18 = &v5[v17];
      v46 = v11;
      v19 = v5;
      v20 = 24 * v7;
      v21 = 0;
      v22 = v6;
      do
      {
        while ( 1 )
        {
          v23 = v21;
          if ( (_DWORD)result != (_DWORD)v21 && *(_DWORD *)(v20 + *v19) != -1 && v46 != v22 )
            break;
          ++v19;
          ++v21;
          if ( v19 == v18 )
            return result;
        }
        v60 = v21;
        v24 = v22;
        v25 = v20 + *v19;
        v47 = 8 * v21;
        v48 = v21;
        v61 = result;
        v62 = v19;
        v63 = v18;
        v64 = v21;
        v65 = v22;
        v66 = v20;
        do
        {
          while ( 1 )
          {
            v26 = *v24;
            if ( *v24 != v23 )
              break;
LABEL_23:
            v24 += 3;
            if ( v24 == v46 )
              goto LABEL_33;
          }
          v27 = v24[1] + *(_DWORD *)(v25 + 4);
          v28 = v24[2] + *(_DWORD *)(v25 + 8);
          v29 = (__m128i *)(*(_QWORD *)(v1[25] + v47) + 24LL * v26);
          v30 = _mm_loadl_epi64(v29);
          v31 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 229));
          if ( _mm_cvtsi128_si32(v30) == -1 || v27 < v31 )
          {
            v32 = (_QWORD *)v1[27];
            v33 = v29->m128i_i32[2];
            if ( !v32 )
              goto LABEL_44;
          }
          else
          {
            if ( v27 != v31 )
              goto LABEL_23;
            v33 = v29->m128i_i32[2];
            if ( v28 >= v33 )
              goto LABEL_23;
            v32 = (_QWORD *)v1[27];
            if ( !v32 )
            {
LABEL_44:
              v58 = v1;
              v56 = v23;
              v52 = v24[2] + *(_DWORD *)(v25 + 8);
              v44 = (_QWORD *)sub_186B270(0x28u);
              v1 = v58;
              v28 = v52;
              v32 = v44 + 1;
              *v44 = 2;
              v58[27] = v44 + 1;
              v35 = v44 + 1;
              v23 = v56;
              goto LABEL_30;
            }
          }
          v34 = *((unsigned int *)v32 - 1);
          if ( (_DWORD)v34 == *((_DWORD *)v32 - 2) )
          {
            v51 = (unsigned int)(3 * v34 + 1) >> 1;
            v37 = 16 * v51 + 8;
            if ( 16 * (int)v34 + 8 >= (unsigned int)v37 || (unsigned int)v34 >= (unsigned int)(3 * v34 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_91CD50(v67, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = v1;
            v57 = v23;
            v54 = v24[2] + *(_DWORD *)(v25 + 8);
            v38 = sub_186B270(v37);
            v1 = v59;
            v28 = v54;
            v23 = v57;
            v39 = (_DWORD *)v38;
            v32 = (_QWORD *)(v38 + 8);
            v40 = v59[27];
            if ( v40 )
            {
              v41 = *(unsigned int *)(v40 - 4);
              *(_DWORD *)(v38 + 4) = v41;
              v42 = 0;
              v43 = 16 * v41;
              if ( v43 )
              {
                do
                {
                  *(__m128i *)&v39[v42 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v40 + v42));
                  v42 += 16LL;
                }
                while ( v43 != v42 );
              }
              v55 = v39;
              sub_186B220((void *)(v40 - 8));
              v39 = v55;
              v28 = v54;
              v23 = v57;
              v1 = v59;
              v35 = &v32[2 * (unsigned int)v55[1]];
            }
            else
            {
              *(_DWORD *)(v38 + 4) = 0;
              v35 = (_QWORD *)(v38 + 8);
            }
            v1[27] = v32;
            *v39 = v51;
          }
          else
          {
            v35 = &v32[2 * v34];
          }
LABEL_30:
          *((_WORD *)v35 + 1) = v26;
          *((_DWORD *)v35 + 3) = v33;
          *(_WORD *)v35 = v48;
          *(_QWORD *)((char *)v35 + 4) = v30.m128i_i64[0];
          ++*((_DWORD *)v32 - 1);
          v29->m128i_i32[0] = v49;
          v36 = v29[1].m128i_i64[0];
          v29->m128i_i32[1] = v27;
          v29->m128i_i32[2] = v28;
          if ( !v36 || !*(_DWORD *)(v36 - 4) )
            goto LABEL_23;
          v53 = v23;
          v50 = v1;
          v24 += 3;
          sub_937C40((__int64)v1, v60, v26);
          v23 = v53;
          v1 = v50;
        }
        while ( v24 != v46 );
LABEL_33:
        v18 = v63;
        result = v61;
        v19 = v62 + 1;
        v22 = v65;
        v20 = v66;
        v21 = v64 + 1;
      }
      while ( v62 + 1 != v63 );
    }
  }
  return result;
}

