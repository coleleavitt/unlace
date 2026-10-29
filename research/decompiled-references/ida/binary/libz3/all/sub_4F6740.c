__int64 __fastcall sub_4F6740(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v3; // al
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned int v6; // ebx
  char v7; // al
  char v8; // dl
  unsigned int v9; // edx
  __int64 v10; // r15
  int v11; // r14d
  _BYTE *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  __int64 *v17; // rbp
  _QWORD *v18; // r13
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 *v21; // r15
  __int64 *v22; // rbp
  __int64 v23; // rbx
  unsigned int v24; // edx
  _QWORD *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 *v33; // r12
  unsigned int v34; // edx
  _BYTE *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 i; // rax
  __int64 *v44; // rdx
  __int64 v46; // r14
  __int64 v47; // r12
  unsigned __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 *v51; // r14
  char *v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __m128i v58; // xmm2
  __int64 v59; // [rsp+8h] [rbp-F0h]
  _QWORD *v60; // [rsp+8h] [rbp-F0h]
  char v61; // [rsp+13h] [rbp-E5h]
  unsigned int v62; // [rsp+14h] [rbp-E4h]
  _BYTE *ptr; // [rsp+20h] [rbp-D8h]
  __int64 v64; // [rsp+28h] [rbp-D0h]
  unsigned int v65; // [rsp+28h] [rbp-D0h]
  _BYTE v66[64]; // [rsp+30h] [rbp-C8h] BYREF
  void *v67; // [rsp+70h] [rbp-88h]
  unsigned __int64 v68; // [rsp+78h] [rbp-80h]
  _BYTE v69[120]; // [rsp+80h] [rbp-78h] BYREF

  v2 = a1;
  ptr = v66;
  v64 = 0x800000000LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v59 = 0;
    while ( 1 )
    {
      v3 = sub_5537F0(a2, *(_QWORD *)(*(_QWORD *)a1 + 8 * v59));
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v59);
      if ( v3 )
      {
        v62 = v64;
        if ( !(_DWORD)v64 )
          goto LABEL_53;
        v61 = 0;
        v5 = 0;
        v6 = 0;
        do
        {
          while ( 1 )
          {
            v7 = sub_558790(a2, *(_QWORD *)&ptr[8 * v5], v4);
            if ( v7 )
              break;
            v8 = sub_558790(a2, v4, *(_QWORD *)&ptr[8 * v5]);
            v7 = v61;
            if ( !v8 )
              break;
            sub_553300(a2, *(_QWORD *)&ptr[8 * v5++]);
            if ( (unsigned int)v64 == v5 )
              goto LABEL_12;
          }
          if ( v6 != (_DWORD)v5 )
            *(_QWORD *)&ptr[8 * v6] = *(_QWORD *)&ptr[8 * v5];
          ++v5;
          v61 = v7;
          ++v6;
        }
        while ( (unsigned int)v64 != v5 );
LABEL_12:
        if ( (_DWORD)v64 != v6 )
        {
          v9 = v64;
          if ( (unsigned int)v64 >= v6 )
          {
            if ( v6 < (unsigned int)v64 )
              LODWORD(v64) = v6;
          }
          else
          {
            LODWORD(v10) = HIDWORD(v64);
            v11 = v64;
            do
            {
              if ( v9 < (unsigned int)v10 )
              {
                v12 = ptr;
              }
              else
              {
                v10 = (unsigned int)(2 * v10);
                v14 = sub_186B270(8 * v10);
                v9 = v64;
                v12 = (_BYTE *)v14;
                if ( (_DWORD)v64 )
                {
                  if ( (unsigned int)(v64 - 1) <= 2 || (_BYTE *)v14 == ptr + 8 )
                  {
                    v42 = 0;
                    do
                    {
                      *(_QWORD *)&v12[v42] = *(_QWORD *)&ptr[v42];
                      v42 += 8;
                    }
                    while ( 8LL * (unsigned int)v64 != v42 );
                  }
                  else
                  {
                    v15 = 0;
                    do
                    {
                      *(__m128i *)&v12[v15] = _mm_loadu_si128((const __m128i *)&ptr[v15]);
                      v15 += 16;
                    }
                    while ( 16LL * ((unsigned int)v64 >> 1) != v15 );
                    if ( (v64 & 1) != 0 )
                      *(_QWORD *)&v12[8 * (v64 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v64 & 0xFFFFFFFE)];
                  }
                }
                if ( ptr != v66 && ptr )
                {
                  sub_186B220(ptr);
                  v9 = v64;
                }
                ptr = v12;
                HIDWORD(v64) = v10;
              }
              v13 = v9;
              ++v11;
              ++v9;
              *(_QWORD *)&v12[8 * v13] = 0;
              LODWORD(v64) = v9;
            }
            while ( v11 != v6 );
          }
        }
        if ( !v61 )
          break;
      }
      sub_553300(a2, v4);
LABEL_30:
      ++v59;
      result = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v59 >= (unsigned int)result )
      {
        v17 = *(__int64 **)a1;
        v18 = (_QWORD *)(a1 + 16);
        v67 = v69;
        v68 = 0x800000000LL;
        if ( v17 != (__int64 *)(a1 + 16) )
        {
          v19 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
          v20 = (unsigned int)v64;
          *(_QWORD *)a1 = v18;
          v67 = v17;
          v21 = (__int64 *)ptr;
          *(_DWORD *)(a1 + 12) = 8;
          v68 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), v19).m128i_u64[0];
          goto LABEL_33;
        }
        if ( (_DWORD)result )
        {
          v60 = (_QWORD *)(a1 + 16);
          v44 = v17;
          v46 = 8 * result;
          LODWORD(v47) = 8;
          v17 = (__int64 *)v69;
          v48 = 0;
          LODWORD(result) = 0;
          v49 = v46;
          while ( 1 )
          {
            v51 = &v44[v48 / 8];
            if ( (unsigned int)result >= (unsigned int)v47 )
            {
              v47 = (unsigned int)(2 * v47);
              result = sub_186B270(8 * v47);
              v52 = (char *)v67;
              v17 = (__int64 *)result;
              LODWORD(result) = v68;
              if ( (_DWORD)v68 )
              {
                if ( (unsigned int)(v68 - 1) <= 2 || v17 == (__int64 *)((char *)v67 + 8) )
                {
                  v56 = 0;
                  v57 = 8LL * (unsigned int)v68;
                  do
                  {
                    v17[v56 / 8] = *(_QWORD *)&v52[v56];
                    v56 += 8LL;
                  }
                  while ( v57 != v56 );
                }
                else
                {
                  v53 = 0;
                  v54 = 16LL * ((unsigned int)v68 >> 1);
                  do
                  {
                    *(__m128i *)&v17[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                    v53 += 16LL;
                  }
                  while ( v54 != v53 );
                  if ( (result & 1) != 0 )
                    v17[(unsigned int)result & 0xFFFFFFFE] = *(_QWORD *)&v52[8 * (result & 0xFFFFFFFE)];
                }
              }
              if ( v52 != v69 && v52 )
              {
                sub_186B220(v52);
                LODWORD(result) = v68;
              }
              v67 = v17;
              HIDWORD(v68) = v47;
            }
            v50 = (unsigned int)result;
            v48 += 8LL;
            result = (unsigned int)(result + 1);
            v17[v50] = *v51;
            LODWORD(v68) = result;
            if ( v49 == v48 )
              break;
            v44 = *(__int64 **)a1;
          }
          v2 = a1;
          v21 = (__int64 *)ptr;
          v18 = v60;
          v20 = (unsigned int)v64;
LABEL_33:
          *(_DWORD *)(v2 + 8) = 0;
          if ( (_DWORD)v20 )
          {
LABEL_34:
            v22 = &v21[v20];
            LODWORD(v23) = *(_DWORD *)(v2 + 12);
            v24 = 0;
            do
            {
              if ( v24 < (unsigned int)v23 )
              {
                v25 = *(_QWORD **)v2;
              }
              else
              {
                v23 = (unsigned int)(2 * v23);
                v28 = sub_186B270(8 * v23);
                v24 = *(_DWORD *)(v2 + 8);
                v29 = *(_QWORD **)v2;
                v25 = (_QWORD *)v28;
                if ( v24 )
                {
                  if ( v24 - 1 <= 2 || (_QWORD *)v28 == v29 + 1 )
                  {
                    for ( i = 0; i != v24; ++i )
                      v25[i] = v29[i];
                  }
                  else
                  {
                    v30 = 0;
                    do
                    {
                      *(__m128i *)&v25[v30] = _mm_loadu_si128((const __m128i *)&v29[v30]);
                      v30 += 2;
                    }
                    while ( 2LL * (v24 >> 1) != v30 );
                    if ( (v24 & 1) != 0 )
                      v25[v24 & 0xFFFFFFFE] = v29[v24 & 0xFFFFFFFE];
                  }
                }
                if ( v18 != v29 && v29 )
                {
                  sub_186B220(v29);
                  v24 = *(_DWORD *)(v2 + 8);
                }
                *(_QWORD *)v2 = v25;
                *(_DWORD *)(v2 + 12) = v23;
              }
              v26 = *v21;
              v27 = v24;
              ++v21;
              ++v24;
              v25[v27] = v26;
              *(_DWORD *)(v2 + 8) = v24;
            }
            while ( v22 != v21 );
            v17 = (__int64 *)v67;
            result = (unsigned int)v68;
          }
          v65 = 0;
          if ( (_DWORD)result )
          {
            LODWORD(v32) = HIDWORD(v64);
            v33 = &v17[result];
            v34 = 0;
            do
            {
              if ( v34 < (unsigned int)v32 )
              {
                v35 = ptr;
              }
              else
              {
                v32 = (unsigned int)(2 * v32);
                v38 = sub_186B270(8 * v32);
                v34 = v65;
                v35 = (_BYTE *)v38;
                if ( v65 )
                {
                  if ( v65 - 1 <= 2 || (_BYTE *)v38 == ptr + 8 )
                  {
                    v41 = 0;
                    do
                    {
                      *(_QWORD *)&v35[v41] = *(_QWORD *)&ptr[v41];
                      v41 += 8;
                    }
                    while ( 8LL * v65 != v41 );
                  }
                  else
                  {
                    v39 = 0;
                    do
                    {
                      *(__m128i *)&v35[v39] = _mm_loadu_si128((const __m128i *)&ptr[v39]);
                      v39 += 16;
                    }
                    while ( 16LL * (v65 >> 1) != v39 );
                    if ( (v65 & 1) != 0 )
                      *(_QWORD *)&v35[8 * (v65 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v65 & 0xFFFFFFFE)];
                  }
                }
                if ( ptr && ptr != v66 )
                {
                  sub_186B220(ptr);
                  v34 = v65;
                }
                ptr = v35;
              }
              v36 = *v17;
              v37 = v34;
              ++v17;
              ++v34;
              *(_QWORD *)&v35[8 * v37] = v36;
              v65 = v34;
            }
            while ( v33 != v17 );
            v17 = (__int64 *)v67;
          }
LABEL_74:
          result = (__int64)v69;
          if ( v17 != (__int64 *)v69 && v17 )
            result = sub_186B220(v17);
          v21 = (__int64 *)ptr;
        }
        else
        {
          v20 = (unsigned int)v64;
          v21 = (__int64 *)ptr;
          if ( (_DWORD)v64 )
            goto LABEL_34;
        }
        goto LABEL_78;
      }
    }
    v62 = v64;
