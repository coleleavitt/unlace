unsigned int *__fastcall sub_833F70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  void *v10; // rax
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, __int64); // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  void *v17; // rdi
  bool v18; // zf
  __int64 v19; // rbp
  unsigned int *result; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  void *v27; // rdi
  _DWORD *v28; // rax
  int v29; // r8d
  unsigned int *v30; // r9
  __int64 v31; // rdi
  _QWORD *v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rax
  _QWORD *v37; // rax
  char v38; // al
  _QWORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r10d
  size_t v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdi
  _QWORD *v51; // rax
  int v52; // [rsp+0h] [rbp-B8h]
  int v53[2]; // [rsp+8h] [rbp-B0h]
  unsigned int *v54; // [rsp+10h] [rbp-A8h]
  _QWORD *v55; // [rsp+18h] [rbp-A0h]
  int v56[2]; // [rsp+20h] [rbp-98h]
  _QWORD *v57; // [rsp+28h] [rbp-90h]
  int v58; // [rsp+30h] [rbp-88h]
  int v59; // [rsp+38h] [rbp-80h]
  int v60[2]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+48h] [rbp-70h]
  __int64 v62[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v63[11]; // [rsp+60h] [rbp-58h] BYREF

  v10 = *(void **)(a1 + 72);
  v11 = *(_QWORD *)a2;
  *(_QWORD *)v60 = 0;
  ptr = v10;
  if ( (unsigned __int8)sub_833B60(a1, a2, (__int64 *)v60) )
  {
LABEL_43:
    v15 = *(_QWORD *)v60;
    goto LABEL_9;
  }
  if ( !*(_WORD *)(v11 + 4) )
  {
    v28 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
    if ( v28 )
    {
      if ( *v28 == 5 && (unsigned __int8)sub_852FD0(a1, v11) )
      {
        v31 = *(_QWORD *)(a1 + 72);
        v32 = (_QWORD *)(v11 + 32);
        v33 = 0;
        v34 = 8LL * *(unsigned int *)(v11 + 24);
        v62[0] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)v56 = v11 + 32 + v34;
        if ( !v34 )
        {
          v47 = 0;
LABEL_40:
          v48 = sub_15DC610(
                  v31,
                  *(_QWORD *)(v11 + 16),
                  v47,
                  v33,
                  v29,
                  (int)v30,
                  v52,
                  (int)v60,
                  (int)v54,
                  (int)v55,
                  v56[0],
                  (char)v57,
                  v58,
                  v59,
                  v60[0],
                  ptr);
          v49 = v48;
          if ( v48 )
            ++*(_DWORD *)(v48 + 8);
          sub_828D60(*(__int64 *)v60, (__int64)ptr);
          v50 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)v60 = v49;
          sub_14B9B80(v50 + 2192, *(_QWORD *)v53);
          v62[1] = v33;
          sub_2334C0(v62);
          goto LABEL_43;
        }
        while ( 1 )
        {
          v55 = v32;
          v54 = (unsigned int *)*v32;
          v38 = sub_15D26C0(v31, *v32);
          v30 = v54;
          v39 = v55;
          if ( v38 )
          {
            if ( v54 )
              ++v54[2];
            if ( !v33 )
            {
              v51 = (_QWORD *)sub_186B270(0x18u);
              goto LABEL_49;
            }
            v35 = *(_DWORD *)(v33 - 4);
            if ( v35 == *(_DWORD *)(v33 - 8) )
            {
              v42 = (3 * v35 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v35 + 8 >= (unsigned int)v43 || v35 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v63, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v63);
                sub_233E40((__int64)v63);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              goto LABEL_38;
            }
          }
          else
          {
            v40 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
            if ( v40 )
            {
              v41 = *v54;
              if ( (unsigned int)v41 >= *(_DWORD *)(v40 - 4) )
                v40 = 0;
              else
                v40 = *(_QWORD *)(v40 + 8 * v41);
            }
            v30 = *(unsigned int **)(a4[1] + 8LL * ***(unsigned int ***)(v40 + 64));
            if ( v30 )
              ++v30[2];
            if ( !v33 )
            {
              v54 = v30;
              v51 = (_QWORD *)sub_186B270(0x18u);
LABEL_49:
              v33 = (__int64)(v51 + 1);
              v30 = v54;
              v39 = v55;
              *v51 = 2;
              v47 = 1;
              v37 = v51 + 1;
              goto LABEL_27;
            }
            v35 = *(_DWORD *)(v33 - 4);
            if ( v35 == *(_DWORD *)(v33 - 8) )
            {
              v42 = (3 * v35 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v35 + 8 >= (unsigned int)v43 || v35 >= v42 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v63, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v63);
                sub_233E40((__int64)v63);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
LABEL_38:
              v57 = v55;
              LODWORD(v55) = v42;
              v54 = v30;
              v44 = (_DWORD *)sub_186B300((void *)(v33 - 8), v43);
              v33 = (__int64)(v44 + 2);
              v30 = v54;
              v39 = v57;
              *v44 = (_DWORD)v55;
              v45 = (unsigned int)v44[1];
              v46 = v45;
              v37 = (_QWORD *)(v33 + 8 * v45);
              v47 = v46 + 1;
              goto LABEL_27;
            }
          }
          v36 = v35;
          v47 = v35 + 1;
          v37 = (_QWORD *)(v33 + 8 * v36);
LABEL_27:
          *v37 = v30;
          v31 = *(_QWORD *)(a1 + 72);
          v32 = v39 + 1;
          *(_DWORD *)(v33 - 4) = v47;
          if ( *(_QWORD **)v56 == v32 )
            goto LABEL_40;
        }
      }
    }
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL);
  v13 = sub_15D1F10(*(_QWORD *)a2);
  v14 = v12(a3, v13);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *(_QWORD *)v60;
  if ( *(_QWORD *)v60 )
  {
    v17 = ptr;
    v18 = (*(_DWORD *)(*(_QWORD *)v60 + 8LL))-- == 1;
    if ( v18 )
      sub_15D7BC0(v17, v16);
  }
  *(_QWORD *)v60 = v15;
LABEL_9:
  sub_1379440(a3, v15);
  v19 = *(_QWORD *)v60;
  result = **(unsigned int ***)(a2 + 64);
  v21 = *result;
  if ( *(_QWORD *)v60 )
    ++*(_DWORD *)(*(_QWORD *)v60 + 8LL);
  v22 = 8 * v21;
  v23 = (__int64 *)(v22 + a4[1]);
  v24 = *v23;
  if ( *v23 )
  {
    v25 = *a4;
    v18 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v18 )
    {
      result = (unsigned int *)sub_15D7BC0(v25, v24);
      v23 = (__int64 *)(a4[1] + v22);
    }
  }
  *v23 = v19;
  v26 = *(_QWORD *)v60;
  if ( *(_QWORD *)v60 )
  {
    v27 = ptr;
    v18 = (*(_DWORD *)(*(_QWORD *)v60 + 8LL))-- == 1;
    if ( v18 )
      return (unsigned int *)sub_15D7BC0(v27, v26);
  }
  return result;
}

