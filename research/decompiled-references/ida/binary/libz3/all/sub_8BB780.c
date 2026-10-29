__int64 __fastcall sub_8BB780(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v7; // r12
  _DWORD *v9; // rax
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int *v18; // r8
  unsigned int *v19; // r14
  unsigned int v20; // ebx
  unsigned int *v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // rdx
  void *v24; // rdi
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rdx
  unsigned int v28; // edx
  void *v29; // r12
  unsigned int v30; // r12d
  _BYTE *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  int v35; // edi
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int *v38; // rax
  _QWORD *v40; // rdi
  _DWORD *v41; // r12
  unsigned int i; // eax
  _QWORD *v43; // rdi
  _QWORD *v44; // rax
  char **v45; // rbp
  __int64 v46; // rdx
  char **exception; // rbp
  __int64 v48; // rdx
  unsigned int *v49; // [rsp+0h] [rbp-D8h]
  _DWORD *s; // [rsp+10h] [rbp-C8h]
  _DWORD *v51; // [rsp+18h] [rbp-C0h]
  void *v52; // [rsp+20h] [rbp-B8h]
  void *v53; // [rsp+20h] [rbp-B8h]
  __int64 v54; // [rsp+28h] [rbp-B0h]
  _BYTE v56[5]; // [rsp+37h] [rbp-A1h]
  __int64 v59; // [rsp+48h] [rbp-90h]
  unsigned int v60; // [rsp+5Ch] [rbp-7Ch] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v62[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v63[11]; // [rsp+80h] [rbp-58h] BYREF

  v7 = a2;
  v9 = (_DWORD *)a1[3];
  s = v9;
  if ( v9 )
  {
    v10 = *(v9 - 1);
    if ( v10 )
    {
      v11 = (_QWORD *)sub_186B270(0xAu);
      *v11 = 2;
      v12 = v11 + 1;
      s = v12;
      while ( 1 )
      {
        v16 = *((_DWORD *)v12 - 2);
        if ( v16 >= v10 )
          break;
        v13 = (3 * v16 + 1) >> 1;
        v14 = v13 + 8;
        if ( v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v63, "Overflow encountered when expanding vector", v48);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v63);
          sub_233E40((__int64)v63);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(s - 2, v14);
        *v15 = v13;
        s = v15 + 2;
        v12 = v15 + 2;
      }
      *(s - 1) = v10;
      memset(s, 0, v10);
    }
    else
    {
      s = nullptr;
    }
  }
  v17 = sub_186B270(0x20u);
  *(_DWORD *)(v17 + 8) = v7;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)v17 = 0x100000002LL;
  v51 = (_DWORD *)(v17 + 8);
  *((_BYTE *)s + v7) = 1;
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v62[1] = 0;
  v56[4] = 0;
  *(_DWORD *)v56 = a6 ^ 1;
  do
  {
    v59 = 3LL * *(unsigned int *)&v56[1];
    v18 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v51[v59]);
    if ( v18 )
    {
      v49 = &v18[*(v18 - 1)];
      if ( v18 != v49 )
      {
        v19 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v51[3 * *(unsigned int *)&v56[1]]);
        while ( 1 )
        {
          v20 = *v19;
          v21 = (unsigned int *)(a1[5] + 56LL * *v19);
          v22 = *((unsigned __int8 *)v21 + 48);
          if ( !(_BYTE)v22 )
            goto LABEL_15;
          v23 = a1[3] + 32LL * *v21;
          v24 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v23 + 4) & 1) != 0 )
          {
            v54 = a1[3] + 32LL * *v21;
            v52 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v61, v23);
            v23 = v54;
            v24 = v52;
          }
          else
          {
            v25 = *(_DWORD *)v23;
            BYTE4(v61[0]) &= ~1u;
            LODWORD(v61[0]) = v25;
          }
          if ( (*(_BYTE *)(v23 + 20) & 1) != 0 )
          {
            sub_182C690(v24, v62, v23 + 16);
          }
          else
          {
            v26 = *(_DWORD *)(v23 + 16);
            BYTE4(v62[0]) &= ~1u;
            LODWORD(v62[0]) = v26;
          }
          v27 = a1[3] + 32LL * v21[1];
          if ( (v62[0] & 0x100000000LL) != 0
            || LODWORD(v62[0]) != 1
            || (*(_BYTE *)(v27 + 20) & 1) != 0
            || *(_DWORD *)(v27 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v61, v27);
          }
          else
          {
            v53 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v61, v27);
            sub_182CBA0(v53, v62);
            BYTE4(v62[0]) &= ~1u;
            LODWORD(v62[0]) = 1;
          }
          v28 = v21[2];
          v29 = qword_1C7F2C0;
          if ( v28 )
          {
            if ( LODWORD(v61[0]) )
            {
              if ( (v62[0] & 0x100000000LL) != 0 || LODWORD(v62[0]) != 1 || (v21[7] & 1) != 0 || v21[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v61, v21 + 2, v61);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v61, v21 + 2, v61);
                sub_182CBA0(v29, v62);
                BYTE4(v62[0]) &= ~1u;
                LODWORD(v62[0]) = 1;
              }
            }
            else
            {
              if ( (v21[3] & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v61, v21 + 2);
              }
              else
              {
                BYTE4(v61[0]) &= ~1u;
                LODWORD(v61[0]) = v28;
              }
              if ( (v21[7] & 1) != 0 )
              {
                sub_182C690(v29, v62, v21 + 6);
              }
              else
              {
                v34 = v21[6];
                BYTE4(v62[0]) &= ~1u;
                LODWORD(v62[0]) = v34;
              }
            }
          }
          else
          {
            if ( (v61[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v61, v61);
            else
              BYTE4(v61[0]) &= ~1u;
            if ( (v62[0] & 0x100000000LL) != 0 )
              sub_182C690(v29, v62, v62);
            else
              BYTE4(v62[0]) &= ~1u;
          }
          if ( LODWORD(v61[0]) && (!v56[0] || SLODWORD(v61[0]) >= 0) || v21[10] >= a4 )
            goto LABEL_15;
          v30 = v21[1];
          if ( a3 == v30 )
          {
            v40 = *(_QWORD **)(*(_QWORD *)a5 + 176LL);
            v60 = v21[11];
            sub_893780(v40, &v60);
            v41 = &v51[v59];
            for ( i = v51[v59 + 2]; i != -1; i = v41[2] )
            {
              v43 = *(_QWORD **)(*(_QWORD *)a5 + 176LL);
              LODWORD(v63[0]) = *(_DWORD *)(a1[5] + 56LL * i + 44);
              sub_893780(v43, (unsigned int *)v63);
              v41 = &v51[3 * v41[1]];
            }
            sub_25A130((char *)v61);
            if ( s )
              sub_186B220(s - 2);
            if ( !v51 )
              return v22;
            goto LABEL_75;
          }
          v31 = (char *)s + v30;
          if ( *v31 )
          {
LABEL_15:
            if ( v49 == ++v19 )
              goto LABEL_37;
          }
          else
          {
            if ( v51 )
            {
              v32 = (unsigned int)*(v51 - 1);
              if ( (_DWORD)v32 == *(v51 - 2) )
              {
                v35 = 3 * v32;
                v36 = (unsigned int)(3 * v32 + 1) >> 1;
                v37 = 4 * (v36 + ((3 * (_DWORD)v32 + 1) & 0xFFFFFFFE)) + 8;
                if ( 12 * (int)v32 + 8 >= (unsigned int)v37 || (unsigned int)v32 >= v36 )
                {
                  v45 = (char **)__cxa_allocate_exception(0x28u);
                  sub_12D192(v63, "Overflow encountered when expanding vector", v46);
                  *v45 = (char *)off_1C63128;
                  sub_2333C0(v45 + 1, v63);
                  sub_233E40((__int64)v63);
                  __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v38 = (unsigned int *)sub_186B300(v51 - 2, v37);
                v51 = v38 + 2;
                *v38 = (unsigned int)(v35 + 1) >> 1;
                v33 = (__int64)&v38[3 * v38[1] + 2];
              }
              else
              {
                v33 = (__int64)&v51[3 * v32];
              }
            }
            else
            {
              v44 = (_QWORD *)sub_186B270(0x20u);
              *v44 = 2;
              v33 = (__int64)(v44 + 1);
              v51 = (_DWORD *)v33;
            }
            *(_DWORD *)(v33 + 8) = v20;
            ++v19;
            *v31 = 1;
            *(_QWORD *)v33 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(*(unsigned int *)&v56[1])).m128i_u64[0];
            ++*(v51 - 1);
            if ( v49 == v19 )
            {
LABEL_37:
              ++*(_DWORD *)&v56[1];
              if ( v51 )
                goto LABEL_38;
              sub_25A130((char *)v61);
              if ( s )
                sub_186B220(s - 2);
              return 0;
            }
          }
        }
      }
    }
    ++*(_DWORD *)&v56[1];
LABEL_38:
    ;
  }
  while ( *(_DWORD *)&v56[1] < *(v51 - 1) );
  sub_25A130((char *)v61);
  if ( s )
    sub_186B220(s - 2);
  v22 = 0;
LABEL_75:
  sub_186B220(v51 - 2);
  return v22;
}

