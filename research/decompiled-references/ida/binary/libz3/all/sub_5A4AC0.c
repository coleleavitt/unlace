__int64 __fastcall sub_5A4AC0(__int64 a1, __int64 a2, __int64 *a3, char *a4, __int64 *a5, __int64 a6, int a7)
{
  char **v7; // r12
  char **exception; // r12
  char **v9; // r12
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // ebp
  _QWORD *v17; // rax
  _DWORD *v18; // rdi
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r13
  _DWORD *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int v29; // r14d
  unsigned int *v30; // rax
  __int64 v31; // r14
  char *v32; // rdx
  _DWORD *v33; // rdi
  __int64 v34; // r14
  __int64 v35; // rdx
  int v36; // esi
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ebp
  _QWORD *v42; // r8
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rsi
  int v46; // eax
  _QWORD *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 result; // rax
  unsigned int v53; // r9d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rsi
  _QWORD *v57; // rax
  unsigned int v58; // [rsp+0h] [rbp-98h]
  size_t v59; // [rsp+8h] [rbp-90h]
  unsigned int v60; // [rsp+8h] [rbp-90h]
  _QWORD *v61; // [rsp+8h] [rbp-90h]
  _QWORD *v62; // [rsp+10h] [rbp-88h]
  unsigned int **v63; // [rsp+18h] [rbp-80h]
  __int64 v65[11]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)a1 = qword_1C665B0;
  v14 = *a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v14 )
  {
    sub_52CD90((_QWORD *)(a1 + 16), a3);
    v14 = *(_QWORD *)(a1 + 16);
  }
  v15 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &off_1C52390;
  *(_DWORD *)(a1 + 24) = v15;
  *(_DWORD *)(a1 + 40) = 0;
  v63 = (unsigned int **)(a1 + 48);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a6;
  *(_DWORD *)(a1 + 96) = a7;
  *(_DWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  if ( v14 )
  {
    v16 = *(_DWORD *)(v14 - 4);
    if ( v16 )
    {
      v17 = (_QWORD *)sub_186B270(0x10u);
      v18 = v17 + 1;
      *(_QWORD *)(a1 + 56) = v17 + 1;
      *v17 = 2;
      while ( 1 )
      {
        v22 = *(v18 - 2);
        if ( v22 >= v16 )
          break;
        v19 = (3 * v22 + 1) >> 1;
        v20 = 4 * v19 + 8;
        if ( 4 * v22 + 8 >= (unsigned int)v20 || v22 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v65, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v18 - 2, v20);
        v18 = v21 + 2;
        *v21 = v19;
        *(_QWORD *)(a1 + 56) = v21 + 2;
      }
      *(v18 - 1) = v16;
      v23 = v16;
      v59 = 4LL * v16;
      memset(v18, 255, v59);
      v24 = *(_DWORD **)(a1 + 80);
      if ( v24 )
      {
        v58 = *(v24 - 1);
        if ( v58 >= v16 )
        {
          *(v24 - 1) = v16;
LABEL_21:
          v34 = 0;
          while ( 1 )
          {
            v41 = v34;
            v42 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v34);
            if ( a4[v34] )
              break;
            v43 = *(_QWORD **)(a1 + 64);
            if ( v43 )
            {
              v44 = *((_DWORD *)v43 - 1);
              *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v34) = v44;
              if ( v44 == *((_DWORD *)v43 - 2) )
              {
                v53 = (3 * v44 + 1) >> 1;
                v54 = 8 * v53 + 8;
                if ( 8 * v44 + 8 >= (unsigned int)v54 || v44 >= v53 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v65, "Overflow encountered when expanding vector");
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v65);
                  sub_233E40((__int64)v65);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v62 = v42;
                v60 = (3 * v44 + 1) >> 1;
                v55 = (unsigned int *)sub_186B300(v43 - 1, v54);
                v56 = v55[1];
                v43 = v55 + 2;
                *(_QWORD *)(a1 + 64) = v55 + 2;
                v42 = v62;
                *v55 = v60;
                LODWORD(v55) = v56;
                v47 = &v43[v56];
                v46 = (_DWORD)v55 + 1;
              }
              else
              {
                v45 = v44;
                v46 = v44 + 1;
                v47 = &v43[v45];
              }
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v34) = 0;
              v61 = v42;
              v57 = (_QWORD *)sub_186B270(0x18u);
              v43 = v57 + 1;
              v42 = v61;
              *(_QWORD *)(a1 + 64) = v57 + 1;
              v47 = v57 + 1;
              *v57 = 2;
              v46 = 1;
            }
            *v47 = *v42;
            *((_DWORD *)v43 - 1) = v46;
            v39 = *(_QWORD *)(a1 + 72);
            if ( v39 && (v40 = *(unsigned int *)(v39 - 4), (_DWORD)v40 != *(_DWORD *)(v39 - 8)) )
            {
LABEL_30:
              ++v34;
              *(_DWORD *)(v39 + 4 * v40) = v41;
              ++*(_DWORD *)(v39 - 4);
              if ( v23 == v34 )
                goto LABEL_38;
            }
            else
            {
              sub_2FD3F0((unsigned int **)(a1 + 72));
              v48 = *(_QWORD *)(a1 + 72);
              ++v34;
              *(_DWORD *)(v48 + 4LL * (unsigned int)(*(_DWORD *)(v48 - 4))++) = v41;
              if ( v23 == v34 )
                goto LABEL_38;
            }
          }
          v35 = *(_QWORD *)(a1 + 32);
          if ( v35 )
            v36 = *(_DWORD *)(v35 - 4);
          else
            v36 = 0;
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v34) = v36;
          if ( !(unsigned __int8)sub_4C4270(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v42, (__int64)v65) )
          {
            sub_1872CE0("");
            sub_1873130(114, 1791);
          }
          v37 = *(_QWORD *)(a1 + 32);
          if ( !v37 || (v38 = *(_DWORD *)(v37 - 4), v38 == *(_DWORD *)(v37 - 8)) )
          {
            sub_5A7FF0(a1 + 32);
            v37 = *(_QWORD *)(a1 + 32);
            v38 = *(_DWORD *)(v37 - 4);
          }
          *(_QWORD *)(v37 + 8LL * v38) = v65[0];
          *(_DWORD *)(v37 - 4) = v38 + 1;
          v39 = *(_QWORD *)(a1 + 48);
          if ( !v39 || (v40 = *(unsigned int *)(v39 - 4), (_DWORD)v40 == *(_DWORD *)(v39 - 8)) )
          {
            sub_2FD3F0(v63);
            v39 = *(_QWORD *)(a1 + 48);
            v40 = *(unsigned int *)(v39 - 4);
          }
          goto LABEL_30;
        }
        while ( 1 )
        {
          v26 = *(v24 - 2);
          if ( v26 >= v16 )
            break;
LABEL_15:
          v27 = (3 * v26 + 1) >> 1;
          v28 = 4 * v27 + 8;
          v29 = v27;
          if ( 4 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v65, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (unsigned int *)sub_186B300(v24 - 2, v28);
          v24 = v30 + 2;
          *v30 = v29;
          *(_QWORD *)(a1 + 80) = v30 + 2;
        }
        *(v24 - 1) = v16;
        v31 = 4LL * v58;
        v32 = (char *)&v24[v59 / 4];
        v33 = &v24[(unsigned __int64)v31 / 4];
        if ( v59 == v31 )
          goto LABEL_21;
      }
      else
      {
        v25 = sub_186B270(0x10u);
        v26 = 2;
        *(_QWORD *)v25 = 2;
        v24 = (_DWORD *)(v25 + 8);
        *(_QWORD *)(a1 + 80) = v25 + 8;
        if ( v16 > 2 )
        {
          v58 = 0;
          goto LABEL_15;
        }
        *(_DWORD *)(v25 + 4) = v16;
        v33 = (_DWORD *)(v25 + 8);
        v32 = (char *)&v24[v59 / 4];
      }
      memset(v33, 255, v32 - (char *)v33);
      goto LABEL_21;
    }
  }
LABEL_38:
  v49 = *(_QWORD *)(a1 + 32);
  if ( !v49 || (v50 = *(_DWORD *)(v49 - 4), v50 == *(_DWORD *)(v49 - 8)) )
  {
    sub_5A7FF0(a1 + 32);
    v49 = *(_QWORD *)(a1 + 32);
    v50 = *(_DWORD *)(v49 - 4);
  }
  *(_QWORD *)(v49 + 8LL * v50) = 0x7FFFFFFF;
  *(_DWORD *)(v49 - 4) = v50 + 1;
  v51 = *a5;
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64 *, __int64))(v51 + 40))(a5, a1 + 32);
  result = sub_5A4920(a2, a1, a4);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

