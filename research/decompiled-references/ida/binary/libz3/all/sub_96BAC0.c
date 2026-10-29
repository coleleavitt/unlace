__int64 __fastcall sub_96BAC0(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  char **v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rbp
  _QWORD *v9; // r13
  _DWORD *v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  _DWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD **v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 *v22; // r10
  int v23; // edi
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r9
  __int64 *i; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rsi
  int v33; // eax
  _QWORD *v34; // rsi
  unsigned int v36; // eax
  char v37; // dl
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  _QWORD *v42; // rdx
  unsigned int v43; // r15d
  unsigned int v44; // edx
  unsigned int *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // r13d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  unsigned int v54; // edx
  int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rbp
  __m128i *v58; // rax
  __m128i *v59; // r9
  __m128i *v60; // rdx
  __int64 v61; // rdx
  const __m128i *v62; // rax
  unsigned int v63; // ebp
  __m128i *v64; // r13
  __m128i *v65; // r10
  __int64 v66; // rdx
  __m128i *v67; // rsi
  __m128i *v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rbx
  _QWORD *v72; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+10h] [rbp-98h]
  __m128i *v74; // [rsp+10h] [rbp-98h]
  _QWORD *v75; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v76; // [rsp+48h] [rbp-60h] BYREF
  __int64 v77[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a1 + 10520);
  v6 = 2LL * *(unsigned int *)(a1 + 10528);
  v7 = &v5[v6];
  if ( v5 == &v5[v6] )
    goto LABEL_86;
  while ( 1 )
  {
    v9 = v5;
    if ( *v5 > 1u )
      break;
    v5 += 2;
    if ( v7 == v5 )
      goto LABEL_86;
  }
  if ( v7 == v5 )
  {
LABEL_86:
    LODWORD(v19) = 0;
    return (unsigned int)v19;
  }
  v10 = (_DWORD *)*v5;
  v11 = nullptr;
  do
  {
    v12 = *(_QWORD *)(a1 + 104);
    v13 = (_DWORD *)v9[1];
    v76 = v10;
    if ( !(unsigned __int8)sub_15D2CB0(v12, v10) )
    {
      v14 = *(_QWORD *)(a1 + 8656);
      if ( !v14
        || (v15 = (unsigned int)*v10, (unsigned int)v15 >= *(_DWORD *)(v14 - 4))
        || (v16 = *(_QWORD *)(v14 + 8 * v15)) == 0
        || !(unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 104), v13, **(_QWORD **)(v16 + 8)) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)sub_969220(a1, v10, v13)) == 1 )
          goto LABEL_80;
        goto LABEL_13;
      }
      if ( v11 )
      {
        v39 = *((_DWORD *)v11 - 1);
        if ( v39 != *((_DWORD *)v11 - 2) )
        {
LABEL_40:
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v11[v40];
LABEL_41:
          *v42 = v10;
          *((_DWORD *)v11 - 1) = v41;
          goto LABEL_13;
        }
        v43 = (3 * v39 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v39 + 8 >= v44 || v39 >= v43 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v77, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v77);
          sub_233E40((__int64)v77);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_46:
        v45 = (unsigned int *)sub_186B300(v11 - 1, v44);
        v46 = v45[1];
        v11 = v45 + 2;
        *v45 = v43;
        LODWORD(v45) = v46;
        v42 = &v11[v46];
        v41 = (_DWORD)v45 + 1;
        goto LABEL_41;
      }
      goto LABEL_89;
    }
    v36 = sub_B645B0(a1, v10);
    v37 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v36);
    if ( v37 == -1 )
    {
      if ( v13 == *(_DWORD **)(*(_QWORD *)(a1 + 104) + 856LL) )
      {
LABEL_80:
        v75 = v11;
        sub_96A710(&v75, &v76);
        v11 = v75;
        goto LABEL_13;
      }
      v47 = *(_QWORD *)(a1 + 8872) + 16LL * (v36 >> 1);
      *(_BYTE *)(v47 + 11) |= 0xCu;
    }
    else
    {
      if ( v37 != 1 )
      {
        if ( v11 )
        {
          v39 = *((_DWORD *)v11 - 1);
          if ( v39 != *((_DWORD *)v11 - 2) )
            goto LABEL_40;
          v43 = (3 * v39 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v39 + 8 >= v44 || v39 >= v43 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v77, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v77);
            sub_233E40((__int64)v77);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_46;
        }
LABEL_89:
        v70 = (_QWORD *)sub_186B270(0x18u);
        *v70 = 2;
        v41 = 1;
        v11 = v70 + 1;
        v42 = v11;
        goto LABEL_41;
      }
      if ( v13 == *(_DWORD **)(*(_QWORD *)(a1 + 104) + 864LL) )
        goto LABEL_80;
      v38 = *(_QWORD *)(a1 + 8872) + 16LL * (v36 >> 1);
      *(_BYTE *)(v38 + 11) = *(_BYTE *)(v38 + 11) & 0xF3 | 4;
    }
LABEL_13:
    v17 = (_DWORD **)(v9 + 2);
    if ( v7 == v9 + 2 )
      break;
    while ( 1 )
    {
      v10 = *v17;
      v9 = v17;
      if ( (unsigned __int64)*v17 > 1 )
        break;
      v17 += 2;
      if ( v7 == v17 )
        goto LABEL_18;
    }
  }
  while ( v7 != v17 );
