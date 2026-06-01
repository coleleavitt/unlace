__m128i *__fastcall sub_9BF6A0(__m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int8 v7; // r14
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned int v13; // esi
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // r12
  char v18; // al
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r12
  _BYTE *v25; // rax
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  _BYTE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rbx
  unsigned int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r14
  _BYTE *v44; // rax
  char *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r9
  _QWORD *v50; // [rsp+0h] [rbp-158h]
  void *v51; // [rsp+10h] [rbp-148h]
  _BYTE *v52; // [rsp+10h] [rbp-148h]
  _BYTE *v53; // [rsp+10h] [rbp-148h]
  char v55; // [rsp+3Fh] [rbp-119h] BYREF
  __int64 v56; // [rsp+40h] [rbp-118h] BYREF
  __int64 v57; // [rsp+48h] [rbp-110h] BYREF
  _QWORD v58[2]; // [rsp+50h] [rbp-108h] BYREF
  _QWORD v59[2]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v60[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v61[16]; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h]
  __int64 v63; // [rsp+98h] [rbp-C0h]
  _BYTE v64[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)a3;
  ptr = v64;
  v58[0] = 0;
  v63 = 0x1000000000LL;
  v5 = *(unsigned int *)(a3 + 8);
  v58[1] = 0;
  v59[0] = 1;
  v59[1] = 0;
  v6 = v4 + 40 * v5;
  if ( v4 != v6 )
  {
    v50 = a2 + 43;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v4 + 32);
      v18 = sub_1666AE0(v50, v17, v58, &v55);
      v7 = (*(_BYTE *)(v4 + 20) & 1) == 0;
      if ( v18 )
      {
        if ( (*(_BYTE *)(v4 + 20) & 1) == 0 )
        {
          v7 = 0;
          if ( *(_DWORD *)(v4 + 16) == 1 )
            v7 = sub_98B380(v17);
        }
        sub_3EBE30((__int64)v60, v4, (__int64)v58);
        v11 = a2[44];
        if ( !v11 )
        {
          sub_16669E0(v50);
          v11 = a2[44];
        }
        v12 = sub_166A700(v11, (unsigned int)v60, v7, v8, v9, v10);
        v51 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v60);
        sub_182CBA0(v51, v61);
        v56 = v12;
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        sub_98C750(a2 + 171, &v56);
        v13 = v63;
        if ( (unsigned int)v63 >= HIDWORD(v63) )
        {
          v24 = (unsigned int)(2 * HIDWORD(v63));
          v29 = (_BYTE *)sub_186B270(8 * v24);
          v13 = v63;
          v26 = (char *)ptr;
          v14 = v29;
          if ( (_DWORD)v63 )
          {
            if ( (unsigned int)(v63 - 1) > 2 && v29 != (char *)ptr + 8 )
            {
              v30 = 0;
              v31 = 16LL * ((unsigned int)v63 >> 1);
              do
              {
                *(__m128i *)&v14[v30] = _mm_loadu_si128((const __m128i *)&v26[v30]);
                v30 += 16;
              }
              while ( v30 != v31 );
              goto LABEL_30;
            }
            v39 = 0;
            v40 = 8LL * (unsigned int)v63;
            do
            {
              *(_QWORD *)&v14[v39] = *(_QWORD *)&v26[v39];
              v39 += 8;
            }
            while ( v39 != v40 );
          }
LABEL_32:
          if ( v26 != v64 && v26 )
          {
            v52 = v14;
            sub_186B220(v26);
            v13 = v63;
            v14 = v52;
          }
          ptr = v14;
          HIDWORD(v63) = v24;
          goto LABEL_12;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v4 + 4) & 1) == 0 && *(_DWORD *)v4 == 1 )
        {
          if ( (*(_BYTE *)(v4 + 20) & 1) == 0 )
          {
            v7 = 0;
            if ( *(_DWORD *)(v4 + 16) == 1 )
            {
              v37 = v63;
              if ( (unsigned int)v63 >= HIDWORD(v63) )
              {
                v43 = (unsigned int)(2 * HIDWORD(v63));
                v44 = (_BYTE *)sub_186B270(8 * v43);
                v37 = v63;
                v45 = (char *)ptr;
                v14 = v44;
                if ( (_DWORD)v63 )
                {
                  if ( (unsigned int)(v63 - 1) <= 2 || v44 == (char *)ptr + 8 )
                  {
                    v48 = 0;
                    v49 = 8LL * (unsigned int)v63;
                    do
                    {
                      *(_QWORD *)&v14[v48] = *(_QWORD *)&v45[v48];
                      v48 += 8;
                    }
                    while ( v49 != v48 );
                  }
                  else
                  {
                    v46 = 0;
                    v47 = 16LL * ((unsigned int)v63 >> 1);
                    do
                    {
                      *(__m128i *)&v14[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
                      v46 += 16;
                    }
                    while ( v46 != v47 );
                    if ( (v37 & 1) != 0 )
                      *(_QWORD *)&v14[8 * (v37 & 0xFFFFFFFE)] = *(_QWORD *)&v45[8 * (v37 & 0xFFFFFFFE)];
                  }
                }
                if ( v45 != v64 && v45 )
                {
                  v53 = v14;
                  sub_186B220(v45);
                  v37 = v63;
                  v14 = v53;
                }
                ptr = v14;
                HIDWORD(v63) = v43;
              }
              else
              {
                v14 = ptr;
              }
              v38 = v37;
              v16 = v37 + 1;
              *(_QWORD *)&v14[8 * v38] = v17;
              goto LABEL_13;
            }
          }
        }
        else if ( (*(_BYTE *)(v4 + 20) & 1) == 0 )
        {
          v7 = 0;
          if ( *(_DWORD *)(v4 + 16) == 1 )
            v7 = sub_98B380(v17);
        }
        v22 = a2[44];
        if ( !v22 )
        {
          sub_16669E0(v50);
          v22 = a2[44];
        }
        sub_166A700(v22, v4, v7, v19, v20, v21);
        v23 = sub_15E1B70(a2[43]);
        v57 = v23;
        v12 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        sub_98C750(a2 + 171, &v57);
        v13 = v63;
        if ( (unsigned int)v63 >= HIDWORD(v63) )
        {
          v24 = (unsigned int)(2 * HIDWORD(v63));
          v25 = (_BYTE *)sub_186B270(8 * v24);
          v13 = v63;
          v26 = (char *)ptr;
          v14 = v25;
          if ( (_DWORD)v63 )
          {
            if ( (unsigned int)(v63 - 1) <= 2 || v25 == (char *)ptr + 8 )
            {
              v41 = 0;
              v42 = 8LL * (unsigned int)v63;
              do
              {
                *(_QWORD *)&v14[v41] = *(_QWORD *)&v26[v41];
                v41 += 8;
              }
              while ( v42 != v41 );
            }
            else
            {
              v27 = 0;
              v28 = 16LL * ((unsigned int)v63 >> 1);
              do
              {
                *(__m128i *)&v14[v27] = _mm_loadu_si128((const __m128i *)&v26[v27]);
                v27 += 16;
              }
              while ( v27 != v28 );
LABEL_30:
              if ( (v13 & 1) != 0 )
                *(_QWORD *)&v14[8 * (v13 & 0xFFFFFFFE)] = *(_QWORD *)&v26[8 * (v13 & 0xFFFFFFFE)];
            }
          }
          goto LABEL_32;
        }
      }
      v14 = ptr;
LABEL_12:
      v15 = v13;
      v16 = v13 + 1;
      *(_QWORD *)&v14[8 * v15] = v12;
LABEL_13:
      v4 += 40;
      LODWORD(v63) = v16;
      if ( v6 == v4 )
        goto LABEL_43;
    }
  }
  v14 = v64;
  v16 = 0;
LABEL_43:
  v32 = a2[3];
  v33 = sub_99D860((__int64)a2, v16, (__int64)v14, 0);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)v32);
  if ( v33 )
  {
    v34 = *(_DWORD *)(v33 + 8);
    v60[0] = v33;
    *(_DWORD *)(v33 + 8) = v34 + 2;
  }
  else
  {
    v60[0] = 0;
  }
  sub_98C750(a2 + 171, v60);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v58);
  sub_182CBA0(v35, v59);
  if ( ptr != v64 && ptr )
    sub_186B220(ptr);
  return a1;
}

