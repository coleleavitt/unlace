unsigned __int64 __fastcall sub_11B6E0(_QWORD *a1, int a2, __int64 a3, unsigned int a4)
{
  int *v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v8; // r14
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // rax
  signed int v12; // r13d
  __int64 *v13; // rdi
  bool v14; // zf
  int v15; // ebx
  unsigned int v16; // r12d
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  int v27; // [rsp+18h] [rbp-60h] BYREF
  int v28; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 9 )
  {
    if ( !under_debugger )
      sub_3835A0(52370);
    goto LABEL_55;
  }
  v5 = *(int **)(a3 + 8);
  v6 = v5[4];
  if ( *(_QWORD *)(*(_QWORD *)v5 + 440LL) < v6 )
    sub_11B3C0(a1);
  v8 = *(_QWORD *)(*(_QWORD *)v5 + 432LL);
  if ( (unsigned __int8)sub_11B640(&v28, &v27, a1[187], a3, a4) )
  {
    v29 = 0;
    v10 = v8 + 104 * v6;
    v11 = *(_QWORD *)(a3 + 8);
    v12 = *(_DWORD *)(v10 + 88);
    LODWORD(v13) = v8 + 104 * v6;
    v14 = *(_DWORD *)(v11 + 8) + v28 == 0;
    v15 = *(_DWORD *)(v11 + 8) + v28;
    v30 = 0;
    v28 = v15;
    if ( v14 )
    {
      v16 = v27;
      if ( v27 >= v12 )
      {
LABEL_10:
        sub_1C2BF0((_DWORD)v13, a2, v16, a1[180], 0, v9);
        cleanup_argloc(&v29);
        return v31 - __readfsqword(0x28u);
      }
      if ( (__int64 *)v10 != &v29 )
        copy_argloc(&v29, v10);
LABEL_8:
      sub_1C22E0(&v29, a1[188], (unsigned int)v12, v16);
LABEL_9:
      v13 = &v29;
      goto LABEL_10;
    }
    copy_argloc(&v29, v10);
    if ( (unsigned __int8)sub_1C5020(&v29, a1[188], (unsigned int)v15, *(unsigned int *)(v10 + 88), 1) )
    {
      v16 = v27;
      goto LABEL_24;
    }
    if ( *(_DWORD *)v10 == 2 )
    {
      v23 = *(__int64 **)(v10 + 8);
      v24 = v23[1];
      if ( !v24 )
      {
        if ( !under_debugger )
          sub_3835A0(52371);
        goto LABEL_55;
      }
      v25 = *v23;
      if ( v15 < 0 )
      {
        copy_argloc(&v29, v25);
      }
      else
      {
        copy_argloc(&v29, v25 + 24 * v24 - 24);
        v28 = v15 - *(unsigned __int16 *)(*v23 + 24 * v23[1] - 8);
      }
    }
    if ( (unsigned int)(v29 - 3) <= 1 )
    {
      v20 = (int)v30;
      if ( (_DWORD)v29 == 4 )
        v20 = (unsigned __int16)v30;
      if ( v28 > 0LL )
      {
        v22 = 0x7FFFFFFF;
        if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) == 8 )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v28 > v22 - v20 )
          v27 = v22 - v20 + v27 - v28;
        else
          LODWORD(v22) = v28 + v20;
      }
      else
      {
        v21 = -(__int64)v28;
        if ( v21 > v20 )
          LODWORD(v21) = v20;
        v27 += v21;
        LODWORD(v22) = v20 - v21;
      }
      cleanup_argloc(&v29);
      LODWORD(v29) = 3;
      LODWORD(v30) = v22;
      goto LABEL_21;
    }
    if ( (_DWORD)v29 == 1 )
    {
      if ( v28 > 0 )
      {
        v19 = 0x7FFFFFFF;
        if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) == 8 )
          v19 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v28 > v19 - v30 )
          v27 = v19 - v30 + v27 - v28;
        else
          v19 = v28 + v30;
      }
      else
      {
        v18 = -(__int64)v28;
        if ( v18 > v30 )
          v18 = v30;
        v27 += v18;
        v19 = v30 - v18;
      }
      cleanup_argloc(&v29);
      LODWORD(v29) = 1;
      v30 = v19;
LABEL_21:
      v16 = v27;
      if ( !v27 )
      {
        cleanup_argloc(&v29);
        return v31 - __readfsqword(0x28u);
      }
      v15 = v28;
LABEL_24:
      v12 -= v15;
      if ( v12 <= (int)v16 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_3835A0(52372);
LABEL_55:
    BUG();
  }
  return v31 - __readfsqword(0x28u);
}
