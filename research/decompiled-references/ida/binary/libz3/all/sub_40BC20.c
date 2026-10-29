__m128i *__fastcall sub_40BC20(__m128i *a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  char **v6; // r12
  char **exception; // r12
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // r15
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned int v18; // r13d
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 *v27; // rdx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 *v37; // rdx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rax
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // edx
  size_t v46; // rsi
  unsigned int *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  int v50; // [rsp+0h] [rbp-D8h]
  __int64 v51; // [rsp+8h] [rbp-D0h]
  int v52[2]; // [rsp+10h] [rbp-C8h]
  int v53; // [rsp+18h] [rbp-C0h]
  int v54[2]; // [rsp+18h] [rbp-C0h]
  int v55[2]; // [rsp+20h] [rbp-B8h]
  char v56; // [rsp+28h] [rbp-B0h]
  char v57[8]; // [rsp+28h] [rbp-B0h]
  unsigned int v58; // [rsp+30h] [rbp-A8h]
  unsigned int v59; // [rsp+34h] [rbp-A4h]
  int *v60; // [rsp+38h] [rbp-A0h]
  int *v61; // [rsp+40h] [rbp-98h]
  __m128i *v62; // [rsp+48h] [rbp-90h]
  int v63[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v64; // [rsp+58h] [rbp-80h]
  int v65[2]; // [rsp+60h] [rbp-78h] BYREF
  char v66[8]; // [rsp+68h] [rbp-70h]
  __int64 v67[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v68[11]; // [rsp+80h] [rbp-58h] BYREF

  v8 = *(_QWORD **)(a2 + 264);
  v59 = a3;
  v9 = *(_QWORD *)(a2 + 152);
  v62 = a1;
  v10 = &v8[2 * *(unsigned int *)(a2 + 272)];
  v51 = a2;
  *(_QWORD *)v63 = v9;
  if ( v8 == v10 )
  {
LABEL_50:
    *(_QWORD *)v52 = 0;
  }
  else
  {
    while ( 1 )
    {
      v11 = v8;
      if ( *v8 > 1u )
        break;
      v8 += 2;
      if ( v10 == v8 )
        goto LABEL_50;
    }
    *(_QWORD *)v52 = 0;
    if ( v10 != v8 )
    {
      v60 = v65;
      v61 = v63;
      *(_QWORD *)v55 = a2 + 176;
      do
      {
        v12 = v11[1];
        sub_40B100((__int64)v60, v12, v59, a4, a5, a6);
        v15 = *(_QWORD *)(v51 + 152);
        v53 = v65[0];
        v56 = v66[0];
        if ( *(_QWORD *)v65 == *(_QWORD *)(v15 + 856) )
        {
          sub_3FCDF0(*(__int64 *)v65, *(__int64 *)v66);
        }
        else
        {
          v16 = *(_QWORD *)(v12 + 48);
          v67[0] = *(_QWORD *)(v51 + 152);
          v17 = 0;
          v18 = 0;
          if ( v16 )
          {
            while ( v18 < *(_DWORD *)(v16 - 4) )
            {
              v19 = sub_439010(*(_QWORD *)v55, *(_QWORD *)(v16 + 8LL * v18), 1, 0);
              v22 = sub_15DC610(
                      v15,
                      v19,
                      0,
                      0,
                      v20,
                      v21,
                      v50,
                      v51,
                      v52[0],
                      v53,
                      v55[0],
                      v56,
                      v58,
                      (int)v60,
                      (int)v61,
                      v62);
              v23 = v22;
              if ( v22 )
                ++*(_DWORD *)(v22 + 8);
              if ( v17 )
              {
                v24 = *(_DWORD *)(v17 - 4);
                if ( v24 == *(_DWORD *)(v17 - 8) )
                {
                  v42 = (3 * v24 + 1) >> 1;
                  v43 = 8 * v42 + 8;
                  if ( 8 * v24 + 8 >= (unsigned int)v43 || v24 >= v42 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_3FCFD0(v68, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v68);
                    sub_233E40((__int64)v68);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v58 = (3 * v24 + 1) >> 1;
                  v44 = (unsigned int *)sub_186B300((void *)(v17 - 8), v43);
                  v17 = (__int64)(v44 + 2);
                  *v44 = v58;
                  LODWORD(v44) = v44[1];
                  v27 = (__int64 *)(v17 + 8LL * (unsigned int)v44);
                  v26 = (_DWORD)v44 + 1;
                }
                else
                {
                  v25 = v24;
                  v26 = v24 + 1;
                  v27 = (__int64 *)(v17 + 8 * v25);
                }
              }
              else
              {
                v48 = (_QWORD *)sub_186B270(0x18u);
                v27 = v48 + 1;
                v17 = (__int64)(v48 + 1);
                *v48 = 2;
                v26 = 1;
              }
              *v27 = v23;
              ++v18;
              *(_DWORD *)(v17 - 4) = v26;
              v16 = *(_QWORD *)(v12 + 48);
              v15 = *(_QWORD *)(v51 + 152);
              if ( !v16 )
                goto LABEL_16;
            }
            v28 = *(_DWORD *)(v16 - 4);
          }
          else
          {
LABEL_16:
            v28 = 0;
          }
          v29 = sub_15DC610(
                  v15,
                  *(_QWORD *)(v12 + 24),
                  v28,
                  v17,
                  v13,
                  v14,
                  v50,
                  v51,
                  v52[0],
                  v53,
                  v55[0],
                  v56,
                  v58,
                  (int)v60,
                  (int)v61,
                  v62);
          v30 = v29;
          if ( v29 )
            ++*(_DWORD *)(v29 + 8);
          v31 = sub_15E1B70(*(_QWORD *)(v51 + 152));
          v32 = v31;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v33 = *(_QWORD **)v52;
          if ( *(_QWORD *)v52 )
          {
            v34 = *(_DWORD *)(*(_QWORD *)v52 - 4LL);
            if ( v34 == *(_DWORD *)(*(_QWORD *)v52 - 8LL) )
            {
              v45 = (3 * v34 + 1) >> 1;
              v46 = 8 * v45 + 8;
              if ( 8 * v34 + 8 >= (unsigned int)v46 || v34 >= v45 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(v68, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v68);
                sub_233E40((__int64)v68);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v58 = (3 * v34 + 1) >> 1;
              v47 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v52 - 8LL), v46);
              v33 = v47 + 2;
              *(_QWORD *)v52 = v47 + 2;
              *v47 = v58;
              LODWORD(v47) = v47[1];
              v37 = &v33[(unsigned int)v47];
              v36 = (_DWORD)v47 + 1;
            }
            else
            {
              v35 = v34;
              v36 = v34 + 1;
              v37 = (__int64 *)(*(_QWORD *)v52 + 8 * v35);
            }
          }
          else
          {
            v49 = (_QWORD *)sub_186B270(0x18u);
            *v49 = 2;
            *(_QWORD *)v52 = v49 + 1;
            v37 = v49 + 1;
            v33 = v49 + 1;
            v36 = 1;
          }
          *v37 = v32;
          *((_DWORD *)v33 - 1) = v36;
          if ( v30 )
          {
            if ( (*(_DWORD *)(v30 + 8))-- == 1 )
              sub_15D7BC0(v15, v30);
          }
          v67[1] = v17;
          sub_2334C0(v67);
          if ( *(_QWORD *)v54 )
          {
            v58 = *(_DWORD *)(*(_QWORD *)v54 + 8LL);
            *(_DWORD *)(*(_QWORD *)v54 + 8LL) = v58 - 1;
            if ( v58 == 1 )
              sub_15D7BC0(*(_QWORD *)v57, *(_QWORD *)v54);
          }
        }
        v39 = v11 + 2;
        if ( v10 == v11 + 2 )
          break;
        while ( 1 )
        {
          v11 = v39;
          if ( *v39 > 1u )
            break;
          v39 += 2;
          if ( v10 == v39 )
            goto LABEL_35;
        }
      }
      while ( v10 != v39 );
LABEL_35:
      if ( *(_QWORD *)v52 && *(_DWORD *)(*(_QWORD *)v52 - 4LL) )
      {
        v64 = *(_QWORD **)v52;
        sub_41C800(v62, v63);
        goto LABEL_40;
      }
      v9 = *(_QWORD *)(v51 + 152);
    }
  }
  v40 = *(_QWORD *)(v9 + 856);
  *v62 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v9);
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
LABEL_40:
  v64 = *(_QWORD **)v52;
  sub_2334C0((__int64 *)v63);
  return v62;
}

