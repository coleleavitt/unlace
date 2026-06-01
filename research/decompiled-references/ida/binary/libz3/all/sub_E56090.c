__int64 __fastcall sub_E56090(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r13
  bool v14; // zf
  unsigned int *v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int v30; // edi
  unsigned int *v31; // r14
  unsigned int v32; // eax
  unsigned int *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // r14d
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rdx
  int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // eax
  unsigned int *v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // eax
  unsigned int *v56; // rax
  _QWORD *v57; // rax
  char **exception; // rbp
  unsigned int v59; // [rsp+0h] [rbp-78h]
  unsigned int *v60; // [rsp+0h] [rbp-78h]
  unsigned int *v61; // [rsp+8h] [rbp-70h]
  __int64 v62[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 160);
  result = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 864LL);
  if ( *(_QWORD *)(a3 + 8) == result && !*(_BYTE *)(v6 + 472) )
  {
    v19 = sub_180C100(v6 + 240, 24);
    v20 = *(_QWORD **)(v6 + 224);
    v21 = v19;
    *(_QWORD *)v19 = off_1C54EE8;
    *(_QWORD *)(v19 + 8) = v6 + 472;
    *(_BYTE *)(v19 + 16) = 0;
    if ( v20 )
    {
      v22 = *((_DWORD *)v20 - 1);
      if ( v22 == *((_DWORD *)v20 - 2) )
      {
        v40 = (3 * v22 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v41 || v22 >= v40 )
          goto LABEL_61;
        v42 = (unsigned int *)sub_186B300(v20 - 1, v41);
        v43 = v42[1];
        v20 = v42 + 2;
        *(_QWORD *)(v6 + 224) = v42 + 2;
        *v42 = v40;
        LODWORD(v42) = v43;
        v24 = &v20[v43];
        result = (unsigned int)((_DWORD)v42 + 1);
      }
      else
      {
        v23 = v22;
        result = v22 + 1;
        v24 = &v20[v23];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v20 = v47 + 1;
      *v47 = 2;
      result = 1;
      *(_QWORD *)(v6 + 224) = v20;
      v24 = v20;
    }
    *v24 = v21;
    *((_DWORD *)v20 - 1) = result;
    *(_BYTE *)(v6 + 472) = 1;
    v6 = *(_QWORD *)(a1 + 160);
  }
  v8 = (_QWORD *)(*(_QWORD *)(v6 + 112) + 32 * v5);
  if ( (_QWORD *)a3 == v8 )
    goto LABEL_17;
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(unsigned int **)(a3 + 24);
  if ( v10 )
    *v10 = (*v10 + 1) & 0x3FFFFFFF | *v10 & 0xC0000000;
  v11 = *(_QWORD *)(a3 + 16);
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v12 = v8[1];
  v13 = (_QWORD *)*v8;
  if ( !v12 || (v14 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), !v14) )
  {
    v15 = (unsigned int *)v8[3];
    if ( !v15 )
      goto LABEL_13;
    goto LABEL_12;
  }
  sub_15D7BC0(v13, v12);
  v15 = (unsigned int *)v8[3];
  v13 = (_QWORD *)*v8;
  if ( v15 )
  {
LABEL_12:
    v16 = (*v15 + 0x3FFFFFFF) & 0x3FFFFFFF | *v15 & 0xC0000000;
    *v15 = v16;
    if ( (v16 & 0x3FFFFFFF) != 0 )
      goto LABEL_13;
    v25 = (_DWORD *)v13[83];
    if ( !v25 )
    {
      v48 = sub_186B270(0x18u);
      v27 = 1;
      v25 = (_DWORD *)(v48 + 8);
      *(_QWORD *)v48 = 2;
      v13[83] = v48 + 8;
      *(_QWORD *)(v48 + 8) = v15;
      *(_DWORD *)(v48 + 4) = 1;
      goto LABEL_28;
    }
    v26 = (unsigned int)*(v25 - 1);
    if ( (_DWORD)v26 != *(v25 - 2) )
    {
      v27 = v26 + 1;
      *(_QWORD *)&v25[2 * v26] = v15;
      *(v25 - 1) = v26 + 1;
LABEL_28:
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
            v44 = *(_QWORD *)(v29 + 8);
            if ( v44 )
            {
              v45 = v13[81];
              v14 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v14 )
                sub_15D7BC0(v45, v44);
            }
            sub_17E9C40(v13[82], 16, v29);
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
                v51 = (3 * v30 + 1) >> 1;
                v52 = 8 * v51 + 8;
                if ( 8 * v27 >= v52 || v30 >= v51 )
                  goto LABEL_61;
                v53 = (unsigned int *)sub_186B300(v25 - 2, v52);
                v49 = v53 + 2;
                v13[83] = v53 + 2;
                *v53 = (3 * v30 + 1) >> 1;
              }
              else
              {
                v49 = (_DWORD *)v13[83];
              }
              v50 = *(v49 - 1);
              *(_QWORD *)&v49[2 * v50] = v31;
              *(v49 - 1) = v50 + 1;
            }
            v33 = *(unsigned int **)(v29 + 16);
            v34 = (*v33 + 0x3FFFFFFF) & 0x3FFFFFFF | *v33 & 0xC0000000;
            *v33 = v34;
            v35 = v34 & 0x3FFFFFFF;
            if ( (v34 & 0x3FFFFFFF) == 0 )
            {
              v46 = (_QWORD *)v13[83];
              if ( v46 )
              {
                v35 = *((_DWORD *)v46 - 1);
                if ( v35 == *((_DWORD *)v46 - 2) )
                {
                  v61 = v33;
                  v54 = (3 * v35 + 1) >> 1;
                  v55 = 8 * v54 + 8;
                  if ( 8 * v35 + 8 >= v55 )
                    goto LABEL_61;
                  v59 = (3 * v35 + 1) >> 1;
                  if ( v35 >= v54 )
                    goto LABEL_61;
                  v56 = (unsigned int *)sub_186B300(v46 - 1, v55);
                  v33 = v61;
                  v46 = v56 + 2;
                  v35 = v56[1];
                  v13[83] = v56 + 2;
                  *v56 = v59;
                }
              }
              else
              {
                v60 = v33;
                v57 = (_QWORD *)sub_186B270(0x18u);
                v33 = v60;
                *v57 = 2;
                v46 = v57 + 1;
                v13[83] = v57 + 1;
              }
              v46[v35] = v33;
              *((_DWORD *)v46 - 1) = v35 + 1;
            }
            sub_17E9C40(v13[82], 24, v29);
          }
          v25 = (_DWORD *)v13[83];
          if ( v25 )
          {
            v27 = *(v25 - 1);
            if ( v27 )
              continue;
          }
          break;
        }
      }
      v13 = (_QWORD *)*v8;
      goto LABEL_13;
    }
    v36 = (unsigned int)(3 * v26 + 1) >> 1;
    v37 = 8 * v36 + 8;
    if ( 8 * (int)v26 + 8 < (unsigned int)v37 && (unsigned int)v26 < v36 )
    {
      v38 = (unsigned int *)sub_186B300(v25 - 2, v37);
      v39 = v38[1];
      v25 = v38 + 2;
      v13[83] = v38 + 2;
      v27 = v39 + 1;
      *v38 = v36;
      *(_QWORD *)&v38[2 * v39 + 2] = v15;
      v38[1] = v39 + 1;
      goto LABEL_28;
    }
LABEL_61:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v62, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v62);
    sub_233E40((__int64)v62);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_13:
  v17 = v8[2];
  if ( v17 )
  {
    v14 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v17);
  }
  result = *(_QWORD *)(a3 + 24);
  v18 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v8[3] = result;
  *(__m128i *)(v8 + 1) = v18;
LABEL_17:
  *(_BYTE *)(a1 + 272) = 1;
  return result;
}

