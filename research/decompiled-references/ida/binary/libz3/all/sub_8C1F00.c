__int64 __fastcall sub_8C1F00(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, __int64 *a5, char a6)
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
  __int64 v20; // rbx
  unsigned int *v21; // rax
  unsigned int v22; // ebp
  unsigned int *v23; // r13
  __int64 v24; // rdx
  void *v25; // rdi
  int *v26; // r12
  int v27; // edx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // r12
  unsigned int v31; // edx
  void *v32; // r12
  int v33; // edx
  unsigned int v34; // r12d
  _BYTE *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  _QWORD *v45; // rdi
  _DWORD *v46; // r12
  __int64 i; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  char **v50; // rbp
  __int64 v51; // rdx
  char **exception; // rbp
  __int64 v53; // rdx
  unsigned int *v54; // [rsp+8h] [rbp-E0h]
  _DWORD *s; // [rsp+18h] [rbp-D0h]
  _DWORD *v56; // [rsp+20h] [rbp-C8h]
  void *v57; // [rsp+28h] [rbp-C0h]
  void *v58; // [rsp+28h] [rbp-C0h]
  unsigned int v59; // [rsp+28h] [rbp-C0h]
  char v60; // [rsp+33h] [rbp-B5h]
  unsigned int v62; // [rsp+38h] [rbp-B0h]
  __int64 v65; // [rsp+48h] [rbp-A0h]
  unsigned int v66; // [rsp+5Ch] [rbp-8Ch] BYREF
  __int64 v67[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v68[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v69[2]; // [rsp+90h] [rbp-58h] BYREF
  int v70; // [rsp+A0h] [rbp-48h]

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
          sub_12D192(v68, "Overflow encountered when expanding vector", v53);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v68);
          sub_233E40((__int64)v68);
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
  v56 = (_DWORD *)(v17 + 8);
  *((_BYTE *)s + v7) = 1;
  v68[0] = 0;
  v68[1] = 0;
  v69[0] = 1;
  v69[1] = 0;
  v70 = 0;
  v62 = 0;
  v60 = a6 ^ 1;
  do
  {
    v65 = 3LL * v62;
    v18 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v56[v65]);
    if ( v18 )
    {
      v54 = &v18[*(v18 - 1)];
      if ( v18 != v54 )
      {
        v19 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v56[3 * v62]);
        while ( 1 )
        {
          v20 = *v19;
          v21 = (unsigned int *)(a1[5] + (v20 << 6));
          v22 = *((unsigned __int8 *)v21 + 56);
          v23 = v21;
          if ( !(_BYTE)v22 )
            goto LABEL_16;
          v24 = a1[3];
          v25 = qword_1C7F2C0;
          v26 = (int *)(v24 + 40LL * *v21);
          if ( (v26[1] & 1) != 0 )
          {
            v57 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v68, v24 + 40LL * *v21);
            v25 = v57;
          }
          else
          {
            v27 = *v26;
            BYTE4(v68[0]) &= ~1u;
            LODWORD(v68[0]) = v27;
          }
          if ( (v26[5] & 1) != 0 )
          {
            sub_182C690(v25, v69, v26 + 4);
          }
          else
          {
            v28 = v26[4];
            BYTE4(v69[0]) &= ~1u;
            LODWORD(v69[0]) = v28;
          }
          v70 = v26[8];
          v29 = a1[3];
          v30 = v29 + 40LL * v23[1];
          if ( (v69[0] & 0x100000000LL) != 0
            || LODWORD(v69[0]) != 1
            || (*(_BYTE *)(v30 + 20) & 1) != 0
            || *(_DWORD *)(v30 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v68, v29 + 40LL * v23[1]);
          }
          else
          {
            v58 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v68, v29 + 40LL * v23[1]);
            sub_182CBA0(v58, v69);
            BYTE4(v69[0]) &= ~1u;
            LODWORD(v69[0]) = 1;
          }
          v70 -= *(_DWORD *)(v30 + 32);
          v31 = v23[2];
          v32 = qword_1C7F2C0;
          if ( v31 )
          {
            if ( LODWORD(v68[0]) )
            {
              if ( (v69[0] & 0x100000000LL) != 0 || LODWORD(v69[0]) != 1 || (v23[7] & 1) != 0 || v23[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v68, v23 + 2, v68);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v68, v23 + 2, v68);
                sub_182CBA0(v32, v69);
                BYTE4(v69[0]) &= ~1u;
                LODWORD(v69[0]) = 1;
              }
            }
            else
            {
              if ( (v23[3] & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v68, v23 + 2);
              }
              else
              {
                BYTE4(v68[0]) &= ~1u;
                LODWORD(v68[0]) = v31;
              }
              if ( (v23[7] & 1) != 0 )
              {
                sub_182C690(v32, v69, v23 + 6);
              }
              else
              {
                v38 = v23[6];
                BYTE4(v69[0]) &= ~1u;
                LODWORD(v69[0]) = v38;
              }
            }
          }
          else
          {
            if ( (v68[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v68, v68);
            else
              BYTE4(v68[0]) &= ~1u;
            if ( (v69[0] & 0x100000000LL) != 0 )
              sub_182C690(v32, v69, v69);
            else
              BYTE4(v69[0]) &= ~1u;
          }
          v33 = v70 + v23[10];
          v70 = v33;
          if ( LODWORD(v68[0]) )
          {
            if ( !v60 || SLODWORD(v68[0]) >= 0 )
              goto LABEL_16;
          }
          else if ( v33 && (v33 >= 0 || !v60) )
          {
            goto LABEL_16;
          }
          if ( v23[12] >= a4 )
            goto LABEL_16;
          v34 = v23[1];
          if ( a3 == v34 )
          {
            v45 = *(_QWORD **)(*a5 + 176);
            v66 = v23[13];
            sub_893780(v45, &v66);
            v46 = &v56[v65];
            for ( i = (unsigned int)v56[v65 + 2]; (_DWORD)i != -1; i = (unsigned int)v46[2] )
            {
              v48 = *a5;
              LODWORD(v67[0]) = *(_DWORD *)(a1[5] + (i << 6) + 52);
              sub_893780(*(_QWORD **)(v48 + 176), (unsigned int *)v67);
              v46 = &v56[3 * v46[1]];
            }
            sub_25A130((char *)v68);
            if ( s )
              sub_186B220(s - 2);
            if ( !v56 )
              return v22;
            goto LABEL_78;
          }
          v35 = (char *)s + v34;
          if ( *v35 )
          {
LABEL_16:
            if ( v54 == ++v19 )
              goto LABEL_40;
          }
          else
          {
            if ( v56 )
            {
              v36 = (unsigned int)*(v56 - 1);
              if ( (_DWORD)v36 == *(v56 - 2) )
              {
                v39 = 3 * v36 + 1;
                v40 = v39 & 0xFFFFFFFE;
                v41 = v39 >> 1;
                v42 = 4 * (v41 + v40) + 8;
                if ( 12 * (int)v36 + 8 >= v42 || (unsigned int)v36 >= v41 )
                {
                  v50 = (char **)__cxa_allocate_exception(0x28u);
                  sub_12D192(v67, "Overflow encountered when expanding vector", v51);
                  *v50 = (char *)off_1C63128;
                  sub_2333C0(v50 + 1, v67);
                  sub_233E40((__int64)v67);
                  __cxa_throw(v50, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v59 = v41;
                v43 = (unsigned int *)sub_186B300(v56 - 2, v42);
                v56 = v43 + 2;
                *v43 = v59;
                v37 = (__int64)&v43[3 * v43[1] + 2];
              }
              else
              {
                v37 = (__int64)&v56[3 * v36];
              }
            }
            else
            {
              v49 = (_QWORD *)sub_186B270(0x20u);
              *v49 = 2;
              v37 = (__int64)(v49 + 1);
              v56 = (_DWORD *)v37;
            }
            *(_DWORD *)(v37 + 8) = v20;
            ++v19;
            *v35 = 1;
            *(_QWORD *)v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v62)).m128i_u64[0];
            ++*(v56 - 1);
            if ( v54 == v19 )
            {
LABEL_40:
              ++v62;
              if ( v56 )
                goto LABEL_41;
              sub_25A130((char *)v68);
              if ( s )
                sub_186B220(s - 2);
              return 0;
            }
          }
        }
      }
    }
    ++v62;
LABEL_41:
    ;
  }
  while ( v62 < *(v56 - 1) );
  sub_25A130((char *)v68);
  if ( s )
    sub_186B220(s - 2);
  v22 = 0;
LABEL_78:
  sub_186B220(v56 - 2);
  return v22;
}

