__int64 __fastcall sub_6344E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int *v6; // r13
  unsigned int **v7; // rbx
  __int16 v8; // dx
  unsigned int **v9; // rbp
  unsigned int v10; // r14d
  __int64 v11; // r9
  unsigned int *v12; // r11
  __int64 v13; // r15
  __int64 *v14; // r10
  __int64 v15; // rax
  int v16; // edi
  __int64 *v17; // rcx
  unsigned int v18; // edx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int16 v24; // ax
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rbp
  int v28; // edx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // r15d
  __int64 v36; // r14
  _QWORD *v37; // r11
  unsigned int v38; // r10d
  __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rbx
  int v46; // ecx
  _DWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rbp
  unsigned int **v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rbx
  int v56; // edx
  _DWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbp
  unsigned int **v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rbp
  int v64; // edx
  _DWORD *v65; // rax
  __int64 v66; // rax
  __int64 *v68; // [rsp+28h] [rbp-160h] BYREF
  __m128i v69; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v71; // [rsp+48h] [rbp-140h]
  unsigned int *v72; // [rsp+50h] [rbp-138h] BYREF
  int v73; // [rsp+58h] [rbp-130h]

  result = (__int64)sub_629F40(*(_QWORD **)a2, *(_DWORD *)(a2 + 8), a3);
  if ( result )
    return result;
  v6 = v5;
  ptr = v5;
  v7 = &v72;
  sub_4A3CA0(a2, (__int64 **)&ptr);
  ptr = &v72;
  v72 = v6;
  v73 = 0;
  v71 = 0x1000000001LL;
  result = 0;
