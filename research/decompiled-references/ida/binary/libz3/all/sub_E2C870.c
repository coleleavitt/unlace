_QWORD *__fastcall sub_E2C870(_QWORD **a1, __int64 a2)
{
  _QWORD **v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  __int64 v13; // r12
  _OWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // rbp
  unsigned int v20; // ebx
  _DWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdx
  int v24; // r13d
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  int v29; // r15d
  __int64 v30; // rax
  _DWORD *v31; // rax
  _DWORD *(__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // rax
  _QWORD *v34; // rdx
  int v35; // r13d
  __int64 v36; // rax
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int v39; // r15d
  unsigned int *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r9d
  size_t v43; // rsi
  unsigned int v44; // r13d
  unsigned int *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r9d
  size_t v48; // rsi
  unsigned int v49; // r15d
  unsigned int *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rsi
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  char **v58; // rbp
  char **exception; // rbp
  char **v60; // rbp
  int v61; // [rsp+0h] [rbp-D8h]
  __int64 *v62; // [rsp+0h] [rbp-D8h]
  __int64 v63[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-98h] BYREF
  __int64 v65; // [rsp+48h] [rbp-90h]
  __int128 v66; // [rsp+50h] [rbp-88h]
  __int64 v67; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+68h] [rbp-70h]
  __int64 v69; // [rsp+70h] [rbp-68h]
  int v70; // [rsp+78h] [rbp-60h]
  __int128 v71; // [rsp+80h] [rbp-58h]
  int v72; // [rsp+90h] [rbp-48h]

  v3 = a1;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1[13] + 80LL))(a1[13]);
  v5 = (_QWORD *)sub_186B270(0x120u);
  sub_E2C430((__int64)v5, v4);
  v6 = (__int64 (__fastcall *)(__int64))(*a1)[9];
  if ( v6 != sub_E22FB0 )
    goto LABEL_56;
  v7 = a1[13];
  v8 = *(__int64 (**)(void))(*v7 + 72LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_12;
  a1 = (_QWORD **)v7[13];
  v6 = (__int64 (__fastcall *)(__int64))(*a1)[9];
  if ( (char *)v6 != (char *)v8 )
    goto LABEL_56;
  v9 = a1[13];
  v8 = *(__int64 (**)(void))(*v9 + 72LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_12;
  a1 = (_QWORD **)v9[13];
  v6 = (__int64 (__fastcall *)(__int64))(*a1)[9];
  if ( (char *)v6 != (char *)v8 )
    goto LABEL_56;
  v10 = a1[13];
  v8 = *(__int64 (**)(void))(*v10 + 72LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_12;
  a1 = (_QWORD **)v10[13];
  v6 = (__int64 (__fastcall *)(__int64))(*a1)[9];
  if ( (char *)v6 != (char *)v8 )
    goto LABEL_56;
  v11 = a1[13];
  v8 = *(__int64 (**)(void))(*v11 + 72LL);
  if ( (char *)v8 != (char *)v6 )
  {
LABEL_12:
    v13 = v8();
    goto LABEL_13;
  }
  a1 = (_QWORD **)v11[13];
  v6 = (__int64 (__fastcall *)(__int64))(*a1)[9];
  if ( (char *)v6 == (char *)v8 )
  {
    v12 = (_QWORD **)a1[13];
    v8 = (__int64 (*)(void))(*v12)[9];
    if ( (char *)v8 == (char *)v6 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[13] + 72LL))(v12[13]);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
LABEL_56:
  v13 = v6((__int64)a1);
LABEL_13:
  v64 = v13;
  v65 = a2;
  v67 = 0;
  v66 = 0;
  v14 = (_OWORD *)sub_186B270(0x80u);
  ptr = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v69 = 8;
  v70 = 0;
  v72 = 0;
  v71 = 0;
  if ( a2 != v13 )
  {
    sub_15DA640(v65, v64, v15, v16, v17, v18, v61);
    sub_15D2280(v65, v64);
  }
  v19 = v3[14];
  if ( v19 )
  {
    v62 = &v19[5 * *((unsigned int *)v19 - 1)];
    if ( v62 != v19 )
    {
      v20 = 0;
      while ( v20 >= *((_DWORD *)v19 + 9) )
      {
LABEL_44:
        v52 = v19[2];
        if ( v64 == v65 )
        {
          v53 = *v19;
        }
        else
        {
          v52 = sub_15CFF50(&v64, v19[2]);
          v53 = *v19;
          if ( v64 != v65 )
            v53 = sub_15CFF50(&v64, v53);
        }
        sub_E5EC60(v5, v53, v52);
        v19 += 5;
        if ( v62 == v19 )
          goto LABEL_48;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = *(_DWORD *(__fastcall **)(_QWORD *))(*v5 + 192LL);
          if ( v32 == sub_E263C0 )
            break;
          v32(v5);
          if ( ++v20 >= *((_DWORD *)v19 + 9) )
            goto LABEL_44;
        }
        v33 = v5[14];
        if ( v33 )
        {
          v34 = (_QWORD *)v5[15];
          v35 = *(_DWORD *)(v33 - 4);
          if ( !v34 )
            goto LABEL_54;
        }
        else
        {
          v34 = (_QWORD *)v5[15];
          v35 = 0;
          if ( !v34 )
          {
LABEL_54:
            v57 = (_QWORD *)sub_186B270(0x10u);
            v34 = v57 + 1;
            *v57 = 2;
            v5[15] = v57 + 1;
            v21 = v57 + 1;
            goto LABEL_21;
          }
        }
        v36 = *((unsigned int *)v34 - 1);
        if ( (_DWORD)v36 == *((_DWORD *)v34 - 2) )
        {
          v37 = (unsigned int)(3 * v36 + 1) >> 1;
          v38 = 4 * v37 + 8;
          v39 = v37;
          if ( 4 * (int)v36 + 8 >= (unsigned int)v38 || (unsigned int)v36 >= v37 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v63, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v63);
            sub_233E40((__int64)v63);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(v34 - 1, v38);
          v34 = v40 + 2;
          *v40 = v39;
          v41 = v40[1];
          v5[15] = v34;
          v21 = (_DWORD *)v34 + v41;
        }
        else
        {
          v21 = (_DWORD *)v34 + v36;
        }
LABEL_21:
        *v21 = v35;
        v22 = v5[19];
        ++*((_DWORD *)v34 - 1);
        if ( v22 )
        {
          v23 = (_QWORD *)v5[20];
          v24 = *(_DWORD *)(v22 - 4);
          if ( !v23 )
            goto LABEL_50;
        }
        else
        {
          v23 = (_QWORD *)v5[20];
          v24 = 0;
          if ( !v23 )
          {
LABEL_50:
            v55 = (_QWORD *)sub_186B270(0x10u);
            v23 = v55 + 1;
            v5[20] = v55 + 1;
            *v55 = 2;
            v26 = v55 + 1;
            goto LABEL_25;
          }
        }
        v25 = *((unsigned int *)v23 - 1);
        if ( (_DWORD)v25 == *((_DWORD *)v23 - 2) )
        {
          v47 = (unsigned int)(3 * v25 + 1) >> 1;
          v48 = 4 * v47 + 8;
          v49 = v47;
          if ( 4 * (int)v25 + 8 >= (unsigned int)v48 || (unsigned int)v25 >= v47 )
          {
            v58 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v63, "Overflow encountered when expanding vector");
            *v58 = (char *)off_1C63128;
            sub_2333C0(v58 + 1, v63);
            sub_233E40((__int64)v63);
            __cxa_throw(v58, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = (unsigned int *)sub_186B300(v23 - 1, v48);
          v23 = v50 + 2;
          *v50 = v49;
          v51 = v50[1];
          v5[20] = v23;
          v26 = (_DWORD *)v23 + v51;
        }
        else
        {
          v26 = (_DWORD *)v23 + v25;
        }
LABEL_25:
        *v26 = v24;
        v27 = v5[24];
        ++*((_DWORD *)v23 - 1);
        if ( v27 )
        {
          v28 = (_QWORD *)v5[25];
          v29 = *(_DWORD *)(v27 - 4);
          if ( v28 )
            goto LABEL_27;
        }
        else
        {
          v28 = (_QWORD *)v5[25];
          v29 = 0;
          if ( v28 )
          {
LABEL_27:
            v30 = *((unsigned int *)v28 - 1);
            if ( (_DWORD)v30 == *((_DWORD *)v28 - 2) )
            {
              v42 = (unsigned int)(3 * v30 + 1) >> 1;
              v43 = 4 * v42 + 8;
              v44 = v42;
              if ( 4 * (int)v30 + 8 >= (unsigned int)v43 || (unsigned int)v30 >= v42 )
              {
                v60 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v63, "Overflow encountered when expanding vector");
                *v60 = (char *)off_1C63128;
                sub_2333C0(v60 + 1, v63);
                sub_233E40((__int64)v63);
                __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v45 = (unsigned int *)sub_186B300(v28 - 1, v43);
              v28 = v45 + 2;
              *v45 = v44;
              v46 = v45[1];
              v5[25] = v28;
              v31 = (_DWORD *)v28 + v46;
            }
            else
            {
              v31 = (_DWORD *)v28 + v30;
            }
            goto LABEL_29;
          }
        }
        v56 = (_QWORD *)sub_186B270(0x10u);
        v28 = v56 + 1;
        v5[25] = v56 + 1;
        *v56 = 2;
        v31 = v56 + 1;
LABEL_29:
        *v31 = v29;
        ++v20;
        ++*((_DWORD *)v28 - 1);
        if ( v20 >= *((_DWORD *)v19 + 9) )
          goto LABEL_44;
      }
    }
  }
LABEL_48:
  sub_15CE760(&v64);
  return v5;
}

