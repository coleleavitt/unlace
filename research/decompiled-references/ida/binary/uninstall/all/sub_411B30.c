__int64 __fastcall sub_411B30(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int8 *v10; // rdx
  int v11; // eax
  int v12; // r12d
  int v13; // edx
  __int64 *v14; // r13
  int v15; // r12d
  int v16; // eax
  __int64 v17; // rdi
  const char *v18; // rbp
  char *v19; // rbx
  char v20; // al
  unsigned int v21; // ebp
  int v22; // ebx
  int v23; // r12d
  __int64 v24; // rsi
  int v25; // edx
  __int64 *v26; // rcx
  int v28; // edx
  __int64 v29; // rbx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  int v43; // [rsp+8h] [rbp-50h]
  int v44; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v45; // [rsp+10h] [rbp-48h] BYREF
  int v46; // [rsp+1Ch] [rbp-3Ch] BYREF
  __int64 *v47; // [rsp+20h] [rbp-38h] BYREF

  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "string ?in? patList body ... ?default body?");
    return 1;
  }
  v7 = *(_QWORD *)(a4 + 8);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    v8 = sub_47B3B0(v7);
  v9 = *(_QWORD *)(a4 + 16);
  v43 = -1;
  v10 = *(unsigned __int8 **)(v9 + 8);
  if ( !v10 )
    v10 = (unsigned __int8 *)sub_47B3B0(v9);
  v11 = *v10 - 105;
  if ( *v10 != 105 || (v11 = v10[1] - 110, v10[1] != 110) )
  {
    v12 = 3 - (v11 != 0);
    v13 = a3 - v12;
    v46 = a3 - v12;
    v14 = (__int64 *)(a4 + 8LL * v12);
    if ( a3 - v12 == 1 )
      goto LABEL_26;
LABEL_8:
    v15 = 0;
    v16 = v13;
    if ( v13 > 0 )
      goto LABEL_9;
    return 0;
  }
  v23 = 3 - (v10[2] != 0);
  v13 = a3 - v23;
  v46 = a3 - v23;
  v14 = (__int64 *)(a4 + 8LL * v23);
  if ( a3 - v23 != 1 )
    goto LABEL_8;
LABEL_26:
  v24 = *v14;
  if ( *(_UNKNOWN ***)(*v14 + 24) == &off_655E20 )
  {
    v33 = *(_QWORD *)(v24 + 32);
    v25 = *(_DWORD *)(v33 + 8);
    v26 = (__int64 *)(v33 + 16);
    v47 = (__int64 *)(v33 + 16);
    v46 = v25;
  }
  else
  {
    sub_46FD90(a2, v24, &v46, &v47);
    v25 = v46;
    v26 = v47;
  }
  v15 = 0;
  v14 = v26;
  v16 = v25;
  if ( v25 <= 0 )
    return 0;
  while ( 1 )
  {
LABEL_9:
    if ( v16 - 1 == v15 )
    {
      sub_48B350(a2);
      sub_48B710(a2, (unsigned int)"extra case pattern with no body", 0, v40, v41, v42);
      return 1;
    }
    v17 = v14[v15];
    v18 = *(const char **)(v17 + 8);
    if ( !v18 )
      v18 = (const char *)sub_47B3B0(v17);
    v19 = (char *)v18;
    if ( *v18 )
    {
      if ( (unsigned int)sub_47D8A0((unsigned int)*v18) )
      {
LABEL_17:
        if ( *v19 )
          goto LABEL_18;
        goto LABEL_32;
      }
      while ( 1 )
      {
        v20 = *v19;
        if ( *v19 == 92 )
          break;
        if ( !*++v19 )
          goto LABEL_32;
        if ( (unsigned int)sub_47D8A0((unsigned int)*v19) )
          goto LABEL_17;
      }
    }
    else
    {
      v20 = *v18;
    }
    if ( v20 )
    {
LABEL_18:
      v21 = sub_49D570(a2, v18, &v44, &v45);
      if ( v21 )
        return v21;
      v22 = 0;
      if ( v44 > 0 )
      {
        while ( !(unsigned int)sub_49EAC0(v8, *(_QWORD *)(v45 + 8LL * v22)) )
        {
          if ( ++v22 >= v44 )
            goto LABEL_22;
        }
        v43 = v15 + 1;
      }
LABEL_22:
      Tcl_Free(v45);
      if ( v22 < v44 )
        goto LABEL_40;
      goto LABEL_34;
    }
LABEL_32:
    if ( *v18 == 100 )
      break;
    if ( (unsigned int)sub_49EAC0(v8, v18) )
      goto LABEL_39;
LABEL_34:
    v16 = v46;
    v15 += 2;
    if ( v15 >= v46 )
      goto LABEL_40;
  }
  v28 = v15 + 1;
  if ( strcmp(v18, "default") )
    v28 = v43;
  v43 = v28;
  if ( !(unsigned int)sub_49EAC0(v8, v18) )
    goto LABEL_34;
LABEL_39:
  v43 = v15 + 1;
LABEL_40:
  if ( v43 == -1 )
    return 0;
  v29 = v14[v43 - 1];
  v21 = sub_40BBC0(a2, v14[v43], 0);
  if ( v21 != 1 )
    return v21;
  v34 = *(_QWORD *)(v29 + 8);
  if ( !v34 )
    LODWORD(v34) = sub_47B3B0(v29);
  v35 = sub_48F930((unsigned int)"\n    (\"%.50s\" arm line %d)", v34, *(_DWORD *)(a2 + 16), v30, v31, v32);
  sub_40ABA0(a2, v35, v36, v37, v38, v39);
  return 1;
}

