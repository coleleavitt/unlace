__int64 __fastcall sub_878080(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  int v3; // ebp
  char *v4; // rdi
  int v5; // esi
  __int64 v6; // rdx
  char *v7; // rax
  char *v8; // rcx
  unsigned int v9; // r12d
  size_t v10; // rbx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  __int64 *v14; // r13
  __int64 result; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rbp
  _BYTE *v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  __int64 *v21; // r13
  __int64 v22; // rbx
  _BYTE *v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // ebp
  const __m128i *v28; // r8
  unsigned int v29; // r15d
  size_t v30; // r12
  int v31; // eax
  int v32; // r11d
  __int64 v33; // r8
  int v34; // esi
  __int64 v35; // r15
  __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r15
  _QWORD *v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // r12d
  size_t v46; // rdx
  unsigned __int64 v47; // rdx
  unsigned int v48; // edx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r10
  __m128i *v53; // rdi
  __int64 v54; // r9
  __m128i *v55; // rax
  __int64 v56; // rcx
  const __m128i *v57; // rbx
  __int64 v58; // rdi
  unsigned int v59; // r10d
  __m128i *v60; // rbp
  __int64 v61; // r8
  __m128i *v62; // r14
  __int64 v63; // rax
  __m128i *v64; // rdx
  __m128i *v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // [rsp+0h] [rbp-98h]
  __int64 *v68; // [rsp+0h] [rbp-98h]
  __int64 v69; // [rsp+8h] [rbp-90h]
  __int64 *v70; // [rsp+8h] [rbp-90h]
  __int64 v71; // [rsp+10h] [rbp-88h]
  __int64 v72; // [rsp+18h] [rbp-80h]
  __int64 v73; // [rsp+20h] [rbp-78h]
  __int64 v74; // [rsp+28h] [rbp-70h]
  const __m128i *v75; // [rsp+30h] [rbp-68h]
  const __m128i *v76; // [rsp+30h] [rbp-68h]
  __int64 v77[8]; // [rsp+58h] [rbp-40h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  if ( *(_DWORD *)(a1 + 508) || *(_DWORD *)(a1 + 512) )
  {
    v4 = *(char **)(a1 + 496);
    v5 = 0;
    v6 = *(unsigned int *)(v1 + 504);
    v7 = v4;
    v8 = &v4[16 * v6];
    if ( v4 == v8 )
      goto LABEL_18;
    do
    {
      while ( *(_QWORD *)v7 )
      {
        *(_QWORD *)v7 = 0;
        v7 += 16;
        if ( v8 == v7 )
          goto LABEL_10;
      }
      v7 += 16;
      ++v5;
    }
    while ( v8 != v7 );
LABEL_10:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v5) )
      goto LABEL_18;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(v1 + 504);
      *(_QWORD *)(v1 + 496) = 0;
      v9 >>= 1;
      *(_DWORD *)(v1 + 504) = v9;
      v10 = v9;
      v11 = (_OWORD *)sub_186B270(v10 * 16);
      if ( !v9 )
      {
LABEL_17:
        *(_QWORD *)(v1 + 496) = v11;
LABEL_18:
        *(_QWORD *)(v1 + 508) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(v1 + 496) = 0;
      v46 = (unsigned int)v6 >> 1;
      *(_DWORD *)(v1 + 504) = v46;
      v10 = v46;
      v11 = (_OWORD *)sub_186B270(16 * v46);
    }
    v12 = &v11[v10];
    v13 = v11;
    if ( ((v10 * 16) & 0x10) == 0 || (v13 = v11 + 1, *v11 = 0, v12 != v11 + 1) )
    {
      do
      {
        *v13 = 0;
        v13 += 2;
        *(v13 - 1) = 0;
      }
      while ( v12 != v13 );
    }
    goto LABEL_17;
  }
