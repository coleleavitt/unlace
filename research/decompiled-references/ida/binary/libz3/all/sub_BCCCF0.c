__int64 __fastcall sub_BCCCF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // r15
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 result; // rax
  int v16; // r8d
  int v17; // r9d
  unsigned int **v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int *v21; // r13
  unsigned int *v22; // r14
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // r15
  int v32; // r15d
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  __int64 *v35; // r12
  __int64 *v36; // rax
  __int64 *v37; // r12
  __int64 v38; // [rsp+0h] [rbp-D8h]
  int *v39; // [rsp+8h] [rbp-D0h]
  int *v40; // [rsp+8h] [rbp-D0h]
  int *v41; // [rsp+10h] [rbp-C8h]
  unsigned int **ptr; // [rsp+18h] [rbp-C0h]
  int v43[2]; // [rsp+20h] [rbp-B8h]
  int v44[2]; // [rsp+20h] [rbp-B8h]
  __int64 v45; // [rsp+28h] [rbp-B0h]
  int v46[2]; // [rsp+30h] [rbp-A8h]
  int v47[2]; // [rsp+38h] [rbp-A0h]
  int v48; // [rsp+40h] [rbp-98h]
  _BYTE v49[9]; // [rsp+47h] [rbp-91h] BYREF
  int v50[2]; // [rsp+50h] [rbp-88h] BYREF
  int v51[2]; // [rsp+58h] [rbp-80h]
  int v52[2]; // [rsp+60h] [rbp-78h] BYREF
  void *v53; // [rsp+68h] [rbp-70h]
  unsigned int *v54[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v55; // [rsp+80h] [rbp-58h] BYREF
  int v56; // [rsp+90h] [rbp-48h]
  __int64 v57; // [rsp+98h] [rbp-40h]

  v5 = a1 + 4136;
  v9 = *(_QWORD **)(a1 + 4144);
  v38 = a4;
  if ( v9 )
  {
    v10 = &v9[2 * *((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v13 = *v9;
        v14 = *(_QWORD *)(a1 + 4136);
        if ( *v9 )
        {
          v12 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v12 )
          {
            sub_15D7BC0(v14, v13);
            v14 = *(_QWORD *)(a1 + 4136);
          }
        }
        v11 = v9[1];
        if ( v11 )
        {
          v12 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v12 )
            break;
        }
        v9 += 2;
        if ( v9 >= v10 )
          goto LABEL_11;
      }
      sub_15D7BC0(v14, v11);
      v9 += 2;
    }
    while ( v9 < v10 );
LABEL_11:
    v9 = *(_QWORD **)(a1 + 4144);
    if ( v9 )
LABEL_12:
      *((_DWORD *)v9 - 1) = 0;
  }
  v49[0] = 0;
  if ( (unsigned __int8)sub_15781F0((int)a1 + 1224, a2, a3, v5, (int)v49) )
  {
    result = v49[0];
    if ( !v49[0] )
      return result;
    sub_155B6E0(a1 + 1224, a2, a3, v5);
    v18 = *(unsigned int ***)(a1 + 4144);
    if ( v18 )
    {
      v19 = *((unsigned int *)v18 - 1);
      if ( (_DWORD)v19 )
      {
        ptr = &v18[2 * v19];
        while ( 1 )
        {
          v20 = *(_QWORD *)(a1 + 16);
          if ( qword_1C7ED88 != *(_QWORD *)(v20 + 8984) || *(_BYTE *)(v20 + 2416) )
            return 1;
          v21 = *v18;
          v45 = *(_QWORD *)(a1 + 24);
          if ( *v18 )
            ++v21[2];
          v22 = v18[1];
          if ( v22 )
            ++v22[2];
          *(_QWORD *)&v49[1] = 0;
          *(_QWORD *)(a1 + 4224) = v38;
          if ( !(unsigned __int8)sub_1465890(
                                   (int)a1 + 3424,
                                   (_DWORD)v21,
                                   (_DWORD)v22,
                                   (unsigned int)&v49[1],
                                   v16,
                                   v17,
                                   v38,
                                   (char)v39) )
            break;
          *(_QWORD *)v46 = *(_QWORD *)&v49[1];
          if ( *(_QWORD *)&v49[1] )
          {
            *(_QWORD *)v51 = 0;
            *(_QWORD *)v47 = a1 + 240;
            v25 = *(_QWORD *)(a1 + 24);
            v53 = nullptr;
            *(_QWORD *)v50 = v25;
            *(_QWORD *)v52 = v25;
            v26 = *(_QWORD *)(*(_QWORD *)&v49[1] + 8LL);
            if ( !v26
              || (v27 = v26 + 8LL * *(unsigned int *)(v26 - 4), v43[0] = v26 + 8 * *(_DWORD *)(v26 - 4), v26 == v27) )
            {
              v41 = v50;
            }
            else
            {
              v28 = *(_QWORD **)(*(_QWORD *)&v49[1] + 8LL);
              v41 = v50;
              v40 = v52;
              do
                sub_1642120(
                  a1 + 1728,
                  *v28++,
                  (int)v41,
                  v27,
                  v23,
                  v24,
                  v38,
                  (int)v40,
                  (int)v41,
                  ptr,
                  v43[0],
                  v45,
                  v46[0],
                  v47[0],
                  v48,
                  *(int *)&v49[1],
                  v50[0],
                  v51[0],
                  v52[0],
                  v53);
              while ( *(_QWORD **)v43 != v28 );
            }
            v29 = *(_QWORD *)(*(_QWORD *)v46 + 24LL);
            if ( !v29
              || (v30 = v29 + 8LL * *(unsigned int *)(v29 - 4), v44[0] = v29 + 8 * *(_DWORD *)(v29 - 4), v29 == v30) )
            {
              v39 = v52;
            }
            else
            {
              v31 = *(_QWORD **)(*(_QWORD *)v46 + 24LL);
              v39 = v52;
              do
                sub_1642120(
                  a1 + 1728,
                  *v31++,
                  (int)v39,
                  v30,
                  v23,
                  v24,
                  v38,
                  (int)v39,
                  (int)v41,
                  ptr,
                  v44[0],
                  v45,
                  v46[0],
                  v47[0],
                  v48,
                  *(int *)&v49[1],
                  v50[0],
                  v51[0],
                  v52[0],
                  v53);
              while ( *(_QWORD **)v44 != v31 );
            }
            v32 = *(_DWORD *)(a1 + 564);
            *(_DWORD *)(a1 + 564) = v32 + 1;
            sub_BD02A0(v54, v41, v39);
            v56 = v32;
            v57 = v38;
            sub_2334C0((__int64 *)v39);
            sub_2334C0((__int64 *)v41);
            sub_BD1D40(*(_QWORD *)v47, v54);
LABEL_35:
            sub_2334C0(&v55);
            sub_2334C0((__int64 *)v54);
            goto LABEL_43;
          }
LABEL_45:
          v18 += 2;
          sub_BB0560((__int64)v22, v45);
          sub_BB0560((__int64)v21, v45);
          if ( ptr == v18 )
            return 1;
        }
        v33 = *(_DWORD **)(sub_15D1F10(v21) + 24);
        if ( v33 && *(_DWORD *)(a1 + 1720) == *v33 && !v33[1]
          || (v34 = *(_DWORD **)(sub_15D1F10(v21) + 24)) != nullptr && *(_DWORD *)(a1 + 1720) == *v34 && v34[1] == 1 )
        {
          sub_BD0580(v54, a1, v21, v22, v38);
          sub_BD1D40(a1 + 240, v54);
          goto LABEL_35;
        }
        v35 = sub_966570(a1, v22);
        v36 = sub_966570(a1, v21);
        sub_BC4820(a1, v38, v36, v35);
LABEL_43:
        v37 = *(__int64 **)&v49[1];
        if ( *(_QWORD *)&v49[1] )
        {
          sub_2334C0((__int64 *)(*(_QWORD *)&v49[1] + 16LL));
          sub_2334C0(v37);
          sub_186B220(v37);
        }
        goto LABEL_45;
      }
    }
  }
  else
  {
    v54[0] = nullptr;
    sub_BC3460(a1, v38, v54, a5);
  }
  return 1;
}

