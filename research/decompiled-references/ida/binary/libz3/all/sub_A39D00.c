__int64 __fastcall sub_A39D00(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int8 v12; // r13
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // r15
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
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  char *v36; // rax
  char *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // r13
  unsigned __int64 v41; // rax
  __int64 v42; // r11
  unsigned int v43; // [rsp+0h] [rbp-168h]
  void *v44; // [rsp+0h] [rbp-168h]
  int v45; // [rsp+0h] [rbp-168h]
  __int64 v46; // [rsp+10h] [rbp-158h]
  _QWORD *v47; // [rsp+18h] [rbp-150h]
  unsigned int *v48; // [rsp+20h] [rbp-148h] BYREF
  __int64 v49; // [rsp+28h] [rbp-140h]
  __int64 v50; // [rsp+30h] [rbp-138h] BYREF
  __int64 v51; // [rsp+38h] [rbp-130h]
  __int64 v52; // [rsp+40h] [rbp-128h] BYREF
  __int64 v53; // [rsp+48h] [rbp-120h]
  __int64 v54; // [rsp+50h] [rbp-118h] BYREF
  __int64 v55; // [rsp+58h] [rbp-110h]
  char v56[32]; // [rsp+60h] [rbp-108h] BYREF
  char v57[32]; // [rsp+80h] [rbp-E8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h]
  __int64 v59; // [rsp+A8h] [rbp-C0h]
  _BYTE v60[184]; // [rsp+B0h] [rbp-B8h] BYREF

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
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 400) + 132LL) < (unsigned int)a4 )
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
          ptr = v60;
          v53 = 0;
          v54 = 1;
          v55 = 0;
          v59 = 0x1000000000LL;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v8 + v15);
            v17 = *(_QWORD *)(v16 + 32);
            if ( v17 && *(_DWORD *)(v17 - 4) )
            {
              v18 = sub_996D00(a1, v16, v12, (int)a4, a5, a6);
              v19 = v59;
              if ( (unsigned int)v59 >= HIDWORD(v59) )
              {
                v45 = 2 * HIDWORD(v59);
                v36 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v59)));
                v19 = v59;
                v37 = (char *)ptr;
                a4 = v36;
                if ( (_DWORD)v59 )
                {
                  if ( (unsigned int)(v59 - 1) <= 2 || v36 == (char *)ptr + 8 )
                  {
                    v41 = 0;
                    v42 = 8LL * (unsigned int)v59;
                    do
                    {
                      a4[v41 / 8] = *(_QWORD *)&v37[v41];
                      v41 += 8LL;
                    }
                    while ( v42 != v41 );
                  }
                  else
                  {
                    v38 = 0;
                    v39 = 16LL * ((unsigned int)v59 >> 1);
                    do
                    {
                      *(__m128i *)&a4[v38 / 8] = _mm_loadu_si128((const __m128i *)&v37[v38]);
                      v38 += 16LL;
                    }
                    while ( v39 != v38 );
                    if ( (v19 & 1) != 0 )
                      a4[v19 & 0xFFFFFFFE] = *(_QWORD *)&v37[8 * (v19 & 0xFFFFFFFE)];
                  }
                }
                if ( v37 && v37 != v60 )
                {
                  v47 = a4;
                  sub_186B220(v37);
                  v19 = v59;
                  a4 = v47;
                }
                ptr = a4;
                HIDWORD(v59) = v45;
              }
              else
              {
                a4 = ptr;
              }
              v15 += 8;
              a4[v19] = v18;
              LODWORD(v59) = v19 + 1;
              if ( v15 == v10 )
              {
LABEL_22:
                v20 = v59;
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
                v44 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, &v52, *(_QWORD *)(v8 + v15));
                sub_182CBA0(v44, &v54);
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
  v21 = v60;
  v52 = 0;
  v53 = 0;
  v54 = 1;
  v55 = 0;
  ptr = v60;
  v59 = 0x1000000000LL;
LABEL_23:
  v22 = *(_QWORD *)(a1 + 16) + 7456LL;
  v46 = *(_QWORD *)(a1 + 24);
  v23 = sub_9963A0(a1, v20, (__int64)v21, 0);
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
  v40 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v40 + 7488) + 48LL))(*(_QWORD *)(v40 + 7488), v48);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v40 + 7488) + 64LL))(*(_QWORD *)(v40 + 7488));
LABEL_29:
  v43 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v48), *(unsigned int *)(a1 + 8));
  v30 = *(_QWORD *)(a2 + 16);
  sub_894960((__int64)v56, (__int64)&v52);
  sub_A38880(a1, v43, (__int64)v56, 0, v30);
  sub_25A130(v57);
  sub_25A130(v56);
  v31 = *(_QWORD *)(a2 + 16);
  sub_894960((__int64)v56, (__int64)&v52);
  sub_A38880(a1, v43, (__int64)v56, 1, v31);
  sub_25A130(v57);
  sub_25A130(v56);
  v32 = v50;
  if ( v50 )
  {
    v33 = v51;
    if ( (*(_DWORD *)(v50 + 8))-- == 1 )
      sub_15D7BC0(v33, v32);
  }
  sub_98B270((__int64)v48, v49);
  sub_98B270(v24, v46);
  if ( ptr != v60 )
  {
    if ( ptr )
      sub_186B220(ptr);
  }
  sub_25A130((char *)&v52);
  return 1;
}

