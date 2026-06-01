void __fastcall sub_83ECC0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int *v4; // rax
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // r13
  __int64 v8; // rdx
  int *v9; // rbp
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  __int64 v13; // r12
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned int **v17; // rax
  unsigned int *v18; // r12
  unsigned int v19; // ebp
  unsigned int *v20; // rax
  __int64 v21; // r14
  __int64 v22; // r15
  int *v23; // r14
  int v24; // eax
  int v25; // r15d
  unsigned int v26; // r15d
  __int64 v27; // r13
  int *v28; // r14
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  unsigned int v31; // r14d
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r13d
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int *v41; // rdi
  __int64 v42; // rbp
  unsigned int v43; // r12d
  __int64 v44; // r13
  char v45; // r14
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ebp
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r14
  void *v56; // r12
  __int64 v57; // rsi
  __int64 *v58; // [rsp+8h] [rbp-C0h]
  __int64 *v59; // [rsp+10h] [rbp-B8h]
  unsigned int *v61; // [rsp+30h] [rbp-98h]
  unsigned int v62; // [rsp+40h] [rbp-88h]
  unsigned int v63; // [rsp+44h] [rbp-84h]
  unsigned int v64; // [rsp+48h] [rbp-80h]
  unsigned int v65[4]; // [rsp+4Ch] [rbp-7Ch] BYREF
  unsigned int v66; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned int v67; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v69; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v70; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v71; // [rsp+70h] [rbp-58h] BYREF
  void *ptr; // [rsp+78h] [rbp-50h]
  __int64 v73; // [rsp+80h] [rbp-48h]
  int v74; // [rsp+88h] [rbp-40h]

  v2 = a2 >> 5;
  v4 = *(unsigned int **)a1;
  v65[0] = a2;
  if ( !v4 )
  {
    v6 = v2 + 1;
    v5 = 0;
LABEL_5:
    while ( !v4 || *(v4 - 2) < v6 )
    {
      sub_2FD3F0((unsigned int **)a1);
      v4 = *(unsigned int **)a1;
    }
    v7 = 4 * v5;
    *(v4 - 1) = v6;
    v8 = 4LL * v6;
    v9 = (int *)&v4[v2];
    v10 = 1 << a2;
    if ( v7 != v8 )
      memset(&v4[(unsigned __int64)v7 / 4], 0, v8 - v7);
    v11 = *v9;
    goto LABEL_10;
  }
  v5 = *(v4 - 1);
  if ( (unsigned int)v2 >= (unsigned int)v5 )
  {
    v6 = v2 + 1;
    goto LABEL_5;
  }
  v9 = (int *)&v4[v2];
  v11 = *v9;
  v10 = 1 << a2;
  if ( ((1 << a2) & *v9) != 0 )
    goto LABEL_33;
