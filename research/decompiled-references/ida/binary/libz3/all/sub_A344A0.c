__int64 __fastcall sub_A344A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int8 v12; // r14
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // edx
  int v20; // esi
  _BYTE *v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  char *v35; // rax
  char *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // r10
  void *v42; // [rsp+0h] [rbp-1C8h]
  void *v43; // [rsp+0h] [rbp-1C8h]
  int v44; // [rsp+0h] [rbp-1C8h]
  unsigned int v45; // [rsp+8h] [rbp-1C0h]
  __int64 v46; // [rsp+18h] [rbp-1B0h]
  _QWORD *v47; // [rsp+18h] [rbp-1B0h]
  unsigned int *v48; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-1A0h]
  __int64 v50; // [rsp+30h] [rbp-198h] BYREF
  __int64 v51; // [rsp+38h] [rbp-190h]
  __int64 v52; // [rsp+40h] [rbp-188h] BYREF
  __int64 v53; // [rsp+48h] [rbp-180h]
  __int64 v54; // [rsp+50h] [rbp-178h] BYREF
  __int64 v55; // [rsp+58h] [rbp-170h]
  char v56[32]; // [rsp+60h] [rbp-168h] BYREF
  char v57[32]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v58[96]; // [rsp+A0h] [rbp-128h] BYREF
  void *ptr; // [rsp+100h] [rbp-C8h]
  __int64 v60; // [rsp+108h] [rbp-C0h]
  _BYTE v61[184]; // [rsp+110h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = 8 * v9;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD **)(*(_QWORD *)(v8 + v11) + 32LL);
          if ( v13 )
          {
            LODWORD(a4) = *((_DWORD *)v13 - 1);
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 464) + 132LL) < (unsigned int)a4 )
              return 0;
            if ( (_DWORD)a4 )
              break;
          }
LABEL_4:
          v11 += 8;
          if ( v11 == v10 )
            goto LABEL_11;
        }
        v14 = *(_DWORD **)(sub_15D1F10(*v13) + 24);
        if ( v14 && *v14 == 5 )
        {
          v8 = *(_QWORD *)(a2 + 8);
          v12 = v14[1] == 1;
          goto LABEL_4;
        }
        v11 += 8;
        v8 = *(_QWORD *)(a2 + 8);
        v12 = 0;
        if ( v11 == v10 )
        {
LABEL_11:
          v15 = 0;
          v52 = 0;
          ptr = v61;
          v53 = 0;
          v54 = 1;
          v55 = 0;
          v60 = 0x1000000000LL;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v8 + v15);
            v17 = *(_QWORD *)(v16 + 32);
            if ( v17 && *(_DWORD *)(v17 - 4) )
            {
              v18 = sub_9A3540(a1, v16, v12, (int)a4, a5, a6);
              v19 = v60;
              if ( (unsigned int)v60 >= HIDWORD(v60) )
              {
                v44 = 2 * HIDWORD(v60);
                v35 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v60)));
                v19 = v60;
                v36 = (char *)ptr;
                a4 = v35;
                if ( (_DWORD)v60 )
                {
                  if ( (unsigned int)(v60 - 1) <= 2 || v35 == (char *)ptr + 8 )
                  {
                    v40 = 0;
                    v41 = 8LL * (unsigned int)v60;
                    do
                    {
                      a6 = *(_QWORD *)&v36[v40];
                      a4[v40 / 8] = a6;
                      v40 += 8LL;
                    }
                    while ( v41 != v40 );
                  }
                  else
                  {
                    v37 = 0;
                    a6 = 16LL * ((unsigned int)v60 >> 1);
                    do
                    {
                      *(__m128i *)&a4[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37]);
                      v37 += 16LL;
                    }
                    while ( a6 != v37 );
                    if ( (v19 & 1) != 0 )
                    {
                      v38 = v19 & 0xFFFFFFFE;
                      a6 = *(_QWORD *)&v36[8 * v38];
                      a4[v38] = a6;
                    }
                  }
                }
                if ( v36 && v36 != v61 )
                {
                  v47 = a4;
                  sub_186B220(v36);
                  v19 = v60;
                  a4 = v47;
                }
                ptr = a4;
                HIDWORD(v60) = v44;
              }
              else
              {
                a4 = ptr;
              }
              v15 += 8;
              a4[v19] = v18;
              LODWORD(v60) = v19 + 1;
              if ( v15 == v10 )
              {
LABEL_22:
                v20 = v60;
                v21 = ptr;
                goto LABEL_23;
              }
            }
            else
            {
              if ( (v54 & 0x100000000LL) != 0
                || (_DWORD)v54 != 1
                || (*(_BYTE *)(v16 + 20) & 1) != 0
                || *(_DWORD *)(v16 + 16) != 1 )
              {
                sub_1852000(qword_1C7F2C0, &v52, *(_QWORD *)(v8 + v15));
              }
              else
              {
                v43 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, &v52, *(_QWORD *)(v8 + v15));
                sub_182CBA0(v43, &v54);
                BYTE4(v54) &= ~1u;
                LODWORD(v54) = 1;
              }
              v15 += 8;
              if ( v15 == v10 )
                goto LABEL_22;
            }
            v8 = *(_QWORD *)(a2 + 8);
          }
        }
      }
    }
  }
  v20 = 0;
  v52 = 0;
  v60 = 0x1000000000LL;
  v21 = v61;
  v53 = 0;
  v54 = 1;
  v55 = 0;
  ptr = v61;