LABEL_18:
  if ( !v11 )
    goto LABEL_86;
  v18 = v11;
  v19 = *((unsigned int *)v11 - 1);
  v72 = &v11[v19];
  if ( v72 != v11 )
  {
    do
    {
      v20 = *v18;
      v21 = *(unsigned int *)(a1 + 10528);
      v22 = *(__int64 **)(a1 + 10520);
      v23 = *(_DWORD *)(*v18 + 12LL);
      v24 = v21 - 1;
      v21 *= 16;
      v25 = (__int64 *)((char *)v22 + v21);
      v26 = 16LL * (v23 & v24);
      v27 = &v22[(unsigned __int64)v26 / 8];
      if ( v26 != v21 )
      {
        for ( i = &v22[(unsigned __int64)v26 / 8]; v25 != i; i += 2 )
        {
          v29 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v29 + 12) == v23 && v20 == v29 )
            {
LABEL_60:
              v53 = i + 2;
              if ( v25 == i + 2 )
                v53 = *(_QWORD **)(a1 + 10520);
              v54 = *(_DWORD *)(a1 + 10532) - 1;
              if ( *v53 )
              {
                *i = 1;
                v55 = *(_DWORD *)(a1 + 10536);
                *(_DWORD *)(a1 + 10532) = v54;
                v56 = v55 + 1;
                if ( v54 < 0x40 )
                  v54 = 64;
                *(_DWORD *)(a1 + 10536) = v56;
                if ( v54 < v56 && !(unsigned __int8)sub_186AF10(v53) )
                {
                  v57 = *(unsigned int *)(a1 + 10528);
                  v58 = (__m128i *)sub_186B270(16 * v57);
                  v59 = v58;
                  v60 = &v58[v57];
                  if ( (_DWORD)v57 )
                  {
                    if ( ((16 * (_BYTE)v57) & 0x10) == 0 || (*v58 = 0, ++v58, v58 != v60) )
                    {
                      do
                      {
                        *v58 = 0;
                        v58 += 2;
                        v58[-1] = 0;
                      }
                      while ( v58 != v60 );
                    }
                  }
                  v61 = *(unsigned int *)(a1 + 10528);
                  v62 = *(const __m128i **)(a1 + 10520);
                  v63 = v61 - 1;
                  v64 = (__m128i *)&v62[v61];
                  v73 = 16 * v61;
                  v65 = &v59[v61];
                  if ( v62 != v64 )
                  {
                    do
                    {
                      if ( v62->m128i_i64[0] > 1uLL )
                      {
                        v66 = 16LL * (*(_DWORD *)(v62->m128i_i64[0] + 12) & v63);
                        v67 = &v59[(unsigned __int64)v66 / 0x10];
                        if ( v73 == v66 )
                        {
LABEL_90:
                          if ( v59 == v67 )
                          {
LABEL_100:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v68 = v59;
                          while ( v68->m128i_i64[0] )
                          {
                            if ( v67 == ++v68 )
                              goto LABEL_100;
                          }
                        }
                        else
                        {
                          v68 = &v59[(unsigned __int64)v66 / 0x10];
                          while ( v68->m128i_i64[0] )
                          {
                            if ( v65 == ++v68 )
                              goto LABEL_90;
                          }
                        }
                        *v68 = _mm_loadu_si128(v62);
                      }
                      ++v62;
                    }
                    while ( v64 != v62 );
                    v64 = *(__m128i **)(a1 + 10520);
                  }
                  if ( v64 )
                  {
                    v74 = v59;
                    sub_186B220(v64);
                    v59 = v74;
                  }
                  *(_QWORD *)(a1 + 10520) = v59;
                  *(_DWORD *)(a1 + 10536) = 0;
                }
              }
              else
              {
                *i = 0;
                *(_DWORD *)(a1 + 10532) = v54;
              }
              goto LABEL_27;
            }
          }
          else if ( !v29 )
          {
            goto LABEL_27;
          }
        }
      }
      if ( v22 != v27 )
      {
        for ( i = *(__int64 **)(a1 + 10520); v27 != i; i += 2 )
        {
          v48 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v48 + 12) == v23 && v20 == v48 )
              goto LABEL_60;
          }
          else if ( !v48 )
          {
            break;
          }
        }
      }
LABEL_27:
      ++*(_DWORD *)(v20 + 8);
      v30 = *(_QWORD **)(a2 + 8);
      if ( v30 )
      {
        v31 = *((_DWORD *)v30 - 1);
        if ( v31 == *((_DWORD *)v30 - 2) )
        {
          v49 = (3 * v31 + 1) >> 1;
          v50 = 8 * v49 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v50 || v31 >= v49 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v77, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v77);
            sub_233E40((__int64)v77);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int *)sub_186B300(v30 - 1, v50);
          v52 = v51[1];
          v30 = v51 + 2;
          *v51 = v49;
          LODWORD(v51) = v52;
          *(_QWORD *)(a2 + 8) = v30;
          v34 = &v30[v52];
          v33 = (_DWORD)v51 + 1;
        }
        else
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = &v30[v32];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v30 = v69 + 1;
        *v69 = 2;
        v34 = v69 + 1;
        *(_QWORD *)(a2 + 8) = v69 + 1;
        v33 = 1;
      }
      *v34 = v20;
      ++v18;
      *((_DWORD *)v30 - 1) = v33;
    }
    while ( v72 != v18 );
    LODWORD(v19) = *((_DWORD *)v11 - 1);
  }
  sub_186B220(v11 - 1);
  return (unsigned int)v19;
}

