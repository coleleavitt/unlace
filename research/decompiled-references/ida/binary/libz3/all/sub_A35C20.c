void __fastcall sub_A35C20(__int64 a1, unsigned int a2, int *a3, int a4, __int64 a5)
{
  char v7; // bl
  __int64 v8; // r14
  void *v9; // rdi
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rdx
  unsigned __int32 v21; // ebx
  _DWORD *v22; // rax
  int v23; // ecx
  _DWORD *v24; // r8
  __int64 v25; // rcx
  _DWORD *v26; // rsi
  _DWORD *i; // rcx
  int v28; // edx
  __int64 v29; // rcx
  _DWORD *(__fastcall *v30)(__int64, int); // rax
  unsigned __int32 *v31; // rdx
  __int64 v32; // rax
  unsigned __int32 *v33; // rax
  int v34; // edx
  unsigned __int32 *v35; // rdx
  __int64 v36; // rax
  unsigned __int32 *v37; // rax
  __int64 v38; // r12
  unsigned int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rbx
  const __m128i *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r10
  int v47; // edi
  int v48; // edx
  int v49; // ecx
  __int64 v50; // r11
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdx
  unsigned __int64 v56; // r11
  __int64 (__fastcall *v57)(__int64, const __m128i *); // rax
  __m128i *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rsi
  int v61; // eax
  __m128i *v62; // rsi
  unsigned __int64 v63; // rdx
  unsigned int v64; // r15d
  unsigned int v65; // ecx
  unsigned int *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r15d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rsi
  _DWORD *v75; // rcx
  __int64 v76; // rdi
  unsigned __int64 v77; // rax
  __int64 v78; // rdi
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  char **v82; // rbp
  char **exception; // rbp
  char **v84; // rbp
  __int64 *v85; // [rsp+10h] [rbp-E8h]
  unsigned int v86; // [rsp+2Ch] [rbp-CCh]
  __int64 *v87; // [rsp+30h] [rbp-C8h]
  __m128i *v88; // [rsp+40h] [rbp-B8h]
  _DWORD *v89; // [rsp+48h] [rbp-B0h]
  __int64 v90; // [rsp+58h] [rbp-A0h]
  __int64 v91; // [rsp+68h] [rbp-90h] BYREF
  __int64 v92; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v93; // [rsp+78h] [rbp-80h]
  int v94; // [rsp+80h] [rbp-78h] BYREF
  char v95; // [rsp+84h] [rbp-74h]
  __int64 v96; // [rsp+88h] [rbp-70h]
  int v97; // [rsp+90h] [rbp-68h]
  char v98; // [rsp+94h] [rbp-64h]
  __int64 v99; // [rsp+98h] [rbp-60h]
  __m128i v100[5]; // [rsp+A0h] [rbp-58h] BYREF

  v7 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * a2 + 3) & 0x40) != 0 )
  {
    if ( a4 )
      sub_992C20((__int64)&v94, (__int64)a3);
    else
      sub_992CA0((__int64)&v94, (__int64)a3);
  }
  else
  {
    v95 &= 0xFCu;
    v98 &= 0xFCu;
    v94 = 0;
    v96 = 0;
    v97 = 1;
    v99 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v94, a3);
  }
  v8 = sub_186B270(0x48u);
  *(_QWORD *)v8 = &off_1C56290;
  *(_DWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 16) = 0;
  v9 = qword_1C7F2C0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 1;
  *(_QWORD *)(v8 + 40) = 0;
  sub_27B950((__int64)v9, v8 + 16, &v94);
  v10 = *(_BYTE *)(v8 + 48);
  *(_OWORD *)(v8 + 56) = 0;
  v100[0].m128i_i64[0] = v8;
  *(_BYTE *)(v8 + 48) = v7 & 1 | v10 & 0xFC;
  *(_QWORD *)v8 = &off_1C56338;
  sub_98CD80((_QWORD *)(a1 + 960), v100);
  v100[0].m128i_i64[0] = v8;
  sub_98CD80((_QWORD *)(a1 + 672), v100);
  v91 = 0;
  sub_A30ED0(a1 + 760, a5, &v91);
  v11 = v91;
  v90 = v91;
  sub_9E4980(a1 + 144);
  sub_9E7500(a1 + 168);
  if ( v11 )
  {
    v87 = (__int64 *)(v11 + 8LL * *(unsigned int *)(v11 - 4));
    if ( (__int64 *)v11 != v87 )
    {
      v85 = (__int64 *)v11;
      while ( 1 )
      {
        v12 = *v85;
        v13 = *(unsigned int *)(a1 + 1128);
        v92 = a1;
        v93 = (__int64 *)(a1 + 48 * v13 + 984);
        sub_99F980((__int64)v93);
        v14 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 1128);
        (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v12 + 24LL))(
          v12,
          &v92,
          &qword_1C7F2A0,
          *(_DWORD *)(v14 + 712) != 0);
        v15 = v93;
        v16 = *v93;
        if ( *v93 )
        {
          v17 = *(unsigned int *)(v16 - 4);
          if ( (_DWORD)v17 )
          {
            v18 = 4 * v17;
            v19 = 0;
            while ( 1 )
            {
              v20 = *(unsigned int *)(a1 + 152);
              v21 = *(_DWORD *)(v16 + v19);
              v22 = *(_DWORD **)(a1 + 144);
              v23 = v20 - 1;
              v20 *= 8;
              v24 = (_DWORD *)((char *)v22 + v20);
              v25 = 8LL * (v21 & v23);
              v26 = &v22[(unsigned __int64)v25 / 4];
              if ( v25 != v20 )
              {
                for ( i = &v22[(unsigned __int64)v25 / 4]; v24 != i; i += 2 )
                {
                  v28 = i[1];
                  if ( v28 + 0x80000000 > 1 )
                  {
                    if ( *i == v21 && v21 == v28 )
                      goto LABEL_23;
                  }
                  else if ( v28 == 0x80000000 )
                  {
                    goto LABEL_17;
                  }
                }
              }
              for ( ; v26 != v22; v22 += 2 )
              {
                v34 = v22[1];
                if ( v34 + 0x80000000 > 1 )
                {
                  if ( *v22 == v21 && v21 == v34 )
                    goto LABEL_23;
                }
                else if ( v34 == 0x80000000 )
                {
                  break;
                }
              }
LABEL_17:
              v29 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 712LL);
              v30 = *(_DWORD *(__fastcall **)(__int64, int))(*(_QWORD *)v8 + 40LL);
              if ( !(_DWORD)v29 )
                break;
              if ( v30 != sub_9C8140 )
              {
                ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _DWORD *))v30)(
                  v8,
                  v21,
                  v15[2] + 8 * v19,
                  v29,
                  v24);
                goto LABEL_40;
              }
              v31 = *(unsigned __int32 **)(v8 + 56);
              if ( v31 )
              {
                v32 = *(v31 - 1);
                if ( (_DWORD)v32 == *(v31 - 2) )
                {
                  v64 = (unsigned int)(3 * v32 + 1) >> 1;
                  v65 = 4 * v64 + 8;
                  if ( 4 * (int)v32 + 8 >= v65 || (unsigned int)v32 >= v64 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v100[0].m128i_i64, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v100);
                    sub_233E40((__int64)v100);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v66 = (unsigned int *)sub_186B300(v31 - 2, v65);
                  v31 = v66 + 2;
                  *v66 = v64;
                  v67 = v66[1];
                  *(_QWORD *)(v8 + 56) = v31;
                  v15 = v93;
                  v33 = &v31[v67];
                }
                else
                {
                  v33 = &v31[v32];
                }
              }
              else
              {
                v80 = (_QWORD *)sub_186B270(0x10u);
                v15 = v93;
                v31 = (unsigned __int32 *)(v80 + 1);
                *v80 = 2;
                v33 = v31;
                *(_QWORD *)(v8 + 56) = v31;
              }
              *v33 = v21;
              ++*(v31 - 1);
