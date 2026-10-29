__int64 __fastcall sub_A6E9B0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 **v7; // r12
  __int64 **v8; // r13
  _QWORD **v9; // r15
  __int64 *v11; // rbp
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 **v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int16 v21; // si
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int *v25; // rbx
  _DWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // r11
  __int64 *v41; // rdi
  __m128i *v42; // r8
  __int64 *v43; // rdx
  _QWORD *v44; // rax
  unsigned int *v45; // rax
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // ebx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rax
  int v55; // edx
  __m128i *v56; // r10
  __m128i *v57; // r11
  _QWORD **v58; // rsi
  __int64 **v59; // rax
  __int64 **v60; // r15
  const __m128i *v61; // r12
  __int64 *v62; // r13
  const __m128i *v63; // rbx
  int v64; // r11d
  _QWORD **v65; // r8
  __int64 v66; // rdx
  __m128i *v67; // rsi
  __m128i *v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-C0h]
  __int64 v76; // [rsp+8h] [rbp-C0h]
  unsigned int v77; // [rsp+8h] [rbp-C0h]
  unsigned int v78; // [rsp+8h] [rbp-C0h]
  size_t v79; // [rsp+8h] [rbp-C0h]
  __m128i v82; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+30h] [rbp-98h]
  __int64 v84; // [rsp+38h] [rbp-90h]
  __m128i *v85; // [rsp+40h] [rbp-88h]
  _QWORD **v86; // [rsp+48h] [rbp-80h]
  __int64 v87; // [rsp+50h] [rbp-78h]
  int v88; // [rsp+5Ch] [rbp-6Ch]
  __int64 v89[11]; // [rsp+70h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 8);
  v7 = *(__int64 ***)(result + 8664);
  if ( v7 )
  {
    result = *((unsigned int *)v7 - 1);
    if ( &v7[result] != v7 )
    {
      v8 = &v7[result];
      v9 = (_QWORD **)a1;
      do
      {
        v11 = *v7;
        if ( v11 != (__int64 *)v11[1] )
          goto LABEL_4;
        v12 = (__int64)v9[1];
        v75 = *v11;
        if ( (unsigned int)sub_8E7030(v12)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 7488) + 56LL))(
                *(_QWORD *)(v12 + 7488),
                v75) )
        {
          result = sub_15D26C0(*v9, *v11);
          if ( !(_BYTE)result )
            goto LABEL_4;
          v13 = (_QWORD *)*a3;
          if ( !*a3 )
          {
LABEL_40:
            v44 = (_QWORD *)sub_186B270(0x18u);
            v13 = v44 + 1;
            *v44 = 2;
            v17 = (__int64 **)(v44 + 1);
            *a3 = v44 + 1;
            v16 = 1;
            goto LABEL_11;
          }
        }
        else
        {
          v13 = (_QWORD *)*a3;
          if ( !*a3 )
            goto LABEL_40;
        }
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
        {
          v50 = (3 * v14 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v51 || v14 >= v50 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v89, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v89);
            sub_233E40((__int64)v89);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v13 - 1, v51);
          v53 = v52[1];
          v13 = v52 + 2;
          *v52 = v50;
          *a3 = v52 + 2;
          LODWORD(v52) = v53;
          v17 = (__int64 **)&v13[v53];
          v16 = (_DWORD)v52 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = (__int64 **)&v13[v15];
        }
