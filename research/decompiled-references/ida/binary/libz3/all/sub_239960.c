__int64 __fastcall sub_239960(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int v4; // eax
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  int v8; // r13d
  __int64 v9; // r12
  __int64 *v10; // rdi
  __m128i v11; // xmm0
  unsigned int *v12; // rdx
  __int64 v13; // rax
  void (__fastcall *v14)(__int64 *, _QWORD, __m128i *); // rcx
  __int64 v15; // rsi
  _QWORD *v16; // r12
  bool v17; // zf
  unsigned int *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // edi
  unsigned int *v28; // r8
  unsigned int v29; // eax
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdi
  int v41; // eax
  unsigned int **v42; // rdi
  _DWORD *v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // r8d
  unsigned int *v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // r9d
  unsigned int v50; // eax
  unsigned int *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rsi
  char **exception; // rbp
  __int64 v55; // rdx
  __int64 v56; // [rsp+0h] [rbp-A8h]
  unsigned int *v57; // [rsp+0h] [rbp-A8h]
  unsigned int *v58; // [rsp+0h] [rbp-A8h]
  unsigned int v59; // [rsp+0h] [rbp-A8h]
  __int64 v60; // [rsp+0h] [rbp-A8h]
  unsigned int v61; // [rsp+8h] [rbp-A0h]
  __int64 v62; // [rsp+8h] [rbp-A0h]
  __int64 v63; // [rsp+8h] [rbp-A0h]
  unsigned int *v64; // [rsp+8h] [rbp-A0h]
  unsigned int *v65; // [rsp+10h] [rbp-98h]
  unsigned int *v66; // [rsp+10h] [rbp-98h]
  __int64 v67; // [rsp+20h] [rbp-88h] BYREF
  __int64 v68; // [rsp+28h] [rbp-80h]
  __m128i v69; // [rsp+30h] [rbp-78h] BYREF
  __int64 v70; // [rsp+40h] [rbp-68h]
  unsigned int *v71; // [rsp+48h] [rbp-60h]
  __int64 v72[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v67 = 0;
  v68 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = *(_DWORD **)(a1 + 16);
  v6 = v4;
  v7 = v5[2];
  (*(void (**)(void))(*(_QWORD *)v5 + 16LL))();
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  if ( v7 != v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v7);
        sub_90B660(a1 + 32, *(_QWORD *)(v9 + 8), &v67, a1 + 528);
        v10 = *(__int64 **)(a1 + 16);
        v11 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
        v12 = *(unsigned int **)(v9 + 24);
        v13 = *v10;
        v70 = 0;
        v71 = v12;
        v14 = *(void (__fastcall **)(__int64 *, _QWORD, __m128i *))(v13 + 32);
        v69 = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v67);
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        if ( v12 )
          *v12 = (*v12 + 1) & 0x3FFFFFFF | *v12 & 0xC0000000;
        v14(v10, v7, &v69);
        v15 = v69.m128i_i64[1];
        v16 = (_QWORD *)v69.m128i_i64[0];
        if ( v69.m128i_i64[1] )
        {
          v17 = (*(_DWORD *)(v69.m128i_i64[1] + 8))-- == 1;
          if ( v17 )
          {
            sub_15D7BC0(v16, v15);
            v16 = (_QWORD *)v69.m128i_i64[0];
          }
        }
        v18 = v71;
        if ( v71 )
        {
          v19 = (*v71 + 0x3FFFFFFF) & 0x3FFFFFFF | *v71 & 0xC0000000;
          *v71 = v19;
          if ( (v19 & 0x3FFFFFFF) == 0 )
          {
            v22 = (_DWORD *)v16[83];
            if ( v22 )
            {
              v23 = (unsigned int)*(v22 - 1);
              if ( (_DWORD)v23 == *(v22 - 2) )
              {
                v34 = (unsigned int)(3 * v23 + 1) >> 1;
                v35 = 8 * v34 + 8;
                if ( 8 * (int)v23 + 8 >= (unsigned int)v35 || (unsigned int)v23 >= v34 )
                {
LABEL_54:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_A3E10(v72, "Overflow encountered when expanding vector", v55);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v72);
                  sub_233E40((__int64)v72);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v61 = (unsigned int)(3 * v23 + 1) >> 1;
                v57 = v18;
                v36 = (unsigned int *)sub_186B300(v22 - 2, v35);
                v37 = v36[1];
                v22 = v36 + 2;
                v16[83] = v36 + 2;
                v24 = v37 + 1;
                *v36 = v61;
                *(_QWORD *)&v36[2 * v37 + 2] = v57;
                v36[1] = v37 + 1;
              }
              else
              {
                v24 = v23 + 1;
                *(_QWORD *)&v22[2 * v23] = v18;
                *(v22 - 1) = v23 + 1;
              }
            }
            else
            {
              v58 = v18;
              v45 = sub_186B270(0x18u);
              v24 = 1;
              v22 = (_DWORD *)(v45 + 8);
              *(_QWORD *)v45 = 2;
              v16[83] = v45 + 8;
              *(_QWORD *)(v45 + 8) = v58;
              *(_DWORD *)(v45 + 4) = 1;
            }
            if ( v24 )
            {
              while ( 1 )
              {
                v25 = (unsigned int)(v24 - 1);
                v26 = *(_QWORD *)&v22[2 * v25];
                v27 = v24 - 1;
                *(v22 - 1) = v25;
                if ( *(char *)(v26 + 3) < 0 )
                {
                  v32 = *(_QWORD *)(v26 + 8);
                  if ( v32 )
                  {
                    v33 = v16[81];
                    v17 = (*(_DWORD *)(v32 + 8))-- == 1;
                    if ( v17 )
                    {
                      v56 = v26;
                      sub_15D7BC0(v33, v32);
                      v26 = v56;
                    }
                  }
                  sub_17E9C40(v16[82], 16, v26);
                }
                else
                {
                  v28 = *(unsigned int **)(v26 + 8);
                  v29 = (*v28 + 0x3FFFFFFF) & 0x3FFFFFFF | *v28 & 0xC0000000;
                  *v28 = v29;
                  if ( (v29 & 0x3FFFFFFF) == 0 )
                  {
                    if ( v27 == *(v22 - 2) )
                    {
                      v66 = v28;
                      v49 = (3 * v27 + 1) >> 1;
                      v63 = v26;
                      v50 = 8 * v49 + 8;
                      if ( 8 * v24 >= v50 || v27 >= v49 )
                        goto LABEL_54;
                      v51 = (unsigned int *)sub_186B300(v22 - 2, v50);
                      v26 = v63;
                      v43 = v51 + 2;
                      v28 = v66;
                      v16[83] = v51 + 2;
                      *v51 = (3 * v27 + 1) >> 1;
                    }
                    else
                    {
                      v43 = (_DWORD *)v16[83];
                    }
                    v44 = *(v43 - 1);
                    *(_QWORD *)&v43[2 * v44] = v28;
                    *(v43 - 1) = v44 + 1;
                  }
                  v30 = *(unsigned int **)(v26 + 16);
                  v31 = (*v30 + 0x3FFFFFFF) & 0x3FFFFFFF | *v30 & 0xC0000000;
                  *v30 = v31;
                  if ( (v31 & 0x3FFFFFFF) == 0 )
                  {
                    v38 = (_QWORD *)v16[83];
                    if ( v38 )
                    {
                      v39 = *((_DWORD *)v38 - 1);
                      if ( v39 == *((_DWORD *)v38 - 2) )
                      {
                        v65 = v30;
                        v46 = (3 * v39 + 1) >> 1;
                        v62 = v26;
                        if ( 8 * v39 + 8 >= 8 * v46 + 8 )
                          goto LABEL_54;
                        v59 = (3 * v39 + 1) >> 1;
                        if ( v39 >= v46 )
                          goto LABEL_54;
                        v47 = (unsigned int *)sub_186B300(v38 - 1, 8 * v46 + 8);
                        v26 = v62;
                        v48 = v47[1];
                        v38 = v47 + 2;
                        v30 = v65;
                        v16[83] = v47 + 2;
                        *v47 = v59;
                        LODWORD(v47) = v48;
                        v42 = (unsigned int **)&v38[v48];
                        v41 = (_DWORD)v47 + 1;
                      }
                      else
                      {
                        v40 = v39;
                        v41 = v39 + 1;
                        v42 = (unsigned int **)&v38[v40];
                      }
                    }
                    else
                    {
                      v64 = v30;
                      v60 = v26;
                      v52 = (_QWORD *)sub_186B270(0x18u);
                      v26 = v60;
                      v30 = v64;
                      v53 = v52;
                      *v52 = 2;
                      v41 = 1;
                      v38 = v53 + 1;
                      v16[83] = v38;
                      v42 = (unsigned int **)v38;
                    }
                    *v42 = v30;
                    *((_DWORD *)v38 - 1) = v41;
                  }
                  sub_17E9C40(v16[82], 24, v26);
                }
                v22 = (_DWORD *)v16[83];
                if ( v22 )
                {
                  v24 = *(v22 - 1);
                  if ( v24 )
                    continue;
                }
                break;
              }
            }
            v16 = (_QWORD *)v69.m128i_i64[0];
          }
        }
        v20 = v70;
        if ( v70 )
        {
          v17 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v16, v20);
        }
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v7 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          break;
        }
        if ( v8 == ++v7 )
          return sub_22BCA0(v67, v68);
      }
      v7 = v6;
    }
    while ( v8 != v6 );
  }
  return sub_22BCA0(v67, v68);
}