LABEL_4:
  while ( 2 )
  {
    v8 = *((_WORD *)v6 + 2);
    v9 = &v7[2 * (unsigned int)result];
    if ( v8 == 1 )
      goto LABEL_41;
    if ( v8 == 2 )
    {
      v34 = v6[18];
      v35 = *((_DWORD *)v9 + 2);
      if ( v35 >= v34 + v6[19] + 1 )
      {
LABEL_40:
        result = (unsigned int)(v71 - 1);
LABEL_41:
        LODWORD(v71) = result;
        goto LABEL_42;
      }
      if ( v35 )
      {
        v37 = *(_QWORD **)a2;
        goto LABEL_56;
      }
      v36 = *((_QWORD *)v6 + 3);
      v37 = *(_QWORD **)a2;
      while ( 1 )
      {
        *((_DWORD *)v9 + 2) = ++v35;
        if ( !sub_629F40(v37, *(_DWORD *)(a2 + 8), v36) )
          break;
        if ( v35 >= v38 )
          goto LABEL_40;
        v34 = v6[18];
LABEL_56:
        v39 = v35 - 1;
        if ( v34 < v35 )
          v39 = (unsigned int)v39 - v34;
        v36 = *(_QWORD *)&v6[4 * v6[5] + 20 + 2 * v39];
      }
      v69.m128i_i64[0] = v36;
      sub_4A3CA0(a2, (__int64 **)&v69);
      v40 = v71;
      if ( (unsigned int)v71 >= HIDWORD(v71) )
      {
        v51 = (unsigned int)(2 * HIDWORD(v71));
        v7 = (unsigned int **)sub_186B270(16 * v51);
        v52 = (unsigned int **)ptr;
        v53 = 0;
        v40 = v71;
        v54 = 16LL * (unsigned int)v71;
        if ( (_DWORD)v71 )
        {
          do
          {
            *(__m128i *)&v7[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53 / 8]);
            v53 += 16LL;
          }
          while ( v54 != v53 );
        }
        if ( v52 != &v72 && v52 )
        {
          sub_186B220(v52);
          v40 = v71;
        }
        ptr = v7;
        HIDWORD(v71) = v51;
      }
      else
      {
        v7 = (unsigned int **)ptr;
      }
      v41 = (__int64 *)&v7[2 * v40];
      *v41 = v36;
LABEL_62:
      *((_DWORD *)v41 + 2) = 0;
      v42 = (unsigned int)v71;
      LODWORD(v71) = v71 + 1;
      result = (unsigned int)v42;
      goto LABEL_63;
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = v6[6];
LABEL_8:
    v11 = *((unsigned int *)v9 + 2);
    v12 = &v6[2 * v11];
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_21;
    do
    {
      v13 = *((_QWORD *)v12 + 4);
      LODWORD(v11) = v11 + 1;
      v14 = *(__int64 **)a2;
      *((_DWORD *)v9 + 2) = v11;
      v15 = *(unsigned int *)(a2 + 8);
      v16 = *(_DWORD *)(v13 + 12);
      v17 = v14;
      v18 = v15 - 1;
      v15 *= 8;
      v19 = (__int64 *)((char *)v14 + v15);
      v20 = 8LL * (v16 & v18);
      v21 = &v14[(unsigned __int64)v20 / 8];
      if ( v20 == v15 )
      {
LABEL_32:
        if ( v14 != v21 )
        {
          do
          {
            v33 = *v17;
            if ( (unsigned __int64)*v17 > 1 )
            {
              if ( *(_DWORD *)(v33 + 12) == v16 && v13 == v33 )
                goto LABEL_20;
            }
            else if ( !v33 )
            {
              break;
            }
            ++v17;
          }
          while ( v21 != v17 );
        }
LABEL_16:
        v68 = (__int64 *)v13;
        sub_4A3CA0(a2, &v68);
        v24 = *(_WORD *)(v13 + 4);
        if ( v24 != 1 )
        {
          if ( v24 == 2 )
          {
            v50 = v71;
            if ( (unsigned int)v71 >= HIDWORD(v71) )
            {
              v59 = (unsigned int)(2 * HIDWORD(v71));
              v7 = (unsigned int **)sub_186B270(16 * v59);
              v60 = (unsigned int **)ptr;
              v61 = 0;
              v50 = v71;
              v62 = 16LL * (unsigned int)v71;
              if ( (_DWORD)v71 )
              {
                do
                {
                  *(__m128i *)&v7[v61 / 8] = _mm_loadu_si128((const __m128i *)&v60[v61 / 8]);
                  v61 += 16LL;
                }
                while ( v61 != v62 );
              }
              if ( v60 && v60 != &v72 )
              {
                sub_186B220(v60);
                v50 = v71;
              }
              ptr = v7;
              HIDWORD(v71) = v59;
            }
            else
            {
              v7 = (unsigned int **)ptr;
            }
            v41 = (__int64 *)&v7[2 * v50];
            *v41 = v13;
            goto LABEL_62;
          }
          if ( v24 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v69.m128i_i64[0] = v13;
            v69.m128i_i32[2] = 0;
            sub_3DCD80((char **)&ptr, &v69);
            v7 = (unsigned int **)ptr;
            result = (unsigned int)(v71 - 1);
            v42 = result;
LABEL_63:
            v6 = v7[2 * v42];
            goto LABEL_4;
          }
          v43 = *(_QWORD *)(v13 + 16);
          v44 = *(_DWORD **)(v43 + 24);
          if ( v44 )
          {
            v45 = a1 + 8;
            if ( *v44 != -1 )
              goto LABEL_67;
          }
          v55 = *(_QWORD *)(v43 + 40);
          v56 = sub_1625010(a1 + 32);
          v57 = *(_DWORD **)(v55 + 24);
          if ( v57 && v56 == *v57 && v57[1] == 2 )
          {
            if ( !*(_WORD *)(v13 + 4) )
            {
              v45 = a1 + 8;
LABEL_67:
              v46 = sub_15F0200(v45);
              if ( !*(_WORD *)(v13 + 4) )
              {
                v47 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
                if ( v47 )
                {
                  if ( v46 == *v47 && v47[1] == 3 )
                  {
                    v48 = sub_15D1F10(*(_QWORD *)(v13 + 32));
                    v49 = *(_QWORD *)sub_15F6BE0(v45, v48);
                    if ( v49 )
                    {
                      if ( *(_DWORD *)(v49 - 4) > 1u )
                        goto LABEL_85;
                    }
                  }
                }
              }
            }
          }
          else
          {
LABEL_85:
            v58 = *(_QWORD *)(v13 + 16);
            *(_BYTE *)(a1 + 64) = 1;
            *(_QWORD *)(a1 + 72) = v58;
          }
        }
        goto LABEL_8;
      }
      v22 = &v14[(unsigned __int64)v20 / 8];
      while ( 1 )
      {
        v23 = *v22;
        if ( (unsigned __int64)*v22 > 1 )
          break;
        if ( !v23 )
          goto LABEL_16;
LABEL_13:
        if ( v19 == ++v22 )
          goto LABEL_32;
      }
      if ( *(_DWORD *)(v23 + 12) != v16 || v13 != v23 )
        goto LABEL_13;
LABEL_20:
      v12 += 2;
    }
    while ( (unsigned int)v11 < v10 );
LABEL_21:
    result = (unsigned int)(v71 - 1);
    LODWORD(v71) = v71 - 1;
    if ( *((_WORD *)v6 + 2) )
      goto LABEL_46;
    v25 = *((_QWORD *)v6 + 2);
    v26 = *(_DWORD **)(v25 + 24);
    if ( v26 )
    {
      v27 = a1 + 8;
      if ( *v26 != -1 )
      {
LABEL_24:
        v28 = sub_15F0200(v27);
        if ( *((_WORD *)v6 + 2) )
          goto LABEL_45;
        v29 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
        if ( !v29 || v28 != *v29 || v29[1] != 3 )
          goto LABEL_45;
        v30 = sub_15D1F10(*((_QWORD *)v6 + 4));
        v31 = *(_QWORD *)sub_15F6BE0(v27, v30);
        v7 = (unsigned int **)ptr;
        if ( v31 && *(_DWORD *)(v31 - 4) > 1u )
        {
          v32 = *((_QWORD *)v6 + 2);
          *(_BYTE *)(a1 + 64) = 1;
          *(_QWORD *)(a1 + 72) = v32;
        }
        result = (unsigned int)v71;
LABEL_42:
        if ( !(_DWORD)result )
          goto LABEL_47;
LABEL_43:
        result = (unsigned int)(result - 1);
        v6 = v7[2 * result];
        continue;
      }
    }
    break;
  }
  v63 = *(_QWORD *)(v25 + 40);
  v64 = sub_1625010(a1 + 32);
  v65 = *(_DWORD **)(v63 + 24);
  if ( !v65 || v64 != *v65 || v65[1] != 2 )
  {
    v66 = *((_QWORD *)v6 + 2);
    *(_BYTE *)(a1 + 64) = 1;
    *(_QWORD *)(a1 + 72) = v66;
    result = (unsigned int)v71;
    v7 = (unsigned int **)ptr;
    goto LABEL_42;
  }
  if ( !*((_WORD *)v6 + 2) )
  {
    v27 = a1 + 8;
    goto LABEL_24;
  }
LABEL_45:
  result = (unsigned int)v71;
LABEL_46:
  v7 = (unsigned int **)ptr;
  if ( (_DWORD)result )
    goto LABEL_43;
LABEL_47:
  if ( v7 )
  {
    result = (__int64)&v72;
    if ( v7 != &v72 )
      return sub_186B220(v7);
  }
  return result;
}