LABEL_11:
        *v17 = v11;
        v18 = *v11;
        *((_DWORD *)v13 - 1) = v16;
        v19 = sub_15D1F10(v18);
        if ( (*v9)[105] == v19 )
        {
          if ( (unsigned int)sub_8E81B0(v9[1], v11) == 1 )
          {
            v28 = (_QWORD *)sub_186B270(0x10u);
            v70 = (*v9)[107];
          }
          else
          {
            v28 = (_QWORD *)sub_186B270(0x10u);
            v70 = (*v9)[108];
          }
          *v28 = off_1C559A8;
          v28[1] = v70;
          goto LABEL_25;
        }
        v20 = *v11;
        v21 = *(_WORD *)(*v11 + 4);
        if ( v21 )
        {
          v22 = *(unsigned int **)(v19 + 24);
          if ( !v22 )
            goto LABEL_23;
          v23 = *v22;
          if ( (_DWORD)v23 == -1 )
            goto LABEL_23;
          v24 = v9[1][1084];
          if ( !v24 || (unsigned int)v23 >= *(_DWORD *)(v24 - 4) )
            goto LABEL_23;
LABEL_17:
          v25 = *(unsigned int **)(v24 + 8 * v23);
          if ( v25 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v25 + 312LL))(v25) )
            {
              if ( (unsigned int)sub_B39350(v11, v25[2]) == -1 )
              {
                v28 = (_QWORD *)sub_186B270(0x10u);
                v73 = sub_15D1F10(*v11);
                v74 = sub_A6E8C0((__int64)v9, *v11, v73);
                *v28 = off_1C56578;
                v28[1] = v74;
              }
              else
              {
                v28 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned int *, __int64 *, _QWORD **))(*(_QWORD *)v25 + 336LL))(
                                  v25,
                                  v11,
                                  v9);
              }
              goto LABEL_25;
            }
            v20 = *v11;
            v21 = *(_WORD *)(*v11 + 4);
          }
          if ( v21 )
            goto LABEL_23;
          goto LABEL_21;
        }
        v26 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
        if ( v26 && *v26 == 3 )
        {
          if ( !v26[1] )
          {
            v28 = (_QWORD *)sub_186B270(0x10u);
            v72 = *v11;
            *v28 = off_1C559A8;
            v28[1] = v72;
            goto LABEL_25;
          }
          v45 = *(unsigned int **)(v19 + 24);
          if ( !v45 )
          {
LABEL_91:
            if ( !v26[1] )
              goto LABEL_24;
            goto LABEL_23;
          }
        }
        else
        {
          v45 = *(unsigned int **)(v19 + 24);
          if ( !v45 )
            goto LABEL_23;
        }
        v23 = *v45;
        if ( (_DWORD)v23 != -1 )
        {
          v24 = v9[1][1084];
          if ( v24 )
          {
            if ( (unsigned int)v23 < *(_DWORD *)(v24 - 4) )
              goto LABEL_17;
          }
        }
LABEL_21:
        v26 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
        if ( v26 && *v26 == 3 )
          goto LABEL_91;
LABEL_23:
        v27 = sub_15D1F10(v20);
        v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v9[9] + 48LL))(v9[9], v27);
LABEL_24:
        v76 = v20;
        v28 = (_QWORD *)sub_186B270(0x10u);
        *v28 = off_1C559A8;
        v28[1] = v76;