LABEL_23:
  v22 = *(_QWORD *)(a1 + 16) + 7456LL;
  v46 = *(_QWORD *)(a1 + 24);
  v23 = sub_9A3300(a1, v20, (__int64)v21, 0);
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v25 = *(_QWORD *)(a1 + 24);
  v48 = nullptr;
  v49 = v25;
  v50 = 0;
  v51 = v25;
  sub_14BB8A0(v22, v24, &v48, &v50);
  v26 = *(_QWORD *)(a1 + 16);
  v27 = *(_QWORD *)(v26 + 8656);
  if ( v27 )
  {
    v28 = *v48;
    if ( (unsigned int)v28 < *(_DWORD *)(v27 - 4) )
    {
      v29 = *(_QWORD *)(v27 + 8 * v28);
      if ( v29 )
      {
        if ( (unsigned int)sub_B39350(v29, *(unsigned int *)(a1 + 8)) != -1 )
          goto LABEL_29;
        v26 = *(_QWORD *)(a1 + 16);
      }
    }
  }
  sub_B6F780(v26);
  v39 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v39 + 7488) + 48LL))(*(_QWORD *)(v39 + 7488), v48);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 7488) + 64LL))(*(_QWORD *)(v39 + 7488));
LABEL_29:
  v45 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v48), *(unsigned int *)(a1 + 8));
  v42 = *(void **)(a2 + 16);
  sub_894960((__int64)v56, (__int64)&v52);
  sub_9D4F70((__int64)v58, (__int64)v56);
  sub_A32F60(a1, v45, (__int64)v58, 0, (__int64)v42);
  sub_2A6060((__int64)v58);
  sub_25A130(v57);
  sub_25A130(v56);
  v30 = *(_QWORD *)(a2 + 16);
  sub_894960((__int64)v56, (__int64)&v52);
  sub_9D4F70((__int64)v58, (__int64)v56);
  sub_A32F60(a1, v45, (__int64)v58, 1, v30);
  sub_2A6060((__int64)v58);
  sub_25A130(v57);
  sub_25A130(v56);
  v31 = v50;
  if ( v50 )
  {
    v32 = v51;
    if ( (*(_DWORD *)(v50 + 8))-- == 1 )
      sub_15D7BC0(v32, v31);
  }
  sub_98B270((__int64)v48, v49);
  sub_98B270(v24, v46);
  if ( ptr != v61 )
  {
    if ( ptr )
      sub_186B220(ptr);
  }
  sub_25A130((char *)&v52);
  return 1;
}