LABEL_19:
  v14 = *(__int64 **)(v1 + 520);
  if ( v14 )
  {
    result = *(_QWORD *)(v1 + 528);
    *((_DWORD *)v14 - 1) = 0;
    if ( result )
    {
      *(_DWORD *)(result - 4) = 0;
      if ( v3 <= 0 )
      {
LABEL_55:
        result = (__int64)&v14[*((unsigned int *)v14 - 1)];
        v70 = (__int64 *)result;
        if ( (__int64 *)result != v14 )
        {
          v68 = v14;
          v38 = 0;
          do
          {
            v39 = *v68;
            v40 = sub_874A00(v1, *v68);
            v41 = *(_QWORD *)v40;
            v42 = *(_QWORD *)v40 + 16LL * *(unsigned int *)(v40 + 8);
            if ( *(_QWORD *)v40 != v42 )
            {
              while ( *(_QWORD *)(v41 + 8) <= 1u )
              {
                v41 += 16;
                if ( v42 == v41 )
                  goto LABEL_68;
              }
              if ( v42 != v41 )
              {
                v43 = *(_QWORD **)(v41 + 8);
                do
                {
                  v77[0] = v38;
                  sub_877860(v1, v39, v43, v77);
                  v44 = v41 + 16;
                  v38 = v77[0];
                  if ( v42 == v41 + 16 )
                    break;
                  while ( 1 )
                  {
                    v43 = *(_QWORD **)(v44 + 8);
                    v41 = v44;
                    if ( (unsigned __int64)v43 > 1 )
                      break;
                    v44 += 16;
                    if ( v42 == v44 )
                      goto LABEL_68;
                  }
                }
                while ( v42 != v44 );
              }
            }
LABEL_68:
            result = (__int64)++v68;
          }
          while ( v70 != v68 );
          if ( v38 )
          {
            v45 = 0;
            if ( *(_DWORD *)(v38 - 4) )
            {
              while ( 1 )
              {
                v77[0] = v38;
                result = sub_877860(v1, *(_QWORD *)(v38 + 16LL * v45), *(_QWORD **)(v38 + 16LL * v45 + 8), v77);
                v38 = v77[0];
                ++v45;
                if ( !v77[0] )
                  break;
                if ( v45 >= *(_DWORD *)(v77[0] - 4) )
                  return sub_186B220((void *)(v38 - 8));
              }
            }
            else
            {
              return sub_186B220((void *)(v38 - 8));
            }
          }
        }
        return result;
      }
      goto LABEL_22;
    }
  }
  else
  {
    result = *(_QWORD *)(v1 + 528);
    if ( result )
    {
      *(_DWORD *)(result - 4) = 0;
      if ( v3 <= 0 )
        return result;
      goto LABEL_22;
    }
  }
  if ( v3 <= 0 )
    return result;
LABEL_22:
  v16 = 0;
  v17 = v3;
  do
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v16) + 64LL);
    result = sub_7E5100(v1, v16);
    if ( (_DWORD)result != (_DWORD)v16 )
      goto LABEL_23;
    v19 = *(_BYTE **)(v1 + 80);
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 488LL);
    if ( v20 == sub_795570 )
    {
      if ( !v19[168] )
        goto LABEL_29;
      result = *(unsigned __int8 *)(v18 + 16);
    }
    else
    {
      result = v20((__int64)v19, v18);
    }
    if ( !(_BYTE)result )
      goto LABEL_23;