LABEL_25:
        v29 = (_QWORD *)*a4;
        v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v28);
        if ( v29 )
        {
          v30 = *((_DWORD *)v29 - 1);
          if ( v30 == *((_DWORD *)v29 - 2) )
          {
            v46 = (3 * v30 + 1) >> 1;
            v47 = 8 * v46 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v47 || v30 >= v46 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v89, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v89);
              sub_233E40((__int64)v89);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v78 = (3 * v30 + 1) >> 1;
            v48 = (unsigned int *)sub_186B300(v29 - 1, v47);
            v29 = v48 + 2;
            *v48 = v78;
            v49 = v48[1];
            *a4 = v48 + 2;
            LODWORD(v48) = v49;
            v33 = &v29[v49];
            v32 = (_DWORD)v48 + 1;
          }
          else
          {
            v31 = v30;
            v32 = v30 + 1;
            v33 = &v29[v31];
          }
        }
        else
        {
          v71 = (_QWORD *)sub_186B270(0x18u);
          v29 = v71 + 1;
          *v71 = 2;
          v33 = v71 + 1;
          *a4 = v71 + 1;
          v32 = 1;
        }
        *v33 = v28;
        *((_DWORD *)v29 - 1) = v32;
        v34 = *(unsigned int *)(a2 + 8);
        if ( 3 * (int)v34 < (unsigned int)(4 * (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16))) )
        {
          LODWORD(v83) = 2 * v34;
          v79 = 16LL * (unsigned int)(2 * v34);
          v54 = (__int64 *)sub_186B270(v79);
          v37 = v79;
          v55 = v83;
          v36 = v54;
          v56 = (__m128i *)&v54[v79 / 8];
          if ( (_DWORD)v83 )
          {
            if ( (v79 & 0x10) == 0 || (*(_OWORD *)v54 = 0, v54 += 2, v56 != (__m128i *)v54) )
            {
              do
              {
                *(_OWORD *)v54 = 0;
                v54 += 4;
                *((_OWORD *)v54 - 1) = 0;
              }
              while ( v56 != (__m128i *)v54 );
            }
          }
          v38 = (__int64)v56;
          v77 = v55 - 1;
          v57 = (__m128i *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
          if ( *(__m128i **)a2 != v57 )
          {
            v58 = v9;
            v59 = v7;
            v60 = v8;
            v61 = v57;
            v62 = v36;
            v63 = *(const __m128i **)a2;
            v64 = v55;
            v65 = v58;
            do
            {
              while ( v63->m128i_i64[0] <= 1uLL )
              {
                if ( v61 == ++v63 )
                  goto LABEL_76;
              }
              v66 = 16LL * (*(_DWORD *)(*(_QWORD *)v63->m128i_i64[0] + 12LL) & v77);
              v67 = (__m128i *)&v62[(unsigned __int64)v66 / 8];
              if ( v37 == v66 )
              {
LABEL_80:
                if ( v62 == (__int64 *)v67 )
                {
LABEL_88:
                  v88 = v64;
                  v87 = a2;
                  v86 = v65;
                  v85 = v56;
                  v84 = v37;
                  v83 = (__int64)v59;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v68 = (__m128i *)v62;
                while ( v68->m128i_i64[0] )
                {
                  if ( v67 == ++v68 )
                    goto LABEL_88;
                }
              }
              else
              {
                v68 = (__m128i *)&v62[(unsigned __int64)v66 / 8];
                while ( v68->m128i_i64[0] )
                {
                  if ( v56 == ++v68 )
                    goto LABEL_80;
                }
              }
              v69 = _mm_loadu_si128(v63++);
              *v68 = v69;
            }
            while ( v61 != v63 );
LABEL_76:
            v55 = v64;
            v57 = *(__m128i **)a2;
            v36 = v62;
            v7 = v59;
            v8 = v60;
            v9 = v65;
          }
          if ( v57 )
          {
            LODWORD(v85) = v55;
            v84 = (__int64)v56;
            v83 = v37;
            sub_186B220(v57);
            v55 = (int)v85;
            v38 = v84;
            v37 = v83;
          }
          *(_QWORD *)a2 = v36;
          *(_DWORD *)(a2 + 8) = v55;
          *(_DWORD *)(a2 + 16) = 0;
        }
        else
        {
          v35 = v34 - 1;
          v36 = *(__int64 **)a2;
          v37 = 16 * v34;
          v77 = v35;
          v38 = *(_QWORD *)a2 + v37;
        }
        v39 = *(_DWORD *)(*v11 + 12);
        v40 = 16LL * (v39 & v77);
        v41 = &v36[(unsigned __int64)v40 / 8];
        if ( v40 == v37 )
        {
          v42 = nullptr;
          while ( 1 )
          {
LABEL_52:
            if ( v41 == v36 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            result = *v36;
            if ( (unsigned __int64)*v36 > 1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)result + 12LL) == v39 && v11 == (__int64 *)result )
              {
                *(__m128i *)v36 = _mm_load_si128(&v82);
                goto LABEL_4;
              }
            }
            else
            {
              if ( !result )
              {
                if ( v42 )
                  --*(_DWORD *)(a2 + 16);
                else
                  v42 = (__m128i *)v36;
                goto LABEL_87;
              }
              v42 = (__m128i *)v36;
            }
            v36 += 2;
          }
        }
        result = (__int64)&v36[(unsigned __int64)v40 / 8];
        v42 = nullptr;
        while ( 1 )
        {
          v43 = *(__int64 **)result;
          if ( *(_QWORD *)result <= 1u )
            break;
          if ( *(_DWORD *)(*v43 + 12) == v39 && v11 == v43 )
          {
            *(__m128i *)result = _mm_load_si128(&v82);
            goto LABEL_4;
          }
LABEL_34:
          result += 16;
          if ( result == v38 )
            goto LABEL_52;
        }
        if ( v43 )
        {
          v42 = (__m128i *)result;
          goto LABEL_34;
        }
        if ( v42 )
          --*(_DWORD *)(a2 + 16);
        else
          v42 = (__m128i *)result;
LABEL_87:
        *v42 = _mm_load_si128(&v82);
        ++*(_DWORD *)(a2 + 12);
LABEL_4:
        ++v7;
      }
      while ( v8 != v7 );
    }
  }
  return result;
}

