__int64 __fastcall sub_91C580(__int64 *a1, unsigned int *a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v9)(__int64, unsigned int *, int, unsigned __int64); // r15
  _QWORD *v10; // r14
  __int64 v11; // r13
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  __m128 *v15; // r15
  unsigned int **v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  unsigned int **v19; // rdi
  __int64 v20; // rdx
  unsigned int **v21; // r8
  unsigned int **i; // rax
  unsigned int *v23; // rdx
  __int64 *v24; // rdx
  unsigned int v25; // ecx
  unsigned int **v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int **v29; // rcx
  unsigned int **v30; // r8
  unsigned int **v31; // rax
  unsigned int **v32; // rdi
  unsigned int *v33; // rdx
  unsigned int *v34; // rax
  unsigned int *v35; // rax
  _QWORD *v36; // rdx
  int v37; // r12d
  unsigned int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  unsigned int v41; // r13d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int **v45; // rax
  int v46; // r9d
  __m128i *v47; // r10
  __int64 *v48; // rax
  const __m128i *v49; // r11
  const __m128i *v50; // r8
  __int64 v51; // rdx
  unsigned int **v52; // rsi
  __m128i *v53; // rdx
  void *v54; // rdi
  __int64 *v55; // rax
  _QWORD *v56; // rdx
  char **exception; // rbx
  size_t v58; // [rsp+0h] [rbp-98h]
  int v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+18h] [rbp-80h]
  __int64 v61[11]; // [rsp+40h] [rbp-58h] BYREF

  result = sub_8E7030(a1[1]);
  if ( (_DWORD)result )
  {
    result = sub_8E8110((_QWORD *)a1[1], a2);
    if ( !(_BYTE)a3 )
      result = (unsigned int)-(int)result;
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, a4);
        return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 64))(a1);
      }
      return result;
    }
    v9 = *(__int64 (__fastcall **)(__int64, unsigned int *, int, unsigned __int64))(*a1 + 24);
    v10 = (_QWORD *)sub_180C100(a1[1] + 8400, 16);
    *v10 = off_1C55C60;
    v10[1] = a4;
    v11 = (unsigned __int8)a3;
    if ( v9 != sub_91B340 )
      return v9((__int64)a1, a2, (unsigned __int8)a3, (unsigned __int64)v10);
    result = sub_8E7030(a1[1]);
    if ( (_DWORD)result )
    {
      result = sub_8E8110((_QWORD *)a1[1], a2);
      if ( !(_BYTE)a3 )
        result = (unsigned int)-(int)result;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 1 )
        {
          v12 = *(__int64 (__fastcall **)(__int64, __int64))(*v10 + 32LL);
          if ( v12 == sub_918420 )
            return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 48))(a1, v10[1]);
          else
            return v12((__int64)v10, (__int64)a1);
        }
        return result;
      }
      v13 = sub_180C100(a1[1] + 8400, 16);
      v14 = a2[3];
      v15 = (__m128 *)v13;
      v16 = *(unsigned int ***)((char *)a1 + (-a3 & 0x18) + 72);
      v17 = *(unsigned int *)((char *)a1 + (-a3 & 0x18) + 80);
      v18 = v17 - 1;
      v17 *= 16;
      v19 = (unsigned int **)((char *)v16 + v17);
      v20 = 16LL * (v14 & v18);
      v21 = &v16[(unsigned __int64)v20 / 8];
      if ( v20 != v17 )
      {
        for ( i = &v16[(unsigned __int64)v20 / 8]; v19 != i; i += 2 )
        {
          v23 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( v23[3] == v14 && a2 == v23 )
            {
LABEL_36:
              *v15 = _mm_loadh_ps((const double *)i + 1);
              goto LABEL_24;
            }
          }
          else if ( !v23 )
          {
            goto LABEL_23;
          }
        }
      }
      for ( ; v21 != v16; v16 += 2 )
      {
        v34 = *v16;
        if ( (unsigned __int64)*v16 > 1 )
        {
          if ( v34[3] == v14 && a2 == v34 )
          {
            i = v16;
            goto LABEL_36;
          }
        }
        else if ( !v34 )
        {
          break;
        }
      }
LABEL_23:
      v15->m128_u64[0] = (unsigned __int64)v10;
      v15->m128_u64[1] = 0;
