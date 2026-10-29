__int64 __fastcall sub_239F20(__int64 a1)
{
  void *v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  _DWORD *v6; // rdi
  unsigned int v7; // ebp
  _QWORD *v8; // r12
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned int *v13; // r13
  void (__fastcall *v14)(__int64, _QWORD, __m128i *); // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // r12
  bool v18; // zf
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rsi
  void *v23; // rdi
  _DWORD *v25; // rcx
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // edi
  unsigned int *v31; // r13
  unsigned int v32; // eax
  unsigned int *v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // r8d
  size_t v38; // rsi
  _DWORD *v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rdi
  int v44; // eax
  unsigned int **v45; // rdi
  _DWORD *v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // r8d
  unsigned int v50; // r14d
  unsigned int *v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // r9d
  unsigned int v54; // eax
  unsigned int *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rsi
  char **exception; // rbp
  __int64 v59; // rdx
  int v60; // [rsp+0h] [rbp-C8h]
  __int64 v61; // [rsp+8h] [rbp-C0h]
  __int64 *v62; // [rsp+10h] [rbp-B8h]
  __int64 v63; // [rsp+18h] [rbp-B0h]
  void *v64; // [rsp+20h] [rbp-A8h]
  int v65; // [rsp+28h] [rbp-A0h]
  int v66[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v67; // [rsp+38h] [rbp-90h]
  __int64 v68; // [rsp+40h] [rbp-88h] BYREF
  void *v69; // [rsp+48h] [rbp-80h]
  __m128i v70; // [rsp+50h] [rbp-78h] BYREF
  __m128i v71; // [rsp+60h] [rbp-68h]
  __int64 v72[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(void **)(a1 + 8);
  v3 = *(__int64 **)(a1 + 16);
  *(_QWORD *)v66 = 0;
  v67 = v2;
  v69 = v2;
  v4 = *v3;
  v68 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 16))(v3);
  v6 = *(_DWORD **)(a1 + 16);
  LODWORD(v64) = v5;
  v7 = v6[2];
  (*(void (**)(void))(*(_QWORD *)v6 + 16LL))();
  HIDWORD(v61) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v62 = &v68;
  if ( v7 != HIDWORD(v61) )
  {
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                         *(_QWORD *)(a1 + 16),
                         v7);
        sub_144E0B0(a1 + 32, v8[1], (int)v66, (int)v62, v9, v10, v60, v61, (int)v62, v63, v64, v65, v66[0], v67);
        v11 = *(_QWORD *)(a1 + 16);
        v12 = v8[2];
        v13 = (unsigned int *)v8[3];
        v14 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v11 + 32LL);
        if ( v12 && v68 )
          v15 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v12, v68);
        else
          v15 = 0;
        v70 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)*(unsigned __int64 *)v66);
        v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v13);
        if ( *(_QWORD *)v66 )
          ++*(_DWORD *)(*(_QWORD *)v66 + 8LL);
        if ( v13 )
          *v13 = (*v13 + 1) & 0x3FFFFFFF | *v13 & 0xC0000000;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v14(v11, v7, &v70);
        v16 = v70.m128i_i64[1];
        v17 = (_QWORD *)v70.m128i_i64[0];
        if ( v70.m128i_i64[1] )
        {
          v18 = (*(_DWORD *)(v70.m128i_i64[1] + 8))-- == 1;
          if ( v18 )
          {
            sub_15D7BC0(v17, v16);
            v17 = (_QWORD *)v70.m128i_i64[0];
          }
        }
        v19 = v71.m128i_i64[1];
        if ( v71.m128i_i64[1] )
        {
          v20 = (*(_DWORD *)v71.m128i_i64[1] + 0x3FFFFFFF) & 0x3FFFFFFF | *(_DWORD *)v71.m128i_i64[1] & 0xC0000000;
          *(_DWORD *)v71.m128i_i64[1] = v20;
          if ( (v20 & 0x3FFFFFFF) == 0 )
          {
            v25 = (_DWORD *)v17[83];
            if ( v25 )
            {
              v26 = (unsigned int)*(v25 - 1);
              if ( (_DWORD)v26 == *(v25 - 2) )
              {
                v37 = (unsigned int)(3 * v26 + 1) >> 1;
                v38 = 8 * v37 + 8;
                if ( 8 * (int)v26 + 8 >= (unsigned int)v38 || (unsigned int)v26 >= v37 )
                {
LABEL_63:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_A3E10(v72, "Overflow encountered when expanding vector", v59);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v72);
                  sub_233E40((__int64)v72);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                HIDWORD(v64) = (unsigned int)(3 * v26 + 1) >> 1;
                v63 = v19;
                v39 = (_DWORD *)sub_186B300(v25 - 2, v38);
                v40 = (unsigned int)v39[1];
                v25 = v39 + 2;
                v17[83] = v39 + 2;
                v27 = v40 + 1;
                *v39 = HIDWORD(v64);
                *(_QWORD *)&v39[2 * v40 + 2] = v63;
                v39[1] = v40 + 1;
              }
              else
              {
                v27 = v26 + 1;
                *(_QWORD *)&v25[2 * v26] = v19;
                *(v25 - 1) = v26 + 1;
              }
            }
            else
            {
              v63 = v19;
              v48 = sub_186B270(0x18u);
              v27 = 1;
              v25 = (_DWORD *)(v48 + 8);
              *(_QWORD *)v48 = 2;
              v17[83] = v48 + 8;
              *(_QWORD *)(v48 + 8) = v63;
              *(_DWORD *)(v48 + 4) = 1;
            }
            if ( v27 )
            {
              while ( 1 )
              {
                v28 = (unsigned int)(v27 - 1);
                v29 = *(_QWORD *)&v25[2 * v28];
                v30 = v27 - 1;
                *(v25 - 1) = v28;
                if ( *(char *)(v29 + 3) < 0 )
                {
                  v35 = *(_QWORD *)(v29 + 8);
                  if ( v35 )
                  {
                    v36 = v17[81];
                    v18 = (*(_DWORD *)(v35 + 8))-- == 1;
                    if ( v18 )
                    {
                      v63 = v29;
                      sub_15D7BC0(v36, v35);
                      v29 = v63;
                    }
                  }
                  sub_17E9C40(v17[82], 16, v29);
                }
                else
                {
                  v31 = *(unsigned int **)(v29 + 8);
                  v32 = (*v31 + 0x3FFFFFFF) & 0x3FFFFFFF | *v31 & 0xC0000000;
                  *v31 = v32;
                  if ( (v32 & 0x3FFFFFFF) == 0 )
                  {
                    if ( v30 == *(v25 - 2) )
                    {
                      v63 = v29;
                      v53 = (3 * v30 + 1) >> 1;
                      v54 = 8 * v53 + 8;
                      if ( 8 * v27 >= v54 || v30 >= v53 )
                        goto LABEL_63;
                      v55 = (unsigned int *)sub_186B300(v25 - 2, v54);
                      v29 = v63;
                      v46 = v55 + 2;
                      v17[83] = v55 + 2;
                      *v55 = (3 * v30 + 1) >> 1;
                    }
                    else
                    {
                      v46 = (_DWORD *)v17[83];
                    }
                    v47 = *(v46 - 1);
                    *(_QWORD *)&v46[2 * v47] = v31;
                    *(v46 - 1) = v47 + 1;
                  }
                  v33 = *(unsigned int **)(v29 + 16);
                  v34 = (*v33 + 0x3FFFFFFF) & 0x3FFFFFFF | *v33 & 0xC0000000;
                  *v33 = v34;
                  if ( (v34 & 0x3FFFFFFF) == 0 )
                  {
                    v41 = (_QWORD *)v17[83];
                    if ( v41 )
                    {
                      v42 = *((_DWORD *)v41 - 1);
                      if ( v42 == *((_DWORD *)v41 - 2) )
                      {
                        v63 = v29;
                        v49 = (3 * v42 + 1) >> 1;
                        v50 = v49;
                        if ( 8 * v42 + 8 >= 8 * v49 + 8 || v42 >= v49 )
                          goto LABEL_63;
                        v51 = (unsigned int *)sub_186B300(v41 - 1, 8 * v49 + 8);
                        v29 = v63;
                        v52 = v51[1];
                        v41 = v51 + 2;
                        v17[83] = v51 + 2;
                        *v51 = v50;
                        LODWORD(v51) = v52;
                        v45 = (unsigned int **)&v41[v52];
                        v44 = (_DWORD)v51 + 1;
                      }
                      else
                      {
                        v43 = v42;
                        v44 = v42 + 1;
                        v45 = (unsigned int **)&v41[v43];
                      }
                    }
                    else
                    {
                      v63 = v29;
                      v56 = (_QWORD *)sub_186B270(0x18u);
                      v29 = v63;
                      v57 = v56;
                      *v56 = 2;
                      v44 = 1;
                      v41 = v57 + 1;
                      v17[83] = v41;
                      v45 = (unsigned int **)v41;
                    }
                    *v45 = v33;
                    *((_DWORD *)v41 - 1) = v44;
                  }
                  sub_17E9C40(v17[82], 24, v29);
                }
                v25 = (_DWORD *)v17[83];
                if ( v25 )
                {
                  v27 = *(v25 - 1);
                  if ( v27 )
                    continue;
                }
                break;
              }
            }
            v17 = (_QWORD *)v70.m128i_i64[0];
          }
        }
        v21 = v71.m128i_i64[0];
        if ( v71.m128i_i64[0] )
        {
          v18 = (*(_DWORD *)(v71.m128i_i64[0] + 8))-- == 1;
          if ( v18 )
            sub_15D7BC0(v17, v21);
        }
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v7 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          break;
        }
        if ( HIDWORD(v61) == ++v7 )
          goto LABEL_25;
      }
      v7 = (unsigned int)v64;
    }
    while ( HIDWORD(v61) != (_DWORD)v64 );
  }
LABEL_25:
  v22 = v68;
  if ( v68 )
  {
    v23 = v69;
    v18 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v23, v22);
  }
  return sub_22BCA0(*(__int64 *)v66, (__int64)v67);
}