LABEL_53:
    if ( v62 < HIDWORD(v64) )
    {
      v31 = (__int64)ptr;
LABEL_55:
      *(_QWORD *)(v31 + 8LL * v62) = v4;
      LODWORD(v64) = v62 + 1;
      goto LABEL_30;
    }
    v31 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v64)));
    v62 = v64;
    if ( (_DWORD)v64 )
    {
      if ( (unsigned int)(v64 - 1) <= 2 || (_BYTE *)v31 == ptr + 8 )
      {
        v55 = 0;
        do
        {
          *(_QWORD *)(v31 + v55) = *(_QWORD *)&ptr[v55];
          v55 += 8;
        }
        while ( 8LL * (unsigned int)v64 != v55 );
        if ( ptr )
        {
LABEL_90:
          if ( ptr != v66 )
          {
            sub_186B220(ptr);
            v62 = v64;
          }
        }
LABEL_92:
        ptr = (_BYTE *)v31;
        HIDWORD(v64) *= 2;
        goto LABEL_55;
      }
      v40 = 0;
      do
      {
        *(__m128i *)(v31 + v40) = _mm_loadu_si128((const __m128i *)&ptr[v40]);
        v40 += 16;
      }
      while ( v40 != 16LL * ((unsigned int)v64 >> 1) );
      if ( (v64 & 1) != 0 )
        *(_QWORD *)(v31 + 8LL * ((unsigned int)v64 & 0xFFFFFFFE)) = *(_QWORD *)&ptr[8 * (v64 & 0xFFFFFFFE)];
    }
    if ( ptr )
      goto LABEL_90;
    goto LABEL_92;
  }
  v17 = *(__int64 **)a1;
  v21 = (__int64 *)v66;
  v68 = 0x800000000LL;
  result = a1 + 16;
  if ( (__int64 *)(a1 + 16) != v17 )
  {
    v58 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = 0x800000000LL;
    v67 = v17;
    v68 = _mm_unpacklo_epi32((__m128i)0LL, v58).m128i_u64[0];
    goto LABEL_74;
  }
LABEL_78:
  if ( v21 )
  {
    result = (__int64)v66;
    if ( v21 != (__int64 *)v66 )
      return sub_186B220(v21);
  }
  return result;
}

