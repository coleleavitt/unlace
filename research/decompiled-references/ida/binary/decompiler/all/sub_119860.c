unsigned __int64 __fastcall sub_119860(_QWORD *a1, int a2, __int64 a3, unsigned int a4)
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
  _QWORD *v23; // r12
  int v24; // [rsp+18h] [rbp-60h] BYREF
  int v25; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 9 )
  {
    if ( !under_debugger )
      sub_37EA20(52370);
    goto LABEL_55;
  }
  v5 = *(int **)(a3 + 8);
  v6 = v5[4];
  if ( *(_QWORD *)(*(_QWORD *)v5 + 440LL) < v6 )
    sub_119540(a1);
  v8 = *(_QWORD *)(*(_QWORD *)v5 + 432LL);
  if ( (unsigned __int8)sub_1197C0(&v25, &v24, a1[187], a3, a4) )
  {
    v26 = 0;
    v10 = v8 + 104 * v6;
    v11 = *(_QWORD *)(a3 + 8);
    v12 = *(_DWORD *)(v10 + 88);
    LODWORD(v13) = v8 + 104 * v6;
    v14 = *(_DWORD *)(v11 + 8) + v25 == 0;
    v15 = *(_DWORD *)(v11 + 8) + v25;
    v27 = 0;
    v25 = v15;
    if ( v14 )
    {
      v16 = v24;
      if ( v24 >= v12 )
      {
LABEL_10:
        sub_1C07A0((_DWORD)v13, a2, v16, a1[180], 0, v9);
        cleanup_argloc();
        return v28 - __readfsqword(0x28u);
      }
      if ( (__int64 *)v10 != &v26 )
        copy_argloc();
LABEL_8:
      sub_1BFEA0(&v26, a1[188], (unsigned int)v12, v16);
LABEL_9:
      v13 = &v26;
      goto LABEL_10;
    }
    copy_argloc();
    if ( (unsigned __int8)sub_1C2B60(&v26, a1[188], (unsigned int)v15, *(unsigned int *)(v10 + 88), 1) )
    {
      v16 = v24;
      goto LABEL_24;
    }
    if ( *(_DWORD *)v10 == 2 )
    {
      v23 = *(_QWORD **)(v10 + 8);
      if ( !v23[1] )
      {
        if ( !under_debugger )
          sub_37EA20(52371);
        goto LABEL_55;
      }
      copy_argloc();
      if ( v15 >= 0 )
        v25 = v15 - *(unsigned __int16 *)(*v23 + 24LL * v23[1] - 8);
    }
    if ( (unsigned int)(v26 - 3) <= 1 )
    {
      v20 = (int)v27;
      if ( (_DWORD)v26 == 4 )
        v20 = (unsigned __int16)v27;
      if ( v25 > 0LL )
      {
        v22 = 0x7FFFFFFF;
        if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) == 8 )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v25 > v22 - v20 )
          v24 = v22 - v20 + v24 - v25;
        else
          LODWORD(v22) = v25 + v20;
      }
      else
      {
        v21 = -(__int64)v25;
        if ( v21 > v20 )
          LODWORD(v21) = v20;
        v24 += v21;
        LODWORD(v22) = v20 - v21;
      }
      cleanup_argloc();
      LODWORD(v26) = 3;
      LODWORD(v27) = v22;
      goto LABEL_21;
    }
    if ( (_DWORD)v26 == 1 )
    {
      if ( v25 > 0 )
      {
        v19 = 0x7FFFFFFF;
        if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) == 8 )
          v19 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v25 > v19 - v27 )
          v24 = v19 - v27 + v24 - v25;
        else
          v19 = v25 + v27;
      }
      else
      {
        v18 = -(__int64)v25;
        if ( v18 > v27 )
          v18 = v27;
        v24 += v18;
        v19 = v27 - v18;
      }
      cleanup_argloc();
      LODWORD(v26) = 1;
      v27 = v19;
LABEL_21:
      v16 = v24;
      if ( !v24 )
      {
        cleanup_argloc();
        return v28 - __readfsqword(0x28u);
      }
      v15 = v25;
LABEL_24:
      v12 -= v15;
      if ( v12 <= (int)v16 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_37EA20(52372);
LABEL_55:
    BUG();
  }
  return v28 - __readfsqword(0x28u);
}
