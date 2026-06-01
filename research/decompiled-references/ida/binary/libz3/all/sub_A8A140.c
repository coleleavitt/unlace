unsigned int *__fastcall sub_A8A140(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int *result; // rax
  unsigned int *v5; // rbp
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rax
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  void *v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // r13
  int v15; // edx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // r15
  _QWORD *v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // r14d
  size_t v23; // rdi
  __int64 v24; // rax
  _DWORD *v25; // r12
  _DWORD *v26; // r11
  __int64 v27; // rax
  _QWORD *v28; // rdx
  _DWORD *v29; // rdi
  _DWORD *j; // rax
  int v31; // ecx
  char v32; // r8
  __int64 v33; // rcx
  char v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  _DWORD *v37; // r15
  _DWORD *v38; // rbp
  void *v39; // r12
  _DWORD *v40; // rsi
  _QWORD *v41; // r14
  const __m128i *v42; // r15
  unsigned int v43; // r10d
  int v44; // edx
  __m128i *v45; // rax
  size_t v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  _DWORD *v49; // r10
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  char **exception; // rbp
  char **v55; // rbp
  unsigned int *i; // [rsp+30h] [rbp-C8h]
  unsigned int *v58; // [rsp+38h] [rbp-C0h]
  unsigned int v59; // [rsp+38h] [rbp-C0h]
  int v60; // [rsp+38h] [rbp-C0h]
  _QWORD *v61; // [rsp+40h] [rbp-B8h]
  _DWORD *v62; // [rsp+40h] [rbp-B8h]
  _DWORD *v63; // [rsp+40h] [rbp-B8h]
  _DWORD *v64; // [rsp+48h] [rbp-B0h]
  _QWORD v65[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v66[2]; // [rsp+60h] [rbp-98h] BYREF
  char *v67[4]; // [rsp+70h] [rbp-88h] BYREF
  char *v68; // [rsp+90h] [rbp-68h] BYREF
  int v69; // [rsp+98h] [rbp-60h] BYREF
  char v70; // [rsp+9Ch] [rbp-5Ch]
  __int64 v71; // [rsp+A0h] [rbp-58h]
  int v72; // [rsp+A8h] [rbp-50h] BYREF
  char v73; // [rsp+ACh] [rbp-4Ch]
  __int64 v74; // [rsp+B0h] [rbp-48h]

  if ( !*(_QWORD *)(a2 + 56) )
    std::__throw_bad_function_call();
  v3 = (*(__int64 (__fastcall **)(__int64))(a2 + 64))(a2 + 40);
  result = (unsigned int *)sub_1005490(a1, v3);
  v5 = *(unsigned int **)result;
  if ( *(_QWORD *)result )
  {
    result = &v5[*(v5 - 1)];
    for ( i = result; i != v5; result = (unsigned int *)sub_182CBA0(v12, v66) )
    {
      v13 = *v5;
      v65[0] = 1;
      v65[1] = 0;
      v66[0] = 1;
      v66[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v66);
      BYTE4(v66[0]) &= ~1u;
      LODWORD(v66[0]) = 1;
      v14 = *(_QWORD *)(a3 + 56);
      if ( v13 != -1 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v14 + 144) + 4LL * v13);
        if ( v15 == 1 )
        {
          v41 = *(_QWORD **)(v14 + 856);
          v42 = (const __m128i *)(*(_QWORD *)(v14 + 160) + 16LL * v13);
          if ( v41 )
          {
            v43 = *((_DWORD *)v41 - 1);
            if ( v43 == *((_DWORD *)v41 - 2) )
            {
              v59 = (3 * v43 + 1) >> 1;
              v46 = 16 * v59 + 8;
              if ( 16 * v43 + 8 >= (unsigned int)v46 || v43 >= (3 * v43 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_137C7A(&v68);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v68);
                sub_233E40((__int64)&v68);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v47 = sub_186B270(v46);
              v48 = *(_QWORD *)(v14 + 856);
              v44 = 1;
              v49 = (_DWORD *)v47;
              v41 = (_QWORD *)(v47 + 8);
              if ( v48 )
              {
                v50 = *(unsigned int *)(v48 - 4);
                *(_DWORD *)(v47 + 4) = v50;
                v51 = 0;
                v52 = 16 * v50;
                if ( v52 )
                {
                  do
                  {
                    *(__m128i *)&v49[v51 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v48 + v51));
                    v51 += 16LL;
                  }
                  while ( v51 != v52 );
                }
                v63 = v49;
                sub_186B220((void *)(v48 - 8));
                v49 = v63;
                v45 = (__m128i *)&v41[2 * (unsigned int)v63[1]];
                v44 = v63[1] + 1;
              }
              else
              {
                *(_DWORD *)(v47 + 4) = 0;
                v45 = (__m128i *)(v47 + 8);
              }
              *(_QWORD *)(v14 + 856) = v41;
              *v49 = v59;
            }
            else
            {
              v44 = v43 + 1;
              v45 = (__m128i *)&v41[2 * v43];
            }
          }
          else
          {
            v60 = *(_DWORD *)(*(_QWORD *)(v14 + 144) + 4LL * v13);
            v53 = (_QWORD *)sub_186B270(0x28u);
            v41 = v53 + 1;
            *v53 = 2;
            v44 = v60;
            *(_QWORD *)(v14 + 856) = v53 + 1;
            v45 = (__m128i *)(v53 + 1);
          }
          *v45 = _mm_loadu_si128(v42);
          *((_DWORD *)v41 - 1) = v44;
        }
        else if ( v15 != 2 )
        {
          if ( v15 )
          {
            sub_1872CE0("");
            sub_1873130(114, 3437);
          }
          v16 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 4LL * v13);
          v17 = *(_QWORD *)(v14 + 848);
          if ( !v17 || (v18 = *(unsigned int *)(v17 - 4), (_DWORD)v18 == *(_DWORD *)(v17 - 8)) )
          {
            sub_692C60((unsigned int **)(v14 + 848));
            v17 = *(_QWORD *)(v14 + 848);
            v18 = *(unsigned int *)(v17 - 4);
          }
          *(_DWORD *)(v17 + 4 * v18) = v16;
          ++*(_DWORD *)(v17 - 4);
        }
      }
      v70 &= 0xFCu;
      v19 = qword_1C7F2C0;
      v73 &= 0xFCu;
      LODWORD(v68) = v13;
      v69 = 0;
      v71 = 0;
      v72 = 1;
      v74 = 0;
      if ( (v65[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v69, v65);
        if ( (v66[0] & 0x100000000LL) == 0 )
        {
LABEL_6:
          v6 = *(_QWORD **)(v14 + 816);
          v73 &= ~1u;
          v72 = v66[0];
          if ( v6 )
            goto LABEL_7;
          goto LABEL_20;
        }
      }
      else
      {
        v69 = v65[0];
        if ( (v66[0] & 0x100000000LL) == 0 )
          goto LABEL_6;
      }
      sub_182C690(v19, &v72, v66);
      v6 = *(_QWORD **)(v14 + 816);
      if ( v6 )
      {
LABEL_7:
        v7 = *((unsigned int *)v6 - 1);
        if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
        {
          v21 = (unsigned int)(3 * v7 + 1) >> 1;
          v22 = v21;
          v23 = 40 * v21 + 8;
          if ( 40 * (int)v7 + 8 >= (unsigned int)v23 || (unsigned int)v7 >= v21 )
          {
            v55 = (char **)__cxa_allocate_exception(0x28u);
            sub_137C7A(v67);
            *v55 = (char *)off_1C63128;
            sub_2333C0(v55 + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = sub_186B270(v23);
          v25 = *(_DWORD **)(v14 + 816);
          v26 = (_DWORD *)v24;
          v6 = (_QWORD *)(v24 + 8);
          if ( v25 )
          {
            v27 = (unsigned int)*(v25 - 1);
            v28 = v6;
            v26[1] = v27;
            v29 = &v25[10 * v27];
            for ( j = v25; v29 != j; *(v28 - 1) = v35 )
            {
              v31 = *j;
              j += 10;
              v28 += 5;
              *((_DWORD *)v28 - 10) = v31;
              v32 = *((_BYTE *)j - 28);
              *((_DWORD *)v28 - 8) = *(j - 8);
              *((_BYTE *)v28 - 28) = v32 & 3 | *((_BYTE *)v28 - 28) & 0xFC;
              v33 = *((_QWORD *)j - 3);
              *((_QWORD *)j - 3) = 0;
              *(v28 - 3) = v33;
              v34 = *((_BYTE *)j - 12);
              *((_DWORD *)v28 - 4) = *(j - 4);
              *((_BYTE *)v28 - 12) = v34 & 3 | *((_BYTE *)v28 - 12) & 0xFC;
              v35 = *((_QWORD *)j - 1);
              *((_QWORD *)j - 1) = 0;
            }
            v36 = (unsigned int)*(v25 - 1);
            if ( (_DWORD)v36 )
            {
              v61 = v6;
              v64 = v26;
              v37 = &v25[10 * v36];
              v58 = v5;
              v38 = v25;
              do
              {
                v39 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v38 + 2);
                v40 = v38 + 6;
                v38 += 10;
                sub_182CBA0(v39, v40);
              }
              while ( v37 != v38 );
              v5 = v58;
              v6 = v61;
              v26 = v64;
              v25 = *(_DWORD **)(v14 + 816);
            }
            v62 = v26;
            sub_186B220(v25 - 2);
            v26 = v62;
            v8 = &v6[5 * (unsigned int)v62[1]];
          }
          else
          {
            *(_DWORD *)(v24 + 4) = 0;
            v8 = (_QWORD *)(v24 + 8);
          }
          *(_QWORD *)(v14 + 816) = v6;
          *v26 = v22;
        }
        else
        {
          v8 = &v6[5 * v7];
        }
        goto LABEL_9;
      }
LABEL_20:
      v20 = (_QWORD *)sub_186B270(0x58u);
      v6 = v20 + 1;
      *v20 = 2;
      *(_QWORD *)(v14 + 816) = v20 + 1;
      v8 = v20 + 1;
LABEL_9:
      v9 = qword_1C7F2C0;
      ++v5;
      *(_DWORD *)v8 = (_DWORD)v68;
      *((_DWORD *)v8 + 2) = v69;
      *((_BYTE *)v8 + 12) = v70 & 3 | *((_BYTE *)v8 + 12) & 0xFC;
      v10 = v71;
      v71 = 0;
      v8[2] = v10;
      *((_DWORD *)v8 + 6) = v72;
      *((_BYTE *)v8 + 28) = v73 & 3 | *((_BYTE *)v8 + 28) & 0xFC;
      v11 = v74;
      v74 = 0;
      v8[4] = v11;
      ++*((_DWORD *)v6 - 1);
      sub_182CBA0(v9, &v69);
      sub_182CBA0(v9, &v72);
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v65);
    }
  }
  return result;
}

