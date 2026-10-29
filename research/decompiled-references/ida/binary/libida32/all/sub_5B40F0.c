__int64 __fastcall sub_5B40F0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        double a5,
        double a6,
        double a7)
{
  __int64 *v8; // rbp
  unsigned int *v11; // rax
  unsigned int *v12; // r15
  unsigned int v14; // eax
  char *v15; // r8
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  char *v19; // r12
  unsigned int v20; // r13d
  __int64 *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int *v27; // r14
  int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // esi
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  unsigned int *v35; // rax
  char v36; // al
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // edi
  char *v41; // r13
  unsigned int *v42; // rcx
  char *v43; // rax
  int v44; // r9d
  char *v45; // r10
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // [rsp+0h] [rbp-C8h]
  int v52[2]; // [rsp+8h] [rbp-C0h]
  unsigned int *v53; // [rsp+8h] [rbp-C0h]
  unsigned int v54[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+18h] [rbp-B0h]
  int v56; // [rsp+20h] [rbp-A8h]
  int v57; // [rsp+24h] [rbp-A4h]
  void *v58; // [rsp+28h] [rbp-A0h]
  __int64 v59; // [rsp+30h] [rbp-98h]
  int v60; // [rsp+38h] [rbp-90h]
  __int64 v61; // [rsp+40h] [rbp-88h]
  void *v62; // [rsp+48h] [rbp-80h]
  __int64 v63; // [rsp+50h] [rbp-78h]
  int v64; // [rsp+58h] [rbp-70h]
  __int64 v65; // [rsp+60h] [rbp-68h]
  int v66; // [rsp+68h] [rbp-60h]
  __int64 v67; // [rsp+70h] [rbp-58h]
  int v68; // [rsp+78h] [rbp-50h]
  __int64 v69; // [rsp+80h] [rbp-48h]
  unsigned __int64 v70; // [rsp+88h] [rbp-40h]

  v8 = a1;
  v70 = __readfsqword(0x28u);
  lock_func_range(a2, 1);
  if ( !a2 || *(char *)(a2 + 9) < 0 )
    goto LABEL_5;
  v11 = sub_4EE820((__int64)(a1 + 203), a3);
  v12 = v11;
  if ( !v11 )
  {
    if ( a4 != -1 )
    {
LABEL_31:
      v53 = sub_4EE820((__int64)(a1 + 194), a3);
      v35 = sub_4EE820((__int64)(a1 + 194), a4 - 1);
      if ( v53
        && v53 == v35
        && !(unsigned __int8)is_spec_ea(a3)
        && (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) != 0x200
        && (sub_3B9AA0((__int64)a1, a4, 4) & 0x600) != 0x200 )
      {
        if ( (get_merge_state(a1, a4) & 2) == 0 )
        {
          if ( sub_5B0E70((__int64)a1, (_DWORD *)a2, a3) )
          {
            LODWORD(v8) = sub_5B2CC0(a1, a3 - 1, a4, a5, a6, a7);
            goto LABEL_6;
          }
          if ( sub_5AE770(a1, a2, a4) )
          {
            if ( (unsigned __int8)sub_5B0DC0(a4, (_DWORD *)a2) )
            {
              if ( a3 == a4 || (v53 = sub_4EE820((__int64)(a1 + 194), a3), v53 == sub_4EE820((__int64)(a1 + 194), a4)) )
              {
                LOBYTE(v8) = (unsigned int)sub_5B3800(
                                             (int)a1,
                                             a4,
                                             a3,
                                             v51,
                                             (int)v53,
                                             v54[0],
                                             v55,
                                             v56,
                                             v58,
                                             v59,
                                             v60,
                                             v61,
                                             v62,
                                             v63,
                                             v64,
                                             v65) == 0;
                goto LABEL_6;
              }
            }
          }
        }
        v57 = 0;
        v60 = 0;
        v59 = 0xFFFFFFFF00000000LL;
        v49 = *(_QWORD *)(a2 + 8);
        v61 = 0;
        v50 = v49 & 0x40;
        LODWORD(v62) = 0;
        BYTE1(v50) |= 0x80u;
        v54[0] = a3;
        v55 = v50;
        LODWORD(v50) = *(_DWORD *)a2;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v54[1] = a4;
        v56 = v50;
        v58 = nullptr;
        if ( (unsigned __int8)sub_4EE3F0((__int64)(a1 + 203), v54, a5, a6) )
        {
          v12 = sub_4EE820((__int64)(a1 + 203), a3);
          goto LABEL_10;
        }
      }
LABEL_5:
      LODWORD(v8) = 0;
      goto LABEL_6;
    }
LABEL_40:
    a4 = sub_5B01A0(a1, a3, a2, 0);
    if ( a4 == -1 )
      goto LABEL_5;
    if ( v12 )
      goto LABEL_10;
    goto LABEL_31;
  }
  if ( *v11 != a3 || *((char *)v11 + 9) >= 0 )
    goto LABEL_5;
  v14 = v11[1];
  if ( a4 == -1 )
  {
    if ( v14 != -1 )
      goto LABEL_10;
    goto LABEL_40;
  }
  if ( a4 != v14 )
    goto LABEL_5;
LABEL_10:
  if ( !*(_DWORD *)(a2 + 104) )
  {
    v15 = *(char **)(a2 + 112);
    v16 = 8;
    v17 = 0;
    goto LABEL_12;
  }
  v36 = sub_5ACDD0(a1, a2, 1);
  v15 = *(char **)(a2 + 112);
  v37 = *(_DWORD *)(a2 + 104);
  if ( !v36 )
    goto LABEL_58;
  v38 = 8LL * v37;
  v19 = &v15[v38];
  v39 = v38 >> 3;
  if ( v38 > 0 )
  {
    v40 = *v12;
    v41 = *(char **)(a2 + 112);
    do
    {
      v42 = (unsigned int *)&v41[8 * (v39 >> 1)];
      if ( v40 < *v42 || *v42 == v40 && v42[1] >= v12[1] )
      {
        v39 >>= 1;
      }
      else
      {
        v41 = (char *)(v42 + 2);
        v39 = v39 - 1 - (v39 >> 1);
      }
    }
    while ( v39 > 0 );
    if ( v41 == v19 || (v19 = v41, v40 != *(_DWORD *)v41) || *((_DWORD *)v41 + 1) != v12[1] )
    {
      v48 = v41 - v15;
      if ( v48 != -8 )
      {
        v17 = v48 >> 3;
        goto LABEL_59;
      }
    }
    goto LABEL_14;
  }
  if ( v19 == v15 )
  {
LABEL_58:
    v17 = 0;
    goto LABEL_59;
  }
  v17 = 0;
  if ( *v12 != *(_DWORD *)v15 || (v19 = *(char **)(a2 + 112), *((_DWORD *)v15 + 1) != v12[1]) )
  {
LABEL_59:
    v47 = v37 + 1;
    v16 = 8 * v47;
    if ( 8 * v47 < v47 )
    {
      *(_QWORD *)(a2 + 112) = 0;
      goto LABEL_61;
    }
LABEL_12:
    v18 = qrealloc(v15);
    *(_QWORD *)(a2 + 112) = v18;
    if ( v18 )
    {
      v19 = (char *)(v18 + 8 * v17);
      memmove(v19 + 8, v19, 8 * (*(int *)(a2 + 104) - v17));
      *(_QWORD *)v19 = *(_QWORD *)v12;
      ++*(_DWORD *)(a2 + 104);
      sub_5AD0D0(v8, a2, 1);
      goto LABEL_14;
    }
LABEL_61:
    sub_3B74D0((int)"append_func_tail:tails", v16);
  }
LABEL_14:
  v20 = *(_DWORD *)a2;
  if ( !v12[5] )
  {
    v21 = *((__int64 **)v12 + 3);
    v22 = 4;
    v23 = 0;
    goto LABEL_16;
  }
  sub_5AD260(v8, (__int64)v12);
  v21 = *((__int64 **)v12 + 3);
  v29 = (__int64)v21 + 4 * (int)v12[5];
  v43 = (char *)sub_5AA140(v21, v29, v20);
  v26 = v43 - (char *)v21;
  if ( (v45 == v43 || v20 != *(_DWORD *)v43) && v26 != -4 )
  {
    v46 = v44 + 1;
    v22 = 4 * v46;
    if ( 4 * v46 < v46 )
    {
      *((_QWORD *)v12 + 3) = 0;
      goto LABEL_57;
    }
    v23 = v26 >> 2;
LABEL_16:
    *(_QWORD *)v52 = v23;
    v24 = qrealloc(v21);
    *((_QWORD *)v12 + 3) = v24;
    v26 = *(_QWORD *)v52;
    if ( v24 )
    {
      v27 = (unsigned int *)(v24 + 4LL * *(_QWORD *)v52);
      memmove(v27 + 1, v27, 4 * ((int)v12[5] - *(_QWORD *)v52));
      *v27 = v20;
      v28 = v12[5] + 1;
      v12[5] = v28;
      if ( v28 >= (unsigned __int64)v8[60] )
      {
        *((_QWORD *)v12 + 1) |= 0x40uLL;
        sub_5ACD60((__int64)v8, v12, 0);
      }
      v29 = (__int64)v12;
      v21 = v8;
      sub_5ADA10(v8, (__int64)v12, 1);
      goto LABEL_20;
    }
LABEL_57:
    sub_3B74D0((int)"append_func_tail:referers", v22, v25, v26);
  }
LABEL_20:
  if ( (get_merge_state(v21, v29) & 2) == 0
    && (unsigned __int64)(v19 + 8) < *(_QWORD *)(a2 + 112) + 8LL * *(int *)(a2 + 104) )
  {
    v30 = *((_DWORD *)v19 + 2);
    v31 = *(_DWORD *)v19;
    v32 = *(_DWORD *)a2;
    if ( v30 <= *(_DWORD *)a2 )
      v32 = *((_DWORD *)v19 + 2);
    if ( v31 < *(_DWORD *)a2 )
      v30 = v32;
    sub_5A0A10(v8, a2, v30, v31);
  }
  v33 = v12[1];
  v34 = *v12;
  auto_mark_range(*v12, v33, 38);
  auto_mark_range(v34, v33, 40);
  if ( qword_2CA1648 )
    qword_2CA1648(*v12, v12[1] - *v12);
  sub_396090(0x27u, a2, v12);
  *(_QWORD *)(a2 + 8) &= ~0x80uLL;
  sub_5B2A40(v8, (unsigned int *)a2, 0);
  LODWORD(v8) = 1;
LABEL_6:
  lock_func_range(a2, 0);
  return (unsigned int)v8;
}

