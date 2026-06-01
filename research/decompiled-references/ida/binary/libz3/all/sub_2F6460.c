__int64 *__fastcall sub_2F6460(__int64 *a1, _QWORD *a2, char a3, _QWORD *a4, int *a5)
{
  char **exception; // rbx
  char v7; // r13
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r14
  __int64 v14; // rbp
  int v15; // eax
  _QWORD *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // r15
  int v21; // edx
  __int64 v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbp
  void *v42; // r13
  __int64 v43; // rsi
  int *v44; // [rsp+0h] [rbp-118h]
  __int64 v45; // [rsp+28h] [rbp-F0h]
  __int64 v46; // [rsp+30h] [rbp-E8h]
  unsigned int v47; // [rsp+3Ch] [rbp-DCh]
  unsigned int v49; // [rsp+4Ch] [rbp-CCh]
  int *v50; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v52[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v53[4]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-70h]
  __int128 v56; // [rsp+B0h] [rbp-68h]
  _QWORD v57[11]; // [rsp+C0h] [rbp-58h] BYREF

  v7 = a3;
  v51[0] = 0;
  v51[1] = 0;
  v52[0] = 1;
  v52[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v52);
  v10 = a2[1];
  BYTE4(v52[0]) &= ~1u;
  LODWORD(v52[0]) = 1;
  v46 = v10;
  a1[1] = v10;
  v11 = *a5;
  *a1 = 0;
  if ( v11 == 1 )
  {
    v7 = a3 ^ 1;
  }
  else
  {
    if ( v11 == 2 )
    {
      v54 = a2[1];
      v14 = v54;
      sub_180C5A0(v53, "pb");
      v15 = sub_15DA4C0(v14 + 560, v53);
      v16 = *((_QWORD **)a5 + 4);
      LODWORD(v55) = v15;
      v57[0] = 0;
      v57[1] = 0;
      v57[2] = 1;
      v57[3] = 0;
      v56 = 0;
      if ( v16 )
      {
        v17 = *((unsigned int *)v16 - 1);
        v49 = v17;
        if ( (_DWORD)v17 )
        {
          v18 = *v16;
          v45 = 8 * v17;
          v19 = (_QWORD *)(sub_186B270(0x18u) + 8);
          v20 = 0;
          v21 = 1;
          v44 = nullptr;
          *(v19 - 1) = 2;
          v16 = v19;
          while ( 1 )
          {
            v22 = *((_QWORD *)a5 + 5);
            *v19 = v18;
            *((_DWORD *)v16 - 1) = v21;
            v50 = v44;
            sub_2F0130(&v50, (int *)(4 * v20 + v22));
            v44 = v50;
            if ( (unsigned __int8)sub_1374270(*a4, *(_QWORD *)(*((_QWORD *)a5 + 4) + v20)) )
            {
              sub_2FC4A0(qword_1C7F2C0, v51, 4 * v20 + *((_QWORD *)a5 + 5), v51);
              v20 += 8;
              if ( v20 == v45 )
                goto LABEL_26;
            }
            else
            {
              v20 += 8;
              if ( v20 == v45 )
                goto LABEL_26;
            }
            v23 = *((_DWORD *)v16 - 1);
            v18 = *(_QWORD *)(*((_QWORD *)a5 + 4) + v20);
            if ( v23 == *((_DWORD *)v16 - 2) )
            {
              v28 = (3 * v23 + 1) >> 1;
              v29 = 8 * v28 + 8;
              if ( 8 * v23 + 8 >= (unsigned int)v29 || v23 >= v28 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_2EB560(v53, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v53);
                sub_233E40((__int64)v53);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v47 = (3 * v23 + 1) >> 1;
              v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
              v16 = v30 + 2;
              *v30 = v47;
              v31 = v30[1];
              v32 = v31;
              v19 = &v16[v31];
              v21 = v32 + 1;
            }
            else
            {
              v24 = v23;
              v21 = v23 + 1;
              v19 = &v16[v24];
            }
          }
        }
        v44 = nullptr;
        v16 = nullptr;
      }
      else
      {
        v44 = nullptr;
        v49 = 0;
      }
LABEL_26:
      if ( a3 )
        v33 = sub_1690D20(&v54, v49, v44, v16, v51);
      else
        v33 = sub_168FD40(&v54, v49, v44, v16, v51);
      v34 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_2EB430(*a1, a1[1]);
      *a1 = v34;
      v50 = v44;
      sub_27FC20((__int64 *)&v50);
      if ( v16 )
        sub_186B220(v16 - 1);
      sub_25A130((char *)v57);
      v35 = *((_QWORD *)&v56 + 1);
      if ( *((_QWORD *)&v56 + 1) )
      {
        v36 = *(unsigned int *)(*((_QWORD *)&v56 + 1) - 4LL);
        if ( (_DWORD)v36 )
        {
          v37 = *((_QWORD *)&v56 + 1) + 16 * v36;
          do
          {
            v38 = v35;
            v35 += 16;
            sub_15D0DF0(v38);
          }
          while ( v37 != v35 );
          v35 = *((_QWORD *)&v56 + 1);
        }
        sub_186B220((void *)(v35 - 8));
      }
      v39 = v56;
      if ( (_QWORD)v56 )
      {
        v40 = *(unsigned int *)(v56 - 4);
        if ( (_DWORD)v40 )
        {
          v41 = v56 + 32 * v40;
          do
          {
            v42 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v39);
            v43 = v39 + 16;
            v39 += 32;
            sub_182CBA0(v42, v43);
          }
          while ( v41 != v39 );
          v39 = v56;
        }
        sub_186B220((void *)(v39 - 8));
      }
      goto LABEL_4;
    }
    if ( v11 )
    {
LABEL_4:
      v12 = 0;
      goto LABEL_5;
    }
  }
  sub_1374250(&v54, *a4, *((_QWORD *)a5 + 1));
  v12 = v54;
  if ( (unsigned __int8)sub_2EC220((__int64)a2, v54, (__int64)v51) )
  {
    if ( v7 )
      sub_2EBD70(&v54, a2, *((_QWORD *)a5 + 1));
    else
      sub_2EBD70(&v54, a2, v12);
    v25 = *a1;
    v26 = v55;
    *a1 = v54;
    sub_2EB430(v25, v26);
  }
  else
  {
    v27 = *(_QWORD *)(a2[1] + 856LL);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_2EB430(*a1, a1[1]);
    *a1 = v27;
  }
LABEL_5:
  sub_2EB430(v12, v46);
  sub_25A130((char *)v51);
  return a1;
}