LABEL_10:
  *v9 = v11 | v10;
  v12 = sub_83D9B0(a1, a2, &v66, &v67, &v68);
  if ( (unsigned int)(v12 - 1) > 1 )
    goto LABEL_33;
  if ( v12 == 1 )
  {
    v42 = v66;
    v43 = v66;
    if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4LL * v66) != 4
      || *(_DWORD *)(sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v66) + 32) )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL);
      v45 = sub_FFADC0(v44, v43);
      v46 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL)) + 48) + (v42 << 6);
      if ( v45 )
        v47 = sub_FF9B90(v44);
      else
        v47 = sub_FF9BA0(v44);
      v48 = sub_83D5F0(v47, v46);
      if ( v48 )
      {
        v49 = *(_DWORD *)(v48 + 40);
        v71 = 0;
        v50 = (_QWORD *)sub_186B270(0x60u);
        *v50 = 0;
        *(_QWORD *)((char *)v50 + 12) = 0;
        v50[3] = 0;
        *(_QWORD *)((char *)v50 + 36) = 0;
        v50[6] = 0;
        *(_QWORD *)((char *)v50 + 60) = 0;
        v50[9] = 0;
        *(_QWORD *)((char *)v50 + 84) = 0;
        ptr = v50;
        v73 = 8;
        v74 = 0;
        sub_83E250(a1, a2, (__int64)&v71);
        sub_10054D0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v49, &v71);
        if ( (unsigned __int8)sub_82F0A0(*(_QWORD *)(a1 + 56), v49, v43, (__int64)&v71, 1) )
        {
          v51 = sub_FF9A30(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
          ++*(_DWORD *)(v51 + 120);
        }
        if ( ptr )
          sub_186B220(ptr);
        v52 = v71;
        v53 = v71;
        if ( v71 )
        {
          v54 = *(unsigned int *)(v71 - 4);
          if ( (_DWORD)v54 )
          {
            v55 = v71 + 40 * v54;
            do
            {
              v56 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v52 + 8);
              v57 = v52 + 24;
              v52 += 40;
              sub_182CBA0(v56, v57);
            }
            while ( v52 != v55 );
            v53 = v71;
          }
          sub_186B220((void *)(v53 - 8));
        }
      }
      else
      {
        sub_83E6A0(a1, a2);
      }
    }
    goto LABEL_33;
  }
  if ( !v68 )
  {
LABEL_33:
    sub_83EA80((__int64 *)(a1 + 96));
    sub_83EA80((__int64 *)(a1 + 120));
    return;
  }
  if ( v68 == 1 )
  {
    v58 = (__int64 *)(a1 + 96);
    v13 = a1 + 96;
    v59 = (__int64 *)(a1 + 120);
  }
  else
  {
    v59 = (__int64 *)(a1 + 120);
    v13 = a1 + 120;
    v58 = (__int64 *)(a1 + 96);
  }
  v14 = v66;
  v15 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
  sub_83DB40(v13, (int *)(*(_QWORD *)(v15 + 48) + ((unsigned __int64)v14 << 6)), (int *)v65);
  v16 = v67;
  v17 = (unsigned int **)(*(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL)) + 280) + 24 * v16);
  v18 = *v17;
  v61 = v17[1];
  if ( v61 != *v17 )
  {
    do
    {
      v19 = *v18;
      v69 = v19;
      if ( a2 != v19 )
      {
        v20 = *(unsigned int **)a1;
        v21 = v19 >> 5;
        if ( !*(_QWORD *)a1 )
        {
          v38 = v21 + 1;
          v22 = 0;
LABEL_36:
          while ( !v20 || *(v20 - 2) < v38 )
          {
            sub_2FD3F0((unsigned int **)a1);
            v20 = *(unsigned int **)a1;
          }
          *(v20 - 1) = v38;
          v23 = (int *)&v20[v21];
          v39 = 4 * v22;
          v40 = 4LL * v38;
          v41 = &v20[v22];
          v25 = 1 << v19;
          if ( v39 != v40 )
            memset(v41, 0, v40 - v39);
          v24 = *v23;
LABEL_20:
          *v23 = v24 | v25;
          if ( (unsigned int)sub_83D9B0(a1, v19, &v66, &v70, &v68) == 2 && v68 )
          {
            v26 = v66;
            v27 = (__int64)v58;
            if ( v68 != 1 )
              v27 = (__int64)v59;
            v63 = v66;
            v28 = (int *)(((unsigned __int64)v26 << 6)
                        + *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL)) + 48));
            v29 = (unsigned __int64)v26 << 6;
            v30 = sub_83D5F0(v27, (__int64)v28);
            if ( v30 )
            {
              v31 = *(_DWORD *)(v30 + 40);
              v71 = 0;
              v64 = v31;
              v32 = (_QWORD *)sub_186B270(0x60u);
              *v32 = 0;
              *(_QWORD *)((char *)v32 + 12) = 0;
              v32[3] = 0;
              *(_QWORD *)((char *)v32 + 36) = 0;
              v32[6] = 0;
              *(_QWORD *)((char *)v32 + 60) = 0;
              v32[9] = 0;
              *(_QWORD *)((char *)v32 + 84) = 0;
              ptr = v32;
              v33 = *(_QWORD *)(a1 + 56);
              v73 = 8;
              v34 = *(_QWORD *)(v33 + 496);
              v74 = 0;
              v62 = sub_FF9D30(v34, v31);
              LOBYTE(v31) = sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v63);
              if ( (_BYTE)v31 == (unsigned __int8)sub_FFADC0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL), v62) )
              {
                v35 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL)) + 48)
                    + ((unsigned __int64)v62 << 6);
                v36 = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
                if ( sub_3ED680((__int64)qword_1C7F2C0, *(_QWORD *)(v36 + 48) + v29 + 32, v35 + 32) )
                {
                  sub_83E250(a1, v64, (__int64)&v71);
                  sub_83E250(a1, v19, (__int64)&v71);
                  if ( (unsigned __int8)sub_82F0A0(*(_QWORD *)(a1 + 56), v63, v62, (__int64)&v71, 0) )
                  {
                    v37 = sub_FF9A30(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
                    ++*(_DWORD *)(v37 + 116);
                  }
                }
              }
              sub_83B4F0(&v71);
            }
            else
            {
              sub_83DB40(v27, v28, (int *)&v69);
            }
          }
          goto LABEL_30;
        }
        v22 = *(v20 - 1);
        if ( (unsigned int)v21 >= (unsigned int)v22 )
        {
          v38 = v21 + 1;
          goto LABEL_36;
        }
        v23 = (int *)&v20[v21];
        v24 = *v23;
        v25 = 1 << v19;
        if ( ((1 << v19) & *v23) == 0 )
          goto LABEL_20;
      }
LABEL_30:
      v18 += 3;
    }
    while ( v61 != v18 );
  }
  sub_83EA80(v58);
  sub_83EA80(v59);
}