LABEL_23:
              v19 += 4;
              if ( v19 == v18 )
                goto LABEL_41;
LABEL_24:
              v16 = *v15;
            }
            if ( v30 == sub_9C8140 )
            {
              v35 = *(unsigned __int32 **)(v8 + 56);
              if ( v35 )
              {
                v36 = *(v35 - 1);
                if ( (_DWORD)v36 == *(v35 - 2) )
                {
                  v68 = (unsigned int)(3 * v36 + 1) >> 1;
                  v69 = 4 * v68 + 8;
                  if ( 4 * (int)v36 + 8 >= v69 || (unsigned int)v36 >= v68 )
                  {
                    v82 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v100[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v82 = (char *)off_1C63128;
                    sub_2333C0(v82 + 1, v100);
                    sub_233E40((__int64)v100);
                    __cxa_throw(v82, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v70 = (unsigned int *)sub_186B300(v35 - 2, v69);
                  v35 = v70 + 2;
                  *v70 = v68;
                  v71 = v70[1];
                  *(_QWORD *)(v8 + 56) = v35;
                  v37 = &v35[v71];
                }
                else
                {
                  v37 = &v35[v36];
                }
              }
              else
              {
                v79 = (_QWORD *)sub_186B270(0x10u);
                v35 = (unsigned __int32 *)(v79 + 1);
                *v79 = 2;
                v37 = v35;
                *(_QWORD *)(v8 + 56) = v35;
              }
              *v37 = v21;
              ++*(v35 - 1);
            }
            else
            {
              ((void (__fastcall *)(__int64, _QWORD, int *, __int64, _DWORD *))v30)(v8, v21, &qword_1C7F2A0, v29, v24);
            }
            v100[0].m128i_i32[0] = v21;
            sub_9E1E20(a1 + 144, v100[0].m128i_i32);
LABEL_40:
            v19 += 4;
            v15 = v93;
            if ( v19 == v18 )
              goto LABEL_41;
            goto LABEL_24;
          }
        }
LABEL_41:
        v38 = v15[1];
        if ( v38 )
        {
          v39 = *(_DWORD *)(v38 - 4);
          if ( v39 )
            break;
        }
LABEL_71:
        ++v85;
        --*(_DWORD *)(v92 + 1128);
        if ( v87 == v85 )
          goto LABEL_72;
      }
      v40 = 0;
      v41 = 16LL * v39;
