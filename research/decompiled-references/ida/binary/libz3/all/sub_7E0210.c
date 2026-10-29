unsigned int *__fastcall sub_7E0210(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int *result; // rax
  __int64 v12; // rdx
  _DWORD *v13; // r13
  int v14; // eax
  __int64 v15; // rbp
  unsigned int *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // r13
  _DWORD *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  unsigned int v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  _DWORD *v52; // [rsp+10h] [rbp-58h] BYREF
  _DWORD *v53; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_DWORD **)a2;
  v6 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int8)sub_15C5420(*(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL), *(_QWORD *)a2)
    || (unsigned __int8)sub_15C5180(*(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL), (_DWORD)v5, v7, v8, v9, v10) )
  {
    goto LABEL_2;
  }
  v20 = *(_QWORD *)(a1 + 1376);
  if ( !*((_WORD *)v5 + 2) )
  {
    v21 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 24LL);
    if ( v21 )
    {
      if ( *v21 == *(_DWORD *)(v20 + 16) )
      {
        if ( v21[1] == 37 )
        {
          v41 = a4[1];
          v42 = *(_QWORD *)(v41 + 8LL * ***(unsigned int ***)(*(_QWORD *)(a2 + 176) + 64LL));
          v51 = *(_QWORD *)(v41 + 8LL * ***(unsigned int ***)(*(_QWORD *)(a2 + 184) + 64LL));
          v49 = *(_QWORD *)(v41 + 8LL * ***(unsigned int ***)(*(_QWORD *)(a2 + 192) + 64LL));
          v43 = sub_15D1F10(v5);
          v40 = sub_D5A120(a1 + 128, v43, v42, v51, v49);
        }
        else
        {
          if ( v21[1] != 49 )
            goto LABEL_17;
          v40 = sub_D572C0(a1 + 128, *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(*(_QWORD *)(a2 + 176) + 64LL)));
        }
        v5 = (_DWORD *)v40;
LABEL_2:
        result = **(unsigned int ***)(a2 + 64);
        v12 = *result;
        if ( v5 )
        {
          v13 = nullptr;
          v14 = v5[2] + 1;
          v5[2] = v14;
          goto LABEL_4;
        }
        v34 = 2 * v12;
        v35 = (__int64 *)(8 * v12 + a4[1]);
        v36 = *v35;
        if ( !*v35 )
          return result;
        goto LABEL_28;
      }
    }
  }
LABEL_17:
  v22 = sub_15D1F10(v5);
  v23 = *(_DWORD *)(v20 + 16);
  v13 = *(_DWORD **)(v22 + 24);
  if ( v13 )
  {
    if ( v23 == *v13 && v13[1] == 1 )
    {
      sub_D56BF0(&v52, a1 + 128, v5);
      v13 = v52;
      if ( sub_7E4F00(a1) )
      {
        v38 = sub_7E4F00(a1);
        v33 = sub_D572C0(a1 + 128, *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(v38 + 64)));
        goto LABEL_25;
      }
    }
    else
    {
      v13 = nullptr;
    }
  }
  v44 = *(_QWORD *)(a1 + 1376);
  v24 = *(_DWORD **)(sub_15D1F10(v5) + 24);
  if ( v24 && *(_DWORD *)(v44 + 16) == *v24 && v24[1] == 1 )
  {
    v33 = sub_15E1AF0(**(_QWORD **)(a1 + 1376));
  }
  else
  {
    v45 = *(_QWORD *)(a1 + 1376);
    v25 = *(_DWORD **)(sub_15D1F10(v5) + 24);
    if ( !v25 || *(_DWORD *)(v45 + 16) != *v25 || v25[1] )
      goto LABEL_24;
    if ( !v13 )
    {
      sub_D56BF0(&v53, a1 + 128, v5);
      v13 = v53;
    }
    if ( sub_7E4F00(a1) )
    {
      v48 = *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(sub_7E4F00(a1) + 64));
      v39 = sub_15D1F10(v5);
      v33 = sub_D5A120(a1 + 128, v39, v48, 0, 0);
    }
    else
    {
LABEL_24:
      v46 = *(_QWORD *)(a1 + 1376);
      v26 = sub_15D1F10(v5);
      v50 = sub_15C5540(v46, v26, v27, v28, v29, v30);
      v47 = *(_QWORD *)(a1 + 1376);
      v31 = sub_15D1F10(v5);
      v32 = sub_15C5560(v47, v31);
      v33 = sub_15CC950(*(_QWORD *)(a1 + 1376), v50, v32);
    }
  }
LABEL_25:
  v5 = (_DWORD *)v33;
  result = **(unsigned int ***)(a2 + 64);
  v12 = *result;
  if ( v5 )
  {
    v14 = v5[2] + 1;
    v5[2] = v14;
LABEL_4:
    v15 = (unsigned int)v12;
    v5[2] = v14 + 1;
    result = (unsigned int *)a4[1];
    v16 = &result[2 * (unsigned int)v12];
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 && (v18 = *a4, v19 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v19) )
    {
      sub_15D7BC0(v18, v17);
      result = (unsigned int *)a4[1];
      *(_QWORD *)&result[2 * v15] = v5;
    }
    else
    {
      *(_QWORD *)v16 = v5;
    }
    v19 = v5[2]-- == 1;
    if ( v19 )
      result = (unsigned int *)sub_15D7BC0(v6, v5);
    goto LABEL_9;
  }
  v34 = 2 * v12;
  v5 = v13;
  v35 = (__int64 *)(8 * v12 + a4[1]);
  v36 = *v35;
  if ( *v35 )
  {
LABEL_28:
    v37 = *a4;
    v19 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v37, v36);
      result = (unsigned int *)a4[1];
      *(_QWORD *)&result[v34] = 0;
    }
    else
    {
      *v35 = 0;
    }
    v13 = v5;
  }
LABEL_9:
  if ( v13 )
  {
    v19 = v13[2]-- == 1;
    if ( v19 )
      return (unsigned int *)sub_15D7BC0(v6, v13);
  }
  return result;
}