LABEL_24:
      v24 = &a1[3 * (unsigned __int8)a3];
      v25 = *((_DWORD *)v24 + 20);
      if ( 3 * v25 < 4 * (*((_DWORD *)v24 + 21) + *((_DWORD *)v24 + 22)) )
      {
        v59 = 2 * v25;
        v60 = 2 * v25;
        v58 = 32LL * v25;
        v45 = (unsigned int **)sub_186B270(v58);
        v46 = v60;
        v25 = v59;
        v26 = v45;
        v47 = (__m128i *)&v45[v58 / 8];
        if ( v60 )
        {
          if ( (v58 & 0x10) == 0 || (*(_OWORD *)v45 = 0, v45 += 2, v45 != (unsigned int **)v47) )
          {
            do
            {
              *(_OWORD *)v45 = 0;
              v45 += 4;
              *((_OWORD *)v45 - 1) = 0;
            }
            while ( v45 != (unsigned int **)v47 );
          }
        }
        v48 = &a1[3 * (unsigned __int8)a3];
        v49 = (const __m128i *)v48[9];
        v50 = &v49[*((unsigned int *)v48 + 20)];
        if ( v49 != v50 )
        {
          do
          {
            if ( v49->m128i_i64[0] > 1uLL )
            {
              v51 = 16LL * (*(_DWORD *)(v49->m128i_i64[0] + 12) & (unsigned int)(v60 - 1));
              v52 = &v26[(unsigned __int64)v51 / 8];
              if ( v58 == v51 )
              {
LABEL_75:
                if ( v26 == v52 )
                {
LABEL_88:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v53 = (__m128i *)v26;
                while ( v53->m128i_i64[0] )
                {
                  if ( v52 == (unsigned int **)++v53 )
                    goto LABEL_88;
                }
              }
              else
              {
                v53 = (__m128i *)&v26[(unsigned __int64)v51 / 8];
                while ( v53->m128i_i64[0] )
                {
                  if ( v47 == ++v53 )
                    goto LABEL_75;
                }
              }
              *v53 = _mm_loadu_si128(v49);
            }
            ++v49;
          }
          while ( v50 != v49 );
          v11 = (unsigned __int8)a3;
        }
        v54 = (void *)a1[3 * v11 + 9];
        if ( v54 )
        {
          sub_186B220(v54);
          v46 = v60;
          v25 = v59;
        }
        v14 = a2[3];
        v55 = &a1[3 * v11];
        v55[9] = (__int64)v26;
        *((_DWORD *)v55 + 20) = v46;
        *((_DWORD *)v55 + 22) = 0;
      }
      else
      {
        v26 = (unsigned int **)v24[9];
      }
      v27 = 16LL * v25;
      v28 = 16LL * (v14 & (v25 - 1));
      v29 = &v26[(unsigned __int64)v27 / 8];
      v30 = &v26[(unsigned __int64)v28 / 8];
      if ( v28 == v27 )
      {
        v32 = nullptr;
LABEL_46:
        if ( v26 == v30 )
        {
LABEL_54:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          v35 = *v26;
          if ( (unsigned __int64)*v26 > 1 )
          {
            if ( v35[3] == v14 && a2 == v35 )
            {
              *v26 = a2;
              v26[1] = (unsigned int *)v15;
              goto LABEL_55;
            }
          }
          else
          {
            if ( !v35 )
            {
              if ( v32 )
                goto LABEL_85;
              v32 = v26;
              goto LABEL_86;
            }
            v32 = v26;
          }
          v26 += 2;
          if ( v30 == v26 )
            goto LABEL_54;
        }
      }
      v31 = &v26[(unsigned __int64)v28 / 8];
      v32 = nullptr;
      while ( 1 )
      {
        v33 = *v31;
        if ( (unsigned __int64)*v31 > 1 )
        {
          if ( v33[3] == v14 && a2 == v33 )
          {
            *v31 = a2;
            v31[1] = (unsigned int *)v15;
            goto LABEL_55;
          }
        }
        else
        {
          if ( !v33 )
          {
            if ( v32 )
LABEL_85:
              --LODWORD(a1[3 * v11 + 11]);
            else
              v32 = v31;
LABEL_86:
            *v32 = a2;
            v32[1] = (unsigned int *)v15;
            ++HIDWORD(a1[3 * v11 + 10]);
LABEL_55:
            v36 = (_QWORD *)a1[15];
            ++a2[2];
            v37 = (unsigned __int8)a3 ^ 1;
            if ( v36 )
            {
              v38 = *((_DWORD *)v36 - 1);
              if ( v38 == *((_DWORD *)v36 - 2) )
              {
                v41 = (3 * v38 + 1) >> 1;
                v42 = 16 * v41 + 8;
                if ( 16 * v38 + 8 >= v42 || v38 >= v41 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v61, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v61);
                  sub_233E40((__int64)v61);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v43 = (unsigned int *)sub_186B300(v36 - 1, v42);
                v44 = v43[1];
                v36 = v43 + 2;
                *v43 = v41;
                a1[15] = (__int64)(v43 + 2);
                LODWORD(v43) = v44;
                v40 = &v36[2 * v44];
                result = (unsigned int)((_DWORD)v43 + 1);
              }
              else
              {
                v39 = v38;
                result = v38 + 1;
                v40 = &v36[2 * v39];
              }
            }
            else
            {
              v56 = (_QWORD *)sub_186B270(0x28u);
              *v56 = 2;
              result = 1;
              v36 = v56 + 1;
              a1[15] = (__int64)v36;
              v40 = v36;
            }
            *(_DWORD *)v40 = v37;
            v40[1] = a2;
            *((_DWORD *)v36 - 1) = result;
            return result;
          }
          v32 = v31;
        }
        v31 += 2;
        if ( v29 == v31 )
          goto LABEL_46;
      }
    }
  }
  return result;
}