LABEL_44:
      v42 = (const __m128i *)(v40 + v38);
      v43 = *(unsigned int *)(a1 + 176);
      v44 = *(_QWORD *)(a1 + 168);
      v45 = v42->m128i_i64[0];
      v46 = v42->m128i_i64[1];
      v47 = *(_DWORD *)(*(_QWORD *)v42->m128i_i64[0] + 12LL);
      v48 = (*(_DWORD *)(*(_QWORD *)v46 + 12LL) - v47) ^ (v47 << 8);
      v49 = ((v48 ^ ((v47 - v48) << 16)) + v48 - v47) ^ ((v47 - v48) << 10);
      v50 = 24 * v43;
      v51 = v49 & (unsigned int)(v43 - 1);
      v52 = v44 + 24 * v43;
      v53 = 24 * v51;
      v54 = v44 + v53;
      if ( v53 == v50 )
      {
LABEL_61:
        if ( v44 == v54 )
        {
LABEL_51:
          v57 = *(__int64 (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v8 + 48LL);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          {
            if ( v57 == sub_9C22E0 )
            {
              v58 = *(__m128i **)(v8 + 64);
              if ( v58 )
              {
                v59 = v58[-1].m128i_u32[3];
                if ( v59 == v58[-1].m128i_i32[2] )
                {
                  v86 = (3 * v59 + 1) >> 1;
                  v72 = 16 * v86 + 8;
                  if ( 16 * v59 + 8 >= v72 || v59 >= (3 * v59 + 1) >> 1 )
                  {
                    v84 = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v100[0].m128i_i64, "Overflow encountered when expanding vector");
                    *v84 = (char *)off_1C63128;
                    sub_2333C0(v84 + 1, v100);
                    sub_233E40((__int64)v100);
                    __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v73 = sub_186B270(v72);
                  v74 = *(_QWORD *)(v8 + 64);
                  v75 = (_DWORD *)v73;
                  v58 = (__m128i *)(v73 + 8);
                  if ( v74 )
                  {
                    v76 = *(unsigned int *)(v74 - 4);
                    *(_DWORD *)(v73 + 4) = v76;
                    v77 = 0;
                    v78 = 16 * v76;
                    if ( v78 )
                    {
                      do
                      {
                        *(__m128i *)&v75[v77 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v74 + v77));
                        v77 += 16LL;
                      }
                      while ( v78 != v77 );
                    }
                    v89 = v75;
                    v88 = v58;
                    sub_186B220((void *)(v74 - 8));
                    v75 = v89;
                    v58 = v88;
                    v62 = &v88[v89[1]];
                    v61 = v89[1] + 1;
                  }
                  else
                  {
                    *(_DWORD *)(v73 + 4) = 0;
                    v62 = (__m128i *)(v73 + 8);
                    v61 = 1;
                  }
                  *(_QWORD *)(v8 + 64) = v58;
                  *v75 = v86;
                }
                else
                {
                  v60 = v59;
                  v61 = v59 + 1;
                  v62 = &v58[v60];
                }
              }
              else
              {
                v81 = (_QWORD *)sub_186B270(0x28u);
                *v81 = 2;
                v61 = 1;
                v58 = (__m128i *)(v81 + 1);
                *(_QWORD *)(v8 + 64) = v58;
                v62 = v58;
              }
              *v62 = _mm_loadu_si128(v42);
              v58[-1].m128i_i32[3] = v61;
            }
            else
            {
              ((void (__fastcall *)(__int64, const __m128i *, __int64))v57)(v8, v42, v15[3] + 2 * v40);
            }
          }
          else
          {
            if ( v57 == sub_9C22E0 )
              sub_98CA20((__m128i **)(v8 + 64), v42);
            else
              ((void (__fastcall *)(__int64, const __m128i *, int *))v57)(v8, v42, &qword_1C7F2A0);
            v100[0] = _mm_loadu_si128(v42);
            sub_A0D2E0(a1 + 168, v100);
          }
LABEL_57:
          v40 += 16;
          if ( v40 == v41 )
            goto LABEL_71;
          goto LABEL_58;
        }
        while ( 1 )
        {
          v63 = *(_QWORD *)(v44 + 8);
          if ( v63 > 1 )
          {
            if ( *(_DWORD *)v44 == v49 && v45 == v63 && v46 == *(_QWORD *)(v44 + 16) )
            {
              v40 += 16;
              if ( v40 == v41 )
                goto LABEL_71;
LABEL_58:
              v15 = v93;
              v38 = v93[1];
              goto LABEL_44;
            }
          }
          else if ( !v63 )
          {
            goto LABEL_51;
          }
          v44 += 24;
          if ( v54 == v44 )
            goto LABEL_51;
        }
      }
      v55 = v44 + v53;
      while ( 1 )
      {
        v56 = *(_QWORD *)(v55 + 8);
        if ( v56 > 1 )
        {
          if ( *(_DWORD *)v55 != v49 || v45 != v56 )
            goto LABEL_48;
          if ( v46 == *(_QWORD *)(v55 + 16) )
            goto LABEL_57;
          v55 += 24;
          if ( v52 == v55 )
            goto LABEL_61;
        }
        else
        {
          if ( !v56 )
            goto LABEL_51;
LABEL_48:
          v55 += 24;
          if ( v52 == v55 )
            goto LABEL_61;
        }
      }
    }
LABEL_72:
    sub_186B220((void *)(v90 - 8));
  }
  sub_25A130((char *)&v94);
}

