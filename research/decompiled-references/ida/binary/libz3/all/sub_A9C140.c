void __fastcall sub_A9C140(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rdx
  int *v13; // rbp
  int v14; // r14d
  int v15; // eax
  int v16; // eax
  __int64 v17; // r12
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned int **v21; // rax
  unsigned int *v22; // r12
  unsigned int v23; // ebp
  unsigned int *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  int *v27; // r14
  int v28; // eax
  int v29; // r15d
  unsigned int v30; // r14d
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int *v34; // r14
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  unsigned int v37; // r14d
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  char *v44; // r13
  __int64 v45; // rax
  char *v46; // rbp
  void *v47; // r14
  char *v48; // rsi
  unsigned int v49; // r13d
  __int64 v50; // rsi
  __int64 v51; // rdx
  unsigned int *v52; // rdi
  char **exception; // r12
  __int64 *v54; // [rsp+8h] [rbp-C0h]
  __int64 *v55; // [rsp+10h] [rbp-B8h]
  unsigned int *v57; // [rsp+30h] [rbp-98h]
  unsigned int v58; // [rsp+40h] [rbp-88h]
  unsigned int v59; // [rsp+44h] [rbp-84h]
  unsigned int v60; // [rsp+48h] [rbp-80h]
  unsigned int v61[4]; // [rsp+4Ch] [rbp-7Ch] BYREF
  unsigned int v62; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned int v63; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v66; // [rsp+6Ch] [rbp-5Ch] BYREF
  char *v67; // [rsp+70h] [rbp-58h] BYREF
  void *ptr; // [rsp+78h] [rbp-50h]
  __int64 v69; // [rsp+80h] [rbp-48h]
  int v70; // [rsp+88h] [rbp-40h]

  v2 = a2 >> 5;
  v4 = *(unsigned int **)a1;
  v61[0] = a2;
  if ( !v4 )
  {
    v6 = v2 + 1;
    v43 = (_QWORD *)sub_186B270(0x10u);
    v4 = (unsigned int *)(v43 + 1);
    *v43 = 2;
    v5 = 0;
    *(_QWORD *)a1 = v43 + 1;
    goto LABEL_7;
  }
  v5 = *(v4 - 1);
  if ( (unsigned int)v2 >= (unsigned int)v5 )
  {
    v6 = v2 + 1;
LABEL_7:
    while ( 1 )
    {
      v10 = *(v4 - 2);
      if ( v10 >= v6 )
        break;
      v7 = (3 * v10 + 1) >> 1;
      v8 = 4 * v7 + 8;
      if ( 4 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(&v67);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v67);
        sub_233E40((__int64)&v67);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = (unsigned int *)sub_186B300(v4 - 2, v8);
      v4 = v9 + 2;
      *v9 = v7;
      *(_QWORD *)a1 = v9 + 2;
    }
    v11 = 4 * v5;
    *(v4 - 1) = v6;
    v12 = 4LL * v6;
    v13 = (int *)&v4[v2];
    v14 = 1 << a2;
    if ( v11 != v12 )
      memset(&v4[(unsigned __int64)v11 / 4], 0, v12 - v11);
    v15 = *v13;
    goto LABEL_11;
  }
  v13 = (int *)&v4[v2];
  v15 = *v13;
  v14 = 1 << a2;
  if ( ((1 << a2) & *v13) != 0 )
    goto LABEL_32;
LABEL_11:
  *v13 = v14 | v15;
  v16 = sub_A7C8C0(a1, a2, &v62, &v63, &v64);
  if ( (unsigned int)(v16 - 1) > 1 )
    goto LABEL_32;
  if ( v16 == 1 )
  {
    sub_A9BE70(a1, a2, v62);
    goto LABEL_32;
  }
  if ( !v64 )
  {
LABEL_32:
    sub_83EA80((__int64 *)(a1 + 96));
    sub_83EA80((__int64 *)(a1 + 120));
    return;
  }
  if ( v64 == 1 )
  {
    v54 = (__int64 *)(a1 + 96);
    v17 = a1 + 96;
    v55 = (__int64 *)(a1 + 120);
  }
  else
  {
    v55 = (__int64 *)(a1 + 120);
    v17 = a1 + 120;
    v54 = (__int64 *)(a1 + 96);
  }
  v18 = v62;
  v19 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL));
  sub_83DB40(v17, (int *)(*(_QWORD *)(v19 + 48) + ((unsigned __int64)v18 << 6)), (int *)v61);
  v20 = v63;
  v21 = (unsigned int **)(*(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 280) + 24 * v20);
  v22 = *v21;
  v57 = v21[1];
  if ( v57 != *v21 )
  {
    do
    {
      v23 = *v22;
      v65 = v23;
      if ( a2 != v23 )
      {
        v24 = *(unsigned int **)a1;
        v25 = v23 >> 5;
        if ( !*(_QWORD *)a1 )
        {
          v49 = v25 + 1;
          v26 = 0;
LABEL_44:
          while ( !v24 || *(v24 - 2) < v49 )
          {
            sub_2FD3F0((unsigned int **)a1);
            v24 = *(unsigned int **)a1;
          }
          *(v24 - 1) = v49;
          v27 = (int *)&v24[v25];
          v50 = 4 * v26;
          v51 = 4LL * v49;
          v52 = &v24[v26];
          v29 = 1 << v23;
          if ( v50 != v51 )
            memset(v52, 0, v51 - v50);
          v28 = *v27;
LABEL_21:
          *v27 = v28 | v29;
          if ( (unsigned int)sub_A7C8C0(a1, v23, &v62, &v66, &v64) == 2 && v64 )
          {
            v30 = v62;
            v31 = (__int64)v54;
            if ( v64 != 1 )
              v31 = (__int64)v55;
            v59 = v62;
            v32 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL));
            v33 = (unsigned __int64)v30 << 6;
            v34 = (int *)(v33 + *(_QWORD *)(v32 + 48));
            v35 = v33;
            v36 = sub_83D5F0(v31, (__int64)v34);
            if ( v36 )
            {
              v37 = *(_DWORD *)(v36 + 40);
              v67 = nullptr;
              v60 = v37;
              v38 = (_QWORD *)sub_186B270(0x60u);
              *v38 = 0;
              *(_QWORD *)((char *)v38 + 12) = 0;
              v38[3] = 0;
              *(_QWORD *)((char *)v38 + 36) = 0;
              v38[6] = 0;
              *(_QWORD *)((char *)v38 + 60) = 0;
              v38[9] = 0;
              *(_QWORD *)((char *)v38 + 84) = 0;
              ptr = v38;
              v39 = *(_QWORD *)(a1 + 56);
              v69 = 8;
              v40 = *(_QWORD *)(v39 + 504);
              v70 = 0;
              v58 = sub_FF9D30(v40, v37);
              LOBYTE(v37) = sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v59);
              if ( (_BYTE)v37 == (unsigned __int8)sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v58)
                && (v41 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 48)
                        + ((unsigned __int64)v58 << 6),
                    v42 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)),
                    sub_3ED680((__int64)qword_1C7F2C0, *(_QWORD *)(v42 + 48) + v35 + 32, v41 + 32)) )
              {
                sub_A7C770(a1, v60, (__int64)&v67);
                sub_A7C770(a1, v23, (__int64)&v67);
                sub_A9B8D0(a1, (__int64)&v67, v59, v58, 0);
                sub_83B4F0((__int64 *)&v67);
              }
              else
              {
                if ( ptr )
                  sub_186B220(ptr);
                v44 = v67;
                if ( v67 )
                {
                  v45 = *((unsigned int *)v67 - 1);
                  if ( (_DWORD)v45 )
                  {
                    v46 = &v67[40 * v45];
                    do
                    {
                      v47 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v44 + 8);
                      v48 = v44 + 24;
                      v44 += 40;
                      sub_182CBA0(v47, v48);
                    }
                    while ( v44 != v46 );
                    v44 = v67;
                  }
                  sub_186B220(v44 - 8);
                }
              }
            }
            else
            {
              sub_83DB40(v31, v34, (int *)&v65);
            }
          }
          goto LABEL_29;
        }
        v26 = *(v24 - 1);
        if ( (unsigned int)v25 >= (unsigned int)v26 )
        {
          v49 = v25 + 1;
          goto LABEL_44;
        }
        v27 = (int *)&v24[v25];
        v28 = *v27;
        v29 = 1 << v23;
        if ( ((1 << v23) & *v27) == 0 )
          goto LABEL_21;
      }
LABEL_29:
      v22 += 3;
    }
    while ( v57 != v22 );
  }
  sub_83EA80(v54);
  sub_83EA80(v55);
}

