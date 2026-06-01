__int64 __fastcall sub_A370E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int8 v12; // r13
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // edx
  int v20; // esi
  _BYTE *v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  char *v37; // rax
  char *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // r11
  __int64 v44; // [rsp+8h] [rbp-140h]
  void *v45; // [rsp+8h] [rbp-140h]
  int v46; // [rsp+8h] [rbp-140h]
  __int64 v47; // [rsp+10h] [rbp-138h]
  _QWORD *v48; // [rsp+18h] [rbp-130h]
  int v49[2]; // [rsp+20h] [rbp-128h] BYREF
  int v50[2]; // [rsp+28h] [rbp-120h]
  int v51[2]; // [rsp+30h] [rbp-118h] BYREF
  int v52[2]; // [rsp+38h] [rbp-110h]
  __int64 v53; // [rsp+40h] [rbp-108h] BYREF
  __int64 v54; // [rsp+48h] [rbp-100h]
  __int64 v55; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-F0h]
  __int64 v57; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-E0h]
  __int64 v59; // [rsp+70h] [rbp-D8h]
  __int64 v60; // [rsp+78h] [rbp-D0h]
  void *ptr; // [rsp+80h] [rbp-C8h]
  __int64 v62; // [rsp+88h] [rbp-C0h]
  _BYTE v63[184]; // [rsp+90h] [rbp-B8h] BYREF

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
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 336) + 132LL) < (unsigned int)a4 )
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
          v53 = 0;
          ptr = v63;
          v54 = 0;
          v55 = 1;
          v56 = 0;
          v62 = 0x1000000000LL;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v8 + v15);
            v17 = *(_QWORD *)(v16 + 32);
            if ( v17 && *(_DWORD *)(v17 - 4) )
            {
              v18 = sub_99E140(a1, v16, v12, (int)a4, a5, a6);
              v19 = v62;
              if ( (unsigned int)v62 >= HIDWORD(v62) )
              {
                v46 = 2 * HIDWORD(v62);
                v37 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v62)));
                v19 = v62;
                v38 = (char *)ptr;
                a4 = v37;
                if ( (_DWORD)v62 )
                {
                  if ( (unsigned int)(v62 - 1) <= 2 || v37 == (char *)ptr + 8 )
                  {
                    v42 = 0;
                    v43 = 8LL * (unsigned int)v62;
                    do
                    {
                      a4[v42 / 8] = *(_QWORD *)&v38[v42];
                      v42 += 8LL;
                    }
                    while ( v43 != v42 );
                  }
                  else
                  {
                    v39 = 0;
                    v40 = 16LL * ((unsigned int)v62 >> 1);
                    do
                    {
                      *(__m128i *)&a4[v39 / 8] = _mm_loadu_si128((const __m128i *)&v38[v39]);
                      v39 += 16LL;
                    }
                    while ( v40 != v39 );
                    if ( (v19 & 1) != 0 )
                      a4[v19 & 0xFFFFFFFE] = *(_QWORD *)&v38[8 * (v19 & 0xFFFFFFFE)];
                  }
                }
                if ( v38 && v38 != v63 )
                {
                  v48 = a4;
                  sub_186B220(v38);
                  v19 = v62;
                  a4 = v48;
                }
                ptr = a4;
                HIDWORD(v62) = v46;
              }
              else
              {
                a4 = ptr;
              }
              v15 += 8;
              a4[v19] = v18;
              LODWORD(v62) = v19 + 1;
              if ( v15 == v10 )
              {
LABEL_22:
                v20 = v62;
                v21 = ptr;
                goto LABEL_23;
              }
            }
            else
            {
              if ( (v55 & 0x100000000LL) != 0
                || (_DWORD)v55 != 1
                || (*(_BYTE *)(v16 + 20) & 1) != 0
                || *(_DWORD *)(v16 + 16) != 1 )
              {
                sub_1852000(qword_1C7F2C0, &v53, *(_QWORD *)(v8 + v15));
              }
              else
              {
                v45 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, &v53, *(_QWORD *)(v8 + v15));
                sub_182CBA0(v45, &v55);
                BYTE4(v55) &= ~1u;
                LODWORD(v55) = 1;
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
  v21 = v63;
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  ptr = v63;
  v62 = 0x1000000000LL;
LABEL_23:
  v22 = *(_QWORD *)(a1 + 16) + 7456LL;
  v44 = *(_QWORD *)(a1 + 24);
  v23 = sub_99D860(a1, v20, (__int64)v21, 0);
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v25 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v49 = 0;
  *(_QWORD *)v50 = v25;
  *(_QWORD *)v51 = 0;
  *(_QWORD *)v52 = v25;
  sub_14BB8A0(v22, v24, v49, v51);
  v26 = *(_QWORD *)(a1 + 16);
  v27 = *(_QWORD *)(v26 + 8656);
  if ( v27 )
  {
    v28 = (unsigned int)**(_DWORD **)v49;
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
  v41 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v41 + 7488) + 48LL))(*(_QWORD *)(v41 + 7488), *(_QWORD *)v49);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + 7488) + 64LL))(*(_QWORD *)(v41 + 7488));
LABEL_29:
  v30 = sub_B39350(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * (unsigned int)**(_DWORD **)v49),
          *(unsigned int *)(a1 + 8));
  v31 = *(_QWORD *)(a2 + 16);
  v57 = 0;
  v47 = v31;
  v58 = 0;
  v59 = 1;
  v60 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v57, (int *)&v53);
  sub_A35C20(a1, v30, (int *)&v57, 0, v47);
  sub_25A130((char *)&v57);
  v32 = *(_QWORD *)(a2 + 16);
  v57 = 0;
  v58 = 0;
  v59 = 1;
  v60 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v57, (int *)&v53);
  sub_A35C20(a1, v30, (int *)&v57, 1, v32);
  sub_25A130((char *)&v57);
  v33 = *(_QWORD *)v51;
  if ( *(_QWORD *)v51 )
  {
    v34 = *(_QWORD *)v52;
    if ( (*(_DWORD *)(*(_QWORD *)v51 + 8LL))-- == 1 )
      sub_15D7BC0(v34, v33);
  }
  sub_98B270(*(__int64 *)v49, *(__int64 *)v50);
  sub_98B270(v24, v44);
  if ( ptr != v63 )
  {
    if ( ptr )
      sub_186B220(ptr);
  }
  sub_25A130((char *)&v53);
  return 1;
}