LABEL_29:
    result = *(_QWORD *)(v18 + 48);
    if ( result )
    {
      v67 = (__int64 *)(result + 8LL * *(unsigned int *)(result - 4));
      if ( v67 != (__int64 *)result )
      {
        v72 = v18;
        v21 = *(__int64 **)(v18 + 48);
        v73 = v17;
        v74 = v16;
        v69 = v1;
        while ( 1 )
        {
          v22 = *v21;
          if ( v22 != *(_QWORD *)(v22 + 80) )
            goto LABEL_32;
          v23 = *(_BYTE **)(v69 + 80);
          v24 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 488LL);
          if ( v24 != sub_795570 )
            break;
          if ( v23[168] )
          {
            result = *(unsigned __int8 *)(v22 + 16);
            goto LABEL_37;
          }
LABEL_38:
          result = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 4LL) )
            goto LABEL_32;
          result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
          if ( !result )
            goto LABEL_32;
          if ( *(_DWORD *)(v69 + 112) != *(_DWORD *)result )
            goto LABEL_32;
          if ( *(_DWORD *)(result + 4) != 1 )
            goto LABEL_32;
          result = *(_QWORD *)(v22 + 176);
          if ( v72 != *(_QWORD *)(result + 64) )
            goto LABEL_32;
          v25 = sub_874A00(v69, v72);
          v26 = *(unsigned int *)(v25 + 8);
          v27 = 2 * v26;
          if ( 3 * (int)v26 < (unsigned int)(4 * (*(_DWORD *)(v25 + 16) + *(_DWORD *)(v25 + 12))) )
          {
            v30 = 16LL * v27;
            v51 = sub_186B270(v30);
            v28 = (const __m128i *)v51;
            v52 = v51 + v30;
            if ( v27 )
            {
              if ( (v30 & 0x10) == 0 || (*(_QWORD *)(v51 + 8) = 0, v51 += 16, &v28[1] != (const __m128i *)v52) )
              {
                do
                {
                  *(_QWORD *)(v51 + 8) = 0;
                  v51 += 32;
                  *(_QWORD *)(v51 - 8) = 0;
                }
                while ( v51 != v52 );
              }
            }
            v53 = *(__m128i **)v25;
            v71 = v52;
            v29 = v27 - 1;
            v54 = *(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 8);
            if ( *(_QWORD *)v25 != v54 )
            {
              v55 = (__m128i *)v52;
              v56 = v22;
              v57 = *(const __m128i **)v25;
              v58 = 16LL * v27;
              v59 = v27;
              v60 = (__m128i *)v28;
              v61 = v25;
              v62 = v55;
              do
              {
                if ( v57->m128i_i64[1] > 1uLL )
                {
                  v63 = 16LL * (v57->m128i_i32[0] & v29);
                  v64 = &v60[(unsigned __int64)v63 / 0x10];
                  if ( v58 == v63 )
                  {
LABEL_123:
                    if ( v60 == v64 )
                    {
LABEL_128:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v65 = v60;
                    while ( v65->m128i_i64[1] )
                    {
                      if ( v64 == ++v65 )
                        goto LABEL_128;
                    }
                  }
                  else
                  {
                    v65 = &v60[(unsigned __int64)v63 / 0x10];
                    while ( v65->m128i_i64[1] )
                    {
                      if ( v62 == ++v65 )
                        goto LABEL_123;
                    }
                  }
                  *v65 = _mm_loadu_si128(v57);
                }
                ++v57;
              }
              while ( (const __m128i *)v54 != v57 );
              v25 = v61;
              v30 = v58;
              v28 = v60;
              v22 = v56;
              v53 = *(__m128i **)v25;
              v27 = v59;
            }
            if ( v53 )
            {
              v76 = v28;
              sub_186B220(v53);
              v28 = v76;
            }
            *(_QWORD *)v25 = v28;
            *(_DWORD *)(v25 + 8) = v27;
            *(_DWORD *)(v25 + 16) = 0;
          }
          else
          {
            v28 = *(const __m128i **)v25;
            v29 = v26 - 1;
            v30 = 16 * v26;
            v71 = *(_QWORD *)v25 + 16 * v26;
          }
          v75 = v28;
          v31 = sub_874080((_QWORD *)v22, *(_DWORD *)(v22 + 152) - 1);
          v33 = (__int64)v75;
          v34 = v31;
          result = 16LL * (v31 & v29);
          v35 = (__int64)v75->m128i_i64 + result;
          if ( result == v30 )
          {
            v36 = 0;
            while ( 1 )
            {
LABEL_84:
              if ( v35 == v33 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v47 = *(_QWORD *)(v33 + 8);
              if ( v47 > 1 )
              {
                if ( v34 == *(_DWORD *)v33 )
                {
                  result = *(unsigned int *)(v47 + 152);
                  if ( (unsigned int)result <= 1 )
                  {
LABEL_118:
                    *(_QWORD *)(v33 + 8) = v22;
                    goto LABEL_32;
                  }
                  v66 = (unsigned int)(result - 1);
                  result = 0;
                  while ( *(_QWORD *)(*(_QWORD *)(v47 + 8 * result + 184) + 64LL) == *(_QWORD *)(*(_QWORD *)(v22 + 8 * result + 184)
                                                                                               + 64LL) )
                  {
                    if ( ++result == v66 )
                      goto LABEL_118;
                  }
                }
              }
              else
              {
                if ( !v47 )
                {
                  if ( v36 )
                  {
                    v33 = v36;
                    *(_DWORD *)(v25 + 16) = v32 - 1;
                  }
                  *(_QWORD *)(v33 + 8) = v22;
                  *(_DWORD *)v33 = v34;
                  ++*(_DWORD *)(v25 + 12);
                  goto LABEL_32;
                }
                v36 = v33;
              }
              v33 += 16;
            }
          }
          result += (__int64)v75;
          v36 = 0;
          while ( 1 )
          {
            v37 = *(_QWORD *)(result + 8);
            if ( v37 <= 1 )
              break;
            if ( v34 == *(_DWORD *)result )
            {
              v48 = *(_DWORD *)(v37 + 152);
              if ( v48 <= 1 )
              {
LABEL_96:
                *(_QWORD *)(result + 8) = v22;
                goto LABEL_32;
              }
              v49 = v48 - 1;
              v50 = 0;
              while ( *(_QWORD *)(*(_QWORD *)(v37 + 8 * v50 + 184) + 64LL) == *(_QWORD *)(*(_QWORD *)(v22 + 8 * v50 + 184)
                                                                                        + 64LL) )
              {
                if ( ++v50 == v49 )
                  goto LABEL_96;
              }
            }
LABEL_48:
            result += 16;
            if ( result == v71 )
              goto LABEL_84;
          }
          if ( v37 )
          {
            v36 = result;
            goto LABEL_48;
          }
          if ( v36 )
          {
            result = v36;
            *(_DWORD *)(v25 + 16) = v32 - 1;
          }
          *(_QWORD *)(result + 8) = v22;
          *(_DWORD *)result = v34;
          ++*(_DWORD *)(v25 + 12);
LABEL_32:
          if ( v67 == ++v21 )
          {
            v17 = v73;
            v16 = v74;
            v1 = v69;
            goto LABEL_23;
          }
        }
        result = v24((__int64)v23, *v21);
LABEL_37:
        if ( !(_BYTE)result )
          goto LABEL_32;
        goto LABEL_38;
      }
    }
LABEL_23:
    ++v16;
  }
  while ( v17 != v16 );
  v14 = *(__int64 **)(v1 + 520);
  if ( v14 )
    goto LABEL_55;
  return result;
}

